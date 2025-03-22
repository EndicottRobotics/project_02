cmake_minimum_required(VERSION 3.8)
project(project_03)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Set CMAKE_PREFIX_PATH to include the path where endicott_interfaces is located
#set(CMAKE_PREFIX_PATH "${CMAKE_PREFIX_PATH};~/ros2_ws/src/endicott_interfaces")

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED) 
find_package(ament_index_cpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(std_msgs REQUIRED)
find_package(std_srvs REQUIRED)
find_package(turtlesim REQUIRED)
#find_package(endicott_interfaces REQUIRED)

ament_export_dependencies(rosidl_default_runtime)

# Create executable for goto_node
add_executable(goto_target_node src/goto_target_node.cpp)
ament_target_dependencies(goto_target_node rclcpp turtlesim geometry_msgs std_msgs endicott_interfaces)
target_include_directories(project_03 PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

# Create executable for target_publisher_node
add_executable(target_sequence_node src/target_sequence_node.cpp)
ament_target_dependencies(target_sequence_node rclcpp turtlesim geometry_msgs std_msgs endicott_interfaces)
target_include_directories(project_03 PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)

# Set the required C++ features
target_compile_features(project_03 PUBLIC c_std_99 cxx_std_17)

# Install the goto_node executable
install(TARGETS goto_node
  DESTINATION lib/${PROJECT_NAME})

# Testing and linting setup
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()