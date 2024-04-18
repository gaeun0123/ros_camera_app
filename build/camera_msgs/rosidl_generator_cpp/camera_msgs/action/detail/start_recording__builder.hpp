// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from camera_msgs:action/StartRecording.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_MSGS__ACTION__DETAIL__START_RECORDING__BUILDER_HPP_
#define CAMERA_MSGS__ACTION__DETAIL__START_RECORDING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "camera_msgs/action/detail/start_recording__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace camera_msgs
{

namespace action
{

namespace builder
{

class Init_StartRecording_Goal_filename
{
public:
  Init_StartRecording_Goal_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::camera_msgs::action::StartRecording_Goal filename(::camera_msgs::action::StartRecording_Goal::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_msgs::action::StartRecording_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_msgs::action::StartRecording_Goal>()
{
  return camera_msgs::action::builder::Init_StartRecording_Goal_filename();
}

}  // namespace camera_msgs


namespace camera_msgs
{

namespace action
{

namespace builder
{

class Init_StartRecording_Result_message
{
public:
  explicit Init_StartRecording_Result_message(::camera_msgs::action::StartRecording_Result & msg)
  : msg_(msg)
  {}
  ::camera_msgs::action::StartRecording_Result message(::camera_msgs::action::StartRecording_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_msgs::action::StartRecording_Result msg_;
};

class Init_StartRecording_Result_success
{
public:
  Init_StartRecording_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartRecording_Result_message success(::camera_msgs::action::StartRecording_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_StartRecording_Result_message(msg_);
  }

private:
  ::camera_msgs::action::StartRecording_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_msgs::action::StartRecording_Result>()
{
  return camera_msgs::action::builder::Init_StartRecording_Result_success();
}

}  // namespace camera_msgs


namespace camera_msgs
{

namespace action
{

namespace builder
{

class Init_StartRecording_Feedback_frames_recorded
{
public:
  Init_StartRecording_Feedback_frames_recorded()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::camera_msgs::action::StartRecording_Feedback frames_recorded(::camera_msgs::action::StartRecording_Feedback::_frames_recorded_type arg)
  {
    msg_.frames_recorded = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_msgs::action::StartRecording_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_msgs::action::StartRecording_Feedback>()
{
  return camera_msgs::action::builder::Init_StartRecording_Feedback_frames_recorded();
}

}  // namespace camera_msgs


namespace camera_msgs
{

namespace action
{

namespace builder
{

class Init_StartRecording_SendGoal_Request_goal
{
public:
  explicit Init_StartRecording_SendGoal_Request_goal(::camera_msgs::action::StartRecording_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::camera_msgs::action::StartRecording_SendGoal_Request goal(::camera_msgs::action::StartRecording_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_msgs::action::StartRecording_SendGoal_Request msg_;
};

class Init_StartRecording_SendGoal_Request_goal_id
{
public:
  Init_StartRecording_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartRecording_SendGoal_Request_goal goal_id(::camera_msgs::action::StartRecording_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_StartRecording_SendGoal_Request_goal(msg_);
  }

private:
  ::camera_msgs::action::StartRecording_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_msgs::action::StartRecording_SendGoal_Request>()
{
  return camera_msgs::action::builder::Init_StartRecording_SendGoal_Request_goal_id();
}

}  // namespace camera_msgs


namespace camera_msgs
{

namespace action
{

namespace builder
{

class Init_StartRecording_SendGoal_Response_stamp
{
public:
  explicit Init_StartRecording_SendGoal_Response_stamp(::camera_msgs::action::StartRecording_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::camera_msgs::action::StartRecording_SendGoal_Response stamp(::camera_msgs::action::StartRecording_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_msgs::action::StartRecording_SendGoal_Response msg_;
};

class Init_StartRecording_SendGoal_Response_accepted
{
public:
  Init_StartRecording_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartRecording_SendGoal_Response_stamp accepted(::camera_msgs::action::StartRecording_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_StartRecording_SendGoal_Response_stamp(msg_);
  }

private:
  ::camera_msgs::action::StartRecording_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_msgs::action::StartRecording_SendGoal_Response>()
{
  return camera_msgs::action::builder::Init_StartRecording_SendGoal_Response_accepted();
}

}  // namespace camera_msgs


namespace camera_msgs
{

namespace action
{

namespace builder
{

class Init_StartRecording_GetResult_Request_goal_id
{
public:
  Init_StartRecording_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::camera_msgs::action::StartRecording_GetResult_Request goal_id(::camera_msgs::action::StartRecording_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_msgs::action::StartRecording_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_msgs::action::StartRecording_GetResult_Request>()
{
  return camera_msgs::action::builder::Init_StartRecording_GetResult_Request_goal_id();
}

}  // namespace camera_msgs


namespace camera_msgs
{

namespace action
{

namespace builder
{

class Init_StartRecording_GetResult_Response_result
{
public:
  explicit Init_StartRecording_GetResult_Response_result(::camera_msgs::action::StartRecording_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::camera_msgs::action::StartRecording_GetResult_Response result(::camera_msgs::action::StartRecording_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_msgs::action::StartRecording_GetResult_Response msg_;
};

class Init_StartRecording_GetResult_Response_status
{
public:
  Init_StartRecording_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartRecording_GetResult_Response_result status(::camera_msgs::action::StartRecording_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_StartRecording_GetResult_Response_result(msg_);
  }

private:
  ::camera_msgs::action::StartRecording_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_msgs::action::StartRecording_GetResult_Response>()
{
  return camera_msgs::action::builder::Init_StartRecording_GetResult_Response_status();
}

}  // namespace camera_msgs


namespace camera_msgs
{

namespace action
{

namespace builder
{

class Init_StartRecording_FeedbackMessage_feedback
{
public:
  explicit Init_StartRecording_FeedbackMessage_feedback(::camera_msgs::action::StartRecording_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::camera_msgs::action::StartRecording_FeedbackMessage feedback(::camera_msgs::action::StartRecording_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_msgs::action::StartRecording_FeedbackMessage msg_;
};

class Init_StartRecording_FeedbackMessage_goal_id
{
public:
  Init_StartRecording_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartRecording_FeedbackMessage_feedback goal_id(::camera_msgs::action::StartRecording_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_StartRecording_FeedbackMessage_feedback(msg_);
  }

private:
  ::camera_msgs::action::StartRecording_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_msgs::action::StartRecording_FeedbackMessage>()
{
  return camera_msgs::action::builder::Init_StartRecording_FeedbackMessage_goal_id();
}

}  // namespace camera_msgs

#endif  // CAMERA_MSGS__ACTION__DETAIL__START_RECORDING__BUILDER_HPP_
