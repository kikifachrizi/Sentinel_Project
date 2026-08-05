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
    ekf_config          = os.path.join(pkg_share, 'config', 'ekf.yaml')
    lidar_filter_config = os.path.join(pkg_share, 'config', 'laser_filter.yaml')
    twist_mux_config    = os.path.join(pkg_share, 'config', 'twist_mux.yaml')

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

    laser_filter_node = Node(
        package='laser_filters',
        executable='scan_to_scan_filter_chain',
        parameters=[lidar_filter_config, {'use_sim_time': False}],
        remappings=[('scan', '/scan'), ('scan_filtered', '/scan_filtered')]
    )
    rf2o_node = Node(
        package='rf2o_laser_odometry',
        executable='rf2o_laser_odometry_node',
        name='rf2o_laser_odometry',
        output='log',
        arguments=['--ros-args', '--log-level', 'warn'],
        parameters=[{
            'laser_scan_topic': '/scan_filtered', 'odom_topic': '/odom_rf2o',
            'publish_tf': False, 'base_frame_id': 'base_link',
            'odom_frame_id': 'odom', 'init_pose_from_topic': '', 'freq': 10.0
        }],
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
    ekf_node = Node(
        package='robot_localization', executable='ekf_node',
        name='ekf_filter_node', output='log', parameters=[ekf_config]
    )
    twist_mux = Node(
        package='twist_mux', executable='twist_mux', name='twist_mux', output='log',
        arguments=['--ros-args', '--log-level', 'warn'],
        parameters=[twist_mux_config],
        remappings=[('cmd_vel_out', '/diff_cont/cmd_vel_unstamped_raw')]  # absolute path
    )

    layer2_on_controller_start = RegisterEventHandler(
        event_handler=OnProcessStart(
            target_action=controller_manager,
            on_start=[diff_drive_spawner, joint_state_broadcaster_spawner, twist_mux]
        )
    )


    # =========================================================================
    # RETURN
    # =========================================================================
    return LaunchDescription([
        rsp,
        controller_manager,
        layer2_on_controller_start,
    ])