// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from endicott_interfaces:msg/MoveStatus.idl
// generated code does not contain a copyright notice
#include "endicott_interfaces/msg/detail/move_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

bool
endicott_interfaces__msg__MoveStatus__init(endicott_interfaces__msg__MoveStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    endicott_interfaces__msg__MoveStatus__fini(msg);
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    endicott_interfaces__msg__MoveStatus__fini(msg);
    return false;
  }
  // distance_error
  // theta_error
  return true;
}

void
endicott_interfaces__msg__MoveStatus__fini(endicott_interfaces__msg__MoveStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // distance_error
  // theta_error
}

bool
endicott_interfaces__msg__MoveStatus__are_equal(const endicott_interfaces__msg__MoveStatus * lhs, const endicott_interfaces__msg__MoveStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // distance_error
  if (lhs->distance_error != rhs->distance_error) {
    return false;
  }
  // theta_error
  if (lhs->theta_error != rhs->theta_error) {
    return false;
  }
  return true;
}

bool
endicott_interfaces__msg__MoveStatus__copy(
  const endicott_interfaces__msg__MoveStatus * input,
  endicott_interfaces__msg__MoveStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // distance_error
  output->distance_error = input->distance_error;
  // theta_error
  output->theta_error = input->theta_error;
  return true;
}

endicott_interfaces__msg__MoveStatus *
endicott_interfaces__msg__MoveStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  endicott_interfaces__msg__MoveStatus * msg = (endicott_interfaces__msg__MoveStatus *)allocator.allocate(sizeof(endicott_interfaces__msg__MoveStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(endicott_interfaces__msg__MoveStatus));
  bool success = endicott_interfaces__msg__MoveStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
endicott_interfaces__msg__MoveStatus__destroy(endicott_interfaces__msg__MoveStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    endicott_interfaces__msg__MoveStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
endicott_interfaces__msg__MoveStatus__Sequence__init(endicott_interfaces__msg__MoveStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  endicott_interfaces__msg__MoveStatus * data = NULL;

  if (size) {
    data = (endicott_interfaces__msg__MoveStatus *)allocator.zero_allocate(size, sizeof(endicott_interfaces__msg__MoveStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = endicott_interfaces__msg__MoveStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        endicott_interfaces__msg__MoveStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
endicott_interfaces__msg__MoveStatus__Sequence__fini(endicott_interfaces__msg__MoveStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      endicott_interfaces__msg__MoveStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

endicott_interfaces__msg__MoveStatus__Sequence *
endicott_interfaces__msg__MoveStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  endicott_interfaces__msg__MoveStatus__Sequence * array = (endicott_interfaces__msg__MoveStatus__Sequence *)allocator.allocate(sizeof(endicott_interfaces__msg__MoveStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = endicott_interfaces__msg__MoveStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
endicott_interfaces__msg__MoveStatus__Sequence__destroy(endicott_interfaces__msg__MoveStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    endicott_interfaces__msg__MoveStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
endicott_interfaces__msg__MoveStatus__Sequence__are_equal(const endicott_interfaces__msg__MoveStatus__Sequence * lhs, const endicott_interfaces__msg__MoveStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!endicott_interfaces__msg__MoveStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
endicott_interfaces__msg__MoveStatus__Sequence__copy(
  const endicott_interfaces__msg__MoveStatus__Sequence * input,
  endicott_interfaces__msg__MoveStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(endicott_interfaces__msg__MoveStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    endicott_interfaces__msg__MoveStatus * data =
      (endicott_interfaces__msg__MoveStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!endicott_interfaces__msg__MoveStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          endicott_interfaces__msg__MoveStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!endicott_interfaces__msg__MoveStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
