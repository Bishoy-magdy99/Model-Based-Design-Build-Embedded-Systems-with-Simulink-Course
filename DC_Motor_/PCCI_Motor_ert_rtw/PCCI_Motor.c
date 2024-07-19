/*
 * File: PCCI_Motor.c
 *
 * Code generated for Simulink model 'PCCI_Motor'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sun Jul 14 13:53:57 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PCCI_Motor.h"
#include "calculatePercentFunc.h"

/* Block states (default storage) */
DW_PCCI_Motor_T PCCI_Motor_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_PCCI_Motor_T PCCI_Motor_PrevZCX;

/* External inputs (root inport signals with default storage) */
ExtU_PCCI_Motor_T PCCI_Motor_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_PCCI_Motor_T PCCI_Motor_Y;

/* Real-time model */
static RT_MODEL_PCCI_Motor_T PCCI_Motor_M_;
RT_MODEL_PCCI_Motor_T *const PCCI_Motor_M = &PCCI_Motor_M_;

/* Model step function */
void PCCI_Motor_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/calculatePercentFunc' */

  /* Inport: '<Root>/percRawVal_u16' incorporates:
   *  Inport: '<Root>/motorRotationDir_B'
   *  Outport: '<Root>/indicatorLamp_B'
   *  Outport: '<Root>/motTerminalA_B'
   *  Outport: '<Root>/motTerminalB_B'
   */
  PCCI_Motor_calculatePercentFunc(PCCI_Motor_U.percRawVal_u16,
    PCCI_Motor_U.motorRotationDir_B, &PCCI_Motor_Y.indicatorLamp_B,
    &PCCI_Motor_Y.motTerminalA_B, &PCCI_Motor_Y.motTerminalB_B,
    &PCCI_Motor_DW.calculatePercentFunc,
    &PCCI_Motor_PrevZCX.calculatePercentFunc);

  /* End of Outputs for SubSystem: '<Root>/calculatePercentFunc' */
}

/* Model initialize function */
void PCCI_Motor_initialize(void)
{
  PCCI_Motor_PrevZCX.calculatePercentFunc.Delay_Reset_ZCE = POS_ZCSIG;
}

/* Model terminate function */
void PCCI_Motor_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
