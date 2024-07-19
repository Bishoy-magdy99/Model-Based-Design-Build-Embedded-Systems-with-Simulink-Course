/*
 * File: IRSensor.h
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

#ifndef RTW_HEADER_IRSensor_h_
#define RTW_HEADER_IRSensor_h_
#ifndef IRSensor_COMMON_INCLUDES_
#define IRSensor_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* IRSensor_COMMON_INCLUDES_ */

#include "IRSensor_types.h"
#include "objectDetection.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  DW_objectDetection_IRSensor_T objectDetection;/* '<Root>/objectDetection' */
} DW_IRSensor_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T objectExist_B;             /* '<Root>/objectExist_B' */
} ExtU_IRSensor_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T detectionLamp_B;           /* '<Root>/detectionLamp_B' */
} ExtY_IRSensor_T;

/* Real-time Model Data Structure */
struct tag_RTM_IRSensor_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_IRSensor_T IRSensor_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_IRSensor_T IRSensor_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_IRSensor_T IRSensor_Y;

/* Model entry point functions */
extern void IRSensor_initialize(void);
extern void IRSensor_step(void);
extern void IRSensor_terminate(void);

/* Real-time Model object */
extern RT_MODEL_IRSensor_T *const IRSensor_M;

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
 * '<Root>' : 'IRSensor'
 * '<S1>'   : 'IRSensor/objectDetection'
 * '<S2>'   : 'IRSensor/objectDetection/Chart'
 */
#endif                                 /* RTW_HEADER_IRSensor_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
