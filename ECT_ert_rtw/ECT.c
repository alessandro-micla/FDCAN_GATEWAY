/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ECT.c
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

#include "ECT.h"
#include <math.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "ECT_private.h"

/* Block signals (default storage) */
B_ECT_T ECT_B;

/* Block states (default storage) */
DW_ECT_T ECT_DW;

/* Real-time model */
static RT_MODEL_ECT_T ECT_M_;
RT_MODEL_ECT_T *const ECT_M = &ECT_M_;
real_T rt_urand_Upu32_Yd_f_pw_snf(uint32_T *u)
{
  uint32_T hi;
  uint32_T lo;

  /* Uniform random number generator (random number between 0 and 1)

     #define IA      16807                      magic multiplier = 7^5
     #define IM      2147483647                 modulus = 2^31-1
     #define IQ      127773                     IM div IA
     #define IR      2836                       IM modulo IA
     #define S       4.656612875245797e-10      reciprocal of 2^31-1
     test = IA * (seed % IQ) - IR * (seed/IQ)
     seed = test < 0 ? (test + IM) : test
     return (seed*S)
   */
  lo = *u % 127773U * 16807U;
  hi = *u / 127773U * 2836U;
  if (lo < hi) {
    *u = 2147483647U - (hi - lo);
  } else {
    *u = lo - hi;
  }

  return (real_T)*u * 4.6566128752457969E-10;
}

/* Model step function */
void ECT_step(void)
{
  real_T rtb_AnalogInput_0;
  uint8_T rtb_TmpSignalConversionAtCANTra[6];
  uint8_T rtb_DataTypeConversion;
  uint8_T rtb_DataTypeConversion_e;

  /* DataTypeConversion: '<S3>/Data Type Conversion' */
  rtb_AnalogInput_0 = floor(ECT_B.UniformRandomNumber);
  if (rtIsNaN(rtb_AnalogInput_0) || rtIsInf(rtb_AnalogInput_0)) {
    rtb_AnalogInput_0 = 0.0;
  } else {
    rtb_AnalogInput_0 = fmod(rtb_AnalogInput_0, 256.0);
  }

  rtb_DataTypeConversion = (uint8_T)(rtb_AnalogInput_0 < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-rtb_AnalogInput_0 : (int32_T)(uint8_T)rtb_AnalogInput_0);

  /* End of DataTypeConversion: '<S3>/Data Type Conversion' */

  /* MATLABSystem: '<S1>/Analog Input' */
  MW_AnalogIn_Start(ECT_DW.obj.MW_ANALOGIN_HANDLE);
  MW_AnalogInSingle_ReadResult(ECT_DW.obj.MW_ANALOGIN_HANDLE, &rtb_AnalogInput_0,
    7);

  /* DataTypeConversion: '<S1>/Data Type Conversion' incorporates:
   *  Fcn: '<S1>/Fcn'
   *  Gain: '<S1>/Gain'
   *  MATLABSystem: '<S1>/Analog Input'
   */
  rtb_AnalogInput_0 = floor(520.0 * rtb_AnalogInput_0 * -255.0 / 255.0 + 255.0);
  if (rtIsNaN(rtb_AnalogInput_0) || rtIsInf(rtb_AnalogInput_0)) {
    rtb_AnalogInput_0 = 0.0;
  } else {
    rtb_AnalogInput_0 = fmod(rtb_AnalogInput_0, 256.0);
  }

  rtb_DataTypeConversion_e = (uint8_T)(rtb_AnalogInput_0 < 0.0 ? (int32_T)
    (uint8_T)-(int8_T)(uint8_T)-rtb_AnalogInput_0 : (int32_T)(uint8_T)
    rtb_AnalogInput_0);

  /* End of DataTypeConversion: '<S1>/Data Type Conversion' */

  /* SignalConversion generated from: '<S1>/CAN Transmit' incorporates:
   *  Constant: '<Root>/Number Control Safety'
   *  DataTypeConversion: '<S1>/Data Type Conversion1'
   *  Sum: '<S3>/Sum'
   *  Switch: '<S1>/Switch'
   */
  rtb_TmpSignalConversionAtCANTra[0] = ECT_ConstB.DataTypeConversion3;
  rtb_TmpSignalConversionAtCANTra[1] = ECT_ConstB.DataTypeConversion2;
  rtb_TmpSignalConversionAtCANTra[2] = rtb_DataTypeConversion;
  rtb_TmpSignalConversionAtCANTra[3] = (uint8_T)(rtb_DataTypeConversion + 55);
  rtb_TmpSignalConversionAtCANTra[4] = rtb_DataTypeConversion_e;
  rtb_TmpSignalConversionAtCANTra[5] = (uint8_T)(rtb_DataTypeConversion_e > 90);

  /* MATLABSystem: '<S1>/CAN Transmit' */
  MW_CAN_TransmitMessage(ECT_DW.obj_o.MWCANHandle,
    &rtb_TmpSignalConversionAtCANTra[0], 550U, 0, 0, 6);
}

