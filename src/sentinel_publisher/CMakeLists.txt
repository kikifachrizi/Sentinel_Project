cmake_minimum_required(VERSION 3.8)
project(sentinel_publisher)

# ===============================
# Compiler options
# ===============================
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# ===============================
# Dependencies (SEMUA DIPERTAHANKAN)
# ===============================
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav2_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(PostgreSQL REQUIRED)
find_package(nlohmann_json REQUIRED)
find_package(rcl_interfaces REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(lifecycle_msgs REQUIRED)

# ===============================
# Include directories
# ===============================
include_directories(include)

# ===============================
# Install other resources
# ===============================
install(
  DIRECTORY
    description
    meshes
  DESTINATION share/${PROJECT_NAME}
)

# ===============================
# Testing
# ===============================
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
