/*
 * File: DLCI.h
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

#ifndef RTW_HEADER_DLCI_h_
#define RTW_HEADER_DLCI_h_
#ifndef DLCI_COMMON_INCLUDES_
#define DLCI_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* DLCI_COMMON_INCLUDES_ */

#include "DLCI_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T rightSw_B;                 /* '<Root>/rightSw_B' */
  boolean_T leftSw_B;                  /* '<Root>/leftSw_B' */
} ExtU_DLCI_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T rightLamp_B;               /* '<Root>/rightLamp_B' */
  boolean_T leftLamp_B;                /* '<Root>/leftLamp_B' */
} ExtY_DLCI_T;

/* Real-time Model Data Structure */
struct tag_RTM_DLCI_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_DLCI_T DLCI_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_DLCI_T DLCI_Y;

/* Model entry point functions */
extern void DLCI_initialize(void);
extern void DLCI_step(void);
extern void DLCI_terminate(void);

/* Real-time Model object */
extern RT_MODEL_DLCI_T *const DLCI_M;

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
 * '<Root>' : 'DLCI'
 * '<S1>'   : 'DLCI/directionalLightingFunc'
 * '<S2>'   : 'DLCI/directionalLightingFunc/If Action Subsystem'
 * '<S3>'   : 'DLCI/directionalLightingFunc/If Action Subsystem1'
 * '<S4>'   : 'DLCI/directionalLightingFunc/If Action Subsystem2'
 */
#endif                                 /* RTW_HEADER_DLCI_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
