//*****************************************************************************//
// Programmer: Joseph __Vitale                                                 //
// Start Date: 09/16/2024                                                      //
// Phase #1 Completion Date:  n/a                                              //
// add later        //
//*****************************************************************************//
#include <Arduino.h>
#include <Button.h>
#include <Buzzer.h>
#include <Scale.h>
#include <avr/io.h>
#include <avr/interrupt.h>
// put function declarations here:
Scale Scale0;

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