/*
** UC CubeCats
** Project LEOPARD
** On Board Computing
*/

#ifndef DATA_PACKET_H
#define DATA_PACKET_H

#include <stdint.h>

class data_packet
{
public:

    const static int MAX_NUMBER_COLLECTIONS_PER_PACKET = 5;      // TODO: Verify if 5 is desireable number

    struct SystemHealth
    {
        uint16_t adcs_temperature;
        uint16_t power_temperature;
        uint16_t battery_voltage;
        uint16_t time_till_empty;
        uint16_t time_till_full;
    };

    struct DataCollection
    {
        uint16_t timestamp_collection;
        uint16_t gyro_x;
        uint16_t gyro_y;
        uint16_t gyro_z;
        uint16_t mag_x;
        uint16_t mag_y;
        uint16_t mag_z;
        uint16_t accel_x;
        uint16_t accel_y;
        uint16_t accel_z;
        uint16_t sensor_0;
        uint16_t sensor_1;
        uint16_t sensor_2;
        uint16_t sensor_3;
        uint16_t sensor_4;
        uint16_t sensor_5;
        uint16_t sensor_6;
        uint16_t sensor_7;
    };

    String dataToString();

    DataCollection* dataCollections[MAX_NUMBER_COLLECTIONS_PER_PACKET];

};

#endif
