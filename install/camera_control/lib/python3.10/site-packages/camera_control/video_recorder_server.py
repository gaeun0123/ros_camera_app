# 비디오 녹화 액션 서버 Node

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
from camera_msgs.action import StartRecording


class VideoRecorderServer(Node):
    def __init__(self):
        super().__init__("video_recorder_server")


        # Action server 생성
        self.action_server = ActionServer(
            self,
            StartRecording,
            'start_recording',
            self.execute_callback
        )


        # Raw image 구독
        self.subscription = self.create_subscription(
            Image, "image_raw", self.listener_callback, 10
        )


        self.cv_bridge = CvBridge()
        self.video_writer = None


    def execute_callback(self, goal_handle):
        self.get_logger().info("Starting video recording")

        # Video info Setting (retVal)
        self.video_writer = cv2.VideoWriter(goal_handle.request.filename, cv2.VideoWriter_fourcc(*'XVID'), 20.0, (640, 480))

        if not self.video_writer.isOpened():
            self.get_logger().error(f"Failed to open video writer for {goal_handle.request.filename}")
            goal_handle.abort()
            return StartRecording.Result(success=False, message="Failed to start recording")
        
        else:
            goal_handle.succeed()
            return StartRecording.Result(success = True, message = "Recording started")


    def listener_callback(self, goal_handle):
        if self.video_writer.isOpened():
            frame = self.cv_bridge.imgmsg_to_cv2(goal_handle, "bgr8")
            self.video_writer.write(frame)

            self.get_logger().info("Frame written to video file")

        else:
            self.get_logger().warn("Video writer not intialized or closed")

    def on_shutdown(self):
        self.video_writer.release()
        self.get_logger().info('Video file closed.')


def main(args=None):
    rclpy.init(args=args)
    node = VideoRecorderServer()
    rclpy.spin(node)
    rclpy.on_shutdown(node.on_shutdown)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
