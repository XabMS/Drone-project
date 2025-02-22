// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RoverMecanumGuidanceStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/rover_mecanum_guidance_status.h"


#ifndef PX4_MSGS__MSG__DETAIL__ROVER_MECANUM_GUIDANCE_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ROVER_MECANUM_GUIDANCE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RoverMecanumGuidanceStatus in the package px4_msgs.
typedef struct px4_msgs__msg__RoverMecanumGuidanceStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Lookahead distance of pure the pursuit controller
  float lookahead_distance;
  /// Heading error of the pure pursuit controller
  float heading_error;
  /// Desired velocity magnitude (speed)
  float desired_speed;
} px4_msgs__msg__RoverMecanumGuidanceStatus;

// Struct for a sequence of px4_msgs__msg__RoverMecanumGuidanceStatus.
typedef struct px4_msgs__msg__RoverMecanumGuidanceStatus__Sequence
{
  px4_msgs__msg__RoverMecanumGuidanceStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RoverMecanumGuidanceStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_MECANUM_GUIDANCE_STATUS__STRUCT_H_
