# Smart Energy Management System (SEMS)

## Overview
This project implements a Smart Energy Management System using Arduino Mega 2560.
The system intelligently manages power distribution between Solar Energy, Battery
Storage, and External Power based on load demand and energy availability.

## Features
- Priority-based energy source selection (Solar, Battery, Combined, Grid)
- Supports Domestic, Industrial, and Emergency loads
- Real-time monitoring using 16x4 LCD
- Automatic relay-based power switching
- Designed for efficient energy utilization

## Hardware Components
- Arduino Mega 2560
- Solar panels (simulated inputs)
- Battery banks (simulated inputs)
- Relay modules
- 16x4 LCD display
- Load selection switches

## Software Tools
- Arduino IDE
- Embedded C / C++
- GitHub for version control

## Working Principle
The system continuously monitors solar and battery availability.
Based on the active load type and power thresholds, it automatically:
- Runs loads using solar power when available
- Switches to battery during low solar
- Combines solar and battery when required
- Requests external power if demand exceeds supply

## Applications
- Smart homes
- Industrial energy optimization
- Renewable energy systems
- Power management automation

## Author
**Harish Chenna**
- GitHub: https://github.com/harishchenna9
- LinkedIn: https://www.linkedin.com/in/harish-chenna


## Results and Observations

- The system successfully prioritizes energy sources based on availability.
- Loads are powered using solar energy whenever sufficient solar input is available.
- Automatic switching to battery supply occurs during low or no solar conditions.
- Combined solar and battery operation is enabled during high load demand.
- In critical situations, the system indicates the need for external power supply.
- The LCD displays real-time solar and battery status for user monitoring.
- Relay-based switching ensures uninterrupted power to selected loads.


## Test Scenarios

| Load Type | Solar Status | Battery Status | System Action |
|----------|-------------|----------------|---------------|
| Domestic | High | Low | Runs on Solar |
| Industrial | Low | High | Runs on Battery |
| Emergency | Low | Low | Requests External Power |
| Mixed Load | Medium | Medium | Runs on Solar + Battery |
