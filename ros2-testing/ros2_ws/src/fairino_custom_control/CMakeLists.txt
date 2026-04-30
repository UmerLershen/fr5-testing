cmake_minimum_required(VERSION 3.8)
project(fairino_custom_control)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(rclcpp REQUIRED)
find_package(fairino5_v6_moveit2_config REQUIRED)
find_package(fairino_description REQUIRED)
# find_package(fairino_hardware REQUIRED)
find_package(fairino_msgs REQUIRED)
find_package(dh_ag95_description REQUIRED)
find_package(dh_gripper_driver REQUIRED)

add_executable(fairino_custom_control src/fairino_custom_control.cpp)
target_include_directories(fairino_custom_control PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/${PROJECT_NAME}>)
target_compile_features(fairino_custom_control PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
  fairino_custom_control
  "moveit_ros_planning_interface"
  "rclcpp"
  "fairino5_v6_moveit2_config"
  "fairino_description"
  # "fairino_hardware"
  "fairino_msgs"
  "dh_ag95_description"
  "dh_gripper_driver"
)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

# Install the C++ executable
install(TARGETS fairino_custom_control
  DESTINATION lib/${PROJECT_NAME})

# Install the non-compiled folders
install(DIRECTORY description launch
  DESTINATION share/${PROJECT_NAME})
  
ament_package()
