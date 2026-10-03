
# 🦋 Flapping Butterfly Clip

A wearable robotic butterfly hair clip with mechanically
flapping wings controlled by an Arduino and a micro servo.

## About

This project explores the combination of 3D printing,
electronics and mechanical movement to create a wearable
butterfly clip.

The wings are driven by a single servo motor and controlled
by an Arduino.

## Hardware

- Arduino Uno R3
- SG90 or MG90S servo
- 78 mm hair clip
- 5 x 2.8 mm magnets
- Dupont wires
- PLA filament
- Super glue

## Electronics

The servo is connected to the Arduino as follows:

| Servo | Arduino Uno |
|---|---|
| VCC | 5V |
| GND | GND |
| Signal | D3 |

## Software

- Arduino IDE
- ServoEasing library

## How it works

The servo moves the wings between two positions:

- Start position: 0°
- End position: 70°
- Movement duration: 1500 ms

A sine easing function is used to create a smoother
and more natural wing movement.

## Project Status

🚧 In development

### Planned improvements

- [ ] Test different wing angles
- [ ] Optimize flap speed
- [ ] Add battery power
- [ ] Replace Arduino Uno with a smaller microcontroller
- [ ] Create a more compact wearable version
- [ ] Improve mechanical design
