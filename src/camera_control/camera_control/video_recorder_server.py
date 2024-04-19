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
        self.frame_count = 0
        self.action_goal_active = False


    def execute_callback(self, goal_handle):
        self.get_logger().info("Starting video recording")

        # Video info Setting (retVal)
        self.video_writer = cv2.VideoWriter(goal_handle.request.filename, cv2.VideoWriter_fourcc(*'XVID'), 20.0, (640, 480))

        if not self.video_writer.isOpened():
            self.get_logger().error(f"Failed to open video writer for {goal_handle.request.filename}")
            goal_handle.abort()
            return StartRecording.Result(success=False, message="Failed to start recording")
        
        # 녹화 시작
        self.action_goal_active = True
        goal_handle.succeed()
        return StartRecording.Result(success = True, message = "Recording started")


    def listener_callback(self, goal_handle):
        # 녹화가 시작되었고, video_wrtier가 존재한다면 프레임 저장
        if self.action_goal_active and self.video_writer.isOpened():
            frame = self.cv_bridge.imgmsg_to_cv2(goal_handle, "bgr8")
            self.video_writer.write(frame)

            # Feedback message
            self.frame_count += 1
            feedback_msg = StartRecording.Feedback()
            feedback_msg.frames_recorded = self.frame_count
            
            self.get_logger().info(f"Feedback: {self.frame_count}, Frame written to video file")

        else:
            self.get_logger().warn("Video writer not intialized or closed")

    def on_shutdown(self):
        self.action_goal_active = False
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
