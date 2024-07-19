/*
 * File: rotaryEncoder.c
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

#include "rtwtypes.h"
#include "encoder_types.h"
#include "rotaryEncoder.h"
#include "encoder_private.h"
#include "zero_crossing_types.h"

/* Output and update for atomic system: '<Root>/rotaryEncoder' */
void encoder_rotaryEncoder(boolean_T rtu_encOutA_B, boolean_T rtu_encOutB_B,
  uint16_T *rty_counter_U16, ROTATION_DIRECTION_E *rty_s_direction_E,
  DW_rotaryEncoder_encoder_T *localDW, ZCE_rotaryEncoder_encoder_T *localZCE)
{
  boolean_T rtb_OR;

  /* Logic: '<S1>/OR' incorporates:
   *  Constant: '<S2>/Constant'
   *  Delay: '<S1>/Delay1'
   *  RelationalOperator: '<S2>/Compare'
   */
  rtb_OR = (localDW->Delay1_DSTATE > 20);

  /* Delay: '<S1>/Delay' */
  if (rtb_OR && (localZCE->Delay_Reset_ZCE != POS_ZCSIG)) {
    localDW->Delay_DSTATE = 0U;
  }

  localZCE->Delay_Reset_ZCE = rtb_OR;

  /* Switch: '<S7>/Switch' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S12>/Constant'
   *  Logic: '<S7>/AND'
   *  Logic: '<S7>/AND1'
   *  RelationalOperator: '<S8>/FixPt Relational Operator'
   *  RelationalOperator: '<S9>/FixPt Relational Operator'
   *  Switch: '<S7>/Switch1'
   *  UnitDelay: '<S8>/Delay Input1'
   *  UnitDelay: '<S9>/Delay Input1'
   *
   * Block description for '<S8>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S9>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (((int32_T)rtu_encOutA_B < (int32_T)localDW->DelayInput1_DSTATE) &&
      rtu_encOutB_B) {
    *rty_s_direction_E = CLOCKWISE_ROTATION;
  } else if (rtu_encOutA_B && ((int32_T)rtu_encOutB_B < (int32_T)
              localDW->DelayInput1_DSTATE_h)) {
    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S11>/Constant'
     */
    *rty_s_direction_E = ANTI_CLOCKWISE_ROTATION;
  } else {
    *rty_s_direction_E = NO_ROTATION;
  }

  /* End of Switch: '<S7>/Switch' */

  /* SwitchCase: '<S1>/Switch Case' */
  switch (*rty_s_direction_E) {
   case CLOCKWISE_ROTATION:
    /* Outputs for IfAction SubSystem: '<S1>/Switch Case Action Subsystem' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* DataTypeConversion: '<S4>/Data Type Conversion' incorporates:
     *  Constant: '<S4>/Constant'
     *  Delay: '<S1>/Delay'
     *  Sum: '<S4>/Add'
     */
    *rty_counter_U16 = (uint16_T)(((localDW->Delay_DSTATE + 1) >> 1) << 1);

    /* End of Outputs for SubSystem: '<S1>/Switch Case Action Subsystem' */
    break;

   case ANTI_CLOCKWISE_ROTATION:
    /* Outputs for IfAction SubSystem: '<S1>/Switch Case Action Subsystem1' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* DataTypeConversion: '<S5>/Data Type Conversion' incorporates:
     *  Constant: '<S5>/Constant'
     *  Delay: '<S1>/Delay'
     *  Sum: '<S5>/Add'
     */
    *rty_counter_U16 = (uint16_T)((uint16_T)((localDW->Delay_DSTATE - 1) >> 1) <<
      1);

    /* End of Outputs for SubSystem: '<S1>/Switch Case Action Subsystem1' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<S1>/Switch Case Action Subsystem2' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* SignalConversion generated from: '<S6>/prevCounterVal_U16' incorporates:
     *  Delay: '<S1>/Delay'
     */
    *rty_counter_U16 = localDW->Delay_DSTATE;

    /* End of Outputs for SubSystem: '<S1>/Switch Case Action Subsystem2' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* Update for Delay: '<S1>/Delay1' */
  localDW->Delay1_DSTATE = *rty_counter_U16;

  /* Update for Delay: '<S1>/Delay' */
  localDW->Delay_DSTATE = *rty_counter_U16;

  /* Update for UnitDelay: '<S8>/Delay Input1'
   *
   * Block description for '<S8>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE = rtu_encOutA_B;

  /* Update for UnitDelay: '<S9>/Delay Input1'
   *
   * Block description for '<S9>/Delay Input1':
   *
   *  Store in Global RAM
   */
  localDW->DelayInput1_DSTATE_h = rtu_encOutB_B;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
