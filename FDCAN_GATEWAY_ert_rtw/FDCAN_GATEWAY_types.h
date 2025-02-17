/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: FDCAN_GATEWAY_types.h
 *
 * Code generated for Simulink model 'FDCAN_GATEWAY'.
 *
 * Model version                  : 2.8
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Mon Feb 17 10:31:07 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef FDCAN_GATEWAY_types_h_
#define FDCAN_GATEWAY_types_h_
#include "rtwtypes.h"
#include "stm_fdcan_hal.h"
#ifndef DEFINED_TYPEDEF_FOR_CAN_FD_MESSAGE_BUS_
#define DEFINED_TYPEDEF_FOR_CAN_FD_MESSAGE_BUS_

typedef struct {
  uint8_T ProtocolMode;
  uint8_T Extended;
  uint8_T Length;
  uint8_T Remote;
  uint8_T Error;
  uint8_T BRS;
  uint8_T ESI;
  uint8_T DLC;
  uint32_T ID;
  uint32_T Reserved;
  real_T Timestamp;
  uint8_T Data[64];
} CAN_FD_MESSAGE_BUS;

#endif

#ifndef struct_tag_tsKyPuhWUdS8zBSeRGR2aC
#define struct_tag_tsKyPuhWUdS8zBSeRGR2aC

struct tag_tsKyPuhWUdS8zBSeRGR2aC
{
  int32_T isInitialized;
};

#endif                                 /* struct_tag_tsKyPuhWUdS8zBSeRGR2aC */

#ifndef typedef_stm32cube_blocks_DigitalPortW_T
#define typedef_stm32cube_blocks_DigitalPortW_T

typedef struct tag_tsKyPuhWUdS8zBSeRGR2aC stm32cube_blocks_DigitalPortW_T;

#endif                             /* typedef_stm32cube_blocks_DigitalPortW_T */

/* Custom Type definition for MATLABSystem: '<S2>/FDCAN Write3' */
#include "stm_fdcan_hal.h"
#ifndef struct_tag_zHrKK6xZoEMhzmwFrbKjFB
#define struct_tag_zHrKK6xZoEMhzmwFrbKjFB

struct tag_zHrKK6xZoEMhzmwFrbKjFB
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  FDCAN_Type_T * MW_FDCAN_HANDLE;
};

#endif                                 /* struct_tag_zHrKK6xZoEMhzmwFrbKjFB */

#ifndef typedef_stm32cube_blocks_FDCANRead_FD_T
#define typedef_stm32cube_blocks_FDCANRead_FD_T

typedef struct tag_zHrKK6xZoEMhzmwFrbKjFB stm32cube_blocks_FDCANRead_FD_T;

#endif                             /* typedef_stm32cube_blocks_FDCANRead_FD_T */

#ifndef struct_tag_8UNvE3JHDiMNabSADXu1gF
#define struct_tag_8UNvE3JHDiMNabSADXu1gF

struct tag_8UNvE3JHDiMNabSADXu1gF
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  FDCAN_Type_T * MW_FDCAN_HANDLE;
};

#endif                                 /* struct_tag_8UNvE3JHDiMNabSADXu1gF */

#ifndef typedef_stm32cube_blocks_FDCANWrite_F_T
#define typedef_stm32cube_blocks_FDCANWrite_F_T

typedef struct tag_8UNvE3JHDiMNabSADXu1gF stm32cube_blocks_FDCANWrite_F_T;

#endif                             /* typedef_stm32cube_blocks_FDCANWrite_F_T */

/* Parameters (default storage) */
typedef struct P_FDCAN_GATEWAY_T_ P_FDCAN_GATEWAY_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_FDCAN_GATEWAY_T RT_MODEL_FDCAN_GATEWAY_T;

#endif                                 /* FDCAN_GATEWAY_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
