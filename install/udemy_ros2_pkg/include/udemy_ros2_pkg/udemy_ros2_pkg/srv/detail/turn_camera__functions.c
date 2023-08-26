// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from udemy_ros2_pkg:srv/TurnCamera.idl
// generated code does not contain a copyright notice
#include "udemy_ros2_pkg/srv/detail/turn_camera__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
udemy_ros2_pkg__srv__TurnCamera_Request__init(udemy_ros2_pkg__srv__TurnCamera_Request * msg)
{
  if (!msg) {
    return false;
  }
  // degree_turn
  return true;
}

void
udemy_ros2_pkg__srv__TurnCamera_Request__fini(udemy_ros2_pkg__srv__TurnCamera_Request * msg)
{
  if (!msg) {
    return;
  }
  // degree_turn
}

bool
udemy_ros2_pkg__srv__TurnCamera_Request__are_equal(const udemy_ros2_pkg__srv__TurnCamera_Request * lhs, const udemy_ros2_pkg__srv__TurnCamera_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // degree_turn
  if (lhs->degree_turn != rhs->degree_turn) {
    return false;
  }
  return true;
}

bool
udemy_ros2_pkg__srv__TurnCamera_Request__copy(
  const udemy_ros2_pkg__srv__TurnCamera_Request * input,
  udemy_ros2_pkg__srv__TurnCamera_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // degree_turn
  output->degree_turn = input->degree_turn;
  return true;
}

