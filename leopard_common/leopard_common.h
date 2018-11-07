/*
** UC CubeCats
** Project LEOPARD
** On Board Computing
*/

// Contains variables which are used in multiple different libraries throughout the project

#ifndef LEOPARD_COMMON_H
#define LEOPARD_COMMON_H

/******************** Digital Pinout ********************/

// Hamshield
#define COMMS_SWITCH_PIN    2
#define COMMS_MiC_PIN       3

// Payload
#define PAYLOAD_S2_PIN      4
#define PAYLOAD_S1_PIN      5
#define PAYLOAD_S0_PIN      6

// SD Storage
// Utilizes PINS 10 - 13 for SPI Interface

/******************** Analog Pinout ********************/

// Payload
#define PAYLOAD_Z_PIN       A0
    
// HamShield
#define COMMS_nCS_PIN       A1
#define COMMS_SPKR_PIN      A2
#define COMMS_RST_PIN       A3
#define COMMS_DAT           A4
#define COMMS_CLK           A5

/******************** Directories ********************/

// Contains QUEUE_DIR, TX_DIR and all formatted packets waiting to be transmitted
#define ROOT_DIR            "/"

// Contains all data collections which haven't yet been formatted into packets
#define QUEUE_DIR           "/queue/"

// Contains all packets that have been transmitted
#define TX_DIR              "/tx/"

/******************** Other Values ********************/

#define NUMBER_PAYLOAD_SENSORS 8

#endif
