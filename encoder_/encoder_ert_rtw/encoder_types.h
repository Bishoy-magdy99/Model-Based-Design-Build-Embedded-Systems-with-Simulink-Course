/*
 * File: encoder_types.h
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

#ifndef RTW_HEADER_encoder_types_h_
#define RTW_HEADER_encoder_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_ROTATION_DIRECTION_E_
#define DEFINED_TYPEDEF_FOR_ROTATION_DIRECTION_E_

typedef enum {
  CLOCKWISE_ROTATION = 1,              /* Default value */
  ANTI_CLOCKWISE_ROTATION = 2,
  NO_ROTATION = 0
} ROTATION_DIRECTION_E;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_encoder_T RT_MODEL_encoder_T;

#endif                                 /* RTW_HEADER_encoder_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
