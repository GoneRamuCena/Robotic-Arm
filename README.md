# 🤖 Bluetooth-Controlled 4-DOF Robotic Arm Using Arduino Mega

A robotic arm project that enables **wireless control of a 4-Degree-of-Freedom (4-DOF) robotic arm using a mobile phone and an HC-05 Bluetooth module**. The system uses an Arduino Mega to control four servo motors based on commands received through a mobile UI application.

## 📌 Project Overview

The objective of this project is to develop a robotic arm that can be controlled remotely through a mobile phone using Bluetooth communication.

Four servo motors are integrated with the robotic arm structure and connected to an Arduino Mega. An HC-05 Bluetooth module provides wireless communication between the mobile UI application and the Arduino.

## 🎯 Project Objectives

* Build a 4-DOF robotic arm using servo motors.
* Control the robotic arm using a mobile phone.
* Establish wireless communication using the HC-05 Bluetooth module.
* Interface the servo motors and Bluetooth module with an Arduino Mega.
* Develop a mobile-based user interface for controlling the arm.

## 🛠️ Hardware Requirements

| Component              |    Quantity | Purpose                        |
| ---------------------- | ----------: | ------------------------------ |
| Arduino Mega           |           1 | Main controller                |
| HC-05 Bluetooth Module |           1 | Wireless communication         |
| Servo Motors           |           4 | Control the robotic arm joints |
| Breadboard             |           1 | Circuit connections            |
| Jumper Wires           | As required | Electrical connections         |
| Battery Source         | As required | Power supply for the servos    |
| USB Cable              |           1 | Programming the Arduino        |
| Screws and Nuts        | As required | Mechanical assembly            |

## 💻 Software Requirements

* **Arduino IDE** — To write and upload code to the Arduino Mega.
* **Mobile UI Application** — To send control commands through Bluetooth.
* **Arduino Program** — To process commands and control the servo motors.
* **Robotic Arm CAD File** — For the mechanical design reference.

## ⚙️ System Architecture

The system consists of three main components:

1. **Mobile UI:** Provides the interface for sending control commands.
2. **HC-05 Bluetooth Module:** Receives wireless commands from the mobile phone and communicates with the Arduino Mega.
3. **Arduino Mega and Servo Motors:** Process the commands and move the robotic arm joints.

### Working Principle

1. The user opens the control UI application on a mobile phone.
2. Bluetooth is enabled on the phone.
3. The user connects to the HC-05 Bluetooth module.
4. Control commands are transmitted wirelessly to the Arduino Mega.
5. The Arduino processes the received commands.
6. The four servo motors move according to the programmed control logic.

## 🔌 Circuit Connections

### 1. Servo Motors to Arduino Mega

The presentation specifies the following servo signal pin connections:

| Servo Signal | Arduino Mega Pin |
| ------------ | ---------------: |
| Servo X      |                9 |
| Servo Y      |               10 |
| Servo Z      |               11 |
| Servo G      |               12 |

### 2. Servo Motors to Battery

| Servo Connection | Battery Terminal                |
| ---------------- | ------------------------------- |
| VCC              | Positive terminal (Anode)       |
| GND              | Negative terminal (Cathode/GND) |

**Important:** Verify the required servo voltage and current before connecting the battery. Ensure the Arduino and servo power supplies share a common ground where required.

### 3. HC-05 Bluetooth Module to Arduino Mega

| HC-05 Pin | Arduino Mega Pin                                   |
| --------- | -------------------------------------------------- |
| TX        | RX1 (Pin 19)                                       |
| RX        | TX1 (Pin 18)                                       |
| VCC       | 5V, subject to the breakout board's specifications |
| GND       | GND                                                |

**Note:** The HC-05 module's RX input may require 3.3V logic. Check your specific breakout board and use suitable voltage-level conversion if needed.

## 🔧 Project Implementation Procedure

1. Assemble the robotic arm structure and install the four servo motors.
2. Connect the servo motors to the designated Arduino Mega pins.
3. Connect the HC-05 Bluetooth module to the Arduino Mega.
4. Connect the servo motors to a suitable external power supply.
5. Write the robotic arm control program in the Arduino IDE.
6. Upload the program to the Arduino Mega.
7. Enable Bluetooth on the mobile phone.
8. Open the mobile UI application.
9. Select and connect to the HC-05 Bluetooth module.
10. Send control commands through the UI and observe the robotic arm's movements.

## 📱 Mobile Bluetooth Control

The mobile UI application acts as the control interface for the robotic arm.

The user connects to the HC-05 module and sends commands to control the servo motors wirelessly.

This approach eliminates the need for a direct wired control interface between the user and the robotic arm.

## ✅ Results

Successfully developed a **mobile-controlled 4-DOF robotic arm using an Arduino Mega and an HC-05 Bluetooth module**.

## 🎥 Project Demo
[![Watch Project Demo](https://www.linkedin.com/posts/gone-ramu-2155092b2_robotic-arm-project-assignment-for-skyfi-ugcPost-7495357785946288128-Uleu/?utm_source=social_share_send&utm_medium=member_desktop_web&rcm=ACoAAEsumfEBdfpbRoL04rRFCpsATJalW3cUVUA)

## 🚀 Future Improvements

* Integrate inverse kinematics for more intuitive arm positioning.
* Add computer vision for object detection and pick-and-place applications.
* Investigate automated pick-and-place operations.

These are potential future enhancements and are not claimed as implemented features.

## 🧰 Technologies Used

* Arduino Mega
* C/C++ with Arduino IDE
* HC-05 Bluetooth Module
* Servo Motors
* Mobile UI Application
* CAD-based Mechanical Design
* Wireless Serial Communication



