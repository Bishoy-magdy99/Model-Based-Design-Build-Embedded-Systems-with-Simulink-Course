/*
 * File: DOIO.c
 *
 * Code generated for Simulink model 'DOIO'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat Jul 13 17:58:03 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DOIO.h"
#include "indicatorLampFunc.h"

/* External inputs (root inport signals with default storage) */
ExtU_DOIO_T DOIO_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_DOIO_T DOIO_Y;

/* Real-time model */
static RT_MODEL_DOIO_T DOIO_M_;
RT_MODEL_DOIO_T *const DOIO_M = &DOIO_M_;

/* Model step function */
void DOIO_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/indicatorLampFunc' */

  /* Outport: '<Root>/indicatorLamp_B' incorporates:
   *  Inport: '<Root>/ctrlSW_B'
   */
  DOIO_Y.indicatorLamp_B = DOIO_indicatorLampFunc(DOIO_U.ctrlSW_B);

  /* End of Outputs for SubSystem: '<Root>/indicatorLampFunc' */
}

/* Model initialize function */
void DOIO_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void DOIO_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
