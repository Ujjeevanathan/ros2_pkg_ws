// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from udemy_ros2_pkg:srv/OddEvenCheck.idl
// generated code does not contain a copyright notice

#ifndef UDEMY_ROS2_PKG__SRV__DETAIL__ODD_EVEN_CHECK__BUILDER_HPP_
#define UDEMY_ROS2_PKG__SRV__DETAIL__ODD_EVEN_CHECK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "udemy_ros2_pkg/srv/detail/odd_even_check__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace udemy_ros2_pkg
{

namespace srv
{

namespace builder
{

class Init_OddEvenCheck_Request_number
{
public:
  Init_OddEvenCheck_Request_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::udemy_ros2_pkg::srv::OddEvenCheck_Request number(::udemy_ros2_pkg::srv::OddEvenCheck_Request::_number_type arg)
  {
    msg_.number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::udemy_ros2_pkg::srv::OddEvenCheck_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::udemy_ros2_pkg::srv::OddEvenCheck_Request>()
{
  return udemy_ros2_pkg::srv::builder::Init_OddEvenCheck_Request_number();
}

}  // namespace udemy_ros2_pkg


namespace udemy_ros2_pkg
{

namespace srv
{

namespace builder
{

class Init_OddEvenCheck_Response_decision
{
public:
  Init_OddEvenCheck_Response_decision()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::udemy_ros2_pkg::srv::OddEvenCheck_Response decision(::udemy_ros2_pkg::srv::OddEvenCheck_Response::_decision_type arg)
  {
    msg_.decision = std::move(arg);
    return std::move(msg_);
  }

private:
  ::udemy_ros2_pkg::srv::OddEvenCheck_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::udemy_ros2_pkg::srv::OddEvenCheck_Response>()
{
  return udemy_ros2_pkg::srv::builder::Init_OddEvenCheck_Response_decision();
}

}  // namespace udemy_ros2_pkg

#endif  // UDEMY_ROS2_PKG__SRV__DETAIL__ODD_EVEN_CHECK__BUILDER_HPP_
