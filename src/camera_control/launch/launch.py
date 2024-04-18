import os
from ament_index_python import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
	param_dir = LaunchConfiguration( # launch파일에서 사용할 변수 정의
		'param_dir',
		default=os.path.join(
			get_package_share_directory('camera_control'),
			'param',
			'size.yaml')
		)


	return LaunchDescription(
		[
			DeclareLaunchArgument(
			'param_dir',
			default_value=param_dir
			),

			Node(
				package='camera_control',
				executable='camera_controller',
				name='camera_controller',
				parameters=[param_dir],
				output='screen'),

			Node(
				package='camera_control',
				executable='video_recorder_client',
				name='action_client',
				parameters=[param_dir],
				output='screen'),

			Node(
				package='camera_control',
				executable='video_recorder_server',
				name='action_server',
				parameters=[param_dir],
				output='screen'),
		]
	)