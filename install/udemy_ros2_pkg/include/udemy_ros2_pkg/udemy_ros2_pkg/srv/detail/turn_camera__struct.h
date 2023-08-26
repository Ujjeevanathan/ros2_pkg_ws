// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from udemy_ros2_pkg:srv/TurnCamera.idl
// generated code does not contain a copyright notice

#ifndef UDEMY_ROS2_PKG__SRV__DETAIL__TURN_CAMERA__STRUCT_H_
#define UDEMY_ROS2_PKG__SRV__DETAIL__TURN_CAMERA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TurnCamera in the package udemy_ros2_pkg.
typedef struct udemy_ros2_pkg__srv__TurnCamera_Request
{
  float degree_turn;
} udemy_ros2_pkg__srv__TurnCamera_Request;

// Struct for a sequence of udemy_ros2_pkg__srv__TurnCamera_Request.
typedef struct udemy_ros2_pkg__srv__TurnCamera_Request__Sequence
{
  udemy_ros2_pkg__srv__TurnCamera_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} udemy_ros2_pkg__srv__TurnCamera_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/TurnCamera in the package udemy_ros2_pkg.
typedef struct udemy_ros2_pkg__srv__TurnCamera_Response
{
  sensor_msgs__msg__Image image;
} udemy_ros2_pkg__srv__TurnCamera_Response;

// Struct for a sequence of udemy_ros2_pkg__srv__TurnCamera_Response.
typedef struct udemy_ros2_pkg__srv__TurnCamera_Response__Sequence
{
  udemy_ros2_pkg__srv__TurnCamera_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} udemy_ros2_pkg__srv__TurnCamera_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UDEMY_ROS2_PKG__SRV__DETAIL__TURN_CAMERA__STRUCT_H_
