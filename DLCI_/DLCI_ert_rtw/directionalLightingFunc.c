/*
 * File: directionalLightingFunc.c
 *
 * Code generated for Simulink model 'DLCI'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat Jul 13 20:43:25 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtwtypes.h"
#include "directionalLightingFunc.h"

/* Output and update for atomic system: '<Root>/directionalLightingFunc' */
void DLCI_directionalLightingFunc(boolean_T rtu_rightSw_B, boolean_T
  rtu_leftSw_B, boolean_T *rty_rightLamp_B, boolean_T *rty_leftLamp_B)
{
  /* If: '<S1>/If' */
  if (rtu_rightSw_B && (!rtu_leftSw_B)) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* SignalConversion generated from: '<S2>/rightLamp_B' incorporates:
     *  Constant: '<S2>/Constant'
     */
    *rty_rightLamp_B = true;

    /* SignalConversion generated from: '<S2>/leftLamp_B' incorporates:
     *  Constant: '<S2>/Constant1'
     */
    *rty_leftLamp_B = false;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
  } else if ((!rtu_rightSw_B) && rtu_leftSw_B) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* SignalConversion generated from: '<S3>/rightLamp_B' incorporates:
     *  Constant: '<S3>/Constant'
     */
    *rty_rightLamp_B = false;

    /* SignalConversion generated from: '<S3>/leftLamp_B' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    *rty_leftLamp_B = true;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* SignalConversion generated from: '<S4>/rightLamp_B' incorporates:
     *  Constant: '<S4>/Constant'
     */
    *rty_rightLamp_B = false;

    /* SignalConversion generated from: '<S4>/leftLamp_B' incorporates:
     *  Constant: '<S4>/Constant1'
     */
    *rty_leftLamp_B = false;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem2' */
  }

  /* End of If: '<S1>/If' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
