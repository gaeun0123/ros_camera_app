import rclpy
from rclpy.node import Node
from std_srvs.srv import Trigger

class ServiceClient(Node):
    def __init__(self):
        super().__init__('service_client')
        self.client = self.create_client(Trigger, 'capture_image')

    def send_request(self):
        if not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().error('Service not available')
            return

        request = Trigger.Request()
        future = self.client.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        response = future.result()
        self.get_logger().info(f'Received response: {response.message}')


def main(args=None):
    rclpy.init(args=args)
    client = ServiceClient()
    client.send_request()
    client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

