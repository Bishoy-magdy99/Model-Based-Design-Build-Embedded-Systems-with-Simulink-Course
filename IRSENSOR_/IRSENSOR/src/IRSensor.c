/*
 * File: IRSensor.c
 *
 * Code generated for Simulink model 'IRSensor'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Mon Jul 15 14:19:00 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "IRSensor.h"
#include "objectDetection.h"

/* Block states (default storage) */
DW_IRSensor_T IRSensor_DW;

/* External inputs (root inport signals with default storage) */
ExtU_IRSensor_T IRSensor_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_IRSensor_T IRSensor_Y;

/* Real-time model */
static RT_MODEL_IRSensor_T IRSensor_M_;
RT_MODEL_IRSensor_T *const IRSensor_M = &IRSensor_M_;

/* Model step function */
void IRSensor_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/objectDetection' */

  /* Inport: '<Root>/objectExist_B' incorporates:
   *  Outport: '<Root>/detectionLamp_B'
   */
  IRSensor_objectDetection(IRSensor_U.objectExist_B, &IRSensor_Y.detectionLamp_B,
    &IRSensor_DW.objectDetection);

  /* End of Outputs for SubSystem: '<Root>/objectDetection' */
}

/* Model initialize function */
void IRSensor_initialize(void)
{
  /* SystemInitialize for Atomic SubSystem: '<Root>/objectDetection' */

  /* SystemInitialize for Outport: '<Root>/detectionLamp_B' */
  IRSensor_objectDetection_Init(&IRSensor_Y.detectionLamp_B);

  /* End of SystemInitialize for SubSystem: '<Root>/objectDetection' */
}

/* Model terminate function */
void IRSensor_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
