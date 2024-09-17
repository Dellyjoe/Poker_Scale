#include <Arduino.h>
class Scale
{
private:
    int scale_pin_number; // Analog input pin for the scale
    float calFactor;      // Calibration factor for converting raw input to weight
public:
    void r_scale_raw();
    void init_scale(int scale_pin, float calfactor);
};