extern "C"{
#include "DLCI.h"
#include "directionalLightingFunc.h"
#include "DLCI_private.h"
}
#include <Arduino.h>



void setup() {
  pinMode (8,INPUT);
  pinMode (9,INPUT);

  pinMode (10,OUTPUT);
  pinMode (11,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  DLCI_U.rightSw_B = digitalRead(8);
  DLCI_U.leftSw_B = digitalRead(9);
  DLCI_directionalLightingFunc(DLCI_U.rightSw_B, DLCI_U.leftSw_B,
    &DLCI_Y.rightLamp_B, &DLCI_Y.leftLamp_B);
    digitalWrite(10,DLCI_Y.rightLamp_B);
    digitalWrite(11,DLCI_Y.leftLamp_B);
}

