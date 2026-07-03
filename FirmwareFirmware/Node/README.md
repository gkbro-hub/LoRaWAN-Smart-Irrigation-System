/*
 * ============================================================================
 * Project : LoRaWAN-Assisted Cloud-Controlled Automated Irrigation System
 *
 * Client  : Naadan Agro Farm, Thumba, Kerala, India
 *
 * Description:
 * This firmware runs on the ESP32-based field node of the smart irrigation
 * system. It receives irrigation commands from the LoRa gateway, controls
 * the irrigation valve and water pump, acquires real-time soil moisture
 * readings, and transmits node status and sensor responses back to the
 * gateway using LoRa communication.
 *
 * Features:
 * • LoRa-based wireless communication (433 MHz)
 * • Receives irrigation control commands
 * • Controls water pump and solenoid valve
 * • Reads capacitive soil moisture sensor
 * • Sends acknowledgement and response packets
 * • Supports remote monitoring through AWS IoT Core via the gateway
 *
 * Hardware Used:
 * - ESP32 Development Board
 * - SX1278 (Ra-02) LoRa Module
 * - Capacitive Soil Moisture Sensor
 * - Relay Module
 * - Solenoid Valve
 * - Water Pump
 *
 * Technologies:
 * ESP32 | LoRa | MQTT | AWS IoT Core | IoT | Embedded Systems
 * Precision Agriculture | Cloud Computing
 *
 * Team Members:
 * - Gokul S S
 * - Anantha Krishnan H
 * - Anudeep Krishna R
 * - Aromal P Nair
 *
 * Guide:
 * Mr. Aswin R. B.
 *
 * Achievement:
 * 🏆 Best Mini Project Award
 *
 * ============================================================================
 */
