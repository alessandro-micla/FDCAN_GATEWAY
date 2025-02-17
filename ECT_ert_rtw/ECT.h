/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ECT.h
 *
 * Code generated for Simulink model 'ECT'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Sun Feb 16 17:47:09 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef ECT_h_
#define ECT_h_
#ifndef ECT_COMMON_INCLUDES_
#define ECT_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "MW_AnalogIn.h"
#include "MW_MbedPinInterface.h"
#include "mwCanHalF7.h"
#endif                                 /* ECT_COMMON_INCLUDES_ */

#include "ECT_types.h"
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T UniformRandomNumber;          /* '<S4>/Uniform Random Number' */
} B_ECT_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  mbed_AnalogInput_ECT_T obj;          /* '<S1>/Analog Input' */
  stmmbed_stm32f7_CANTransmit_E_T obj_o;/* '<S1>/CAN Transmit' */
} DW_ECT_T;

/* Invariant block signals (default storage) */
typedef struct {
  const uint16_T BitwiseOR;            /* '<S2>/Bitwise OR' */
  const uint16_T ShiftArithmetic;      /* '<S2>/Shift Arithmetic' */
  const uint8_T DataTypeConversion2;   /* '<S2>/Data Type Conversion2' */
  const uint8_T DataTypeConversion3;   /* '<S2>/Data Type Conversion3' */
} ConstB_ECT_T;

/* Real-time Model Data Structure */
struct tag_RTM_ECT_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_ECT_T ECT_B;

/* Block states (default storage) */
extern DW_ECT_T ECT_DW;
extern const ConstB_ECT_T ECT_ConstB;  /* constant block i/o */

/* Model entry point functions */
extern void ECT_initialize(void);
extern void ECT_step(void);
extern void ECT_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ECT_T *const ECT_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Display' : Unused code path elimination
 * Block '<S4>/Display' : Unused code path elimination
 */

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
 * '<Root>' : 'ECT'
 * '<S1>'   : 'ECT/ECT '
 * '<S2>'   : 'ECT/Safety Control '
 * '<S3>'   : 'ECT/Safety Control /Safety code generator'
 * '<S4>'   : 'ECT/Safety Control /Safety code generator/Initialize Function'
 */
#endif                                 /* ECT_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
