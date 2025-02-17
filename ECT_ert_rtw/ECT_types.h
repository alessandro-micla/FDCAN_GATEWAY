/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ECT_types.h
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

#ifndef ECT_types_h_
#define ECT_types_h_
#include "rtwtypes.h"
#include "MW_SVD.h"

/* Custom Type definition for MATLABSystem: '<S1>/Analog Input' */
#include "MW_SVD.h"
#ifndef struct_tag_Y9X8vOuujEYZFkYgC3qBoC
#define struct_tag_Y9X8vOuujEYZFkYgC3qBoC

struct tag_Y9X8vOuujEYZFkYgC3qBoC
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  MW_Handle_Type MW_ANALOGIN_HANDLE;
};

#endif                                 /* struct_tag_Y9X8vOuujEYZFkYgC3qBoC */

#ifndef typedef_mbed_AnalogInput_ECT_T
#define typedef_mbed_AnalogInput_ECT_T

typedef struct tag_Y9X8vOuujEYZFkYgC3qBoC mbed_AnalogInput_ECT_T;

#endif                                 /* typedef_mbed_AnalogInput_ECT_T */

#ifndef struct_tag_PB82Oo0pLopkwHt5brURBE
#define struct_tag_PB82Oo0pLopkwHt5brURBE

struct tag_PB82Oo0pLopkwHt5brURBE
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  void* MWCANHandle;
};

#endif                                 /* struct_tag_PB82Oo0pLopkwHt5brURBE */

#ifndef typedef_stmmbed_stm32f7_CANTransmit_E_T
#define typedef_stmmbed_stm32f7_CANTransmit_E_T

typedef struct tag_PB82Oo0pLopkwHt5brURBE stmmbed_stm32f7_CANTransmit_E_T;

#endif                             /* typedef_stmmbed_stm32f7_CANTransmit_E_T */

/* Forward declaration for rtModel */
typedef struct tag_RTM_ECT_T RT_MODEL_ECT_T;

#endif                                 /* ECT_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
