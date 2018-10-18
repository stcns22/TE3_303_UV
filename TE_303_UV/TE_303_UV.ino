/*
  UV Project
  TE 303 Prototyping
  
  (c) 2018 Concepcion Sosa & Duheng "Hansen" Liang
 
 */


#include <Adafruit_CircuitPlayground.h>
#include <Adafruit_Circuit_Playground.h>

const int UvSensorPin = A4;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // Adafruit_CircuitPlayground.strip.setPixelColor(1, 255); comment it out for a section
  //CircuitPlayground.setPixelColor(2, 255,255,255);
}

void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(UvSensorPin);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability

  CircuitPlayground.setPixelColor(0, 245,235,255);
}

//// show a "meter" with the ring of LEDs on the board. Input how many lights should go on
//void showMeter(int ledCount) {  
//  //Failsafe
//  if (ledCount > 10){
//    ledCount = 10
//  }
//
//  else if (ledCount < 0) {
//    ledCount = 0
//  }
//
//  else{
//    
//  }
//}
