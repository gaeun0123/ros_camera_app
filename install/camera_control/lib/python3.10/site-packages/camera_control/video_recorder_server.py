import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
from camera_msgs.action import StartRecording
from rclpy.action import ActionServer


class VideoRecorderServer(Node):
    def __init__(self):
        super().__init__("video_recorder_server")
        self.action_server = ActionServer(
            self,
            StartRecording,
            'start_recording',
            self.execute_callback
        )

        self.subscription = self.create_subscription(
            Image, "image_raw", self.listener_callback, 10
        )

        self.cv_bridge = CvBridge()
        self.video_writer = None
        self.frame_count = 0
        self.action_goal_active = False
        

    def execute_callback(self, goal_handle):
        self.get_logger().info('Received a goal request')
        self.video_writer = cv2.VideoWriter(
            goal_handle.request.filename, 
            cv2.VideoWriter_fourcc(*'XVID'), 
            20.0, 
            (640, 480)
        )
        
        if not self.video_writer.isOpened():
            self.get_logger().error(f"Failed to open video writer for {goal_handle.request.filename}")
            goal_handle.abort()
            return StartRecording.Result(success=False, message="Failed to start recording")

        self.action_goal_active = True
        while self.action_goal_active:
            rclpy.spin_once(self, timeout_sec=0.1)
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                self.on_shutdown()
                self.action_goal_active = False
                return StartRecording.Result(success=True, message="Recording stopped")


    def listener_callback(self, msg):
        if self.action_goal_active and self.video_writer.isOpened():
            frame = self.cv_bridge.imgmsg_to_cv2(msg, "bgr8")
            self.video_writer.write(frame)
            self.frame_count += 1
            self.get_logger().info(f"Frame {self.frame_count} written to video file")


    def on_shutdown(self):
        if self.video_writer and self.video_writer.isOpened():
            self.video_writer.release()
            self.get_logger().info('Video file closed.')
        self.action_goal_active = False


def main(args=None):
    rclpy.init(args=args)
    node = VideoRecorderServer()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
