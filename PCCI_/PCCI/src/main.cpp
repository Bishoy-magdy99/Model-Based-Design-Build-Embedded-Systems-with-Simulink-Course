extern "C"{
#include "PCCI.h"
#include "calculatePercentFunc.h"

}
#include <Arduino.h>

// put function declarations here:


void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  PCCI_U.percRawVal_u16 = analogRead(A0);
  PCCI_Y.indicatorLamp_B = PCCI_calculatePercentFunc(PCCI_U.percRawVal_u16);
  digitalWrite(10,PCCI_Y.indicatorLamp_B);
}


