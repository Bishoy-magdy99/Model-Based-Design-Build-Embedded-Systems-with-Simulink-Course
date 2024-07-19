/*
 * File: calculatePercentFunc.h
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

#ifndef RTW_HEADER_calculatePercentFunc_h_
#define RTW_HEADER_calculatePercentFunc_h_
#ifndef PCCI_Motor_COMMON_INCLUDES_
#define PCCI_Motor_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* PCCI_Motor_COMMON_INCLUDES_ */

#include "zero_crossing_types.h"

/* Block states (default storage) for system '<Root>/calculatePercentFunc' */
typedef struct {
  int8_T Delay_DSTATE;                 /* '<S1>/Delay' */
  boolean_T Delay1_DSTATE;             /* '<S1>/Delay1' */
} DW_calculatePercentFunc_PCCI__T;

/* Zero-crossing (trigger) state for system '<Root>/calculatePercentFunc' */
typedef struct {
  ZCSigState Delay_Reset_ZCE;          /* '<S1>/Delay' */
} ZCE_calculatePercentFunc_PCCI_T;

extern void PCCI_Motor_calculatePercentFunc(uint16_T rtu_percRawVal_u16,
  boolean_T rtu_motorRotationDir_B, boolean_T *rty_indicatorLamp_B, boolean_T
  *rty_motTerminalA_B, boolean_T *rty_motTerminalB_B,
  DW_calculatePercentFunc_PCCI__T *localDW, ZCE_calculatePercentFunc_PCCI_T
  *localZCE);

#endif                                 /* RTW_HEADER_calculatePercentFunc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
