/*
 * File: calculatePercentFunc.c
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

#include "rtwtypes.h"
#include "calculatePercentFunc.h"
#include "zero_crossing_types.h"

/* Output and update for atomic system: '<Root>/calculatePercentFunc' */
void PCCI_Motor_calculatePercentFunc(uint16_T rtu_percRawVal_u16, boolean_T
  rtu_motorRotationDir_B, boolean_T *rty_indicatorLamp_B, boolean_T
  *rty_motTerminalA_B, boolean_T *rty_motTerminalB_B,
  DW_calculatePercentFunc_PCCI__T *localDW, ZCE_calculatePercentFunc_PCCI_T
  *localZCE)
{
  real32_T rtb_Product;

  /* Product: '<S1>/Product' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   *  Product: '<S1>/Divide'
   */
  rtb_Product = (real32_T)rtu_percRawVal_u16 / 1023.0F * 100.0F;

  /* RelationalOperator: '<S1>/GreaterThan' incorporates:
   *  Constant: '<S1>/Constant2'
   */
  *rty_indicatorLamp_B = (rtb_Product > 50.0F);

  /* Delay: '<S1>/Delay' incorporates:
   *  Delay: '<S1>/Delay1'
   */
  if (localDW->Delay1_DSTATE && (localZCE->Delay_Reset_ZCE != POS_ZCSIG)) {
    localDW->Delay_DSTATE = 0;
  }

  localZCE->Delay_Reset_ZCE = localDW->Delay1_DSTATE;

  /* Sum: '<S1>/Add' incorporates:
   *  Constant: '<S1>/Constant5'
   *  Delay: '<S1>/Delay'
   */
  localDW->Delay_DSTATE++;

  /* RelationalOperator: '<S1>/Less Than' incorporates:
   *  Delay: '<S1>/Delay'
   */
  *rty_motTerminalB_B = (localDW->Delay_DSTATE <= rtb_Product);

  /* Switch: '<S1>/Switch' */
  *rty_motTerminalA_B = (rtu_motorRotationDir_B && (*rty_motTerminalB_B));

  /* Switch: '<S1>/Switch1' */
  *rty_motTerminalB_B = ((!rtu_motorRotationDir_B) && (*rty_motTerminalB_B));

  /* RelationalOperator: '<S1>/GreaterThan1' incorporates:
   *  Constant: '<S1>/Constant6'
   *  Delay: '<S1>/Delay'
   *  Delay: '<S1>/Delay1'
   */
  localDW->Delay1_DSTATE = (localDW->Delay_DSTATE > 100);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
