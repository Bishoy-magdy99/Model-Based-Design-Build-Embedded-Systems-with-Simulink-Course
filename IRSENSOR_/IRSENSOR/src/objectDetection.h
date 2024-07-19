/*
 * File: objectDetection.h
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

#ifndef RTW_HEADER_objectDetection_h_
#define RTW_HEADER_objectDetection_h_
#ifndef IRSensor_COMMON_INCLUDES_
#define IRSensor_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* IRSensor_COMMON_INCLUDES_ */

/* Block states (default storage) for system '<Root>/objectDetection' */
typedef struct {
  uint8_T counter;                     /* '<S1>/Chart' */
  uint8_T is_active_c3_IRSensor;       /* '<S1>/Chart' */
  uint8_T is_c3_IRSensor;              /* '<S1>/Chart' */
} DW_objectDetection_IRSensor_T;

extern void IRSensor_objectDetection_Init(boolean_T *rty_detectionLamp_B);
extern void IRSensor_objectDetection(boolean_T rtu_objectExist_B, boolean_T
  *rty_detectionLamp_B, DW_objectDetection_IRSensor_T *localDW);

#endif                                 /* RTW_HEADER_objectDetection_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
