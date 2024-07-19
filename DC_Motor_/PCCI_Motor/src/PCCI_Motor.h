/*
 * File: PCCI_Motor.h
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

#ifndef RTW_HEADER_PCCI_Motor_h_
#define RTW_HEADER_PCCI_Motor_h_
#ifndef PCCI_Motor_COMMON_INCLUDES_
#define PCCI_Motor_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* PCCI_Motor_COMMON_INCLUDES_ */

#include "PCCI_Motor_types.h"
#include "calculatePercentFunc.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  DW_calculatePercentFunc_PCCI__T calculatePercentFunc;/* '<Root>/calculatePercentFunc' */
} DW_PCCI_Motor_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCE_calculatePercentFunc_PCCI_T calculatePercentFunc;/* '<Root>/calculatePercentFunc' */
} PrevZCX_PCCI_Motor_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint16_T percRawVal_u16;             /* '<Root>/percRawVal_u16' */
  boolean_T motorRotationDir_B;        /* '<Root>/motorRotationDir_B' */
} ExtU_PCCI_Motor_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T indicatorLamp_B;           /* '<Root>/indicatorLamp_B' */
  boolean_T motTerminalA_B;            /* '<Root>/motTerminalA_B' */
  boolean_T motTerminalB_B;            /* '<Root>/motTerminalB_B' */
} ExtY_PCCI_Motor_T;

/* Real-time Model Data Structure */
struct tag_RTM_PCCI_Motor_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_PCCI_Motor_T PCCI_Motor_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_PCCI_Motor_T PCCI_Motor_PrevZCX;

/* External inputs (root inport signals with default storage) */
extern ExtU_PCCI_Motor_T PCCI_Motor_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_PCCI_Motor_T PCCI_Motor_Y;

/* Model entry point functions */
extern void PCCI_Motor_initialize(void);
extern void PCCI_Motor_step(void);
extern void PCCI_Motor_terminate(void);

/* Real-time Model object */
extern RT_MODEL_PCCI_Motor_T *const PCCI_Motor_M;

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
 * '<Root>' : 'PCCI_Motor'
 * '<S1>'   : 'PCCI_Motor/calculatePercentFunc'
 */
#endif                                 /* RTW_HEADER_PCCI_Motor_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
