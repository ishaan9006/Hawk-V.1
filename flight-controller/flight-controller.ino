
#include <Wire.h>

// Pins for reciever channels
#define CHANNEL0 0
#define CHANNEL1 1
#define CHANNEL2 2
#define CHANNEL3 3

// MPU Address
#define MPU_ADDRESS 0x68


#define X 0
#define Y 1
#define Z 2


// LED
const int led = 13;

// MPU DATA
int gyro_raw[3] = {0, 0, 0};           //Data in deg/sec. (X, Y, Z)
long gyro_offset[3] = {0, 0, 0};       //Avg offset of each X,Y,Z

int acc_raw[3] = {0, 0, 0};            //Data in m/sec^2. (X, Y, X)
float acc_angle[3] = {0, 0, 0};        //Calculated angles of each X,Y,X

// Motor pins
const int motor1 = 5;
const int motor2 = 6;
const int motor3 = 10;
const int motor4 = 11;

// PID Control variables

float Kp[3] = {0, 0, 0};
float Ki[3] = {0, 0, 0};
float Kd[3] = {0, 0, 0};

void setup() {
  Wire.begin();
 
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);

  calibrateGyro();
  
  pinMode(motor1, OUTPUT); 
  pinMode(motor2, OUTPUT); 
  pinMode(motor3, OUTPUT); 
  pinMode(motor4, OUTPUT);  

  pinMode(CHANNEL0, INPUT);
  pinMode(CHANNEL1, INPUT);
  pinMode(CHANNEL2, INPUT);
  pinMode(CHANNEL3, INPUT);


  digitalWrite(led, LOW);

}

void loop() {

}

int getJoyStickValue(int pin){
  return pulseIn(pin, HIGH);
}
void calibrateGyro(){
  
}
