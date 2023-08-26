// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from udemy_ros2_pkg:srv/TurnCamera.idl
// generated code does not contain a copyright notice

#ifndef UDEMY_ROS2_PKG__SRV__DETAIL__TURN_CAMERA__BUILDER_HPP_
#define UDEMY_ROS2_PKG__SRV__DETAIL__TURN_CAMERA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "udemy_ros2_pkg/srv/detail/turn_camera__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace udemy_ros2_pkg
{

namespace srv
{

namespace builder
{

class Init_TurnCamera_Request_degree_turn
{
public:
  Init_TurnCamera_Request_degree_turn()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::udemy_ros2_pkg::srv::TurnCamera_Request degree_turn(::udemy_ros2_pkg::srv::TurnCamera_Request::_degree_turn_type arg)
  {
    msg_.degree_turn = std::move(arg);
    return std::move(msg_);
  }

private:
  ::udemy_ros2_pkg::srv::TurnCamera_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::udemy_ros2_pkg::srv::TurnCamera_Request>()
{
  return udemy_ros2_pkg::srv::builder::Init_TurnCamera_Request_degree_turn();
}

}  // namespace udemy_ros2_pkg


namespace udemy_ros2_pkg
{

namespace srv
{

namespace builder
{

class Init_TurnCamera_Response_image
{
public:
  Init_TurnCamera_Response_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::udemy_ros2_pkg::srv::TurnCamera_Response image(::udemy_ros2_pkg::srv::TurnCamera_Response::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::udemy_ros2_pkg::srv::TurnCamera_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::udemy_ros2_pkg::srv::TurnCamera_Response>()
{
  return udemy_ros2_pkg::srv::builder::Init_TurnCamera_Response_image();
}

}  // namespace udemy_ros2_pkg

#endif  // UDEMY_ROS2_PKG__SRV__DETAIL__TURN_CAMERA__BUILDER_HPP_
