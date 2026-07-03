/*
 * ------------------------------------------------------------
 * Project : LoRaWAN-Assisted Cloud-Controlled Smart Irrigation
 * Client  : Naadan Agro Farm, Thumba
 *
 * Description:
 * Firmware for the ESP32 field node responsible for
 * receiving LoRa commands, controlling irrigation devices,
 * reading soil moisture, and transmitting responses to
 * the gateway.
 *
 * Hardware:
 * - ESP32
 * - SX1278 LoRa Module (433 MHz)
 * - Capacitive Soil Moisture Sensor
 * - Relay Module
 *
 * Team:
 * - Gokul SS
 * - Anantha Krishnan H
 * - Anudeep Krishna R
 * - Aromal P Nair
 *
 * Guide:
 * Mr. Aswin R. B.
 * ------------------------------------------------------------
 */

 // =========================
// Libraries
// =========================
#include <SPI.h>
#include <LoRa.h>
#include <WiFi.h>

// =========================
// LoRa Configuration
// =========================
#define LORA_SS    33
#define LORA_RST   32
#define LORA_DIO0  26

// =========================
// Packet Definitions
// =========================
#define NodeId      0x1A
#define NodeCmd     0x1B
#define NodeResReq  0x1C
#define ValveOn     0x11
#define ValveOff    0x12
#define MotorOn     0x13
#define MotorOff    0x14
#define MoistureReq 0x15
#define NodeRes     0x1D

// =========================
// Global Variables
// =========================
uint8_t task[5];
uint8_t response[5];

