/*
 * File: ULTRASONIC_Bishoy.c
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

#include "rtwtypes.h"
#include "ULTRASONIC_Bishoy.h"

/* Named constants for Chart: '<S1>/Chart' */
#define ultrasonic_IN_change           ((uint8_T)1U)
#define ultrasonic_IN_hold             ((uint8_T)2U)

/* Output and update for atomic system: '<Root>/ULTRASONIC_Bishoy' */
void ultrasonic_ULTRASONIC_Bishoy(boolean_T rtu_echo_B, real_T *rty_counts_U16,
  DW_ULTRASONIC_Bishoy_ultrason_T *localDW)
{
  boolean_T guard1;
  boolean_T rtb_FixPtRelationalOperator;

  /* RelationalOperator: '<S4>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S4>/Delay Input1'
   *
   * Block description for '<S4>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_FixPtRelationalOperator = ((int32_T)rtu_echo_B > (int32_T)
    localDW->DelayInput1_DSTATE);

  /* UnitDelay: '<S3>/Delay Input1' incorporates:
   *  UnitDelay: '<S4>/Delay Input1'
   *
   * Block description for '<S3>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S4>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE = localDW->DelayInput1_DSTATE_e;

  /* Chart: '<S1>/Chart' */
  guard1 = false;
  if (localDW->is_active_c3_ultrasonic == 0U) {
    localDW->is_active_c3_ultrasonic = 1U;
    localDW->is_c3_ultrasonic = ultrasonic_IN_hold;

    /* Outputs for Enabled SubSystem: '<S1>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S5>/Enable'
     */
    localDW->EnabledSubsystem_MODE = false;

    /* End of Outputs for SubSystem: '<S1>/Enabled Subsystem' */
  } else if (localDW->is_c3_ultrasonic == ultrasonic_IN_change) {
    if ((int32_T)rtu_echo_B < (int32_T)localDW->DelayInput1_DSTATE) {
      localDW->is_c3_ultrasonic = ultrasonic_IN_hold;

      /* Outputs for Enabled SubSystem: '<S1>/Enabled Subsystem' incorporates:
       *  EnablePort: '<S5>/Enable'
       */
      localDW->EnabledSubsystem_MODE = false;

      /* End of Outputs for SubSystem: '<S1>/Enabled Subsystem' */
    } else {
      guard1 = true;
    }

    /* case IN_hold: */
  } else if (rtb_FixPtRelationalOperator) {
    localDW->is_c3_ultrasonic = ultrasonic_IN_change;
    guard1 = true;
  } else {
    /* Outputs for Enabled SubSystem: '<S1>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S5>/Enable'
     */
    localDW->EnabledSubsystem_MODE = false;

    /* End of Outputs for SubSystem: '<S1>/Enabled Subsystem' */
  }

  if (guard1) {
    /* Outputs for Enabled SubSystem: '<S1>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S5>/Enable'
     */
    if (!localDW->EnabledSubsystem_MODE) {
      /* InitializeConditions for Delay: '<S5>/Delay' */
      localDW->Delay_DSTATE = 0.0;
      localDW->EnabledSubsystem_MODE = true;
    }

    /* Sum: '<S5>/Add' incorporates:
     *  Constant: '<S5>/Constant'
     *  Delay: '<S5>/Delay'
     */
    *rty_counts_U16 = localDW->Delay_DSTATE + 1.0;

    /* Update for Delay: '<S5>/Delay' */
    localDW->Delay_DSTATE = *rty_counts_U16;

    /* End of Outputs for SubSystem: '<S1>/Enabled Subsystem' */
  }

  /* End of Chart: '<S1>/Chart' */

  /* Update for UnitDelay: '<S4>/Delay Input1'
   *
   * Block description for '<S4>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE = rtu_echo_B;

  /* Update for UnitDelay: '<S3>/Delay Input1'
   *
   * Block description for '<S3>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_e = rtu_echo_B;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
