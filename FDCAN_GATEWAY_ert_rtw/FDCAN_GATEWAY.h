/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: FDCAN_GATEWAY.h
 *
 * Code generated for Simulink model 'FDCAN_GATEWAY'.
 *
 * Model version                  : 2.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Thu Jan 30 10:09:56 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef FDCAN_GATEWAY_h_
#define FDCAN_GATEWAY_h_
#ifndef FDCAN_GATEWAY_COMMON_INCLUDES_
#define FDCAN_GATEWAY_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#include "string.h"
#include "main.h"
#include "stm_fdcan_hal.h"
#endif                                 /* FDCAN_GATEWAY_COMMON_INCLUDES_ */

#include "FDCAN_GATEWAY_types.h"
#include <string.h>
#include <stddef.h>
#include "can_message.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  CAN_FD_MESSAGE_BUS FDCANRead1;       /* '<S1>/FDCAN Read1' */
  CAN_FD_MESSAGE_BUS FDCANRead;        /* '<S1>/FDCAN Read' */
  uint8_T CANUnpack_o1[4];             /* '<S1>/CAN Unpack' */
  uint8_T CANUnpack_o2;                /* '<S1>/CAN Unpack' */
  uint8_T CANUnpack1_o1;               /* '<S1>/CAN Unpack1' */
  uint8_T CANUnpack1_o2;               /* '<S1>/CAN Unpack1' */
  uint8_T CANUnpack2[3];               /* '<S1>/CAN Unpack2' */
} B_FDCAN_GATEWAY_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_FDCANRead_FD_T obj; /* '<S1>/FDCAN Read1' */
  stm32cube_blocks_FDCANRead_FD_T obj_l;/* '<S1>/FDCAN Read' */
  stm32cube_blocks_FDCANWrite_F_T obj_i;/* '<S2>/FDCAN Write3' */
  stm32cube_blocks_FDCANWrite_F_T obj_c;/* '<S2>/FDCAN Write2' */
  stm32cube_blocks_FDCANWrite_F_T obj_n;/* '<S2>/FDCAN Write1' */
  stm32cube_blocks_FDCANWrite_F_T obj_h;/* '<S2>/FDCAN Write' */
  stm32cube_blocks_FDCANWrite_F_T obj_b;/* '<S1>/FDCAN Write2' */
  stm32cube_blocks_FDCANWrite_F_T obj_e;/* '<S1>/FDCAN Write1' */
  stm32cube_blocks_FDCANWrite_F_T obj_hb;/* '<S1>/FDCAN Write' */
  int_T CANUnpack_ModeSignalID;        /* '<S1>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S1>/CAN Unpack' */
  int_T CANUnpack1_ModeSignalID;       /* '<S1>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID;       /* '<S1>/CAN Unpack1' */
  int_T CANUnpack2_ModeSignalID;       /* '<S1>/CAN Unpack2' */
  int_T CANUnpack2_StatusPortID;       /* '<S1>/CAN Unpack2' */
  boolean_T Memory_PreviousInput;      /* '<S1>/Memory' */
} DW_FDCAN_GATEWAY_T;

/* Parameters (default storage) */
struct P_FDCAN_GATEWAY_T_ {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S1>/Constant'
                                        */
  boolean_T Memory_InitialCondition;
                                  /* Computed Parameter: Memory_InitialCondition
                                   * Referenced by: '<S1>/Memory'
                                   */
  uint8_T Constant_Value_c;            /* Computed Parameter: Constant_Value_c
                                        * Referenced by: '<S2>/Constant'
                                        */
  uint8_T Constant1_Value;             /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S2>/Constant1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_FDCAN_GATEWAY_T {
  const char_T * volatile errorStatus;
};

extern CAN_DATATYPE CAN_DATATYPE_GROUND;

/* Block parameters (default storage) */
extern P_FDCAN_GATEWAY_T FDCAN_GATEWAY_P;

/* Block signals (default storage) */
extern B_FDCAN_GATEWAY_T FDCAN_GATEWAY_B;

/* Block states (default storage) */
extern DW_FDCAN_GATEWAY_T FDCAN_GATEWAY_DW;

/* Model entry point functions */
extern void FDCAN_GATEWAY_initialize(void);
extern void FDCAN_GATEWAY_step(void);
extern void FDCAN_GATEWAY_terminate(void);

/* Real-time Model object */
extern RT_MODEL_FDCAN_GATEWAY_T *const FDCAN_GATEWAY_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

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
 * '<Root>' : 'FDCAN_GATEWAY'
 * '<S1>'   : 'FDCAN_GATEWAY/CAN2<-->CAN3'
 * '<S2>'   : 'FDCAN_GATEWAY/CANFD'
 * '<S3>'   : 'FDCAN_GATEWAY/CAN2<-->CAN3/Digital Port Write1'
 * '<S4>'   : 'FDCAN_GATEWAY/CAN2<-->CAN3/Digital Port Write1/ECSoC'
 * '<S5>'   : 'FDCAN_GATEWAY/CAN2<-->CAN3/Digital Port Write1/ECSoC/ECSimCodegen'
 */
#endif                                 /* FDCAN_GATEWAY_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
