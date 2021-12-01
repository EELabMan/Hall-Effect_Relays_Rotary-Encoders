/*
Code for Hall Effect Sensor
*/

const int LED=13;      //The LED is connected to pin 9
const int HallEffect=2;      //The Button is connected to pin 2

void setup()
{
  pinMode (LED, OUTPUT);     //Set the LED pin as an output
  pinMode (HallEffect, INPUT);   //Set button as input (not required)
}

void loop()
{
  if (digitalRead(HallEffect) == HIGH)
  {
    digitalWrite(LED, LOW);
  }
  else
  {
    digitalWrite(LED, HIGH);
  }
}
