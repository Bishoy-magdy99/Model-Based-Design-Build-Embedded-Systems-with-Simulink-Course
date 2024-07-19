extern "C"{
#include "LDR.h"
#include "lightControl.h"
}
#include <Arduino.h>



void setup() {
  // put your setup code here, to run once:
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  LDR_U.percRawVal_U16 = analogRead(A0);
    LDR_lightControl(LDR_U.percRawVal_U16, &LDR_Y.firstLamp_B, &LDR_Y.secondLamp_B,
                   &LDR_Y.thirdLamp_B);

  digitalWrite (8,LDR_Y.firstLamp_B);
  digitalWrite (9,LDR_Y.secondLamp_B);
  digitalWrite (10,LDR_Y.thirdLamp_B);
}

