
#include <Wire.h>
#include <Servo.h>

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
const int motor1_pin = 5;
const int motor2_pin = 6;
const int motor3_pin = 10;
const int motor4_pin = 11;

// Motors
Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;

// PID Control variables

float Kp[3] = {0, 0, 0};
float Ki[3] = {0, 0, 0};
float Kd[3] = {0, 0, 0};

void setup() {
  Serial.begin(9600);
  Wire.begin();
  
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);

  calibrateGyro();
 
  motor1.attach(motor1_pin);
  motor2.attach(motor2_pin);
  motor3.attach(motor3_pin);
  motor4.attach(motor4_pin);
  
  motor1.writeMicroseconds(1000);
  motor2.writeMicroseconds(1000);
  motor3.writeMicroseconds(1000);
  motor4.writeMicroseconds(1000);
  
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
