/*
 * File: lightControl.h
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

#ifndef RTW_HEADER_lightControl_h_
#define RTW_HEADER_lightControl_h_
#ifndef LDR_COMMON_INCLUDES_
#define LDR_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* LDR_COMMON_INCLUDES_ */

extern void LDR_lightControl(uint16_T rtu_percRawVal_U16, boolean_T
  *rty_firstLamp_B, boolean_T *rty_secondLamp_B, boolean_T *rty_thirdLamp_B);

#endif                                 /* RTW_HEADER_lightControl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
