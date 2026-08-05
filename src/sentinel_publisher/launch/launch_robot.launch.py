import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import (
    IncludeLaunchDescription, TimerAction,
    RegisterEventHandler, DeclareLaunchArgument,
)
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, LaunchConfiguration
from launch.event_handlers import OnProcessStart, OnProcessExit
from launch_ros.actions import Node


def generate_launch_description():
    package_name = 'sentinel_publisher'
    lidar_pkg    = 'dreame_lds_ros2'

    pkg_share           = get_package_share_directory(package_name)
    xacro_file          = os.path.join(pkg_share, 'description', 'robot.urdf.xacro')
    controller_params   = os.path.join(pkg_share, 'config', 'my_controllers.yaml')

    robot_description = Command(['xacro ', xacro_file])

    rsp = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(pkg_share, 'launch', 'rsp.launch.py')),
        launch_arguments={'use_sim_time': 'false'}.items()
    )
    rplidar_activate = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory(lidar_pkg), 'launch', 'dreame_lds.launch.py')
        ),
        launch_arguments={'use_rviz': 'false'}.items()
    )

    controller_manager = Node(
        package='controller_manager',
        executable='ros2_control_node',
        parameters=[{'robot_description': robot_description}, controller_params]
    )

    diff_drive_spawner = Node(
        package='controller_manager', executable='spawner', arguments=['diff_cont']
    )
    joint_state_broadcaster_spawner = Node(
        package='controller_manager', executable='spawner', arguments=['joint_state_broadcaster']
    )

    twist_to_stamped_node = Node(
        package='sentinel_publisher',
        executable='twist_to_stamped',
        remappings=[
            ('cmd_vel_in', '/cmd_vel'),
            ('cmd_vel_out', '/diff_cont/cmd_vel')
        ],
        output='screen'
    )

    return LaunchDescription([
        rsp, 
        rplidar_activate,
        controller_manager,
        diff_drive_spawner,
        joint_state_broadcaster_spawner,
        twist_to_stamped_node
    ])
