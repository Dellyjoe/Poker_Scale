#include <Arduino.h>
class ScaleInput
{
private:
    int pin;                 // Analog input pin for the scale
    float calibrationFactor; // Calibration factor for converting raw input to weight
public:
    // Constructor
    ScaleInput(int inputPin, float calFactor)
    {
        pin = inputPin;
        calibrationFactor = calFactor;
    }

    // Function to read and return the weight in grams
    float getWeight()
    {
        int rawValue = analogRead(pin);              // Read raw input from scale
        float weight = rawValue * calibrationFactor; // Convert raw input to weight
        return weight;
    }
};