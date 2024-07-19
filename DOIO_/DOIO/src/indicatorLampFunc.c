/*
 * File: indicatorLampFunc.c
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

#include "rtwtypes.h"
#include "indicatorLampFunc.h"

/* Output and update for atomic system: '<Root>/indicatorLampFunc' */
boolean_T DOIO_indicatorLampFunc(boolean_T rtu_ctrlSW_B)
{
  /* Switch: '<S1>/Switch' */
  return rtu_ctrlSW_B;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
