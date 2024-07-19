/*
 * File: ULTRASONIC_Bishoy.h
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

#ifndef RTW_HEADER_ULTRASONIC_Bishoy_h_
#define RTW_HEADER_ULTRASONIC_Bishoy_h_
#ifndef ultrasonic_COMMON_INCLUDES_
#define ultrasonic_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* ultrasonic_COMMON_INCLUDES_ */

/* Block states (default storage) for system '<Root>/ULTRASONIC_Bishoy' */
typedef struct {
  real_T Delay_DSTATE;                 /* '<S5>/Delay' */
  boolean_T DelayInput1_DSTATE;        /* '<S4>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_e;      /* '<S3>/Delay Input1' */
  uint8_T is_active_c3_ultrasonic;     /* '<S1>/Chart' */
  uint8_T is_c3_ultrasonic;            /* '<S1>/Chart' */
  boolean_T EnabledSubsystem_MODE;     /* '<S1>/Enabled Subsystem' */
} DW_ULTRASONIC_Bishoy_ultrason_T;

extern void ultrasonic_ULTRASONIC_Bishoy(boolean_T rtu_echo_B, real_T
  *rty_counts_U16, DW_ULTRASONIC_Bishoy_ultrason_T *localDW);

#endif                                 /* RTW_HEADER_ULTRASONIC_Bishoy_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
