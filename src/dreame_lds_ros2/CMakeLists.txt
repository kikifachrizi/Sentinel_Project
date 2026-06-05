cmake_minimum_required(VERSION 3.8)
project(dreame_lds_ros2)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)

add_executable(dreame_lds_node src/dreame_lds_node.cpp)
target_compile_features(dreame_lds_node PRIVATE cxx_std_17)
ament_target_dependencies(dreame_lds_node rclcpp sensor_msgs)

install(TARGETS dreame_lds_node
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY launch config params
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
