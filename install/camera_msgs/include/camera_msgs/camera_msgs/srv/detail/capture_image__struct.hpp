// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from camera_msgs:srv/CaptureImage.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_MSGS__SRV__DETAIL__CAPTURE_IMAGE__STRUCT_HPP_
#define CAMERA_MSGS__SRV__DETAIL__CAPTURE_IMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__camera_msgs__srv__CaptureImage_Request __attribute__((deprecated))
#else
# define DEPRECATED__camera_msgs__srv__CaptureImage_Request __declspec(deprecated)
#endif

namespace camera_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CaptureImage_Request_
{
  using Type = CaptureImage_Request_<ContainerAllocator>;

  explicit CaptureImage_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = 0ll;
    }
  }

  explicit CaptureImage_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = 0ll;
    }
  }

  // field types and members
  using _frame_id_type =
    int64_t;
  _frame_id_type frame_id;

  // setters for named parameter idiom
  Type & set__frame_id(
    const int64_t & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_msgs::srv::CaptureImage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_msgs::srv::CaptureImage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_msgs::srv::CaptureImage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_msgs::srv::CaptureImage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_msgs::srv::CaptureImage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_msgs::srv::CaptureImage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_msgs::srv::CaptureImage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_msgs::srv::CaptureImage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_msgs::srv::CaptureImage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_msgs::srv::CaptureImage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_msgs__srv__CaptureImage_Request
    std::shared_ptr<camera_msgs::srv::CaptureImage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_msgs__srv__CaptureImage_Request
    std::shared_ptr<camera_msgs::srv::CaptureImage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CaptureImage_Request_ & other) const
  {
    if (this->frame_id != other.frame_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const CaptureImage_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CaptureImage_Request_

// alias to use template instance with default allocator
using CaptureImage_Request =
  camera_msgs::srv::CaptureImage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace camera_msgs


#ifndef _WIN32
# define DEPRECATED__camera_msgs__srv__CaptureImage_Response __attribute__((deprecated))
#else
# define DEPRECATED__camera_msgs__srv__CaptureImage_Response __declspec(deprecated)
#endif

namespace camera_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CaptureImage_Response_
{
  using Type = CaptureImage_Response_<ContainerAllocator>;

  explicit CaptureImage_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit CaptureImage_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_msgs::srv::CaptureImage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_msgs::srv::CaptureImage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_msgs::srv::CaptureImage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_msgs::srv::CaptureImage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_msgs::srv::CaptureImage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_msgs::srv::CaptureImage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_msgs::srv::CaptureImage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_msgs::srv::CaptureImage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_msgs::srv::CaptureImage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_msgs::srv::CaptureImage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_msgs__srv__CaptureImage_Response
    std::shared_ptr<camera_msgs::srv::CaptureImage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_msgs__srv__CaptureImage_Response
    std::shared_ptr<camera_msgs::srv::CaptureImage_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CaptureImage_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const CaptureImage_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CaptureImage_Response_

// alias to use template instance with default allocator
using CaptureImage_Response =
  camera_msgs::srv::CaptureImage_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace camera_msgs

namespace camera_msgs
{

namespace srv
{

struct CaptureImage
{
  using Request = camera_msgs::srv::CaptureImage_Request;
  using Response = camera_msgs::srv::CaptureImage_Response;
};

}  // namespace srv

}  // namespace camera_msgs

#endif  // CAMERA_MSGS__SRV__DETAIL__CAPTURE_IMAGE__STRUCT_HPP_
