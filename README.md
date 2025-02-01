Personal project for an autonomous drone with ROS2 and PX4

Newbie project

Based at first on this tutorial.

https://docs.px4.io/main/en/ros2/user_guide#humble

Archived version

https://web.archive.org/web/20250201192518/https://docs.px4.io/main/en/ros2/user_guide#humble

SW versions:

Ubuntu: 24.04.1 LTS

ROS2: Jazzy

PX4: 1.15.2


BASIC setup:

1. Install PX4

2. Install ROS2

3. Install microXRCE

BASIC running:

1. Run microXRCE. 
```console
MicroXRCEAgent udp4 -p 8888
```

2. Run PX4. From the PX4-Autopilot folder. 
```console
make px4_sitl gz_x500
```

3. On the "ws" folder
```console
colcon build
```