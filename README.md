# Wireless EMG Monitoring System for Parkinson's Disease Detection

## Overview

This repository contains the design and implementation details of a **Wireless Electromyography (EMG) Monitoring System** aimed at detecting early-stage symptoms of Parkinson's Disease (PD). The project leverages IoT-enabled microcontrollers and sensors to provide real-time, remote monitoring of muscle activity and other critical motor functions in Parkinson’s patients.

## Motivation

Parkinson's Disease is a progressive neurological condition that impacts motor and non-motor functions. Early detection and monitoring are crucial for effective management and treatment. Traditional methods for monitoring are often inaccessible, expensive, and not conducive to real-time data collection. This project aims to bridge this gap by providing an affordable and efficient solution using:

- Portable, wearable hardware
- IoT integration for remote data access
- Machine learning for anomaly detection in muscle activity patterns

## Features

- **Wireless EMG Monitoring**: Measures and analyzes muscle activity.
- **IoT-Enabled**: Real-time data collection and cloud integration.
- **Multi-Sensor Integration**: Includes accelerometers, gyroscopes, and sound sensors for comprehensive data analysis.
- **Machine Learning Support**: Detects anomalies in sensor data.
- **User-Friendly Design**: Wearable and easy-to-use for patients and caregivers.

## Hardware Requirements

- **Microcontroller**: ESP32 with integrated Wi-Fi module
- **Sensors**:
  - EMG Sensor
  - Accelerometer
  - Sound Sensor
- **Display**: 16x2 LCD for real-time status
- **Additional Components**:
  - Power supply
  - Breadboards and connecting wires

## Software Requirements

- **Programming Language**: Embedded C
- **Development Environment**: Arduino IDE
- **Data Processing Tools**:
  - Cloud platforms for data storage
  - Optional: MATLAB for advanced signal processing

## System Design

### Architecture

The system comprises wearable sensors connected to an ESP32 microcontroller, which processes the data and transmits it over a Wi-Fi network to a central server or cloud platform. The server analyzes the data for anomalies and provides insights to caregivers and medical professionals.

### Workflow

1. Collect real-time data using EMG sensors and other peripherals.
2. Process raw sensor data and filter noise.
3. Transmit processed data via Wi-Fi to a cloud-based application.
4. Analyze data using machine learning algorithms.
5. Notify caregivers or medical professionals if abnormalities are detected.

## Getting Started

1. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/wireless-emg-monitoring.git
   ```
2. Install dependencies and configure the development environment.
3. Flash the microcontroller using the provided source code.
4. Connect the sensors and power up the system.
5. Monitor data via the web interface or mobile app.

## Future Work

- Enhanced machine learning models for better prediction accuracy.
- Broader sensor integration to detect additional symptoms.
- Improved hardware reliability for real-world usage.

## Contributors

- Hamsa N R
- Gagan N Y
- Gaurav K M
  

