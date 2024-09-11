#include <Arduino.h>
// Class for buttons
class Button
{
private:
    int pin;                          // Pin number for the button
    int state;                        // Current state of the button
    int lastState;                    // Previous state of the button
    unsigned long lastDebounceTime;   // Time of last debounce
    unsigned long debounceDelay = 50; // Debounce delay in milliseconds

public:
    // Constructor
    Button(int buttonPin)
    {
        pin = buttonPin;
        pinMode(pin, INPUT);
        state = LOW;
        lastState = LOW;
        lastDebounceTime = 0;
    }

    // Function to read the button state
    int read()
    {
        // Read the button state
        int reading = digitalRead(pin);

        // Check if the button state has changed
        if (reading != lastState)
        {
            // Reset the debounce timer
            lastDebounceTime = millis();
        }

        // Check if the debounce delay has passed
        if ((millis() - lastDebounceTime) > debounceDelay)
        {
            // Update the button state
            state = reading;
        }

        // Update the last state
        lastState = reading;

        // Return the current state
        return state;
    }
};