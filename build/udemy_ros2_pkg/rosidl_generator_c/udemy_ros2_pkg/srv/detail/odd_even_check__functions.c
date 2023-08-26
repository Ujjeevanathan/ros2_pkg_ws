// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from udemy_ros2_pkg:srv/OddEvenCheck.idl
// generated code does not contain a copyright notice
#include "udemy_ros2_pkg/srv/detail/odd_even_check__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
udemy_ros2_pkg__srv__OddEvenCheck_Request__init(udemy_ros2_pkg__srv__OddEvenCheck_Request * msg)
{
  if (!msg) {
    return false;
  }
  // number
  return true;
}

void
udemy_ros2_pkg__srv__OddEvenCheck_Request__fini(udemy_ros2_pkg__srv__OddEvenCheck_Request * msg)
{
  if (!msg) {
    return;
  }
  // number
}

bool
udemy_ros2_pkg__srv__OddEvenCheck_Request__are_equal(const udemy_ros2_pkg__srv__OddEvenCheck_Request * lhs, const udemy_ros2_pkg__srv__OddEvenCheck_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // number
  if (lhs->number != rhs->number) {
    return false;
  }
  return true;
}

bool
udemy_ros2_pkg__srv__OddEvenCheck_Request__copy(
  const udemy_ros2_pkg__srv__OddEvenCheck_Request * input,
  udemy_ros2_pkg__srv__OddEvenCheck_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // number
  output->number = input->number;
  return true;
}

