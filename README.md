# camera_package using ROS2
🌟 This project is a practice package for proficient use of ROS2 actions and services. <br>
This package allows you to turn on the camera and **start or stop recording**. <br>
**Capture** during recording is also possible.
<br>
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
<br>

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
<br>

## Run examples in ROS2
* ***Activate camera_controller, video & capture server***
```
    source install/setup.sh
    ros2 launch camera_control camera.launch.py
```

<br>

* ***Video Recorder*** (Action)
```
  ros2 run camera_control video_recorder_client
```
> Stop recording by typing ```stop``` in the console.

<br>

* ***Image Capture*** (service)
```
  ros2 run camera_control service_client
```

* * *
## rqt graph
![rosgraph](https://github.com/gaeun0123/ros_camera_app/assets/102429136/24e38fc6-c07f-4693-a2ff-a0d80c1c27d0)

<br>

## References
* [ROS 2 Documentation](https://docs.ros.org/)
