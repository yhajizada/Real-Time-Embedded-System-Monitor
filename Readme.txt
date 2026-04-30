# 📟 Real-Time Embedded System Monitor

A full-stack telemetry solution that bridges the gap between **Low-Level Embedded C** and **High-Level Data Engineering with Python**. This project demonstrates real-time data acquisition, serial communication, and relational database persistence.

---

## 🔍 Project Overview
In industrial environments, monitoring real-time sensor data from microcontrollers is a fundamental task. This project implements a complete pipeline:
1. **Data Acquisition:** A microcontroller (Arduino/C) reads analog signals from sensors.
2. **Serial Communication:** Data is streamed via UART (Universal Asynchronous Receiver-Transmitter) to a host computer.
3. **Data Logging:** A Python application captures the stream, timestamps it, and stores it in an **SQLite database** for historical analysis.

## 🛠 Tech Stack
*   **Firmware:** Embedded C (Arduino Framework)
*   **Software:** Python 3.x
*   **Communication:** PySerial (UART Protocol)
*   **Database:** SQLite3
*   **Data Handling:** Pandas (for future analytics)

## 📂 Repository Structure
```text
├── firmware/
│   └── sensor_stream.ino    # C code for the microcontroller
├── app/
│   ├── logger.py           # Python script for data capture
│   └── telemetry_data.db   # SQLite database (auto-generated)
├── requirements.txt        # Python dependencies
└── README.md               # Project documentation