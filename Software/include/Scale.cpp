#include <Arduino.h>
#include <Scale.h>

void Scale::init_scale(int scale_pin, float calibrationFactor)
{
    scale_pin_number = scale_pin;
    calFactor = calibrationFactor;
    pinMode(scale_pin_number, INPUT);
}

void Scale::r_scale_raw()
{
    float rawscalevalue = analogRead(scale_pin_number); // private variable on pinumber
    float weight = rawscalevalue * calFactor;           // Convert raw input to weight
    Serial.println(weight);
}
