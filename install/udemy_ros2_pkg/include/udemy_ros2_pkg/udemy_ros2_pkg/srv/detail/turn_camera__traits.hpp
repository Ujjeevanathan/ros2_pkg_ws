// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from udemy_ros2_pkg:srv/TurnCamera.idl
// generated code does not contain a copyright notice

#ifndef UDEMY_ROS2_PKG__SRV__DETAIL__TURN_CAMERA__TRAITS_HPP_
#define UDEMY_ROS2_PKG__SRV__DETAIL__TURN_CAMERA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "udemy_ros2_pkg/srv/detail/turn_camera__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace udemy_ros2_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurnCamera_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: degree_turn
  {
    out << "degree_turn: ";
    rosidl_generator_traits::value_to_yaml(msg.degree_turn, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurnCamera_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: degree_turn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "degree_turn: ";
    rosidl_generator_traits::value_to_yaml(msg.degree_turn, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurnCamera_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace udemy_ros2_pkg

namespace rosidl_generator_traits
{

[[deprecated("use udemy_ros2_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const udemy_ros2_pkg::srv::TurnCamera_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  udemy_ros2_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use udemy_ros2_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const udemy_ros2_pkg::srv::TurnCamera_Request & msg)
{
  return udemy_ros2_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<udemy_ros2_pkg::srv::TurnCamera_Request>()
{
  return "udemy_ros2_pkg::srv::TurnCamera_Request";
}

template<>
inline const char * name<udemy_ros2_pkg::srv::TurnCamera_Request>()
{
  return "udemy_ros2_pkg/srv/TurnCamera_Request";
}

template<>
struct has_fixed_size<udemy_ros2_pkg::srv::TurnCamera_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<udemy_ros2_pkg::srv::TurnCamera_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<udemy_ros2_pkg::srv::TurnCamera_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace udemy_ros2_pkg
{

namespace srv
{

inline void to_flow_style_yaml(
  const TurnCamera_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurnCamera_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurnCamera_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace udemy_ros2_pkg

namespace rosidl_generator_traits
{

[[deprecated("use udemy_ros2_pkg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const udemy_ros2_pkg::srv::TurnCamera_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  udemy_ros2_pkg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use udemy_ros2_pkg::srv::to_yaml() instead")]]
inline std::string to_yaml(const udemy_ros2_pkg::srv::TurnCamera_Response & msg)
{
  return udemy_ros2_pkg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<udemy_ros2_pkg::srv::TurnCamera_Response>()
{
  return "udemy_ros2_pkg::srv::TurnCamera_Response";
}

template<>
inline const char * name<udemy_ros2_pkg::srv::TurnCamera_Response>()
{
  return "udemy_ros2_pkg/srv/TurnCamera_Response";
}

template<>
struct has_fixed_size<udemy_ros2_pkg::srv::TurnCamera_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<udemy_ros2_pkg::srv::TurnCamera_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<udemy_ros2_pkg::srv::TurnCamera_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<udemy_ros2_pkg::srv::TurnCamera>()
{
  return "udemy_ros2_pkg::srv::TurnCamera";
}

template<>
inline const char * name<udemy_ros2_pkg::srv::TurnCamera>()
{
  return "udemy_ros2_pkg/srv/TurnCamera";
}

template<>
struct has_fixed_size<udemy_ros2_pkg::srv::TurnCamera>
  : std::integral_constant<
    bool,
    has_fixed_size<udemy_ros2_pkg::srv::TurnCamera_Request>::value &&
    has_fixed_size<udemy_ros2_pkg::srv::TurnCamera_Response>::value
  >
{
};

template<>
struct has_bounded_size<udemy_ros2_pkg::srv::TurnCamera>
  : std::integral_constant<
    bool,
    has_bounded_size<udemy_ros2_pkg::srv::TurnCamera_Request>::value &&
    has_bounded_size<udemy_ros2_pkg::srv::TurnCamera_Response>::value
  >
{
};

template<>
struct is_service<udemy_ros2_pkg::srv::TurnCamera>
  : std::true_type
{
};

template<>
struct is_service_request<udemy_ros2_pkg::srv::TurnCamera_Request>
  : std::true_type
{
};

template<>
struct is_service_response<udemy_ros2_pkg::srv::TurnCamera_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UDEMY_ROS2_PKG__SRV__DETAIL__TURN_CAMERA__TRAITS_HPP_
