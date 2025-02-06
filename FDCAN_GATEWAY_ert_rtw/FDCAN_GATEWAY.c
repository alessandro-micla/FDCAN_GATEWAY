/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: FDCAN_GATEWAY.c
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

#include "FDCAN_GATEWAY.h"
#include "rtwtypes.h"

/* Block signals (default storage) */
B_FDCAN_GATEWAY_T FDCAN_GATEWAY_B;

/* Block states (default storage) */
DW_FDCAN_GATEWAY_T FDCAN_GATEWAY_DW;

/* Real-time model */
static RT_MODEL_FDCAN_GATEWAY_T FDCAN_GATEWAY_M_;
RT_MODEL_FDCAN_GATEWAY_T *const FDCAN_GATEWAY_M = &FDCAN_GATEWAY_M_;

/* Model step function */
void FDCAN_GATEWAY_step(void)
{
  GPIO_TypeDef * portNameLoc;
  real_T tmp;
  int32_T c;
  uint32_T fifoLevel;
  uint8_T rtb_TmpSignalConversionAtFDCANW[12];

  /* MATLABSystem: '<S1>/FDCAN Read' */
  MW_FDCAN_ReceiveMessage(FDCAN_GATEWAY_DW.obj_l.MW_FDCAN_HANDLE, (uint8_T)
    FDCAN_RX_FIFO0, &FDCAN_GATEWAY_B.FDCANRead.Data[0],
    &FDCAN_GATEWAY_B.FDCANRead.ID, &FDCAN_GATEWAY_B.FDCANRead.Extended,
    &FDCAN_GATEWAY_B.FDCANRead.Remote, &FDCAN_GATEWAY_B.FDCANRead.Length,
    &FDCAN_GATEWAY_B.FDCANRead.DLC, &FDCAN_GATEWAY_B.FDCANRead.BRS,
    &FDCAN_GATEWAY_B.FDCANRead.ProtocolMode, 1U, &fifoLevel);
  FDCAN_GATEWAY_B.FDCANRead.Error = 0U;
  FDCAN_GATEWAY_B.FDCANRead.ESI = 0U;
  FDCAN_GATEWAY_B.FDCANRead.Reserved = 0U;
  FDCAN_GATEWAY_B.FDCANRead.Timestamp = 0.0;

  /* S-Function (scanunpack): '<S1>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<S1>/CAN Unpack' */
    uint8_T msgReceived = 0;
    if ((4 == FDCAN_GATEWAY_B.FDCANRead.Length) && (FDCAN_GATEWAY_B.FDCANRead.ID
         != INVALID_CAN_ID) ) {
      if ((544 == FDCAN_GATEWAY_B.FDCANRead.ID) && (0U ==
           FDCAN_GATEWAY_B.FDCANRead.Extended) ) {
        msgReceived = 1;
        (void) memcpy(&FDCAN_GATEWAY_B.CANUnpack_o1[0],
                      FDCAN_GATEWAY_B.FDCANRead.Data,
                      4 * sizeof(uint8_T));
      }
    }

    /* Status port */
    FDCAN_GATEWAY_B.CANUnpack_o2 = msgReceived;
  }

  /* SignalConversion generated from: '<S2>/FDCAN Write' incorporates:
   *  S-Function (byte2any_svd): '<S1>/Byte Unpack'
   *  S-Function (byte2any_svd): '<S1>/Byte Unpack1'
   *  S-Function (byte2any_svd): '<S1>/Byte Unpack2'
   *  S-Function (byte2any_svd): '<S1>/Byte Unpack3'
   */

  /* Unpack: <S1>/Byte Unpack */
  {
    uint32_T MW_inputPortOffset = 0U;
    uint16_T MW_outputPortWidth = 0U;

    /* Packed input data type - uint8_T */
    void* unpackData = &FDCAN_GATEWAY_B.CANUnpack_o1[0];

    /* Unpacking the values to output 1 */
    /* Output data type - uint8_T, size - 1 */
    {
      MW_outputPortWidth = sizeof(uint8_T);
      memcpy((void*)&rtb_TmpSignalConversionAtFDCANW[0], (void *)&(((uint8_T *)
               unpackData)[MW_inputPortOffset]), MW_outputPortWidth);
    }
  }

  /* Unpack: <S1>/Byte Unpack1 */
  {
    uint32_T MW_inputPortOffset = 0U;
    uint16_T MW_outputPortWidth = 0U;

    /* Packed input data type - uint8_T */
    void* unpackData = &FDCAN_GATEWAY_B.CANUnpack_o1[1];

    /* Unpacking the values to output 1 */
    /* Output data type - uint8_T, size - 1 */
    {
      MW_outputPortWidth = sizeof(uint8_T);
      memcpy((void*)&rtb_TmpSignalConversionAtFDCANW[1], (void *)&(((uint8_T *)
               unpackData)[MW_inputPortOffset]), MW_outputPortWidth);
    }
  }

  /* Unpack: <S1>/Byte Unpack2 */
  {
    uint32_T MW_inputPortOffset = 0U;
    uint16_T MW_outputPortWidth = 0U;

    /* Packed input data type - uint8_T */
    void* unpackData = &FDCAN_GATEWAY_B.CANUnpack_o1[2];

    /* Unpacking the values to output 1 */
    /* Output data type - uint8_T, size - 1 */
    {
      MW_outputPortWidth = sizeof(uint8_T);
      memcpy((void*)&rtb_TmpSignalConversionAtFDCANW[2], (void *)&(((uint8_T *)
               unpackData)[MW_inputPortOffset]), MW_outputPortWidth);
    }
  }

  /* Unpack: <S1>/Byte Unpack3 */
  {
    uint32_T MW_inputPortOffset = 0U;
    uint16_T MW_outputPortWidth = 0U;

    /* Packed input data type - uint8_T */
    void* unpackData = &FDCAN_GATEWAY_B.CANUnpack_o1[3];

    /* Unpacking the values to output 1 */
    /* Output data type - uint8_T, size - 1 */
    {
      MW_outputPortWidth = sizeof(uint8_T);
      memcpy((void*)&rtb_TmpSignalConversionAtFDCANW[3], (void *)&(((uint8_T *)
               unpackData)[MW_inputPortOffset]), MW_outputPortWidth);
    }
  }

  /* MATLABSystem: '<S1>/FDCAN Read1' */
  MW_FDCAN_ReceiveMessage(FDCAN_GATEWAY_DW.obj.MW_FDCAN_HANDLE, (uint8_T)
    FDCAN_RX_FIFO0, &FDCAN_GATEWAY_B.FDCANRead1.Data[0],
    &FDCAN_GATEWAY_B.FDCANRead1.ID, &FDCAN_GATEWAY_B.FDCANRead1.Extended,
    &FDCAN_GATEWAY_B.FDCANRead1.Remote, &FDCAN_GATEWAY_B.FDCANRead1.Length,
    &FDCAN_GATEWAY_B.FDCANRead1.DLC, &FDCAN_GATEWAY_B.FDCANRead1.BRS,
    &FDCAN_GATEWAY_B.FDCANRead1.ProtocolMode, 1U, &fifoLevel);
  FDCAN_GATEWAY_B.FDCANRead1.Error = 0U;
  FDCAN_GATEWAY_B.FDCANRead1.ESI = 0U;
  FDCAN_GATEWAY_B.FDCANRead1.Reserved = 0U;
  FDCAN_GATEWAY_B.FDCANRead1.Timestamp = 0.0;

  /* S-Function (scanunpack): '<S1>/CAN Unpack1' */
  {
    /* S-Function (scanunpack): '<S1>/CAN Unpack1' */
    uint8_T msgReceived = 0;
    if ((1 == FDCAN_GATEWAY_B.FDCANRead1.Length) &&
        (FDCAN_GATEWAY_B.FDCANRead1.ID != INVALID_CAN_ID) ) {
      if ((545 == FDCAN_GATEWAY_B.FDCANRead1.ID) && (0U ==
           FDCAN_GATEWAY_B.FDCANRead1.Extended) ) {
        msgReceived = 1;
        (void) memcpy(&FDCAN_GATEWAY_B.CANUnpack1_o1,
                      FDCAN_GATEWAY_B.FDCANRead1.Data,
                      1 * sizeof(uint8_T));
      }
    }

    /* Status port */
    FDCAN_GATEWAY_B.CANUnpack1_o2 = msgReceived;
  }

  /* SignalConversion generated from: '<S2>/FDCAN Write' incorporates:
   *  Constant: '<S2>/Constant'
   *  S-Function (byte2any_svd): '<S1>/Byte Unpack4'
   */

  /* Unpack: <S1>/Byte Unpack4 */
  {
    uint32_T MW_inputPortOffset = 0U;
    uint16_T MW_outputPortWidth = 0U;

    /* Packed input data type - uint8_T */
    void* unpackData = &FDCAN_GATEWAY_B.CANUnpack1_o1;

    /* Unpacking the values to output 1 */
    /* Output data type - uint8_T, size - 1 */
    {
      MW_outputPortWidth = sizeof(uint8_T);
      memcpy((void*)&rtb_TmpSignalConversionAtFDCANW[4], (void *)&(((uint8_T *)
               unpackData)[MW_inputPortOffset]), MW_outputPortWidth);
    }
  }

  rtb_TmpSignalConversionAtFDCANW[5] = FDCAN_GATEWAY_P.Constant_Value_c;
  rtb_TmpSignalConversionAtFDCANW[6] = FDCAN_GATEWAY_P.Constant_Value_c;
  rtb_TmpSignalConversionAtFDCANW[7] = FDCAN_GATEWAY_P.Constant_Value_c;
  rtb_TmpSignalConversionAtFDCANW[8] = FDCAN_GATEWAY_P.Constant_Value_c;
  rtb_TmpSignalConversionAtFDCANW[9] = FDCAN_GATEWAY_P.Constant_Value_c;
  rtb_TmpSignalConversionAtFDCANW[10] = FDCAN_GATEWAY_P.Constant_Value_c;
  rtb_TmpSignalConversionAtFDCANW[11] = FDCAN_GATEWAY_P.Constant_Value_c;

  /* MATLABSystem: '<S2>/FDCAN Write' */
  MW_FDCAN_TransmitMessage(FDCAN_GATEWAY_DW.obj_h.MW_FDCAN_HANDLE,
    &rtb_TmpSignalConversionAtFDCANW[0], 547U, 0, 0, 12U, 1U, 1, 0, &fifoLevel);

  /* MATLABSystem: '<S1>/FDCAN Write1' incorporates:
   *  S-Function (scanunpack): '<S1>/CAN Unpack'
   * */
  MW_FDCAN_TransmitMessage(FDCAN_GATEWAY_DW.obj_e.MW_FDCAN_HANDLE,
    &FDCAN_GATEWAY_B.CANUnpack_o1[0], 544U, 0, 0, 4U, 1U, 0, 0, &fifoLevel);

  /* S-Function (scanunpack): '<S1>/CAN Unpack2' */
  {
    /* S-Function (scanunpack): '<S1>/CAN Unpack2' */
    if ((3 == FDCAN_GATEWAY_B.FDCANRead.Length) && (FDCAN_GATEWAY_B.FDCANRead.ID
         != INVALID_CAN_ID) ) {
      if ((550 == FDCAN_GATEWAY_B.FDCANRead.ID) && (0U ==
           FDCAN_GATEWAY_B.FDCANRead.Extended) ) {
        (void) memcpy(&FDCAN_GATEWAY_B.CANUnpack2[0],
                      FDCAN_GATEWAY_B.FDCANRead.Data,
                      3 * sizeof(uint8_T));
      }
    }
  }

  /* MATLABSystem: '<S1>/FDCAN Write2' incorporates:
   *  S-Function (scanunpack): '<S1>/CAN Unpack2'
   * */
  MW_FDCAN_TransmitMessage(FDCAN_GATEWAY_DW.obj_b.MW_FDCAN_HANDLE,
    &FDCAN_GATEWAY_B.CANUnpack2[0], 550U, 0, 0, 3U, 1U, 0, 0, &fifoLevel);

  /* MATLABSystem: '<S1>/FDCAN Write' */
  MW_FDCAN_TransmitMessage(FDCAN_GATEWAY_DW.obj_hb.MW_FDCAN_HANDLE,
    &FDCAN_GATEWAY_B.CANUnpack1_o1, 545U, 0, 0, 1U, 1U, 0, 0, &fifoLevel);

  /* SignalConversion generated from: '<S2>/FDCAN Write1' incorporates:
   *  Constant: '<S2>/Constant1'
   */
  rtb_TmpSignalConversionAtFDCANW[0] = FDCAN_GATEWAY_P.Constant1_Value;
  rtb_TmpSignalConversionAtFDCANW[1] = FDCAN_GATEWAY_P.Constant1_Value;
  rtb_TmpSignalConversionAtFDCANW[2] = FDCAN_GATEWAY_P.Constant1_Value;
  rtb_TmpSignalConversionAtFDCANW[3] = FDCAN_GATEWAY_P.Constant1_Value;
  rtb_TmpSignalConversionAtFDCANW[4] = FDCAN_GATEWAY_P.Constant1_Value;
  rtb_TmpSignalConversionAtFDCANW[5] = FDCAN_GATEWAY_P.Constant1_Value;
  rtb_TmpSignalConversionAtFDCANW[6] = FDCAN_GATEWAY_P.Constant1_Value;
  rtb_TmpSignalConversionAtFDCANW[7] = FDCAN_GATEWAY_P.Constant1_Value;
  rtb_TmpSignalConversionAtFDCANW[8] = FDCAN_GATEWAY_P.Constant1_Value;
  rtb_TmpSignalConversionAtFDCANW[9] = FDCAN_GATEWAY_P.Constant1_Value;
  rtb_TmpSignalConversionAtFDCANW[10] = FDCAN_GATEWAY_P.Constant1_Value;
  rtb_TmpSignalConversionAtFDCANW[11] = FDCAN_GATEWAY_P.Constant1_Value;

  /* MATLABSystem: '<S2>/FDCAN Write1' */
  MW_FDCAN_TransmitMessage(FDCAN_GATEWAY_DW.obj_n.MW_FDCAN_HANDLE,
    &rtb_TmpSignalConversionAtFDCANW[0], 548U, 0, 0, 12U, 1U, 1, 0, &fifoLevel);

  /* MATLABSystem: '<S2>/FDCAN Write2' */
  MW_FDCAN_TransmitMessage(FDCAN_GATEWAY_DW.obj_c.MW_FDCAN_HANDLE,
    &rtb_TmpSignalConversionAtFDCANW[0], 549U, 0, 0, 12U, 1U, 1, 0, &fifoLevel);

  /* MATLABSystem: '<S2>/FDCAN Write3' */
  MW_FDCAN_TransmitMessage(FDCAN_GATEWAY_DW.obj_i.MW_FDCAN_HANDLE,
    &rtb_TmpSignalConversionAtFDCANW[0], 550U, 0, 0, 12U, 1U, 1, 0, &fifoLevel);

  /* MATLABSystem: '<S5>/Digital Port Write' */
  portNameLoc = GPIOD;

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant'
   *  Memory: '<S1>/Memory'
   */
  if (FDCAN_GATEWAY_DW.Memory_PreviousInput) {
    tmp = 1.0;
  } else {
    tmp = FDCAN_GATEWAY_P.Constant_Value;
  }

  /* MATLABSystem: '<S5>/Digital Port Write' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   *  Switch: '<S1>/Switch'
   */
  if (tmp != 0.0) {
    c = 8;
  } else {
    c = 0;
  }

  LL_GPIO_SetOutputPin(portNameLoc, (uint32_T)c);
  LL_GPIO_ResetOutputPin(portNameLoc, ~(uint32_T)c & 8U);

  /* Update for Memory: '<S1>/Memory' incorporates:
   *  Logic: '<S1>/Logical Operator'
   */
  FDCAN_GATEWAY_DW.Memory_PreviousInput = ((FDCAN_GATEWAY_B.CANUnpack_o2 != 0) &&
    (FDCAN_GATEWAY_B.CANUnpack1_o2 != 0));
}