udemy_ros2_pkg__srv__TurnCamera_Request *
udemy_ros2_pkg__srv__TurnCamera_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  udemy_ros2_pkg__srv__TurnCamera_Request * msg = (udemy_ros2_pkg__srv__TurnCamera_Request *)allocator.allocate(sizeof(udemy_ros2_pkg__srv__TurnCamera_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(udemy_ros2_pkg__srv__TurnCamera_Request));
  bool success = udemy_ros2_pkg__srv__TurnCamera_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
udemy_ros2_pkg__srv__TurnCamera_Request__destroy(udemy_ros2_pkg__srv__TurnCamera_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    udemy_ros2_pkg__srv__TurnCamera_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
udemy_ros2_pkg__srv__TurnCamera_Request__Sequence__init(udemy_ros2_pkg__srv__TurnCamera_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  udemy_ros2_pkg__srv__TurnCamera_Request * data = NULL;

  if (size) {
    data = (udemy_ros2_pkg__srv__TurnCamera_Request *)allocator.zero_allocate(size, sizeof(udemy_ros2_pkg__srv__TurnCamera_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = udemy_ros2_pkg__srv__TurnCamera_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        udemy_ros2_pkg__srv__TurnCamera_Request__fini(&data[i - 1]);
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
udemy_ros2_pkg__srv__TurnCamera_Request__Sequence__fini(udemy_ros2_pkg__srv__TurnCamera_Request__Sequence * array)
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
      udemy_ros2_pkg__srv__TurnCamera_Request__fini(&array->data[i]);
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

udemy_ros2_pkg__srv__TurnCamera_Request__Sequence *
udemy_ros2_pkg__srv__TurnCamera_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  udemy_ros2_pkg__srv__TurnCamera_Request__Sequence * array = (udemy_ros2_pkg__srv__TurnCamera_Request__Sequence *)allocator.allocate(sizeof(udemy_ros2_pkg__srv__TurnCamera_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = udemy_ros2_pkg__srv__TurnCamera_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
udemy_ros2_pkg__srv__TurnCamera_Request__Sequence__destroy(udemy_ros2_pkg__srv__TurnCamera_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    udemy_ros2_pkg__srv__TurnCamera_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
udemy_ros2_pkg__srv__TurnCamera_Request__Sequence__are_equal(const udemy_ros2_pkg__srv__TurnCamera_Request__Sequence * lhs, const udemy_ros2_pkg__srv__TurnCamera_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!udemy_ros2_pkg__srv__TurnCamera_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
udemy_ros2_pkg__srv__TurnCamera_Request__Sequence__copy(
  const udemy_ros2_pkg__srv__TurnCamera_Request__Sequence * input,
  udemy_ros2_pkg__srv__TurnCamera_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(udemy_ros2_pkg__srv__TurnCamera_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    udemy_ros2_pkg__srv__TurnCamera_Request * data =
      (udemy_ros2_pkg__srv__TurnCamera_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!udemy_ros2_pkg__srv__TurnCamera_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          udemy_ros2_pkg__srv__TurnCamera_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!udemy_ros2_pkg__srv__TurnCamera_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
udemy_ros2_pkg__srv__TurnCamera_Response__init(udemy_ros2_pkg__srv__TurnCamera_Response * msg)
{
  if (!msg) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    udemy_ros2_pkg__srv__TurnCamera_Response__fini(msg);
    return false;
  }
  return true;
}

void
udemy_ros2_pkg__srv__TurnCamera_Response__fini(udemy_ros2_pkg__srv__TurnCamera_Response * msg)
{
  if (!msg) {
    return;
  }
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
}

bool
udemy_ros2_pkg__srv__TurnCamera_Response__are_equal(const udemy_ros2_pkg__srv__TurnCamera_Response * lhs, const udemy_ros2_pkg__srv__TurnCamera_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  return true;
}

bool
udemy_ros2_pkg__srv__TurnCamera_Response__copy(
  const udemy_ros2_pkg__srv__TurnCamera_Response * input,
  udemy_ros2_pkg__srv__TurnCamera_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  return true;
}

udemy_ros2_pkg__srv__TurnCamera_Response *
udemy_ros2_pkg__srv__TurnCamera_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  udemy_ros2_pkg__srv__TurnCamera_Response * msg = (udemy_ros2_pkg__srv__TurnCamera_Response *)allocator.allocate(sizeof(udemy_ros2_pkg__srv__TurnCamera_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(udemy_ros2_pkg__srv__TurnCamera_Response));
  bool success = udemy_ros2_pkg__srv__TurnCamera_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
udemy_ros2_pkg__srv__TurnCamera_Response__destroy(udemy_ros2_pkg__srv__TurnCamera_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    udemy_ros2_pkg__srv__TurnCamera_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
udemy_ros2_pkg__srv__TurnCamera_Response__Sequence__init(udemy_ros2_pkg__srv__TurnCamera_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  udemy_ros2_pkg__srv__TurnCamera_Response * data = NULL;

  if (size) {
    data = (udemy_ros2_pkg__srv__TurnCamera_Response *)allocator.zero_allocate(size, sizeof(udemy_ros2_pkg__srv__TurnCamera_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = udemy_ros2_pkg__srv__TurnCamera_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        udemy_ros2_pkg__srv__TurnCamera_Response__fini(&data[i - 1]);
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
udemy_ros2_pkg__srv__TurnCamera_Response__Sequence__fini(udemy_ros2_pkg__srv__TurnCamera_Response__Sequence * array)
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
      udemy_ros2_pkg__srv__TurnCamera_Response__fini(&array->data[i]);
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

udemy_ros2_pkg__srv__TurnCamera_Response__Sequence *
udemy_ros2_pkg__srv__TurnCamera_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  udemy_ros2_pkg__srv__TurnCamera_Response__Sequence * array = (udemy_ros2_pkg__srv__TurnCamera_Response__Sequence *)allocator.allocate(sizeof(udemy_ros2_pkg__srv__TurnCamera_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = udemy_ros2_pkg__srv__TurnCamera_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
udemy_ros2_pkg__srv__TurnCamera_Response__Sequence__destroy(udemy_ros2_pkg__srv__TurnCamera_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    udemy_ros2_pkg__srv__TurnCamera_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
udemy_ros2_pkg__srv__TurnCamera_Response__Sequence__are_equal(const udemy_ros2_pkg__srv__TurnCamera_Response__Sequence * lhs, const udemy_ros2_pkg__srv__TurnCamera_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!udemy_ros2_pkg__srv__TurnCamera_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
udemy_ros2_pkg__srv__TurnCamera_Response__Sequence__copy(
  const udemy_ros2_pkg__srv__TurnCamera_Response__Sequence * input,
  udemy_ros2_pkg__srv__TurnCamera_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(udemy_ros2_pkg__srv__TurnCamera_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    udemy_ros2_pkg__srv__TurnCamera_Response * data =
      (udemy_ros2_pkg__srv__TurnCamera_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!udemy_ros2_pkg__srv__TurnCamera_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          udemy_ros2_pkg__srv__TurnCamera_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!udemy_ros2_pkg__srv__TurnCamera_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
