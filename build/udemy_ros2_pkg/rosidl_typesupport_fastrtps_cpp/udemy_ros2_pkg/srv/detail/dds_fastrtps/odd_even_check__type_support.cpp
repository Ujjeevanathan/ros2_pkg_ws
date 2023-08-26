// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from udemy_ros2_pkg:srv/OddEvenCheck.idl
// generated code does not contain a copyright notice
#include "udemy_ros2_pkg/srv/detail/odd_even_check__rosidl_typesupport_fastrtps_cpp.hpp"
#include "udemy_ros2_pkg/srv/detail/odd_even_check__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace udemy_ros2_pkg
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_udemy_ros2_pkg
cdr_serialize(
  const udemy_ros2_pkg::srv::OddEvenCheck_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: number
  cdr << ros_message.number;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_udemy_ros2_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  udemy_ros2_pkg::srv::OddEvenCheck_Request & ros_message)
{
  // Member: number
  cdr >> ros_message.number;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_udemy_ros2_pkg
get_serialized_size(
  const udemy_ros2_pkg::srv::OddEvenCheck_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: number
  {
    size_t item_size = sizeof(ros_message.number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_udemy_ros2_pkg
max_serialized_size_OddEvenCheck_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: number
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _OddEvenCheck_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const udemy_ros2_pkg::srv::OddEvenCheck_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OddEvenCheck_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<udemy_ros2_pkg::srv::OddEvenCheck_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OddEvenCheck_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const udemy_ros2_pkg::srv::OddEvenCheck_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OddEvenCheck_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_OddEvenCheck_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _OddEvenCheck_Request__callbacks = {
  "udemy_ros2_pkg::srv",
  "OddEvenCheck_Request",
  _OddEvenCheck_Request__cdr_serialize,
  _OddEvenCheck_Request__cdr_deserialize,
  _OddEvenCheck_Request__get_serialized_size,
  _OddEvenCheck_Request__max_serialized_size
};

static rosidl_message_type_support_t _OddEvenCheck_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OddEvenCheck_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace udemy_ros2_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_udemy_ros2_pkg
const rosidl_message_type_support_t *
get_message_type_support_handle<udemy_ros2_pkg::srv::OddEvenCheck_Request>()
{
  return &udemy_ros2_pkg::srv::typesupport_fastrtps_cpp::_OddEvenCheck_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, udemy_ros2_pkg, srv, OddEvenCheck_Request)() {
  return &udemy_ros2_pkg::srv::typesupport_fastrtps_cpp::_OddEvenCheck_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace udemy_ros2_pkg
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_udemy_ros2_pkg
cdr_serialize(
  const udemy_ros2_pkg::srv::OddEvenCheck_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: decision
  cdr << ros_message.decision;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_udemy_ros2_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  udemy_ros2_pkg::srv::OddEvenCheck_Response & ros_message)
{
  // Member: decision
  cdr >> ros_message.decision;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_udemy_ros2_pkg
get_serialized_size(
  const udemy_ros2_pkg::srv::OddEvenCheck_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: decision
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.decision.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_udemy_ros2_pkg
max_serialized_size_OddEvenCheck_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: decision
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _OddEvenCheck_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const udemy_ros2_pkg::srv::OddEvenCheck_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OddEvenCheck_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<udemy_ros2_pkg::srv::OddEvenCheck_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OddEvenCheck_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const udemy_ros2_pkg::srv::OddEvenCheck_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OddEvenCheck_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_OddEvenCheck_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _OddEvenCheck_Response__callbacks = {
  "udemy_ros2_pkg::srv",
  "OddEvenCheck_Response",
  _OddEvenCheck_Response__cdr_serialize,
  _OddEvenCheck_Response__cdr_deserialize,
  _OddEvenCheck_Response__get_serialized_size,
  _OddEvenCheck_Response__max_serialized_size
};

static rosidl_message_type_support_t _OddEvenCheck_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OddEvenCheck_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace udemy_ros2_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_udemy_ros2_pkg
const rosidl_message_type_support_t *
get_message_type_support_handle<udemy_ros2_pkg::srv::OddEvenCheck_Response>()
{
  return &udemy_ros2_pkg::srv::typesupport_fastrtps_cpp::_OddEvenCheck_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, udemy_ros2_pkg, srv, OddEvenCheck_Response)() {
  return &udemy_ros2_pkg::srv::typesupport_fastrtps_cpp::_OddEvenCheck_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace udemy_ros2_pkg
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _OddEvenCheck__callbacks = {
  "udemy_ros2_pkg::srv",
  "OddEvenCheck",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, udemy_ros2_pkg, srv, OddEvenCheck_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, udemy_ros2_pkg, srv, OddEvenCheck_Response)(),
};

static rosidl_service_type_support_t _OddEvenCheck__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OddEvenCheck__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace udemy_ros2_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_udemy_ros2_pkg
const rosidl_service_type_support_t *
get_service_type_support_handle<udemy_ros2_pkg::srv::OddEvenCheck>()
{
  return &udemy_ros2_pkg::srv::typesupport_fastrtps_cpp::_OddEvenCheck__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, udemy_ros2_pkg, srv, OddEvenCheck)() {
  return &udemy_ros2_pkg::srv::typesupport_fastrtps_cpp::_OddEvenCheck__handle;
}

#ifdef __cplusplus
}
#endif
