#include <Arduino.h>
// Class for a buzzer
class Buzzer
{
private:
    int pin; // Pin number for the buzzer
public:
    // Constructor
    Buzzer(int buzzerPin)
    {
        pin = buzzerPin;
        pinMode(pin, OUTPUT); // Set pin as output
    }

    // Function to play a tone
    void playTone(int frequency, int duration)
    {
        tone(pin, frequency, duration); // Use built-in tone function to play tone
    }

    // Function to stop playing tone
    void stopTone()
    {
        noTone(pin); // Use built-in noTone function to stop tone
    }
};