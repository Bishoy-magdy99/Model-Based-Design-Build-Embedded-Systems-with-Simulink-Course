extern "C"{
#include "DOIO.h"
#include "DOIO_private.h"
#include "indicatorLampFunc.h"
}
#include <Arduino.h>



void setup() {
  // put your setup code here, to run once:
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  DOIO_U.ctrlSW_B = digitalRead(8);
  //Application
  DOIO_Y.indicatorLamp_B = DOIO_indicatorLampFunc(DOIO_U.ctrlSW_B);
  digitalWrite(9,DOIO_Y.indicatorLamp_B);
}


 
