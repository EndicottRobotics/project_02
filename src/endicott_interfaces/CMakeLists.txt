cmake_minimum_required(VERSION 3.8)
project(endicott_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED) 


# Generate message interfaces
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/MoveStatus.msg"
  DEPENDENCIES std_msgs
)
ament_export_dependencies(rosidl_default_runtime)
#rosidl_get_typesupport_target(cpp_typesupport_target "${PROJECT_NAME}" "rosidl_typesupport_cpp")

# Install directories for ROS 2
#install(
#3DIRECTORY include/
#  DESTINATION include/${PROJECT_NAME}
#)

ament_export_dependencies(rosidl_default_runtime)

# Ensure the package is registered with ament
ament_package()
