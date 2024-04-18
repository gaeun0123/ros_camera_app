import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from camera_msgs.action import StartRecording

class VideoRecorderClient(Node):

    def __init__(self):
        super().__init__('video_recorder_client')
        # 액션 클라이언트 생성
        self._action_client = ActionClient(self, StartRecording, 'start_recording')

    def send_goal(self, filename):
        goal_msg = StartRecording.Goal()
        goal_msg.filename = filename

        # 서버가 사용 가능할 때까지 대기
        self._action_client.wait_for_server()
        
        # 액션 목표(goal) 보내기
        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        
        # 결과 처리
        self._send_goal_future.add_done_callback(self.goal_response_callback)


    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)


    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result: {0}'.format(result.message))
        
        # 노드 종료
        rclpy.shutdown()


    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('Received feedback: {0}%'.format(feedback.frames_recorded))


def main(args=None):
    rclpy.init(args=args)
    client = VideoRecorderClient()
    client.send_goal("output.avi")
    rclpy.spin(client)

if __name__ == '__main__':
    main()
