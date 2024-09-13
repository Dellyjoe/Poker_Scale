#include <Arduino.h>
#include <Button.h>
#include <Buzzer.h>
#include <Scale.h>

// put function declarations here:


void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  
  // put your main code here, to run repeatedly:
  // Turn LED on
  digitalWrite(13, HIGH);
  // Wait for 1 second
  delay(1000);
  // Turn LED off
  digitalWrite(13, LOW);
  // Wait for 1 second
  delay(1000);
}