# Smart Greenhouse Vent Controller

A microcontroller-based solution for automating greenhouse venting, designed to optimize plant health by controlling airflow based on environmental conditions.

## Features

- Automated control of greenhouse vents
- Monitors temperature and/or humidity (sensor-dependent)
- Easy customization for different greenhouse sizes
- Energy-efficient operation

## Folder Structure

```
smart_greenhouse_vent/
│
└── smart_greenhouse_vent.ino   # Main Arduino program
```

## Hardware Requirements

- Arduino-compatible microcontroller (e.g., Uno, Nano)
- Temperature and/or humidity sensor (e.g., DHT22, DHT11)
- Motor or actuator to open/close vent (e.g., servo motor)
- Power supply suitable for your hardware
- Relay (if controlling high-power actuators)
- Jumper wires and breadboard or PCB

## Setup Instructions

1. **Wiring:** Connect your sensor(s) and actuator(s) to the Arduino per your hardware specifications.
2. **Arduino IDE:** Download and install the Arduino IDE.
3. **Libraries:** Install any required libraries for your sensors (e.g., `DHT` library for DHT sensors).
4. **Code Upload:** Open `smart_greenhouse_vent.ino` in Arduino IDE and upload it to your device.
5. **Power Up:** Connect the Arduino to a suitable power source.

## Usage

- On startup, the system reads sensor data and actuates the vent as needed.
- No manual intervention required; the vent operates automatically based on the programmed thresholds.
- Adjust sensor thresholds in the code to fit your greenhouse environment.

## Code Overview

The Arduino `.ino` file includes:

- Initialization of sensor and actuator pins
- Reading temperature/humidity values
- Decision logic to open or close vent
- Actuator control based on readings

## Customization

- Modify threshold values in the `.ino` file to suit specific plant or climate needs.
- Expand with additional sensors for more complex automation.

## License

MIT License

---

For further details, review the `smart_greenhouse_vent.ino` file in the `smart_greenhouse_vent` folder. If you need a more specific code explanation, please share the `.ino` contents or let me know!
