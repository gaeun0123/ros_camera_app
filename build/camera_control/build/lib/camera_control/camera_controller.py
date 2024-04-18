# 카메라 제어 Node

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2


class CameraController(Node):

    def __init__(self):
        super().__init__("camera_controller")

        self.publisher = self.create_publisher(Image, "/image_raw", 10)

        self.camera_setting()
        self.start_camera()

        self.size_parameter()


    def camera_setting(self):
        self.cap = cv2.VideoCapture(0)
        self.cv_bridge = CvBridge()


    def start_camera(self):
        self.timer = self.create_timer(0.1, self.timer_callback)


    def size_parameter(self):
        self.declare_parameter('width', 300)
        self.width = self.get_parameter('width').value
        self.declare_parameter('length', 200)
        self.length = self.get_parameter('length').value
        output_msg = "Video Width : " + str(self.width) + "\n\r"
        output_msg = output_msg + "Video Length : " + str(self.length)
        # self.get_logger().info(output_msg)


    def timer_callback(self):
        ret, frame = self.cap.read()

        if ret:
            img_msg = self.cv_bridge.cv2_to_imgmsg(frame, "bgr8")
            self.publisher.publish(img_msg)


def main():
    rclpy.init()
    node = CameraController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
