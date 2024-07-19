/*
 * File: encoder.c
 *
 * Code generated for Simulink model 'encoder'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Tue Jul 16 00:29:25 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "encoder.h"
#include "rotaryEncoder.h"
#include "encoder_types.h"
#include "encoder_private.h"

/* Block states (default storage) */
DW_encoder_T encoder_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_encoder_T encoder_PrevZCX;

/* External inputs (root inport signals with default storage) */
ExtU_encoder_T encoder_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_encoder_T encoder_Y;

/* Real-time model */
static RT_MODEL_encoder_T encoder_M_;
RT_MODEL_encoder_T *const encoder_M = &encoder_M_;

/* Model step function */
void encoder_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/rotaryEncoder' */

  /* Outport: '<Root>/counter_U16' incorporates:
   *  Inport: '<Root>/encOutA_B'
   *  Inport: '<Root>/encOutB_B'
   *  Outport: '<Root>/s_direction_E'
   */
  encoder_rotaryEncoder(encoder_U.encOutA_B, encoder_U.encOutB_B,
                        &encoder_Y.counter_U16, &encoder_Y.s_direction_E,
                        &encoder_DW.rotaryEncoder,
                        &encoder_PrevZCX.rotaryEncoder);

  /* End of Outputs for SubSystem: '<Root>/rotaryEncoder' */
}

/* Model initialize function */
void encoder_initialize(void)
{
  /* Registration code */

  /* external outputs */
  encoder_Y.s_direction_E = CLOCKWISE_ROTATION;
  encoder_PrevZCX.rotaryEncoder.Delay_Reset_ZCE = POS_ZCSIG;
}

/* Model terminate function */
void encoder_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
