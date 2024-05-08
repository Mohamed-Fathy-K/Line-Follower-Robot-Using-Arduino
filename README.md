# Line Follower Robot README

---

## Overview

This project involves building a line follower robot using Arduino and sensors to navigate along a predefined path. The robot utilizes infrared (IR) sensors to detect the contrast between the black line and the lighter surface, allowing it to adjust its movement accordingly.

---

## Components

- Arduino board (e.g., Arduino Uno)
- Infrared (IR) sensors (4)
- Motors (4)
- Motor driver
- Chassis and wheels
- Power supply (battery or adapter)
- Jumper wires

---

## Wiring

Connect the components as follows:

- IR sensors to digital pins: ir1 to ir4 (pins 10-13)
- Motors to motor pins: m1 to m4 (pins 3, 5, 6, 9)
- Power supply to the Arduino board

---

## Code Explanation

The provided Arduino code implements the logic for the line follower robot. Here's a breakdown of its functionality:

- **Setup:** Initializes the digital pins for IR sensors as inputs and motor pins as outputs.

- **Loop:**
  - Reads the sensor values (L1, L2, R1, R2) to determine the position of the line relative to the robot.
  - Based on the sensor readings, the robot adjusts its motor speeds to follow the line.
  - Uses PWM (Pulse Width Modulation) to control motor speed.

---

## How It Works

1. The IR sensors detect the presence or absence of the line underneath them.
2. Based on the sensor readings, the Arduino decides which motors to activate and at what speed.
3. By adjusting the motor speeds, the robot steers itself to follow the line.

---

## Usage

1. Place the robot on the line you want it to follow.
2. Power on the robot and observe it following the line.


## Screenshots and Video


