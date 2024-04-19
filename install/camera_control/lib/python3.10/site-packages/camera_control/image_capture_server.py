# 이미지 캡처 노드
import rclpy
from rclpy.node import Node
from rclpy.service import Service
from sensor_msgs.msg import Image
from std_srvs.srv import Trigger

from cv_bridge import CvBridge
import cv2

class ImageCapture(Node):
    def __init__(self):
        super().__init__('image_capture_server')
        self.subscriber = self.create_subscription(Image, 'image_raw', self.image_callback, 10)
        self.capture_service = self.create_service(Trigger, 'capture_image', self.capture_image_callback)
        self.last_image = None

        self.cv_bridge = CvBridge()


    def image_callback(self, msg):
        self.last_image = msg  # 이미지를 계속 업데이트


    def capture_image_callback(self, request, response):
        if self.last_image:
            self.save_image(self.last_image)
            response.success = True
            response.message = "Success image save"
        else:
            response.success = False
            response.message = "No possible capture image"
        return response


    def save_image(self, img_msg):
        # OpenCV 형식으로 변환
        self.last_image = self.cv_bridge.imgmsg_to_cv2(img_msg, "bgr8")

        # 파일로 저장
        cv2.imwrite('captured_image.jpg', self.last_image)


def main(args=None):
    rclpy.init(args=args)
    node = ImageCapture()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()