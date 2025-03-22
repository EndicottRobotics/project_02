// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from endicott_interfaces:msg/MoveStatus.idl
// generated code does not contain a copyright notice

#ifndef ENDICOTT_INTERFACES__MSG__DETAIL__MOVE_STATUS__STRUCT_H_
#define ENDICOTT_INTERFACES__MSG__DETAIL__MOVE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MoveStatus in the package endicott_interfaces.
typedef struct endicott_interfaces__msg__MoveStatus
{
  rosidl_runtime_c__String state;
  double distance_error;
  double theta_error;
} endicott_interfaces__msg__MoveStatus;

// Struct for a sequence of endicott_interfaces__msg__MoveStatus.
typedef struct endicott_interfaces__msg__MoveStatus__Sequence
{
  endicott_interfaces__msg__MoveStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} endicott_interfaces__msg__MoveStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENDICOTT_INTERFACES__MSG__DETAIL__MOVE_STATUS__STRUCT_H_
