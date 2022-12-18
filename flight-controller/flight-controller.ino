
#include <Wire.h>

// Pins for reciever channels
#define CHANNEL 0
#define CHANNEL 1
#define CHANNEL 2
#define CHANNEL 3

#define X 0
#define Y 1
#define Z 2


// Motor pins
const int motor1 = 5;
const int motor2 = 6;
const int motor3 = 10;
const int motor4 = 11;

// LED
const int led = 13;

void setup() {
  Wire.begin();
 
  pinMode(led, OUTPUT);
  
  pinMode(motor1, OUTPUT); 
  pinMode(motor2, OUTPUT); 
  pinMode(motor3, OUTPUT); 
  pinMode(motor4, OUTPUT);  

}

void loop() {

}
