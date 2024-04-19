# camera_package using ROS2
🌟 This project is a practice package for proficient use of ROS2 actions and services. <br>
This package allows you to turn on the camera and **start or stop recording**. <br>
**Capture** during recording is also possible.
<br>
## Structure Tree
```
├── camera_control
│   ├── camera_control
│   │   ├── camera_controller.py
│   │   ├── image_capture_server.py
│   │   ├── __init__.py
│   │   ├── service_client.py
│   │   ├── video_recorder_client.py
│   │   └── video_recorder_server.py
│   ├── launch
│   │   └── launch.py
│   ├── param
│   │   └──  config.yaml
│   ├── resource
│   └── test
│
└── camera_msgs
    ├── action
    │   └── StartRecording.action
    ├── msg
    │   └── VideoStream.msg
    └── srv
        └── CaptureImage.srv

```
## Setup
To get started
```
git clone https://github.com/gaeun0123/ros_camera_app.git
```

Install Python requirements
```
# OpenCV CPU Version
pip install opencv-python
pip install opencv-contrib-python
```

## Run examples in ROS2
* ***camera_controller node***
```
  source install/setup.sh
  ros2 run camera_control camera_controller
```
<br>

* ***video_recorder_server node*** (Action)
```
  source install/setup.sh
  ros2 run camera_control video_recorder_server
```
<br>

* ***video_recorder_client node*** (Action)
```
  source install/setup.sh
  ros2 run camera_control video_recorder_client
```
> Stop recording by typing ```stop``` in the console.

<br>

* ***image_capture_server node*** (service)
```
  source install/setup.sh
  ros2 run camera_control image_capture_server
```
<br>

* ***service_client node*** (service)
```
  source install/setup.sh
  ros2 run camera_control service_client
```

* * *
## rqt graph
![rosgraph](https://github.com/gaeun0123/ros_camera_app/assets/102429136/24e38fc6-c07f-4693-a2ff-a0d80c1c27d0)

