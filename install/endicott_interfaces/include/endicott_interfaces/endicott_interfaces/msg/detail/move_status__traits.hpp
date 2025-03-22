// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from endicott_interfaces:msg/MoveStatus.idl
// generated code does not contain a copyright notice

#ifndef ENDICOTT_INTERFACES__MSG__DETAIL__MOVE_STATUS__TRAITS_HPP_
#define ENDICOTT_INTERFACES__MSG__DETAIL__MOVE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "endicott_interfaces/msg/detail/move_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace endicott_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MoveStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: distance_error
  {
    out << "distance_error: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_error, out);
    out << ", ";
  }

  // member: theta_error
  {
    out << "theta_error: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: distance_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_error: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_error, out);
    out << "\n";
  }

  // member: theta_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_error: ";
    rosidl_generator_traits::value_to_yaml(msg.theta_error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace endicott_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use endicott_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const endicott_interfaces::msg::MoveStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  endicott_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use endicott_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const endicott_interfaces::msg::MoveStatus & msg)
{
  return endicott_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<endicott_interfaces::msg::MoveStatus>()
{
  return "endicott_interfaces::msg::MoveStatus";
}

template<>
inline const char * name<endicott_interfaces::msg::MoveStatus>()
{
  return "endicott_interfaces/msg/MoveStatus";
}

template<>
struct has_fixed_size<endicott_interfaces::msg::MoveStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<endicott_interfaces::msg::MoveStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<endicott_interfaces::msg::MoveStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ENDICOTT_INTERFACES__MSG__DETAIL__MOVE_STATUS__TRAITS_HPP_
