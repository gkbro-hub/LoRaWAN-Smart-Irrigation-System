# 🌱 LoRaWAN-Assisted Cloud-Controlled Automated Irrigation System

An IoT-based smart irrigation system developed for **Naadan Agro Farm, Thumba**, using ESP32, LoRaWAN, MQTT, and AWS IoT Core to automate irrigation based on real-time soil moisture and weather conditions.

---

## 🏆 Achievement

🥇 **Best Mini Project Award**

Recognized for innovation, practical implementation, and real-world deployment.

---

## 📖 Overview

Traditional irrigation often wastes water because it follows fixed schedules instead of actual soil conditions.

This project automates irrigation by monitoring soil moisture in real time and making irrigation decisions through AWS IoT Core.

---

## ✨ Features

- Real-time soil moisture monitoring
- Long-range LoRaWAN communication
- Cloud-controlled irrigation
- AWS IoT Core integration
- MQTT communication
- Weather-aware irrigation
- Automatic pump and valve control
- Low-power ESP32 nodes

---

## 🛠 Technologies Used

- ESP32
- LoRaWAN
- MQTT
- AWS IoT Core
- Arduino IDE
- Capacitive Soil Moisture Sensor
- Relay Module
- Cloud Computing

---

## 🏗 System Architecture

<img width="744" height="599" alt="image" src="https://github.com/user-attachments/assets/78478f0e-dce5-459d-97e0-c495d5f243d5" />

LoRaWAN-assisted, cloud-controlled smart irrigation system architecture.

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

## 📷 Prototype



<img width="716" height="1600" alt="image" src="https://github.com/user-attachments/assets/43ffe7ed-023d-46c7-9fa1-149a63782353" />

Node gateway 

<img width="716" height="1600" alt="image" src="https://github.com/user-attachments/assets/a34b0e62-208a-4298-b7f7-8c46a5cdaa97" />

node for moisture sensor

<img width="716" height="1600" alt="image" src="https://github.com/user-attachments/assets/75c6229d-9a4c-48da-be74-ffe637d31ab5" />

node for motor control and relay


---

## 📊 Results

- Reduced water usage by approximately **30–50%**
- Reliable long-range communication
- Remote monitoring through AWS IoT Core
- Scalable architecture for precision agriculture

<img width="714" height="616" alt="image" src="https://github.com/user-attachments/assets/ec37dcbc-2c3a-4f89-8f75-adef70e13c24" />

Soil moisture variation and irrigation

<img width="678" height="462" alt="image" src="https://github.com/user-attachments/assets/56166d5c-9c2b-4de3-9360-258db190ce97" />

Irrigation command response (START/STOP) waveform for Node 1.

<img width="698" height="545" alt="image" src="https://github.com/user-attachments/assets/1e019ca9-f9dd-4cb9-baf9-941ddb1f41c3" />

LoRaWAN packet delivery ratio across spreading factors SF7, SF9, and SF10.

<img width="709" height="539" alt="image" src="https://github.com/user-attachments/assets/8ce0e057-ae37-494b-a5a4-e9a62043030f" />

Simulated node battery level over 30 days: LoRaWAN (deep sleep) vs. Wi-Fi (active).

<img width="690" height="458" alt="image" src="https://github.com/user-attachments/assets/a9a7ec26-d2fd-4b44-8bc9-684a2bb139fc" />

Relative water consumption comparison: Traditional vs. Local Automatic vs. Proposed system.

---

## 👨‍💻 Team

- Anantha Krishnan H
- Anudeep Krishna R
- Aromal P Nair
- Gokul SS

**Guide:** Mr. Aswin R B

---

## 📍 Deployment

Developed and demonstrated for:

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

## 📄 Publications

IEEE Conference Paper:

**LoRaWAN-Assisted Cloud-Controlled Automated Irrigation System for Precision Agriculture**

---

## 📜 License

This project is intended for academic and research purposes.