/* Model initialize function */
void ECT_initialize(void)
{
  {
    uint32_T RandSeed;

    /* SystemInitialize for Atomic SubSystem: '<S3>/Initialize Function' */
    /* InitializeConditions for UniformRandomNumber: '<S4>/Uniform Random Number' */
    RandSeed = 1144108930U;

    /* UniformRandomNumber: '<S4>/Uniform Random Number' */
    ECT_B.UniformRandomNumber = rt_urand_Upu32_Yd_f_pw_snf(&RandSeed) * 200.0;

    /* End of SystemInitialize for SubSystem: '<S3>/Initialize Function' */

    /* Start for MATLABSystem: '<S1>/Analog Input' */
    ECT_DW.obj.matlabCodegenIsDeleted = false;
    ECT_DW.obj.isInitialized = 1;
    ECT_DW.obj.MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open(A0);
    MW_AnalogIn_SetTriggerSource(ECT_DW.obj.MW_ANALOGIN_HANDLE,
      MW_ANALOGIN_SOFTWARE_TRIGGER, 0U);
    ECT_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<S1>/CAN Transmit' */
    ECT_DW.obj_o.matlabCodegenIsDeleted = false;
    ECT_DW.obj_o.isInitialized = 1;
    ECT_DW.obj_o.MWCANHandle = MW_CAN_Open(1);
    MW_configureCANFilter(1, 0, 0, 0, 0, 0, 0, 0, 1, 1);
    ECT_DW.obj_o.isSetupComplete = true;

    /* Outputs for Atomic SubSystem: '<S3>/Initialize Function' */
    /* Update for UniformRandomNumber: '<S4>/Uniform Random Number' */
    rt_urand_Upu32_Yd_f_pw_snf(&RandSeed);

    /* End of Outputs for SubSystem: '<S3>/Initialize Function' */
  }
}

/* Model terminate function */
void ECT_terminate(void)
{
  /* Terminate for MATLABSystem: '<S1>/Analog Input' */
  if (!ECT_DW.obj.matlabCodegenIsDeleted) {
    ECT_DW.obj.matlabCodegenIsDeleted = true;
    if ((ECT_DW.obj.isInitialized == 1) && ECT_DW.obj.isSetupComplete) {
      MW_AnalogIn_Stop(ECT_DW.obj.MW_ANALOGIN_HANDLE);
      MW_AnalogIn_Close(ECT_DW.obj.MW_ANALOGIN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/Analog Input' */

  /* Terminate for MATLABSystem: '<S1>/CAN Transmit' */
  if (!ECT_DW.obj_o.matlabCodegenIsDeleted) {
    ECT_DW.obj_o.matlabCodegenIsDeleted = true;
    if ((ECT_DW.obj_o.isInitialized == 1) && ECT_DW.obj_o.isSetupComplete) {
      MW_CAN_Close(ECT_DW.obj_o.MWCANHandle);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/CAN Transmit' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
