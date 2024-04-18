// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from camera_msgs:action/StartRecording.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_MSGS__ACTION__DETAIL__START_RECORDING__STRUCT_H_
#define CAMERA_MSGS__ACTION__DETAIL__START_RECORDING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'filename'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/StartRecording in the package camera_msgs.
typedef struct camera_msgs__action__StartRecording_Goal
{
  rosidl_runtime_c__String filename;
} camera_msgs__action__StartRecording_Goal;

// Struct for a sequence of camera_msgs__action__StartRecording_Goal.
typedef struct camera_msgs__action__StartRecording_Goal__Sequence
{
  camera_msgs__action__StartRecording_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_msgs__action__StartRecording_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/StartRecording in the package camera_msgs.
typedef struct camera_msgs__action__StartRecording_Result
{
  bool success;
  rosidl_runtime_c__String message;
} camera_msgs__action__StartRecording_Result;

// Struct for a sequence of camera_msgs__action__StartRecording_Result.
typedef struct camera_msgs__action__StartRecording_Result__Sequence
{
  camera_msgs__action__StartRecording_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_msgs__action__StartRecording_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/StartRecording in the package camera_msgs.
typedef struct camera_msgs__action__StartRecording_Feedback
{
  int32_t frames_recorded;
} camera_msgs__action__StartRecording_Feedback;

// Struct for a sequence of camera_msgs__action__StartRecording_Feedback.
typedef struct camera_msgs__action__StartRecording_Feedback__Sequence
{
  camera_msgs__action__StartRecording_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_msgs__action__StartRecording_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "camera_msgs/action/detail/start_recording__struct.h"

/// Struct defined in action/StartRecording in the package camera_msgs.
typedef struct camera_msgs__action__StartRecording_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  camera_msgs__action__StartRecording_Goal goal;
} camera_msgs__action__StartRecording_SendGoal_Request;

// Struct for a sequence of camera_msgs__action__StartRecording_SendGoal_Request.
typedef struct camera_msgs__action__StartRecording_SendGoal_Request__Sequence
{
  camera_msgs__action__StartRecording_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_msgs__action__StartRecording_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/StartRecording in the package camera_msgs.
typedef struct camera_msgs__action__StartRecording_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} camera_msgs__action__StartRecording_SendGoal_Response;

// Struct for a sequence of camera_msgs__action__StartRecording_SendGoal_Response.
typedef struct camera_msgs__action__StartRecording_SendGoal_Response__Sequence
{
  camera_msgs__action__StartRecording_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_msgs__action__StartRecording_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/StartRecording in the package camera_msgs.
typedef struct camera_msgs__action__StartRecording_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} camera_msgs__action__StartRecording_GetResult_Request;

// Struct for a sequence of camera_msgs__action__StartRecording_GetResult_Request.
typedef struct camera_msgs__action__StartRecording_GetResult_Request__Sequence
{
  camera_msgs__action__StartRecording_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_msgs__action__StartRecording_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "camera_msgs/action/detail/start_recording__struct.h"

/// Struct defined in action/StartRecording in the package camera_msgs.
typedef struct camera_msgs__action__StartRecording_GetResult_Response
{
  int8_t status;
  camera_msgs__action__StartRecording_Result result;
} camera_msgs__action__StartRecording_GetResult_Response;

// Struct for a sequence of camera_msgs__action__StartRecording_GetResult_Response.
typedef struct camera_msgs__action__StartRecording_GetResult_Response__Sequence
{
  camera_msgs__action__StartRecording_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_msgs__action__StartRecording_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "camera_msgs/action/detail/start_recording__struct.h"

/// Struct defined in action/StartRecording in the package camera_msgs.
typedef struct camera_msgs__action__StartRecording_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  camera_msgs__action__StartRecording_Feedback feedback;
} camera_msgs__action__StartRecording_FeedbackMessage;

// Struct for a sequence of camera_msgs__action__StartRecording_FeedbackMessage.
typedef struct camera_msgs__action__StartRecording_FeedbackMessage__Sequence
{
  camera_msgs__action__StartRecording_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_msgs__action__StartRecording_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_MSGS__ACTION__DETAIL__START_RECORDING__STRUCT_H_
