// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from camera_msgs:action/StartRecording.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_MSGS__ACTION__DETAIL__START_RECORDING__FUNCTIONS_H_
#define CAMERA_MSGS__ACTION__DETAIL__START_RECORDING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "camera_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "camera_msgs/action/detail/start_recording__struct.h"

/// Initialize action/StartRecording message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * camera_msgs__action__StartRecording_Goal
 * )) before or use
 * camera_msgs__action__StartRecording_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_Goal__init(camera_msgs__action__StartRecording_Goal * msg);

/// Finalize action/StartRecording message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_Goal__fini(camera_msgs__action__StartRecording_Goal * msg);

/// Create action/StartRecording message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * camera_msgs__action__StartRecording_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
camera_msgs__action__StartRecording_Goal *
camera_msgs__action__StartRecording_Goal__create();

/// Destroy action/StartRecording message.
/**
 * It calls
 * camera_msgs__action__StartRecording_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_Goal__destroy(camera_msgs__action__StartRecording_Goal * msg);

/// Check for action/StartRecording message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_Goal__are_equal(const camera_msgs__action__StartRecording_Goal * lhs, const camera_msgs__action__StartRecording_Goal * rhs);

/// Copy a action/StartRecording message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_Goal__copy(
  const camera_msgs__action__StartRecording_Goal * input,
  camera_msgs__action__StartRecording_Goal * output);

/// Initialize array of action/StartRecording messages.
/**
 * It allocates the memory for the number of elements and calls
 * camera_msgs__action__StartRecording_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_Goal__Sequence__init(camera_msgs__action__StartRecording_Goal__Sequence * array, size_t size);

/// Finalize array of action/StartRecording messages.
/**
 * It calls
 * camera_msgs__action__StartRecording_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_Goal__Sequence__fini(camera_msgs__action__StartRecording_Goal__Sequence * array);

/// Create array of action/StartRecording messages.
/**
 * It allocates the memory for the array and calls
 * camera_msgs__action__StartRecording_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
camera_msgs__action__StartRecording_Goal__Sequence *
camera_msgs__action__StartRecording_Goal__Sequence__create(size_t size);

/// Destroy array of action/StartRecording messages.
/**
 * It calls
 * camera_msgs__action__StartRecording_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_Goal__Sequence__destroy(camera_msgs__action__StartRecording_Goal__Sequence * array);

/// Check for action/StartRecording message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_Goal__Sequence__are_equal(const camera_msgs__action__StartRecording_Goal__Sequence * lhs, const camera_msgs__action__StartRecording_Goal__Sequence * rhs);

/// Copy an array of action/StartRecording messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_Goal__Sequence__copy(
  const camera_msgs__action__StartRecording_Goal__Sequence * input,
  camera_msgs__action__StartRecording_Goal__Sequence * output);

/// Initialize action/StartRecording message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * camera_msgs__action__StartRecording_Result
 * )) before or use
 * camera_msgs__action__StartRecording_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_Result__init(camera_msgs__action__StartRecording_Result * msg);

/// Finalize action/StartRecording message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_Result__fini(camera_msgs__action__StartRecording_Result * msg);

/// Create action/StartRecording message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * camera_msgs__action__StartRecording_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
camera_msgs__action__StartRecording_Result *
camera_msgs__action__StartRecording_Result__create();

/// Destroy action/StartRecording message.
/**
 * It calls
 * camera_msgs__action__StartRecording_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_Result__destroy(camera_msgs__action__StartRecording_Result * msg);

/// Check for action/StartRecording message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_Result__are_equal(const camera_msgs__action__StartRecording_Result * lhs, const camera_msgs__action__StartRecording_Result * rhs);

/// Copy a action/StartRecording message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_Result__copy(
  const camera_msgs__action__StartRecording_Result * input,
  camera_msgs__action__StartRecording_Result * output);

/// Initialize array of action/StartRecording messages.
/**
 * It allocates the memory for the number of elements and calls
 * camera_msgs__action__StartRecording_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_Result__Sequence__init(camera_msgs__action__StartRecording_Result__Sequence * array, size_t size);

/// Finalize array of action/StartRecording messages.
/**
 * It calls
 * camera_msgs__action__StartRecording_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_Result__Sequence__fini(camera_msgs__action__StartRecording_Result__Sequence * array);

/// Create array of action/StartRecording messages.
/**
 * It allocates the memory for the array and calls
 * camera_msgs__action__StartRecording_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
camera_msgs__action__StartRecording_Result__Sequence *
camera_msgs__action__StartRecording_Result__Sequence__create(size_t size);

/// Destroy array of action/StartRecording messages.
/**
 * It calls
 * camera_msgs__action__StartRecording_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_Result__Sequence__destroy(camera_msgs__action__StartRecording_Result__Sequence * array);

/// Check for action/StartRecording message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_Result__Sequence__are_equal(const camera_msgs__action__StartRecording_Result__Sequence * lhs, const camera_msgs__action__StartRecording_Result__Sequence * rhs);

/// Copy an array of action/StartRecording messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_Result__Sequence__copy(
  const camera_msgs__action__StartRecording_Result__Sequence * input,
  camera_msgs__action__StartRecording_Result__Sequence * output);

/// Initialize action/StartRecording message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * camera_msgs__action__StartRecording_Feedback
 * )) before or use
 * camera_msgs__action__StartRecording_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_Feedback__init(camera_msgs__action__StartRecording_Feedback * msg);

/// Finalize action/StartRecording message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_Feedback__fini(camera_msgs__action__StartRecording_Feedback * msg);

/// Create action/StartRecording message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * camera_msgs__action__StartRecording_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
camera_msgs__action__StartRecording_Feedback *
camera_msgs__action__StartRecording_Feedback__create();

/// Destroy action/StartRecording message.
/**
 * It calls
 * camera_msgs__action__StartRecording_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_Feedback__destroy(camera_msgs__action__StartRecording_Feedback * msg);

/// Check for action/StartRecording message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_Feedback__are_equal(const camera_msgs__action__StartRecording_Feedback * lhs, const camera_msgs__action__StartRecording_Feedback * rhs);

/// Copy a action/StartRecording message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_Feedback__copy(
  const camera_msgs__action__StartRecording_Feedback * input,
  camera_msgs__action__StartRecording_Feedback * output);

/// Initialize array of action/StartRecording messages.
/**
 * It allocates the memory for the number of elements and calls
 * camera_msgs__action__StartRecording_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_Feedback__Sequence__init(camera_msgs__action__StartRecording_Feedback__Sequence * array, size_t size);

/// Finalize array of action/StartRecording messages.
/**
 * It calls
 * camera_msgs__action__StartRecording_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_Feedback__Sequence__fini(camera_msgs__action__StartRecording_Feedback__Sequence * array);

/// Create array of action/StartRecording messages.
/**
 * It allocates the memory for the array and calls
 * camera_msgs__action__StartRecording_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
camera_msgs__action__StartRecording_Feedback__Sequence *
camera_msgs__action__StartRecording_Feedback__Sequence__create(size_t size);

/// Destroy array of action/StartRecording messages.
/**
 * It calls
 * camera_msgs__action__StartRecording_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_Feedback__Sequence__destroy(camera_msgs__action__StartRecording_Feedback__Sequence * array);

/// Check for action/StartRecording message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_Feedback__Sequence__are_equal(const camera_msgs__action__StartRecording_Feedback__Sequence * lhs, const camera_msgs__action__StartRecording_Feedback__Sequence * rhs);

/// Copy an array of action/StartRecording messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_Feedback__Sequence__copy(
  const camera_msgs__action__StartRecording_Feedback__Sequence * input,
  camera_msgs__action__StartRecording_Feedback__Sequence * output);

/// Initialize action/StartRecording message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * camera_msgs__action__StartRecording_SendGoal_Request
 * )) before or use
 * camera_msgs__action__StartRecording_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_SendGoal_Request__init(camera_msgs__action__StartRecording_SendGoal_Request * msg);

/// Finalize action/StartRecording message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_SendGoal_Request__fini(camera_msgs__action__StartRecording_SendGoal_Request * msg);

/// Create action/StartRecording message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * camera_msgs__action__StartRecording_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
camera_msgs__action__StartRecording_SendGoal_Request *
camera_msgs__action__StartRecording_SendGoal_Request__create();

/// Destroy action/StartRecording message.
/**
 * It calls
 * camera_msgs__action__StartRecording_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_SendGoal_Request__destroy(camera_msgs__action__StartRecording_SendGoal_Request * msg);

/// Check for action/StartRecording message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_SendGoal_Request__are_equal(const camera_msgs__action__StartRecording_SendGoal_Request * lhs, const camera_msgs__action__StartRecording_SendGoal_Request * rhs);

/// Copy a action/StartRecording message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_SendGoal_Request__copy(
  const camera_msgs__action__StartRecording_SendGoal_Request * input,
  camera_msgs__action__StartRecording_SendGoal_Request * output);

/// Initialize array of action/StartRecording messages.
/**
 * It allocates the memory for the number of elements and calls
 * camera_msgs__action__StartRecording_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_SendGoal_Request__Sequence__init(camera_msgs__action__StartRecording_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/StartRecording messages.
/**
 * It calls
 * camera_msgs__action__StartRecording_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_SendGoal_Request__Sequence__fini(camera_msgs__action__StartRecording_SendGoal_Request__Sequence * array);

/// Create array of action/StartRecording messages.
/**
 * It allocates the memory for the array and calls
 * camera_msgs__action__StartRecording_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
camera_msgs__action__StartRecording_SendGoal_Request__Sequence *
camera_msgs__action__StartRecording_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/StartRecording messages.
/**
 * It calls
 * camera_msgs__action__StartRecording_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_SendGoal_Request__Sequence__destroy(camera_msgs__action__StartRecording_SendGoal_Request__Sequence * array);

/// Check for action/StartRecording message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_SendGoal_Request__Sequence__are_equal(const camera_msgs__action__StartRecording_SendGoal_Request__Sequence * lhs, const camera_msgs__action__StartRecording_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/StartRecording messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_SendGoal_Request__Sequence__copy(
  const camera_msgs__action__StartRecording_SendGoal_Request__Sequence * input,
  camera_msgs__action__StartRecording_SendGoal_Request__Sequence * output);

/// Initialize action/StartRecording message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * camera_msgs__action__StartRecording_SendGoal_Response
 * )) before or use
 * camera_msgs__action__StartRecording_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_SendGoal_Response__init(camera_msgs__action__StartRecording_SendGoal_Response * msg);

/// Finalize action/StartRecording message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_SendGoal_Response__fini(camera_msgs__action__StartRecording_SendGoal_Response * msg);

/// Create action/StartRecording message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * camera_msgs__action__StartRecording_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
camera_msgs__action__StartRecording_SendGoal_Response *
camera_msgs__action__StartRecording_SendGoal_Response__create();

/// Destroy action/StartRecording message.
/**
 * It calls
 * camera_msgs__action__StartRecording_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_SendGoal_Response__destroy(camera_msgs__action__StartRecording_SendGoal_Response * msg);

/// Check for action/StartRecording message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_SendGoal_Response__are_equal(const camera_msgs__action__StartRecording_SendGoal_Response * lhs, const camera_msgs__action__StartRecording_SendGoal_Response * rhs);

/// Copy a action/StartRecording message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_SendGoal_Response__copy(
  const camera_msgs__action__StartRecording_SendGoal_Response * input,
  camera_msgs__action__StartRecording_SendGoal_Response * output);

/// Initialize array of action/StartRecording messages.
/**
 * It allocates the memory for the number of elements and calls
 * camera_msgs__action__StartRecording_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_SendGoal_Response__Sequence__init(camera_msgs__action__StartRecording_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/StartRecording messages.
/**
 * It calls
 * camera_msgs__action__StartRecording_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_SendGoal_Response__Sequence__fini(camera_msgs__action__StartRecording_SendGoal_Response__Sequence * array);

/// Create array of action/StartRecording messages.
/**
 * It allocates the memory for the array and calls
 * camera_msgs__action__StartRecording_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
camera_msgs__action__StartRecording_SendGoal_Response__Sequence *
camera_msgs__action__StartRecording_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/StartRecording messages.
/**
 * It calls
 * camera_msgs__action__StartRecording_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_SendGoal_Response__Sequence__destroy(camera_msgs__action__StartRecording_SendGoal_Response__Sequence * array);

/// Check for action/StartRecording message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_SendGoal_Response__Sequence__are_equal(const camera_msgs__action__StartRecording_SendGoal_Response__Sequence * lhs, const camera_msgs__action__StartRecording_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/StartRecording messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_SendGoal_Response__Sequence__copy(
  const camera_msgs__action__StartRecording_SendGoal_Response__Sequence * input,
  camera_msgs__action__StartRecording_SendGoal_Response__Sequence * output);

/// Initialize action/StartRecording message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * camera_msgs__action__StartRecording_GetResult_Request
 * )) before or use
 * camera_msgs__action__StartRecording_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_GetResult_Request__init(camera_msgs__action__StartRecording_GetResult_Request * msg);

/// Finalize action/StartRecording message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_GetResult_Request__fini(camera_msgs__action__StartRecording_GetResult_Request * msg);

/// Create action/StartRecording message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * camera_msgs__action__StartRecording_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
camera_msgs__action__StartRecording_GetResult_Request *
camera_msgs__action__StartRecording_GetResult_Request__create();

/// Destroy action/StartRecording message.
/**
 * It calls
 * camera_msgs__action__StartRecording_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_GetResult_Request__destroy(camera_msgs__action__StartRecording_GetResult_Request * msg);

/// Check for action/StartRecording message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_GetResult_Request__are_equal(const camera_msgs__action__StartRecording_GetResult_Request * lhs, const camera_msgs__action__StartRecording_GetResult_Request * rhs);

/// Copy a action/StartRecording message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_GetResult_Request__copy(
  const camera_msgs__action__StartRecording_GetResult_Request * input,
  camera_msgs__action__StartRecording_GetResult_Request * output);

/// Initialize array of action/StartRecording messages.
/**
 * It allocates the memory for the number of elements and calls
 * camera_msgs__action__StartRecording_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_GetResult_Request__Sequence__init(camera_msgs__action__StartRecording_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/StartRecording messages.
/**
 * It calls
 * camera_msgs__action__StartRecording_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_GetResult_Request__Sequence__fini(camera_msgs__action__StartRecording_GetResult_Request__Sequence * array);

/// Create array of action/StartRecording messages.
/**
 * It allocates the memory for the array and calls
 * camera_msgs__action__StartRecording_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
camera_msgs__action__StartRecording_GetResult_Request__Sequence *
camera_msgs__action__StartRecording_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/StartRecording messages.
/**
 * It calls
 * camera_msgs__action__StartRecording_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_GetResult_Request__Sequence__destroy(camera_msgs__action__StartRecording_GetResult_Request__Sequence * array);

/// Check for action/StartRecording message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_GetResult_Request__Sequence__are_equal(const camera_msgs__action__StartRecording_GetResult_Request__Sequence * lhs, const camera_msgs__action__StartRecording_GetResult_Request__Sequence * rhs);

/// Copy an array of action/StartRecording messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_GetResult_Request__Sequence__copy(
  const camera_msgs__action__StartRecording_GetResult_Request__Sequence * input,
  camera_msgs__action__StartRecording_GetResult_Request__Sequence * output);

/// Initialize action/StartRecording message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * camera_msgs__action__StartRecording_GetResult_Response
 * )) before or use
 * camera_msgs__action__StartRecording_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_GetResult_Response__init(camera_msgs__action__StartRecording_GetResult_Response * msg);

/// Finalize action/StartRecording message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_GetResult_Response__fini(camera_msgs__action__StartRecording_GetResult_Response * msg);

/// Create action/StartRecording message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * camera_msgs__action__StartRecording_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
camera_msgs__action__StartRecording_GetResult_Response *
camera_msgs__action__StartRecording_GetResult_Response__create();

/// Destroy action/StartRecording message.
/**
 * It calls
 * camera_msgs__action__StartRecording_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_GetResult_Response__destroy(camera_msgs__action__StartRecording_GetResult_Response * msg);

/// Check for action/StartRecording message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_GetResult_Response__are_equal(const camera_msgs__action__StartRecording_GetResult_Response * lhs, const camera_msgs__action__StartRecording_GetResult_Response * rhs);

/// Copy a action/StartRecording message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_GetResult_Response__copy(
  const camera_msgs__action__StartRecording_GetResult_Response * input,
  camera_msgs__action__StartRecording_GetResult_Response * output);

/// Initialize array of action/StartRecording messages.
/**
 * It allocates the memory for the number of elements and calls
 * camera_msgs__action__StartRecording_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_GetResult_Response__Sequence__init(camera_msgs__action__StartRecording_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/StartRecording messages.
/**
 * It calls
 * camera_msgs__action__StartRecording_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_GetResult_Response__Sequence__fini(camera_msgs__action__StartRecording_GetResult_Response__Sequence * array);

/// Create array of action/StartRecording messages.
/**
 * It allocates the memory for the array and calls
 * camera_msgs__action__StartRecording_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
camera_msgs__action__StartRecording_GetResult_Response__Sequence *
camera_msgs__action__StartRecording_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/StartRecording messages.
/**
 * It calls
 * camera_msgs__action__StartRecording_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_GetResult_Response__Sequence__destroy(camera_msgs__action__StartRecording_GetResult_Response__Sequence * array);

/// Check for action/StartRecording message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_GetResult_Response__Sequence__are_equal(const camera_msgs__action__StartRecording_GetResult_Response__Sequence * lhs, const camera_msgs__action__StartRecording_GetResult_Response__Sequence * rhs);

/// Copy an array of action/StartRecording messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_GetResult_Response__Sequence__copy(
  const camera_msgs__action__StartRecording_GetResult_Response__Sequence * input,
  camera_msgs__action__StartRecording_GetResult_Response__Sequence * output);

/// Initialize action/StartRecording message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * camera_msgs__action__StartRecording_FeedbackMessage
 * )) before or use
 * camera_msgs__action__StartRecording_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_FeedbackMessage__init(camera_msgs__action__StartRecording_FeedbackMessage * msg);

/// Finalize action/StartRecording message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_FeedbackMessage__fini(camera_msgs__action__StartRecording_FeedbackMessage * msg);

/// Create action/StartRecording message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * camera_msgs__action__StartRecording_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
camera_msgs__action__StartRecording_FeedbackMessage *
camera_msgs__action__StartRecording_FeedbackMessage__create();

/// Destroy action/StartRecording message.
/**
 * It calls
 * camera_msgs__action__StartRecording_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_FeedbackMessage__destroy(camera_msgs__action__StartRecording_FeedbackMessage * msg);

/// Check for action/StartRecording message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_FeedbackMessage__are_equal(const camera_msgs__action__StartRecording_FeedbackMessage * lhs, const camera_msgs__action__StartRecording_FeedbackMessage * rhs);

/// Copy a action/StartRecording message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_FeedbackMessage__copy(
  const camera_msgs__action__StartRecording_FeedbackMessage * input,
  camera_msgs__action__StartRecording_FeedbackMessage * output);

/// Initialize array of action/StartRecording messages.
/**
 * It allocates the memory for the number of elements and calls
 * camera_msgs__action__StartRecording_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_FeedbackMessage__Sequence__init(camera_msgs__action__StartRecording_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/StartRecording messages.
/**
 * It calls
 * camera_msgs__action__StartRecording_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_FeedbackMessage__Sequence__fini(camera_msgs__action__StartRecording_FeedbackMessage__Sequence * array);

/// Create array of action/StartRecording messages.
/**
 * It allocates the memory for the array and calls
 * camera_msgs__action__StartRecording_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
camera_msgs__action__StartRecording_FeedbackMessage__Sequence *
camera_msgs__action__StartRecording_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/StartRecording messages.
/**
 * It calls
 * camera_msgs__action__StartRecording_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
void
camera_msgs__action__StartRecording_FeedbackMessage__Sequence__destroy(camera_msgs__action__StartRecording_FeedbackMessage__Sequence * array);

/// Check for action/StartRecording message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_FeedbackMessage__Sequence__are_equal(const camera_msgs__action__StartRecording_FeedbackMessage__Sequence * lhs, const camera_msgs__action__StartRecording_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/StartRecording messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_msgs
bool
camera_msgs__action__StartRecording_FeedbackMessage__Sequence__copy(
  const camera_msgs__action__StartRecording_FeedbackMessage__Sequence * input,
  camera_msgs__action__StartRecording_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_MSGS__ACTION__DETAIL__START_RECORDING__FUNCTIONS_H_
