extern "C"{
#include "PCCI_Motor.h"
#include "calculatePercentFunc.h"
#include "PCCI_Motor_private.h"
}
#include <Arduino.h>

// put function declarations here:


void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(7,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  PCCI_Motor_U.percRawVal_u16 = analogRead(A0);
  PCCI_Motor_U.motorRotationDir_B = digitalRead (7);

  PCCI_Motor_calculatePercentFunc(PCCI_Motor_U.percRawVal_u16,
    PCCI_Motor_U.motorRotationDir_B, &PCCI_Motor_Y.indicatorLamp_B,
    &PCCI_Motor_Y.motTerminalA_B, &PCCI_Motor_Y.motTerminalB_B,
    &PCCI_Motor_DW.calculatePercentFunc,
    &PCCI_Motor_PrevZCX.calculatePercentFunc);

  digitalWrite(8,PCCI_Motor_Y.motTerminalA_B);
  digitalWrite(9,PCCI_Motor_Y.motTerminalB_B);
  digitalWrite(10,PCCI_Motor_Y.indicatorLamp_B);

}


