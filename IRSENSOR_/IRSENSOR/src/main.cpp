extern "C"{
#include "IRSensor.h"
#include "objectDetection.h"
}
#include <Arduino.h>

void run_100ms(void);
void setup() {
pinMode(8,INPUT);
pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  run_100ms();
}

void run_100ms(void){
static unsigned long lastFunction1Time = 0;
unsigned long currentMillis = millis();
if (currentMillis - lastFunction1Time >= 100){
  lastFunction1Time = currentMillis;
  IRSensor_U.objectExist_B = digitalRead (8);
   IRSensor_objectDetection(IRSensor_U.objectExist_B, &IRSensor_Y.detectionLamp_B,
    &IRSensor_DW.objectDetection);
    digitalWrite (9, IRSensor_Y.detectionLamp_B);
}

}