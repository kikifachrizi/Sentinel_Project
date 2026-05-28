import os
from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, OpaqueFunction
from launch.actions import RegisterEventHandler
from launch.event_handlers import OnProcessExit
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution

from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    # --- PERBAIKAN 1: Daftarkan Path Mesh untuk Gazebo ---
    pkg_share = get_package_share_directory('sentinel_publisher')
    # Pointing ke folder 'share' agar Gazebo bisa mengenali prefix 'sentinel_publisher/...'
    os.environ['GZ_SIM_RESOURCE_PATH'] = os.path.join(pkg_share, '..')

    # Launch Arguments
    use_sim_time = LaunchConfiguration('use_sim_time', default=True)

    def robot_state_publisher(context):
        performed_description_format = LaunchConfiguration('description_format').perform(context)
        robot_description_content = Command(
            [
                PathJoinSubstitution([FindExecutable(name='xacro')]),
                ' ',
                PathJoinSubstitution([
                    FindPackageShare('sentinel_publisher'),
                    "description",
                    f'robot.{performed_description_format}.xacro'
                ]),
            ]
        )
        robot_description = {'robot_description': robot_description_content}
        node_robot_state_publisher = Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            output='screen',
            parameters=[robot_description, {'use_sim_time': use_sim_time}]
        )
        return [node_robot_state_publisher]

    robot_controllers = PathJoinSubstitution([
        FindPackageShare('sentinel_publisher'),
        'config',
        'my_controllers.yaml',
    ])

    gz_spawn_entity = Node(
        package='ros_gz_sim',
        executable='create',
        output='screen',
        arguments=['-topic', 'robot_description', '-name',
                   'diff_drive', '-allow_renaming', 'true'],
    )

    joint_state_broadcaster_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=['joint_state_broadcaster'],
    )
    diff_drive_base_controller_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=[
            'diff_drive_base_controller',
            '--param-file',
            robot_controllers,
        ],
    )

    # --- PERBAIKAN 2: Konsolidasi Parameter Bridge ---
    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock',
            '/scan@sensor_msgs/msg/LaserScan@gz.msgs.LaserScan',
            '/imu@sensor_msgs/msg/Imu@gz.msgs.IMU'  # Pastikan topik IMU terdaftar
        ],
        parameters=[{
            "qos_overrides./tf_static.publisher.durability": "transient_local"},
            {'use_sim_time': use_sim_time}
        ],
        output='screen'
    )

    lidar_filtered = Node(
        package='laser_filters',
        executable='scan_to_scan_filter_chain',
        parameters=[
            PathJoinSubstitution([
                FindPackageShare('sentinel_publisher'),
                'config',
                'laser_filter.yaml'
            ]),
            {'use_sim_time': use_sim_time}
        ],
        remappings=[
            ('scan', '/scan'),
            ('scan_filtered', '/filtered_scan')
        ],
        output='screen'
    )

    ld = LaunchDescription([
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                PathJoinSubstitution([
                    FindPackageShare('ros_gz_sim'),
                    'launch',
                    'gz_sim.launch.py'
                ])
            ),
            launch_arguments={
                'gz_args': [
                    '-r -v 1 ',
                    PathJoinSubstitution([
                        FindPackageShare('sentinel_publisher'),
                        'worlds',
                        'industrial-warehouse.sdf'
                    ])
                ]
            }.items()
        ),
        RegisterEventHandler(
            event_handler=OnProcessExit(
                target_action=gz_spawn_entity,
                on_exit=[joint_state_broadcaster_spawner],
            )
        ),
        RegisterEventHandler(
            event_handler=OnProcessExit(
                target_action=joint_state_broadcaster_spawner,
                on_exit=[diff_drive_base_controller_spawner],
            )
        ),
        
        # Eksekusi Node yang sudah dirapikan
        bridge,
        gz_spawn_entity,
        lidar_filtered,

        DeclareLaunchArgument(
            'use_sim_time',
            default_value=use_sim_time,
            description='If true, use simulated clock'),
        DeclareLaunchArgument(
            'description_format',
            default_value='urdf',
            description='Robot description format to use, urdf or sdf'),
        
        Node(
            package='sentinel_publisher',
            executable='twist_to_stamped',
            remappings=[
                ('cmd_vel_in', '/cmd_vel_nav'),
                ('cmd_vel_out', '/diff_drive_base_controller/cmd_vel')
            ],
            output='screen'
        ),
    ])
    ld.add_action(OpaqueFunction(function=robot_state_publisher))
    return ld