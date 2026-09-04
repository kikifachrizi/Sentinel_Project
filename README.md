# SENTINEL: Adaptive Traction Control for Differential AMR using TinyML Surface Classification on μT-Kernel 3.0
![ROS2](https://img.shields.io/badge/ROS2-Jazzy-3498DB?logo=ros)
![TinyML](https://img.shields.io/badge/TinyML-Active-4CAF50)
![uT-Kernel](https://img.shields.io/badge/uTkernel-Active-4CAF50)
![C/C++](https://img.shields.io/badge/C/C++-Firmware-00599C?logo=c%2B%2B)
![Platform](https://img.shields.io/badge/Platform-NUCLEO--H533RE-03234B)

* [Introduction](#introduction)
  * [Problem](#problem)
  * [System Overview](#system-overview)
  * [Demo](#demo)
* [Hardware](#hardware)
  * [Electronics Design](#electronics-design)
  * [Required Components](#required-components)
  * [Pin Configuration](#pin-configuration)
* [Firmware Architecture](#firmware-architecture)
  * [Task Structure & Priority](#section-11)
* [TinyML PipeLine](#tinyml-pipeline)
* [ros2-integration](#ros2-integration)
* [result](#result)
* [Reproducing the ML Pipeline](#reproducing-the-ml-pipeline)
* [License](#license)

---

### Introduction
hallo, my name is rifqy fachrizi, called kiki. Sentinel-Project repository is my research project about RTOS and emebedded system, here i learned how to use RTOS on STM32, especially using uT-kernel 3.0 and combined with TinyML.
my research based on my experience, and i have many AMR project so why i dont use my platform for implementation this method? and i'll do it. on my AMR , i just enhanced the controller system using stm32-nucleo-h533re from arduino nano. and i'm using 

#### Problem 
AMR didnt know the surface character, like textured surface, normal or slippery. the matter of slippery surface for AMR is, sometime the wheel will slip, so from that problem this friction-classification is made.

#### System Overview
![system](/images/system_overview.png)

### Demo 
<table border="0" cellspacing="0" cellpadding="0">
  <tr>
    <td align="center"><img src="images/Demo_TRON_robot.gif" height="250" /></td>
    <td align="center"><img src="images/Demo_TRON_ws.gif" height="250" /></td>
  </tr>
  <tr>
    <td align="center">Robot Demo on Different Surface</td>
    <td align="center"> ROS Workspace and uT-Kernel Surface Classifier</td>
  </tr>
</table>

### Robot Design / URDF
<table border="0" cellspacing="0" cellpadding="0">
  <tr>
    <td align="center"><img src="images/design.gif" height="250" /></td>
    <td align="center"><img src="images/sentinel_mini.gif" height="250" /></td>
  </tr>
  <tr>
    <td align="center"><b>Normal Version 50x45x30 cm</b></td>
    <td align="center"><b>Mini Version 37x26x22 cm</b></td>
  </tr>
</table>

---

### Hardware
#### Electronics Design 
![PCB design](/images/sentinel_pcb.jpeg)


#### Required Components

|No | Component | Description | Manufacturer | Quantity
|---| --------  | ----------- | ------------ | ---------
|1  | STM32 Nucleo H533RE | TinyML integration with uT-kernel 3.0 | STMicroelectronics | 1
|2  | PCB Board   | shiled board for Nucleo H533RE |             | 1
|3  | MPU6050     | accel and gyro sensor for traction and surface Classification |             | 1
|4  | INA219      | current sensor for traction and surface Classification |              | 2
|5  | PG45 MotorDC with Encoder | Aktuator and Rotary Sensor | | 2
|6  | RPLidar A2M8/A1M12 | range laser sensor | Slamtec | 1
|7  | Robot Frame | frame robot structure |      | 1
|8  | BTS7960 | motor driver | | 2
|9  | Lippo Onbo 3S 11.1V | power supply | Onbo | 1

#### Pin Configuration

<table border="0">
  <th>
    Function
  </th>
  <th>
    Pin Config
  </th>
  <th>
    Port
  </th>
    <th>
    Function
  </th>
  <th>
    Pin Config
  </th>
  <th>
    Port
  </th>
  <tr>
    <td rowspan="2">VCP</td>
    <td>PA2</td>
    <td>RX</td>
    <td rowspan="4">Encoder Right</td>
    <td rowspan="2">PA7</td>
    <td rowspan="2">Ch1</td>
  </tr>
  <tr>
    <td>PA3</td>
    <td>TX</td>

  </tr>
  <tr>
    <td rowspan="2">Serial Com</td>
    <td>PB15</td>
    <td>RX</td>
    <td rowspan="2">PA6</td>
    <td rowspan="2">Ch2</td>
  </tr>
  <tr>
    <td>PB14</td>
    <td>TX</td>
  </tr>
  <tr>
    <td rowspan="3">Motor DC Right</td>
    <td>PC10</td>
    <td>Dir1</td>
    <td rowspan="2">Encoder Left</td>
    <td>PA0</td>
    <td>Ch1</td>
  </tr>
  <tr>
    <td>PC4</td>
    <td>Dir2</td>
    <td>PA1</td>
    <td>Ch2</td>
  </tr>
  <tr>
    <td>PB6</td>
    <td>Pwm</td>
    <td rowspan="2"><strong>PCA9548A/TCA9548A</strong>
    </td>
    <td>PB7</td>
    <td>SDA</td>
  </tr>
  <tr>
    <td rowspan="3"><strong>Motor DC Left</strong></td>
    <td>PA5</td>
    <td>Dir1</td>
    <td>PB8</td>
    <td>SCL</td>
  </tr>
  <tr>
    <td>PC12</td>
    <td>Dir2</td>
    <td rowspan="2"><strong>MPU6050</strong></td>
    <td>PCA_SD0</td>
    <td>SDA</td>
  </tr>
  <tr>
    <td>PB13</td>
    <td>Pwm</td>
    <td>PCA_SC0</td>
    <td>SCL</td>
  </tr>
  <tr>
    <td rowspan="2"><strong>INA219_1</strong></td>
    <td>PCA_SD1</td>
    <td>SDA</td>
    <td rowspan="2"><strong>INA219_2</strong></td>
    <td>PCA_SD2</td>
    <td>SDA</td>
  </tr>
  <tr>
    <td>PCA_SC1</td>
    <td>SCL</td>
    <td>PCS_SC2</td>
    <td>SCL</td>
  </tr>
</table>


### Firmware Architecture (uT-Kernel 3.0) 
#### Task Structure & Priority
#### PID + FeedForward
#### Uart Comm (Interrupt-driven)
#### Sentinel Task

---
## TinyML Pipeline
### Dataset Collection
- 4 permukaan, 120 run, pola manuver
- Kenapa maju-mundur
### Feature Engineering
- 84 fitur invarian
- Kenapa tegangan dibuang (kebocoran sesi)
### Model Selection & Validation
- GroupKFold per run — kenapa penting
- Perbandingan model
- Voting temporal
### Gain Scheduling
- Eksperimen per permukaan
- Kenapa hanya LOADED yang berbeda
- Hysteresis & bumpless transfer

---

## ROS2 Integration
### diffdrive_arduino plugin
### sentinel_classifier_node
### Topics

---

## Results
### Classification Accuracy
### Timing (DWT)
### Known Limitations

---

## Reproducing the ML Pipeline
[instruksi jalankan sentinel_ml_pipeline.py]

---
### License
> This project was submitted to TRON Programming Contest 2026.
> Original work by Rifqy Fachrizi, Diagonal Robotics.