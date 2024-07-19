/*
 * File: LDR.c
 *
 * Code generated for Simulink model 'LDR'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sun Jul 14 17:01:22 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "LDR.h"
#include "lightControl.h"

/* External inputs (root inport signals with default storage) */
ExtU_LDR_T LDR_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_LDR_T LDR_Y;

/* Real-time model */
static RT_MODEL_LDR_T LDR_M_;
RT_MODEL_LDR_T *const LDR_M = &LDR_M_;

/* Model step function */
void LDR_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/lightControl' */

  /* Inport: '<Root>/percRawVal_U16' incorporates:
   *  Outport: '<Root>/firstLamp_B'
   *  Outport: '<Root>/secondLamp_B'
   *  Outport: '<Root>/thirdLamp_B'
   */
  LDR_lightControl(LDR_U.percRawVal_U16, &LDR_Y.firstLamp_B, &LDR_Y.secondLamp_B,
                   &LDR_Y.thirdLamp_B);

  /* End of Outputs for SubSystem: '<Root>/lightControl' */
}

/* Model initialize function */
void LDR_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void LDR_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