/* Model initialize function */
void FDCAN_GATEWAY_initialize(void)
{
  /* Start for S-Function (scanunpack): '<S1>/CAN Unpack' */

  /*-----------S-Function Block: <S1>/CAN Unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S1>/CAN Unpack1' */

  /*-----------S-Function Block: <S1>/CAN Unpack1 -----------------*/

  /* Start for S-Function (scanunpack): '<S1>/CAN Unpack2' */

  /*-----------S-Function Block: <S1>/CAN Unpack2 -----------------*/

  /* InitializeConditions for Memory: '<S1>/Memory' */
  FDCAN_GATEWAY_DW.Memory_PreviousInput =
    FDCAN_GATEWAY_P.Memory_InitialCondition;

  /* Start for MATLABSystem: '<S1>/FDCAN Read' */
  FDCAN_GATEWAY_DW.obj_l.matlabCodegenIsDeleted = false;
  FDCAN_GATEWAY_DW.obj_l.isInitialized = 1;
  FDCAN_GATEWAY_DW.obj_l.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(FDCAN_GATEWAY_DW.obj_l.MW_FDCAN_HANDLE);
  FDCAN_GATEWAY_DW.obj_l.isSetupComplete = true;

  /* Start for MATLABSystem: '<S1>/FDCAN Read1' */
  FDCAN_GATEWAY_DW.obj.matlabCodegenIsDeleted = false;
  FDCAN_GATEWAY_DW.obj.isInitialized = 1;
  FDCAN_GATEWAY_DW.obj.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(2);
  MW_FDCAN_Start(FDCAN_GATEWAY_DW.obj.MW_FDCAN_HANDLE);
  FDCAN_GATEWAY_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<S2>/FDCAN Write' */
  FDCAN_GATEWAY_DW.obj_h.matlabCodegenIsDeleted = false;
  FDCAN_GATEWAY_DW.obj_h.isInitialized = 1;
  FDCAN_GATEWAY_DW.obj_h.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(0);
  MW_FDCAN_Start(FDCAN_GATEWAY_DW.obj_h.MW_FDCAN_HANDLE);
  FDCAN_GATEWAY_DW.obj_h.isSetupComplete = true;

  /* Start for MATLABSystem: '<S1>/FDCAN Write1' */
  FDCAN_GATEWAY_DW.obj_e.matlabCodegenIsDeleted = false;
  FDCAN_GATEWAY_DW.obj_e.isInitialized = 1;
  FDCAN_GATEWAY_DW.obj_e.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(2);
  MW_FDCAN_Start(FDCAN_GATEWAY_DW.obj_e.MW_FDCAN_HANDLE);
  FDCAN_GATEWAY_DW.obj_e.isSetupComplete = true;

  /* Start for MATLABSystem: '<S1>/FDCAN Write2' */
  FDCAN_GATEWAY_DW.obj_b.matlabCodegenIsDeleted = false;
  FDCAN_GATEWAY_DW.obj_b.isInitialized = 1;
  FDCAN_GATEWAY_DW.obj_b.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(2);
  MW_FDCAN_Start(FDCAN_GATEWAY_DW.obj_b.MW_FDCAN_HANDLE);
  FDCAN_GATEWAY_DW.obj_b.isSetupComplete = true;

  /* Start for MATLABSystem: '<S1>/FDCAN Write' */
  FDCAN_GATEWAY_DW.obj_hb.matlabCodegenIsDeleted = false;
  FDCAN_GATEWAY_DW.obj_hb.isInitialized = 1;
  FDCAN_GATEWAY_DW.obj_hb.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(FDCAN_GATEWAY_DW.obj_hb.MW_FDCAN_HANDLE);
  FDCAN_GATEWAY_DW.obj_hb.isSetupComplete = true;

  /* Start for MATLABSystem: '<S2>/FDCAN Write1' */
  FDCAN_GATEWAY_DW.obj_n.matlabCodegenIsDeleted = false;
  FDCAN_GATEWAY_DW.obj_n.isInitialized = 1;
  FDCAN_GATEWAY_DW.obj_n.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(0);
  MW_FDCAN_Start(FDCAN_GATEWAY_DW.obj_n.MW_FDCAN_HANDLE);
  FDCAN_GATEWAY_DW.obj_n.isSetupComplete = true;

  /* Start for MATLABSystem: '<S2>/FDCAN Write2' */
  FDCAN_GATEWAY_DW.obj_c.matlabCodegenIsDeleted = false;
  FDCAN_GATEWAY_DW.obj_c.isInitialized = 1;
  FDCAN_GATEWAY_DW.obj_c.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(0);
  MW_FDCAN_Start(FDCAN_GATEWAY_DW.obj_c.MW_FDCAN_HANDLE);
  FDCAN_GATEWAY_DW.obj_c.isSetupComplete = true;

  /* Start for MATLABSystem: '<S2>/FDCAN Write3' */
  FDCAN_GATEWAY_DW.obj_i.matlabCodegenIsDeleted = false;
  FDCAN_GATEWAY_DW.obj_i.isInitialized = 1;
  FDCAN_GATEWAY_DW.obj_i.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(0);
  MW_FDCAN_Start(FDCAN_GATEWAY_DW.obj_i.MW_FDCAN_HANDLE);
  FDCAN_GATEWAY_DW.obj_i.isSetupComplete = true;
}

