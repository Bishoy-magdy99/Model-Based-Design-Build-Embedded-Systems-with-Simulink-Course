/*
 * File: lightControl.c
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

#include "rtwtypes.h"
#include "lightControl.h"
#include <math.h>

/* Output and update for atomic system: '<Root>/lightControl' */
void LDR_lightControl(uint16_T rtu_percRawVal_U16, boolean_T *rty_firstLamp_B,
                      boolean_T *rty_secondLamp_B, boolean_T *rty_thirdLamp_B)
{
  int32_T tmp;

  /* Gain: '<S1>/Gain' incorporates:
   *  Constant: '<S1>/Constant'
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   *  Product: '<S1>/Divide'
   */
  tmp = (int32_T)fmodf(floorf((real32_T)rtu_percRawVal_U16 / 1023.0F * 100.0F),
                       256.0F);

  /* Truth Table: '<S1>/Truth Table' incorporates:
   *  Gain: '<S1>/Gain'
   */
  /*  Example condition 1 */
  /*  Example condition 2 */
  /*  Condition #3 */
  if ((int8_T)tmp > 60) {
    /*  Example action 1 called from D1 & D2 column in condition table */
    *rty_firstLamp_B = true;
    *rty_secondLamp_B = true;
    *rty_thirdLamp_B = true;
  } else if ((int8_T)tmp > 40) {
    /*  Example action 2 called from D3 column in condition table */
    *rty_firstLamp_B = true;
    *rty_secondLamp_B = true;
    *rty_thirdLamp_B = false;
  } else if ((int8_T)tmp > 20) {
    *rty_firstLamp_B = true;
    *rty_secondLamp_B = false;
    *rty_thirdLamp_B = false;
  } else {
    /*  Default */
    *rty_firstLamp_B = false;
    *rty_secondLamp_B = false;
    *rty_thirdLamp_B = false;
  }

  /* End of Truth Table: '<S1>/Truth Table' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
