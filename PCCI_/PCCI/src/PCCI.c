/*
 * File: PCCI.c
 *
 * Code generated for Simulink model 'PCCI'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sun Jul 14 00:31:42 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PCCI.h"
#include "calculatePercentFunc.h"

/* External inputs (root inport signals with default storage) */
ExtU_PCCI_T PCCI_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_PCCI_T PCCI_Y;

/* Real-time model */
static RT_MODEL_PCCI_T PCCI_M_;
RT_MODEL_PCCI_T *const PCCI_M = &PCCI_M_;

/* Model step function */
void PCCI_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/calculatePercentFunc' */

  /* Outport: '<Root>/indicatorLamp_B' incorporates:
   *  Inport: '<Root>/percRawVal_u16'
   */
  PCCI_Y.indicatorLamp_B = PCCI_calculatePercentFunc(PCCI_U.percRawVal_u16);

  /* End of Outputs for SubSystem: '<Root>/calculatePercentFunc' */
}

/* Model initialize function */
void PCCI_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void PCCI_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
