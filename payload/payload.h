/*
** UC CubeCats
** Project LEOPARD
** On Board Computing
*/

#ifndef PAYLOAD_H
#define PAYLOAD_H

#include "Wire.h"
#include "leopard_common.h"

class Payload {
    public:
        int select_pins[3] = {PAYLOAD_S0_PIN, PAYLOAD_S1_PIN, PAYLOAD_S2_PIN};
        int payload_readings[NUMBER_PAYLOAD_SENSORS];

        void configureMuxPin(int payload_sensor);
        void setPayloadReading(int sensor_id, int sensor_reading);
};

#endif
