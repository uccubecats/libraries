/*
** UC CubeCats
** Project LEOPARD
** On Board Computing
*/

#include "payload.h"
#include "Arduino.h"

void Payload::configureMuxPin(int payload_sensor)
{
    for (int i = 0; i <= 3; i++)
    {
        if (payload_sensor & (1<<i))
            digitalWrite(select_pins[i], HIGH);
        else
            digitalWrite(select_pins[i], LOW);
    }
}

void Payload::setPayloadReading(int sensor_id, int sensor_reading)
{
    payload_readings[sensor_id] = sensor_reading;
}
