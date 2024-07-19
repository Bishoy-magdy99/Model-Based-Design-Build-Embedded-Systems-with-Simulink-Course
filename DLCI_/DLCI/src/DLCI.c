/*
 * File: DLCI.c
 *
 * Code generated for Simulink model 'DLCI'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat Jul 13 20:43:25 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DLCI.h"
#include "directionalLightingFunc.h"

/* External inputs (root inport signals with default storage) */
ExtU_DLCI_T DLCI_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_DLCI_T DLCI_Y;

/* Real-time model */
static RT_MODEL_DLCI_T DLCI_M_;
RT_MODEL_DLCI_T *const DLCI_M = &DLCI_M_;

/* Model step function */
void DLCI_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/directionalLightingFunc' */

  /* Outport: '<Root>/leftLamp_B' incorporates:
   *  Inport: '<Root>/leftSw_B'
   *  Inport: '<Root>/rightSw_B'
   *  Outport: '<Root>/rightLamp_B'
   */
  DLCI_directionalLightingFunc(DLCI_U.rightSw_B, DLCI_U.leftSw_B,
    &DLCI_Y.rightLamp_B, &DLCI_Y.leftLamp_B);

  /* End of Outputs for SubSystem: '<Root>/directionalLightingFunc' */
}

/* Model initialize function */
void DLCI_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void DLCI_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
