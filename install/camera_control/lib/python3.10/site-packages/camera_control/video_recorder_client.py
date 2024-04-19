import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from camera_msgs.action import StartRecording

class VideoRecorderClient(Node):

    def __init__(self):
        super().__init__('video_recorder_client')
        # 액션 클라이언트 생성
        self.action_client = ActionClient(self, StartRecording, 'start_recording')
        self.goal_handle = None

        
    def send_goal(self, filename):
        goal_msg = StartRecording.Goal()
        goal_msg.filename = filename

        # 서버가 사용 가능할 때까지 대기
        self.action_client.wait_for_server()
        
        # 액션 목표(goal) 보내기
        self.send_goal_future = self.action_client.send_goal_async(goal_msg)
        
        # 결과 처리
        self.send_goal_future.add_done_callback(self.goal_response_callback)


    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Request failed!')
            return

        self.get_logger().info('Request success!')

        self.goal_handle = goal_handle


    # 사용자의 입력을 받으면 녹화 종료
    def cancel_goal(self):
        if self.goal_handle:
            self.goal_handle.cancel_goal_async()


def main(args=None):
    rclpy.init(args=args)
    client = VideoRecorderClient()
    client.send_goal("video.avi")
    
    try:
        # 녹화 중지 입력 받기
        while True:
            input_string = input("녹화 중지 : stop 입력\n")
            if input_string == 'stop':
                client.cancel_goal()
                break
    except KeyboardInterrupt:
        pass

    client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
