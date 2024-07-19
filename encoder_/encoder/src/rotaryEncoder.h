/*
 * File: rotaryEncoder.h
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

#ifndef RTW_HEADER_rotaryEncoder_h_
#define RTW_HEADER_rotaryEncoder_h_
#ifndef encoder_COMMON_INCLUDES_
#define encoder_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* encoder_COMMON_INCLUDES_ */

#include "encoder_types.h"
#include "zero_crossing_types.h"

/* Block states (default storage) for system '<Root>/rotaryEncoder' */
typedef struct {
  uint16_T Delay1_DSTATE;              /* '<S1>/Delay1' */
  uint16_T Delay_DSTATE;               /* '<S1>/Delay' */
  boolean_T DelayInput1_DSTATE;        /* '<S8>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_h;      /* '<S9>/Delay Input1' */
} DW_rotaryEncoder_encoder_T;

/* Zero-crossing (trigger) state for system '<Root>/rotaryEncoder' */
typedef struct {
  ZCSigState Delay_Reset_ZCE;          /* '<S1>/Delay' */
} ZCE_rotaryEncoder_encoder_T;

extern void encoder_rotaryEncoder(boolean_T rtu_encOutA_B, boolean_T
  rtu_encOutB_B, uint16_T *rty_counter_U16, ROTATION_DIRECTION_E
  *rty_s_direction_E, DW_rotaryEncoder_encoder_T *localDW,
  ZCE_rotaryEncoder_encoder_T *localZCE);

#endif                                 /* RTW_HEADER_rotaryEncoder_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
