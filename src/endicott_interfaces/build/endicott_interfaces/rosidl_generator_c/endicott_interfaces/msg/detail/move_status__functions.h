// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from endicott_interfaces:msg/MoveStatus.idl
// generated code does not contain a copyright notice

#ifndef ENDICOTT_INTERFACES__MSG__DETAIL__MOVE_STATUS__FUNCTIONS_H_
#define ENDICOTT_INTERFACES__MSG__DETAIL__MOVE_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "endicott_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "endicott_interfaces/msg/detail/move_status__struct.h"

/// Initialize msg/MoveStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * endicott_interfaces__msg__MoveStatus
 * )) before or use
 * endicott_interfaces__msg__MoveStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_endicott_interfaces
bool
endicott_interfaces__msg__MoveStatus__init(endicott_interfaces__msg__MoveStatus * msg);

/// Finalize msg/MoveStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_endicott_interfaces
void
endicott_interfaces__msg__MoveStatus__fini(endicott_interfaces__msg__MoveStatus * msg);

/// Create msg/MoveStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * endicott_interfaces__msg__MoveStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_endicott_interfaces
endicott_interfaces__msg__MoveStatus *
endicott_interfaces__msg__MoveStatus__create();

/// Destroy msg/MoveStatus message.
/**
 * It calls
 * endicott_interfaces__msg__MoveStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_endicott_interfaces
void
endicott_interfaces__msg__MoveStatus__destroy(endicott_interfaces__msg__MoveStatus * msg);

/// Check for msg/MoveStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_endicott_interfaces
bool
endicott_interfaces__msg__MoveStatus__are_equal(const endicott_interfaces__msg__MoveStatus * lhs, const endicott_interfaces__msg__MoveStatus * rhs);

/// Copy a msg/MoveStatus message.
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
ROSIDL_GENERATOR_C_PUBLIC_endicott_interfaces
bool
endicott_interfaces__msg__MoveStatus__copy(
  const endicott_interfaces__msg__MoveStatus * input,
  endicott_interfaces__msg__MoveStatus * output);

/// Initialize array of msg/MoveStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * endicott_interfaces__msg__MoveStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_endicott_interfaces
bool
endicott_interfaces__msg__MoveStatus__Sequence__init(endicott_interfaces__msg__MoveStatus__Sequence * array, size_t size);

/// Finalize array of msg/MoveStatus messages.
/**
 * It calls
 * endicott_interfaces__msg__MoveStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_endicott_interfaces
void
endicott_interfaces__msg__MoveStatus__Sequence__fini(endicott_interfaces__msg__MoveStatus__Sequence * array);

/// Create array of msg/MoveStatus messages.
/**
 * It allocates the memory for the array and calls
 * endicott_interfaces__msg__MoveStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_endicott_interfaces
endicott_interfaces__msg__MoveStatus__Sequence *
endicott_interfaces__msg__MoveStatus__Sequence__create(size_t size);

/// Destroy array of msg/MoveStatus messages.
/**
 * It calls
 * endicott_interfaces__msg__MoveStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_endicott_interfaces
void
endicott_interfaces__msg__MoveStatus__Sequence__destroy(endicott_interfaces__msg__MoveStatus__Sequence * array);

/// Check for msg/MoveStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_endicott_interfaces
bool
endicott_interfaces__msg__MoveStatus__Sequence__are_equal(const endicott_interfaces__msg__MoveStatus__Sequence * lhs, const endicott_interfaces__msg__MoveStatus__Sequence * rhs);

/// Copy an array of msg/MoveStatus messages.
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
ROSIDL_GENERATOR_C_PUBLIC_endicott_interfaces
bool
endicott_interfaces__msg__MoveStatus__Sequence__copy(
  const endicott_interfaces__msg__MoveStatus__Sequence * input,
  endicott_interfaces__msg__MoveStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ENDICOTT_INTERFACES__MSG__DETAIL__MOVE_STATUS__FUNCTIONS_H_
