/*
 * File: encoder.h
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

#ifndef RTW_HEADER_encoder_h_
#define RTW_HEADER_encoder_h_
#ifndef encoder_COMMON_INCLUDES_
#define encoder_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* encoder_COMMON_INCLUDES_ */

#include "encoder_types.h"
#include "rotaryEncoder.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  DW_rotaryEncoder_encoder_T rotaryEncoder;/* '<Root>/rotaryEncoder' */
} DW_encoder_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCE_rotaryEncoder_encoder_T rotaryEncoder;/* '<Root>/rotaryEncoder' */
} PrevZCX_encoder_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T encOutA_B;                 /* '<Root>/encOutA_B' */
  boolean_T encOutB_B;                 /* '<Root>/encOutB_B' */
} ExtU_encoder_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint16_T counter_U16;                /* '<Root>/counter_U16' */
  ROTATION_DIRECTION_E s_direction_E;  /* '<Root>/s_direction_E' */
} ExtY_encoder_T;

/* Real-time Model Data Structure */
struct tag_RTM_encoder_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_encoder_T encoder_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_encoder_T encoder_PrevZCX;

/* External inputs (root inport signals with default storage) */
extern ExtU_encoder_T encoder_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_encoder_T encoder_Y;

/* Model entry point functions */
extern void encoder_initialize(void);
extern void encoder_step(void);
extern void encoder_terminate(void);

/* Real-time Model object */
extern RT_MODEL_encoder_T *const encoder_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'encoder'
 * '<S1>'   : 'encoder/rotaryEncoder'
 * '<S2>'   : 'encoder/rotaryEncoder/Compare To Constant'
 * '<S3>'   : 'encoder/rotaryEncoder/Compare To Constant1'
 * '<S4>'   : 'encoder/rotaryEncoder/Switch Case Action Subsystem'
 * '<S5>'   : 'encoder/rotaryEncoder/Switch Case Action Subsystem1'
 * '<S6>'   : 'encoder/rotaryEncoder/Switch Case Action Subsystem2'
 * '<S7>'   : 'encoder/rotaryEncoder/defineDirection'
 * '<S8>'   : 'encoder/rotaryEncoder/defineDirection/Detect Decrease'
 * '<S9>'   : 'encoder/rotaryEncoder/defineDirection/Detect Decrease1'
 * '<S10>'  : 'encoder/rotaryEncoder/defineDirection/Enumerated Constant'
 * '<S11>'  : 'encoder/rotaryEncoder/defineDirection/Enumerated Constant1'
 * '<S12>'  : 'encoder/rotaryEncoder/defineDirection/Enumerated Constant2'
 */
#endif                                 /* RTW_HEADER_encoder_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
