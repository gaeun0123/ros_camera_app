// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from camera_msgs:srv/CaptureImage.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_MSGS__SRV__DETAIL__CAPTURE_IMAGE__BUILDER_HPP_
#define CAMERA_MSGS__SRV__DETAIL__CAPTURE_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "camera_msgs/srv/detail/capture_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace camera_msgs
{

namespace srv
{

namespace builder
{

class Init_CaptureImage_Request_frame_id
{
public:
  Init_CaptureImage_Request_frame_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::camera_msgs::srv::CaptureImage_Request frame_id(::camera_msgs::srv::CaptureImage_Request::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_msgs::srv::CaptureImage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_msgs::srv::CaptureImage_Request>()
{
  return camera_msgs::srv::builder::Init_CaptureImage_Request_frame_id();
}

}  // namespace camera_msgs


namespace camera_msgs
{

namespace srv
{

namespace builder
{

class Init_CaptureImage_Response_message
{
public:
  explicit Init_CaptureImage_Response_message(::camera_msgs::srv::CaptureImage_Response & msg)
  : msg_(msg)
  {}
  ::camera_msgs::srv::CaptureImage_Response message(::camera_msgs::srv::CaptureImage_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_msgs::srv::CaptureImage_Response msg_;
};

class Init_CaptureImage_Response_success
{
public:
  Init_CaptureImage_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureImage_Response_message success(::camera_msgs::srv::CaptureImage_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CaptureImage_Response_message(msg_);
  }

private:
  ::camera_msgs::srv::CaptureImage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_msgs::srv::CaptureImage_Response>()
{
  return camera_msgs::srv::builder::Init_CaptureImage_Response_success();
}

}  // namespace camera_msgs

#endif  // CAMERA_MSGS__SRV__DETAIL__CAPTURE_IMAGE__BUILDER_HPP_
