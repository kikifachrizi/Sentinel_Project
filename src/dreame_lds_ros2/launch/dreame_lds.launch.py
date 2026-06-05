import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    pkg = get_package_share_directory('dreame_lds_ros2')

    use_rviz = LaunchConfiguration('use_rviz', default='true')

    return LaunchDescription([
        DeclareLaunchArgument(
            'use_rviz',
            default_value='true',
            description='Launch RViz2 automatically'
        ),

        Node(
            package='dreame_lds_ros2',
            executable='dreame_lds_node',
            name='dreame_lds',
            output='screen',
            parameters=[os.path.join(pkg, 'params', 'dreame_lds.yaml')],
        ),

        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output='screen',
            arguments=['-d', os.path.join(pkg, 'config', 'dreame_lds.rviz')],
            condition=IfCondition(use_rviz),
        ),
    ])
