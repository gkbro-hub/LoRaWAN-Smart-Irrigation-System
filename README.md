# 🌱 LoRaWAN-Assisted Cloud-Controlled Automated Irrigation System

## Overview

This project presents a cloud-controlled smart irrigation system developed for **Naadan Agro Farm, Thumba**, to improve irrigation efficiency through IoT and long-range wireless communication. The system uses ESP32-based sensor nodes, LoRa communication, MQTT, and AWS IoT Core to automate irrigation based on real-time soil moisture data and weather conditions.

The project was recognized with the **Best Mini Project Award** for its innovation and practical implementation.

---

## Features

- Real-time soil moisture monitoring
- Long-range LoRa communication (433 MHz)
- Cloud-based irrigation control
- AWS IoT Core integration
- MQTT communication protocol
- Automatic pump and valve control
- Weather-aware irrigation decisions
- Remote monitoring and logging
- Low-power embedded design

---

## Technologies Used

- ESP32
- Arduino UNO
- SX1278 LoRa Module
- AWS IoT Core
- MQTT
- Embedded C / Arduino IDE
- IoT
- Cloud Computing
- Precision Agriculture

---

## Hardware Components

- ESP32 Development Board
- Arduino UNO
- Dragino LoRa Shield
- SX1278 (Ra-02) LoRa Module
- Capacitive Soil Moisture Sensor
- Relay Module
- Solenoid Valve
- Water Pump
- Power Supply

---

## System Architecture

Cloud (AWS IoT Core)
↓
MQTT
↓
ESP32 Gateway
↓
LoRa (433 MHz)
↓
ESP32 Field Node
↓
Pump + Valve + Soil Moisture Sensor

---

## Communication Protocol

### MQTT Topic

**Cloud → Gateway**

`esp_32/Node_Command`

Example:

```json
{
  "noded": ["1A1B1C3B"],
  "nodec": ["1A1B2A2C3A"]
}
```

**Gateway → Cloud**

`esp_32/Node_Response`

Example:

```json
{
  "noderesp-1": [
    "1A3B2A2C80"
  ],
  "time": "2026-03-11T00:00:00+05:30"
}
```

---

## Results

- Reduced water consumption by approximately **30–50%**
- Reliable long-range LoRa communication
- Cloud-based automation
- Real-time monitoring
- Low-cost and scalable architecture for precision agriculture

---

## Achievement

🏆 **Best Mini Project Award**

---

## Team

- Gokul S S
- Anantha Krishnan H
- Anudeep Krishna R
- Aromal P Nair

**Guide:** Mr. Aswin R. B.

---

## Deployment

**Naadan Agro Farm**  
Thumba, Kerala, India

---

## Future Improvements

- Solar-powered field nodes
- Mobile application
- AI-based irrigation prediction
- Multiple sensor integration
- Crop-specific irrigation scheduling

---

## License

This project is intended for academic and research purposes.
