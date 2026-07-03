/*
-------------------------------------------------------
Project:
LoRaWAN-Assisted Cloud-Controlled Smart Irrigation System

Client:
Naadan Agro Farm, Thumba

Authors:
Gokul SS
Anantha Krishnan H
Anudeep Krishna R
Aromal P Nair

Guide:
Mr. Aswin R. B.

Description:
Firmware for the ESP32 field node. The node receives
LoRa commands from the gateway, controls irrigation
devices, reads soil moisture, and sends responses
back through the LoRa network.
-------------------------------------------------------
*/

# Field Node Firmware

This firmware runs on the ESP32-based field node responsible for monitoring soil moisture and controlling irrigation devices.

## Hardware

- ESP32
- SX1278 LoRa Module (433 MHz)
- Capacitive Soil Moisture Sensor
- Relay Module
- Water Pump
- Solenoid Valve

## Features

- Receives commands over LoRa
- Sends acknowledgement packets
- Controls irrigation pump and valve
- Reads soil moisture sensor
- Responds with node status
- Low-power wireless communication

## LoRa Configuration

| Parameter | Value |
|-----------|-------|
| Frequency | 433 MHz |
| Spreading Factor | SF12 |
| Bandwidth | 125 kHz |
| Coding Rate | 4/5 |
| Sync Word | 0x12 |
| CRC | Enabled |

## Packet Commands

| Hex | Description |
|-----|-------------|
| 0x1A | Node ID |
| 0x1B | Node Command |
| 0x1C | Node Response Request |
| 0x1D | Node Response |
| 0x11 | Valve ON |
| 0x12 | Valve OFF |
| 0x13 | Motor ON |
| 0x14 | Motor OFF |
| 0x15 | Moisture Request |

## Moisture Reading

The node reads the analog moisture sensor and scales the ADC value before transmitting it.

```cpp
response[i] = analogRead(MOISTURE_PIN) / 16;
```

## Communication Flow

Cloud
↓
ESP32 Gateway
↓
LoRa
↓
ESP32 Field Node
↓
Pump / Valve / Sensor
↓
Response
↓
Gateway
↓
AWS IoT Core
