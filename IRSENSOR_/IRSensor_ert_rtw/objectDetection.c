/*
 * File: objectDetection.c
 *
 * Code generated for Simulink model 'IRSensor'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Mon Jul 15 14:19:00 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtwtypes.h"
#include "objectDetection.h"

/* Named constants for Chart: '<S1>/Chart' */
#define IRSensor_IN_hold               ((uint8_T)1U)
#define IRSensor_IN_init               ((uint8_T)2U)

/* System initialize for atomic system: '<Root>/objectDetection' */
void IRSensor_objectDetection_Init(boolean_T *rty_detectionLamp_B)
{
  /* SystemInitialize for Chart: '<S1>/Chart' */
  *rty_detectionLamp_B = false;
}

/* Output and update for atomic system: '<Root>/objectDetection' */
void IRSensor_objectDetection(boolean_T rtu_objectExist_B, boolean_T
  *rty_detectionLamp_B, DW_objectDetection_IRSensor_T *localDW)
{
  /* Chart: '<S1>/Chart' incorporates:
   *  Logic: '<S1>/NOT'
   */
  if (localDW->is_active_c3_IRSensor == 0U) {
    localDW->is_active_c3_IRSensor = 1U;
    localDW->is_c3_IRSensor = IRSensor_IN_init;
    *rty_detectionLamp_B = false;
  } else if (localDW->is_c3_IRSensor == IRSensor_IN_hold) {
    if (localDW->counter >= 20) {
      localDW->is_c3_IRSensor = IRSensor_IN_init;
      *rty_detectionLamp_B = false;
    } else {
      localDW->counter++;
      *rty_detectionLamp_B = true;
    }

    /* case IN_init: */
  } else if (!rtu_objectExist_B) {
    localDW->is_c3_IRSensor = IRSensor_IN_hold;
    localDW->counter = 0U;
  }

  /* End of Chart: '<S1>/Chart' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
