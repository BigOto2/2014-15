// Apr 11, 2015. Husky Robotics, made by Electrical Team

#include <Arduino.h>
#include "megaBoardDefine.h"
#include <Servo.h>

void setup() {
  Serial.begin(BAUD_RATE);
  motor1.attach(motorPin1);
  motor2.attach(motorPin2);
  
  // set up the arm to steady
  for(int i = 0; i < 3; i++) {
    armMotor[i].attach(TALON_ARM[i]);
    armMotor[i].writeMicroseconds(NEUTRAL_FREQUENCY);
  }
}

void loop() {
  // driveMotorFullSpeed();
  // getReadingFromCurrentSensor();
  armRiseAndBack();
  delay(100);
}
