/*
 * File: calculatePercentFunc.c
 *
 * Code generated for Simulink model 'PCCI'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sun Jul 14 00:31:42 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtwtypes.h"
#include "calculatePercentFunc.h"

/* Output and update for atomic system: '<Root>/calculatePercentFunc' */
boolean_T PCCI_calculatePercentFunc(uint16_T rtu_percRawVal_u16)
{
  /* RelationalOperator: '<S1>/GreaterThan' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S1>/Constant2'
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   *  Product: '<S1>/Divide'
   *  Product: '<S1>/Product'
   */
  return (real32_T)rtu_percRawVal_u16 / 1023.0F * 100.0F > 50.0F;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
