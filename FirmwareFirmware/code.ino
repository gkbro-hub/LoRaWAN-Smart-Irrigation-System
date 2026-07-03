// ============================================================================
// Libraries
// ============================================================================

#include <SPI.h>
#include <LoRa.h>
#include <WiFi.h>


// ============================================================================
// LoRa Pin Configuration
// ============================================================================

#define LORA_SS    33
#define LORA_RST   32
#define LORA_DIO0  26


// ============================================================================
// Packet Definitions
// ============================================================================

#define NodeId       0x1A
#define NodeCmd      0x1B
#define NodeResReq   0x1C
#define ValveOn      0x11
#define ValveOff     0x12
#define MotorOn      0x13
#define MotorOff     0x14
#define MoistureReq  0x15
#define NodeRes      0x1D


// ============================================================================
// Global Variables
// ============================================================================

uint8_t task[5];
uint8_t response[5];

int i;
int j;
int lep1;
unsigned long start;
int packSize;

uint8_t confirm[2] = {NodeId, 0xFF};


// ============================================================================
// Setup Function
// Initializes Serial communication and LoRa module
// ============================================================================

void setup()
{
    ...
}


// ============================================================================
// Main Loop
// Waits for incoming LoRa packets, processes commands,
// controls irrigation devices, and sends responses.
// ============================================================================

void loop()
{
    ...
}
