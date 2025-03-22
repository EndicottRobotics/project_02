// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from endicott_interfaces:msg/MoveStatus.idl
// generated code does not contain a copyright notice

#ifndef ENDICOTT_INTERFACES__MSG__DETAIL__MOVE_STATUS__STRUCT_HPP_
#define ENDICOTT_INTERFACES__MSG__DETAIL__MOVE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__endicott_interfaces__msg__MoveStatus __attribute__((deprecated))
#else
# define DEPRECATED__endicott_interfaces__msg__MoveStatus __declspec(deprecated)
#endif

namespace endicott_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MoveStatus_
{
  using Type = MoveStatus_<ContainerAllocator>;

  explicit MoveStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
      this->distance_error = 0.0;
      this->theta_error = 0.0;
    }
  }

  explicit MoveStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
      this->distance_error = 0.0;
      this->theta_error = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _distance_error_type =
    double;
  _distance_error_type distance_error;
  using _theta_error_type =
    double;
  _theta_error_type theta_error;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__distance_error(
    const double & _arg)
  {
    this->distance_error = _arg;
    return *this;
  }
  Type & set__theta_error(
    const double & _arg)
  {
    this->theta_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    endicott_interfaces::msg::MoveStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const endicott_interfaces::msg::MoveStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<endicott_interfaces::msg::MoveStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<endicott_interfaces::msg::MoveStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      endicott_interfaces::msg::MoveStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<endicott_interfaces::msg::MoveStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      endicott_interfaces::msg::MoveStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<endicott_interfaces::msg::MoveStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<endicott_interfaces::msg::MoveStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<endicott_interfaces::msg::MoveStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__endicott_interfaces__msg__MoveStatus
    std::shared_ptr<endicott_interfaces::msg::MoveStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__endicott_interfaces__msg__MoveStatus
    std::shared_ptr<endicott_interfaces::msg::MoveStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->distance_error != other.distance_error) {
      return false;
    }
    if (this->theta_error != other.theta_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveStatus_

// alias to use template instance with default allocator
using MoveStatus =
  endicott_interfaces::msg::MoveStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace endicott_interfaces

#endif  // ENDICOTT_INTERFACES__MSG__DETAIL__MOVE_STATUS__STRUCT_HPP_
