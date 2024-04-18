// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from camera_msgs:srv/CaptureImage.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_MSGS__SRV__DETAIL__CAPTURE_IMAGE__STRUCT_H_
#define CAMERA_MSGS__SRV__DETAIL__CAPTURE_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CaptureImage in the package camera_msgs.
typedef struct camera_msgs__srv__CaptureImage_Request
{
  /// 저장할 프레임의 ID
  int64_t frame_id;
} camera_msgs__srv__CaptureImage_Request;

// Struct for a sequence of camera_msgs__srv__CaptureImage_Request.
typedef struct camera_msgs__srv__CaptureImage_Request__Sequence
{
  camera_msgs__srv__CaptureImage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_msgs__srv__CaptureImage_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CaptureImage in the package camera_msgs.
typedef struct camera_msgs__srv__CaptureImage_Response
{
  /// 캡처 성공 여부
  bool success;
  /// 상태 메시지
  rosidl_runtime_c__String message;
} camera_msgs__srv__CaptureImage_Response;

// Struct for a sequence of camera_msgs__srv__CaptureImage_Response.
typedef struct camera_msgs__srv__CaptureImage_Response__Sequence
{
  camera_msgs__srv__CaptureImage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_msgs__srv__CaptureImage_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_MSGS__SRV__DETAIL__CAPTURE_IMAGE__STRUCT_H_
