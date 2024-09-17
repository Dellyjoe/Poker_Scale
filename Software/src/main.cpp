#include <Arduino.h>
#include <Button.h>
#include <Buzzer.h>
#include <Scale.h>

// put function declarations here:
Scale Scale0;

void Scale::init_scale(int scale_pin, float calibrationFactor)
{
  scale_pin_number = scale_pin;
  calFactor = calibrationFactor;
  pinMode(scale_pin_number, INPUT);
}

void Scale::r_scale_raw()
{
  float rawscalevalue = analogRead(scale_pin_number); // private variable on pinumber
  float weight = rawscalevalue * (calFactor)-30;      // Convert raw input to weight
  Serial.println(weight);
}

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);          // initialize Serial Monitor with baud rate of 9600
                               // ********************Inputs**********************************//
  Scale0.init_scale(19, 1.0f); // setting scale to pin 19
  //*********************Outputs*********************************//
  pinMode(13, OUTPUT);
}

void loop()
{

  // put your main code here, to run repeatedly:
  // Turn LED on
  digitalWrite(13, HIGH);
  // Wait for 1 second
  delay(1000);
  // ++++++++++++++++++++++++++++++++++++++++++++++++++ //
  Scale0.r_scale_raw();
}