// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/NavigatorStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "px4_msgs/msg/navigator_status.hpp"


#ifndef PX4_MSGS__MSG__DETAIL__NAVIGATOR_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__NAVIGATOR_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/navigator_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NavigatorStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: nav_state
  {
    out << "nav_state: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_state, out);
    out << ", ";
  }

  // member: failure
  {
    out << "failure: ";
    rosidl_generator_traits::value_to_yaml(msg.failure, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigatorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: nav_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_state: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_state, out);
    out << "\n";
  }

  // member: failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failure: ";
    rosidl_generator_traits::value_to_yaml(msg.failure, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigatorStatus & msg, bool use_flow_style = false)
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

}  // namespace px4_msgs

namespace rosidl_generator_traits
{

[[deprecated("use px4_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const px4_msgs::msg::NavigatorStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::NavigatorStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::NavigatorStatus>()
{
  return "px4_msgs::msg::NavigatorStatus";
}

template<>
inline const char * name<px4_msgs::msg::NavigatorStatus>()
{
  return "px4_msgs/msg/NavigatorStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::NavigatorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::NavigatorStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::NavigatorStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__NAVIGATOR_STATUS__TRAITS_HPP_
