/*
 * File: LDR.h
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

#ifndef RTW_HEADER_LDR_h_
#define RTW_HEADER_LDR_h_
#ifndef LDR_COMMON_INCLUDES_
#define LDR_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* LDR_COMMON_INCLUDES_ */

#include "LDR_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint16_T percRawVal_U16;             /* '<Root>/percRawVal_U16' */
} ExtU_LDR_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T firstLamp_B;               /* '<Root>/firstLamp_B' */
  boolean_T secondLamp_B;              /* '<Root>/secondLamp_B' */
  boolean_T thirdLamp_B;               /* '<Root>/thirdLamp_B' */
} ExtY_LDR_T;

/* Real-time Model Data Structure */
struct tag_RTM_LDR_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_LDR_T LDR_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_LDR_T LDR_Y;

/* Model entry point functions */
extern void LDR_initialize(void);
extern void LDR_step(void);
extern void LDR_terminate(void);

/* Real-time Model object */
extern RT_MODEL_LDR_T *const LDR_M;

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
 * '<Root>' : 'LDR'
 * '<S1>'   : 'LDR/lightControl'
 * '<S2>'   : 'LDR/lightControl/Truth Table'
 */
#endif                                 /* RTW_HEADER_LDR_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