/* Model terminate function */
void FDCAN_GATEWAY_terminate(void)
{
  /* Terminate for MATLABSystem: '<S1>/FDCAN Read' */
  if (!FDCAN_GATEWAY_DW.obj_l.matlabCodegenIsDeleted) {
    FDCAN_GATEWAY_DW.obj_l.matlabCodegenIsDeleted = true;
    if ((FDCAN_GATEWAY_DW.obj_l.isInitialized == 1) &&
        FDCAN_GATEWAY_DW.obj_l.isSetupComplete) {
      MW_FDCAN_Close(FDCAN_GATEWAY_DW.obj_l.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/FDCAN Read' */

  /* Terminate for MATLABSystem: '<S1>/FDCAN Read1' */
  if (!FDCAN_GATEWAY_DW.obj.matlabCodegenIsDeleted) {
    FDCAN_GATEWAY_DW.obj.matlabCodegenIsDeleted = true;
    if ((FDCAN_GATEWAY_DW.obj.isInitialized == 1) &&
        FDCAN_GATEWAY_DW.obj.isSetupComplete) {
      MW_FDCAN_Close(FDCAN_GATEWAY_DW.obj.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/FDCAN Read1' */

  /* Terminate for MATLABSystem: '<S2>/FDCAN Write' */
  if (!FDCAN_GATEWAY_DW.obj_h.matlabCodegenIsDeleted) {
    FDCAN_GATEWAY_DW.obj_h.matlabCodegenIsDeleted = true;
    if ((FDCAN_GATEWAY_DW.obj_h.isInitialized == 1) &&
        FDCAN_GATEWAY_DW.obj_h.isSetupComplete) {
      MW_FDCAN_Close(FDCAN_GATEWAY_DW.obj_h.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S2>/FDCAN Write' */

  /* Terminate for MATLABSystem: '<S1>/FDCAN Write1' */
  if (!FDCAN_GATEWAY_DW.obj_e.matlabCodegenIsDeleted) {
    FDCAN_GATEWAY_DW.obj_e.matlabCodegenIsDeleted = true;
    if ((FDCAN_GATEWAY_DW.obj_e.isInitialized == 1) &&
        FDCAN_GATEWAY_DW.obj_e.isSetupComplete) {
      MW_FDCAN_Close(FDCAN_GATEWAY_DW.obj_e.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/FDCAN Write1' */

  /* Terminate for MATLABSystem: '<S1>/FDCAN Write2' */
  if (!FDCAN_GATEWAY_DW.obj_b.matlabCodegenIsDeleted) {
    FDCAN_GATEWAY_DW.obj_b.matlabCodegenIsDeleted = true;
    if ((FDCAN_GATEWAY_DW.obj_b.isInitialized == 1) &&
        FDCAN_GATEWAY_DW.obj_b.isSetupComplete) {
      MW_FDCAN_Close(FDCAN_GATEWAY_DW.obj_b.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/FDCAN Write2' */

  /* Terminate for MATLABSystem: '<S1>/FDCAN Write' */
  if (!FDCAN_GATEWAY_DW.obj_hb.matlabCodegenIsDeleted) {
    FDCAN_GATEWAY_DW.obj_hb.matlabCodegenIsDeleted = true;
    if ((FDCAN_GATEWAY_DW.obj_hb.isInitialized == 1) &&
        FDCAN_GATEWAY_DW.obj_hb.isSetupComplete) {
      MW_FDCAN_Close(FDCAN_GATEWAY_DW.obj_hb.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/FDCAN Write' */

  /* Terminate for MATLABSystem: '<S2>/FDCAN Write1' */
  if (!FDCAN_GATEWAY_DW.obj_n.matlabCodegenIsDeleted) {
    FDCAN_GATEWAY_DW.obj_n.matlabCodegenIsDeleted = true;
    if ((FDCAN_GATEWAY_DW.obj_n.isInitialized == 1) &&
        FDCAN_GATEWAY_DW.obj_n.isSetupComplete) {
      MW_FDCAN_Close(FDCAN_GATEWAY_DW.obj_n.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S2>/FDCAN Write1' */

  /* Terminate for MATLABSystem: '<S2>/FDCAN Write2' */
  if (!FDCAN_GATEWAY_DW.obj_c.matlabCodegenIsDeleted) {
    FDCAN_GATEWAY_DW.obj_c.matlabCodegenIsDeleted = true;
    if ((FDCAN_GATEWAY_DW.obj_c.isInitialized == 1) &&
        FDCAN_GATEWAY_DW.obj_c.isSetupComplete) {
      MW_FDCAN_Close(FDCAN_GATEWAY_DW.obj_c.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S2>/FDCAN Write2' */

  /* Terminate for MATLABSystem: '<S2>/FDCAN Write3' */
  if (!FDCAN_GATEWAY_DW.obj_i.matlabCodegenIsDeleted) {
    FDCAN_GATEWAY_DW.obj_i.matlabCodegenIsDeleted = true;
    if ((FDCAN_GATEWAY_DW.obj_i.isInitialized == 1) &&
        FDCAN_GATEWAY_DW.obj_i.isSetupComplete) {
      MW_FDCAN_Close(FDCAN_GATEWAY_DW.obj_i.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S2>/FDCAN Write3' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
