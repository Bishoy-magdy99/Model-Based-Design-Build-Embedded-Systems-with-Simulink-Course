extern "C"{
#include "encoder.h"
#include "rotaryEncoder.h"
#include "encoder_types.h"
#include "encoder_private.h"
}
#include <Arduino.h>



void setup() {
  // put your setup code here, to run once:
  pinMode (8,OUTPUT);
  pinMode (9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    encoder_U.encOutA_B = digitalRead(9);
    encoder_U.encOutB_B = digitalRead (8);
    encoder_rotaryEncoder(encoder_U.encOutA_B, encoder_U.encOutB_B,
                        &encoder_Y.counter_U16, &encoder_Y.s_direction_E,
                        &encoder_DW.rotaryEncoder,
                        &encoder_PrevZCX.rotaryEncoder);
}