udemy_ros2_pkg__srv__OddEvenCheck_Request *
udemy_ros2_pkg__srv__OddEvenCheck_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  udemy_ros2_pkg__srv__OddEvenCheck_Request * msg = (udemy_ros2_pkg__srv__OddEvenCheck_Request *)allocator.allocate(sizeof(udemy_ros2_pkg__srv__OddEvenCheck_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(udemy_ros2_pkg__srv__OddEvenCheck_Request));
  bool success = udemy_ros2_pkg__srv__OddEvenCheck_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
udemy_ros2_pkg__srv__OddEvenCheck_Request__destroy(udemy_ros2_pkg__srv__OddEvenCheck_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    udemy_ros2_pkg__srv__OddEvenCheck_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
udemy_ros2_pkg__srv__OddEvenCheck_Request__Sequence__init(udemy_ros2_pkg__srv__OddEvenCheck_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  udemy_ros2_pkg__srv__OddEvenCheck_Request * data = NULL;

  if (size) {
    data = (udemy_ros2_pkg__srv__OddEvenCheck_Request *)allocator.zero_allocate(size, sizeof(udemy_ros2_pkg__srv__OddEvenCheck_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = udemy_ros2_pkg__srv__OddEvenCheck_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        udemy_ros2_pkg__srv__OddEvenCheck_Request__fini(&data[i - 1]);
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
udemy_ros2_pkg__srv__OddEvenCheck_Request__Sequence__fini(udemy_ros2_pkg__srv__OddEvenCheck_Request__Sequence * array)
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
      udemy_ros2_pkg__srv__OddEvenCheck_Request__fini(&array->data[i]);
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

udemy_ros2_pkg__srv__OddEvenCheck_Request__Sequence *
udemy_ros2_pkg__srv__OddEvenCheck_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  udemy_ros2_pkg__srv__OddEvenCheck_Request__Sequence * array = (udemy_ros2_pkg__srv__OddEvenCheck_Request__Sequence *)allocator.allocate(sizeof(udemy_ros2_pkg__srv__OddEvenCheck_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = udemy_ros2_pkg__srv__OddEvenCheck_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
udemy_ros2_pkg__srv__OddEvenCheck_Request__Sequence__destroy(udemy_ros2_pkg__srv__OddEvenCheck_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    udemy_ros2_pkg__srv__OddEvenCheck_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
udemy_ros2_pkg__srv__OddEvenCheck_Request__Sequence__are_equal(const udemy_ros2_pkg__srv__OddEvenCheck_Request__Sequence * lhs, const udemy_ros2_pkg__srv__OddEvenCheck_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!udemy_ros2_pkg__srv__OddEvenCheck_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
udemy_ros2_pkg__srv__OddEvenCheck_Request__Sequence__copy(
  const udemy_ros2_pkg__srv__OddEvenCheck_Request__Sequence * input,
  udemy_ros2_pkg__srv__OddEvenCheck_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(udemy_ros2_pkg__srv__OddEvenCheck_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    udemy_ros2_pkg__srv__OddEvenCheck_Request * data =
      (udemy_ros2_pkg__srv__OddEvenCheck_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!udemy_ros2_pkg__srv__OddEvenCheck_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          udemy_ros2_pkg__srv__OddEvenCheck_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!udemy_ros2_pkg__srv__OddEvenCheck_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `decision`
#include "rosidl_runtime_c/string_functions.h"

bool
udemy_ros2_pkg__srv__OddEvenCheck_Response__init(udemy_ros2_pkg__srv__OddEvenCheck_Response * msg)
{
  if (!msg) {
    return false;
  }
  // decision
  if (!rosidl_runtime_c__String__init(&msg->decision)) {
    udemy_ros2_pkg__srv__OddEvenCheck_Response__fini(msg);
    return false;
  }
  return true;
}

void
udemy_ros2_pkg__srv__OddEvenCheck_Response__fini(udemy_ros2_pkg__srv__OddEvenCheck_Response * msg)
{
  if (!msg) {
    return;
  }
  // decision
  rosidl_runtime_c__String__fini(&msg->decision);
}

bool
udemy_ros2_pkg__srv__OddEvenCheck_Response__are_equal(const udemy_ros2_pkg__srv__OddEvenCheck_Response * lhs, const udemy_ros2_pkg__srv__OddEvenCheck_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // decision
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->decision), &(rhs->decision)))
  {
    return false;
  }
  return true;
}

bool
udemy_ros2_pkg__srv__OddEvenCheck_Response__copy(
  const udemy_ros2_pkg__srv__OddEvenCheck_Response * input,
  udemy_ros2_pkg__srv__OddEvenCheck_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // decision
  if (!rosidl_runtime_c__String__copy(
      &(input->decision), &(output->decision)))
  {
    return false;
  }
  return true;
}

udemy_ros2_pkg__srv__OddEvenCheck_Response *
udemy_ros2_pkg__srv__OddEvenCheck_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  udemy_ros2_pkg__srv__OddEvenCheck_Response * msg = (udemy_ros2_pkg__srv__OddEvenCheck_Response *)allocator.allocate(sizeof(udemy_ros2_pkg__srv__OddEvenCheck_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(udemy_ros2_pkg__srv__OddEvenCheck_Response));
  bool success = udemy_ros2_pkg__srv__OddEvenCheck_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
udemy_ros2_pkg__srv__OddEvenCheck_Response__destroy(udemy_ros2_pkg__srv__OddEvenCheck_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    udemy_ros2_pkg__srv__OddEvenCheck_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
udemy_ros2_pkg__srv__OddEvenCheck_Response__Sequence__init(udemy_ros2_pkg__srv__OddEvenCheck_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  udemy_ros2_pkg__srv__OddEvenCheck_Response * data = NULL;

  if (size) {
    data = (udemy_ros2_pkg__srv__OddEvenCheck_Response *)allocator.zero_allocate(size, sizeof(udemy_ros2_pkg__srv__OddEvenCheck_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = udemy_ros2_pkg__srv__OddEvenCheck_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        udemy_ros2_pkg__srv__OddEvenCheck_Response__fini(&data[i - 1]);
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
udemy_ros2_pkg__srv__OddEvenCheck_Response__Sequence__fini(udemy_ros2_pkg__srv__OddEvenCheck_Response__Sequence * array)
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
      udemy_ros2_pkg__srv__OddEvenCheck_Response__fini(&array->data[i]);
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

udemy_ros2_pkg__srv__OddEvenCheck_Response__Sequence *
udemy_ros2_pkg__srv__OddEvenCheck_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  udemy_ros2_pkg__srv__OddEvenCheck_Response__Sequence * array = (udemy_ros2_pkg__srv__OddEvenCheck_Response__Sequence *)allocator.allocate(sizeof(udemy_ros2_pkg__srv__OddEvenCheck_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = udemy_ros2_pkg__srv__OddEvenCheck_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
udemy_ros2_pkg__srv__OddEvenCheck_Response__Sequence__destroy(udemy_ros2_pkg__srv__OddEvenCheck_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    udemy_ros2_pkg__srv__OddEvenCheck_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
udemy_ros2_pkg__srv__OddEvenCheck_Response__Sequence__are_equal(const udemy_ros2_pkg__srv__OddEvenCheck_Response__Sequence * lhs, const udemy_ros2_pkg__srv__OddEvenCheck_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!udemy_ros2_pkg__srv__OddEvenCheck_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
udemy_ros2_pkg__srv__OddEvenCheck_Response__Sequence__copy(
  const udemy_ros2_pkg__srv__OddEvenCheck_Response__Sequence * input,
  udemy_ros2_pkg__srv__OddEvenCheck_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(udemy_ros2_pkg__srv__OddEvenCheck_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    udemy_ros2_pkg__srv__OddEvenCheck_Response * data =
      (udemy_ros2_pkg__srv__OddEvenCheck_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!udemy_ros2_pkg__srv__OddEvenCheck_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          udemy_ros2_pkg__srv__OddEvenCheck_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!udemy_ros2_pkg__srv__OddEvenCheck_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
