/*
** UC CubeCats
** Project LEOPARD
** On Board Computing
*/

#ifndef PACKET_H
#define PACKET_H

#include <stdint.h>
#include "data_packet.h"

class packet
{
public:
    // Define bit flags for the packet header
    const unsigned char is_compressed = 0b00000001; // True if packet was compressed
    const unsigned char is_encrypted =  0b00000010; // True if packet was encrypted
    const unsigned char is_data_coltn = 0b00000100; // True if the packet type is a data collection
    const unsigned char is_command =    0b00001000; // True if the packet type is a ground command
    const unsigned char reserved_1 =    0b00010000; // Reserved values for possible future use
    const unsigned char reserved_2 =    0b00100000;
    const unsigned char reserved_3 =    0b01000000;
    const unsigned char reserved_4 =    0b10000000;
    
    struct Header
    {
        uint32_t timestamp;
        uint8_t header_flags;
    };
    
    enum packet_type
    {
        data,
        command
    };

    enum command_type
    {
        acknowledge,
        power_mode_change,
        power_report,
        hamshield_mode_change,
        release_antenna,
        clear_queue,
        data_frequency_change,
        set_time,
        reboot_system,
        end_of_life
    };
};

#endif
