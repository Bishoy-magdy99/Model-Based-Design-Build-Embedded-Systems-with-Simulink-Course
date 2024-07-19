/*
 * File: ultrasonic.h
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

#ifndef RTW_HEADER_ultrasonic_h_
#define RTW_HEADER_ultrasonic_h_
#ifndef ultrasonic_COMMON_INCLUDES_
#define ultrasonic_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* ultrasonic_COMMON_INCLUDES_ */

#include "ultrasonic_types.h"
#include "ULTRASONIC_Bishoy.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  DW_ULTRASONIC_Bishoy_ultrason_T ULTRASONIC_Bishoy;/* '<Root>/ULTRASONIC_Bishoy' */
} DW_ultrasonic_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T echo_B;                    /* '<Root>/echo_B' */
} ExtU_ultrasonic_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T counts_U16;                   /* '<Root>/counts_U16' */
} ExtY_ultrasonic_T;

/* Real-time Model Data Structure */
struct tag_RTM_ultrasonic_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_ultrasonic_T ultrasonic_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_ultrasonic_T ultrasonic_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_ultrasonic_T ultrasonic_Y;

/* Model entry point functions */
extern void ultrasonic_initialize(void);
extern void ultrasonic_step(void);
extern void ultrasonic_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ultrasonic_T *const ultrasonic_M;

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
 * '<Root>' : 'ultrasonic'
 * '<S1>'   : 'ultrasonic/ULTRASONIC_Bishoy'
 * '<S2>'   : 'ultrasonic/ULTRASONIC_Bishoy/Chart'
 * '<S3>'   : 'ultrasonic/ULTRASONIC_Bishoy/Detect Decrease'
 * '<S4>'   : 'ultrasonic/ULTRASONIC_Bishoy/Detect Increase'
 * '<S5>'   : 'ultrasonic/ULTRASONIC_Bishoy/Enabled Subsystem'
 */
#endif                                 /* RTW_HEADER_ultrasonic_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
