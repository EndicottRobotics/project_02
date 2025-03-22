// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from endicott_interfaces:msg/MoveStatus.idl
// generated code does not contain a copyright notice

#ifndef ENDICOTT_INTERFACES__MSG__DETAIL__MOVE_STATUS__BUILDER_HPP_
#define ENDICOTT_INTERFACES__MSG__DETAIL__MOVE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "endicott_interfaces/msg/detail/move_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace endicott_interfaces
{

namespace msg
{

namespace builder
{

class Init_MoveStatus_theta_error
{
public:
  explicit Init_MoveStatus_theta_error(::endicott_interfaces::msg::MoveStatus & msg)
  : msg_(msg)
  {}
  ::endicott_interfaces::msg::MoveStatus theta_error(::endicott_interfaces::msg::MoveStatus::_theta_error_type arg)
  {
    msg_.theta_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::endicott_interfaces::msg::MoveStatus msg_;
};

class Init_MoveStatus_distance_error
{
public:
  explicit Init_MoveStatus_distance_error(::endicott_interfaces::msg::MoveStatus & msg)
  : msg_(msg)
  {}
  Init_MoveStatus_theta_error distance_error(::endicott_interfaces::msg::MoveStatus::_distance_error_type arg)
  {
    msg_.distance_error = std::move(arg);
    return Init_MoveStatus_theta_error(msg_);
  }

private:
  ::endicott_interfaces::msg::MoveStatus msg_;
};

class Init_MoveStatus_state
{
public:
  Init_MoveStatus_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveStatus_distance_error state(::endicott_interfaces::msg::MoveStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_MoveStatus_distance_error(msg_);
  }

private:
  ::endicott_interfaces::msg::MoveStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::endicott_interfaces::msg::MoveStatus>()
{
  return endicott_interfaces::msg::builder::Init_MoveStatus_state();
}

}  // namespace endicott_interfaces

#endif  // ENDICOTT_INTERFACES__MSG__DETAIL__MOVE_STATUS__BUILDER_HPP_
