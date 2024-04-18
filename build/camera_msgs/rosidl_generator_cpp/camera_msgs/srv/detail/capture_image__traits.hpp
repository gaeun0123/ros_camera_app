// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from camera_msgs:srv/CaptureImage.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_MSGS__SRV__DETAIL__CAPTURE_IMAGE__TRAITS_HPP_
#define CAMERA_MSGS__SRV__DETAIL__CAPTURE_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "camera_msgs/srv/detail/capture_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace camera_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CaptureImage_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CaptureImage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CaptureImage_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace camera_msgs

namespace rosidl_generator_traits
{

[[deprecated("use camera_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const camera_msgs::srv::CaptureImage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const camera_msgs::srv::CaptureImage_Request & msg)
{
  return camera_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<camera_msgs::srv::CaptureImage_Request>()
{
  return "camera_msgs::srv::CaptureImage_Request";
}

template<>
inline const char * name<camera_msgs::srv::CaptureImage_Request>()
{
  return "camera_msgs/srv/CaptureImage_Request";
}

template<>
struct has_fixed_size<camera_msgs::srv::CaptureImage_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<camera_msgs::srv::CaptureImage_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<camera_msgs::srv::CaptureImage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace camera_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CaptureImage_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CaptureImage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CaptureImage_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace camera_msgs

namespace rosidl_generator_traits
{

[[deprecated("use camera_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const camera_msgs::srv::CaptureImage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const camera_msgs::srv::CaptureImage_Response & msg)
{
  return camera_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<camera_msgs::srv::CaptureImage_Response>()
{
  return "camera_msgs::srv::CaptureImage_Response";
}

template<>
inline const char * name<camera_msgs::srv::CaptureImage_Response>()
{
  return "camera_msgs/srv/CaptureImage_Response";
}

template<>
struct has_fixed_size<camera_msgs::srv::CaptureImage_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<camera_msgs::srv::CaptureImage_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<camera_msgs::srv::CaptureImage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<camera_msgs::srv::CaptureImage>()
{
  return "camera_msgs::srv::CaptureImage";
}

template<>
inline const char * name<camera_msgs::srv::CaptureImage>()
{
  return "camera_msgs/srv/CaptureImage";
}

template<>
struct has_fixed_size<camera_msgs::srv::CaptureImage>
  : std::integral_constant<
    bool,
    has_fixed_size<camera_msgs::srv::CaptureImage_Request>::value &&
    has_fixed_size<camera_msgs::srv::CaptureImage_Response>::value
  >
{
};

template<>
struct has_bounded_size<camera_msgs::srv::CaptureImage>
  : std::integral_constant<
    bool,
    has_bounded_size<camera_msgs::srv::CaptureImage_Request>::value &&
    has_bounded_size<camera_msgs::srv::CaptureImage_Response>::value
  >
{
};

template<>
struct is_service<camera_msgs::srv::CaptureImage>
  : std::true_type
{
};

template<>
struct is_service_request<camera_msgs::srv::CaptureImage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<camera_msgs::srv::CaptureImage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CAMERA_MSGS__SRV__DETAIL__CAPTURE_IMAGE__TRAITS_HPP_
