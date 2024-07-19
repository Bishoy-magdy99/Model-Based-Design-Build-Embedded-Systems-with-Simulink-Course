/*
 * File: ultrasonic.c
 *
 * Code generated for Simulink model 'ultrasonic'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Mon Jul 15 13:56:03 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ultrasonic.h"
#include "ULTRASONIC_Bishoy.h"

/* Block states (default storage) */
DW_ultrasonic_T ultrasonic_DW;

/* External inputs (root inport signals with default storage) */
ExtU_ultrasonic_T ultrasonic_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_ultrasonic_T ultrasonic_Y;

/* Real-time model */
static RT_MODEL_ultrasonic_T ultrasonic_M_;
RT_MODEL_ultrasonic_T *const ultrasonic_M = &ultrasonic_M_;

/* Model step function */
void ultrasonic_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/ULTRASONIC_Bishoy' */

  /* Inport: '<Root>/echo_B' incorporates:
   *  Outport: '<Root>/counts_U16'
   */
  ultrasonic_ULTRASONIC_Bishoy(ultrasonic_U.echo_B, &ultrasonic_Y.counts_U16,
    &ultrasonic_DW.ULTRASONIC_Bishoy);

  /* End of Outputs for SubSystem: '<Root>/ULTRASONIC_Bishoy' */
}

/* Model initialize function */
void ultrasonic_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void ultrasonic_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
