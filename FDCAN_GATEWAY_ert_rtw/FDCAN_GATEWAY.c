/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: FDCAN_GATEWAY.c
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
  real_T rtb_Switch;
  int32_T c;
  uint32_T fifoLevel;
  uint16_T rtb_BitConcat2;
  uint8_T rtb_TmpSignalConversionAtFDCANW[12];
  uint8_T rtb_TmpSignalConversionAtFDC_ep[3];
  uint8_T rtb_ByteUnpack1;
  uint8_T rtb_ByteUnpack6;
  uint8_T rtb_ByteUnpack7;
  uint8_T rtb_DataTypeConversion1;
  boolean_T rtb_LogicalOperator_a;

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

  /* S-Function (byte2any_svd): '<S1>/Byte Unpack' */

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
      memcpy((void*)&rtb_ByteUnpack1, (void *)&(((uint8_T *)unpackData)
              [MW_inputPortOffset]), MW_outputPortWidth);
    }
  }

  /* S-Function (byte2any_svd): '<S1>/Byte Unpack1' */

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
      memcpy((void*)&rtb_ByteUnpack7, (void *)&(((uint8_T *)unpackData)
              [MW_inputPortOffset]), MW_outputPortWidth);
    }
  }

  /* S-Function (byte2any_svd): '<S1>/Byte Unpack2' */

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
      memcpy((void*)&rtb_ByteUnpack6, (void *)&(((uint8_T *)unpackData)
              [MW_inputPortOffset]), MW_outputPortWidth);
    }
  }

  /* S-Function (byte2any_svd): '<S1>/Byte Unpack3' */

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
      memcpy((void*)&rtb_DataTypeConversion1, (void *)&(((uint8_T *)unpackData)
              [MW_inputPortOffset]), MW_outputPortWidth);
    }
  }

  /* SignalConversion generated from: '<S2>/FDCAN Write' incorporates:
   *  Constant: '<S2>/Constant'
   *  Constant: '<S2>/Constant2'
   */
  rtb_TmpSignalConversionAtFDCANW[0] = rtb_ByteUnpack1;
  rtb_TmpSignalConversionAtFDCANW[1] = rtb_ByteUnpack7;
  rtb_TmpSignalConversionAtFDCANW[2] = rtb_ByteUnpack6;
  rtb_TmpSignalConversionAtFDCANW[3] = rtb_DataTypeConversion1;
  rtb_TmpSignalConversionAtFDCANW[4] = FDCAN_GATEWAY_P.Constant2_Value_e;
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

  /* S-Function (scanunpack): '<S1>/CAN Unpack2' */
  {
    /* S-Function (scanunpack): '<S1>/CAN Unpack2' */
    if ((6 == FDCAN_GATEWAY_B.FDCANRead.Length) && (FDCAN_GATEWAY_B.FDCANRead.ID
         != INVALID_CAN_ID) ) {
      if ((550 == FDCAN_GATEWAY_B.FDCANRead.ID) && (0U ==
           FDCAN_GATEWAY_B.FDCANRead.Extended) ) {
        (void) memcpy(&FDCAN_GATEWAY_B.CANUnpack2[0],
                      FDCAN_GATEWAY_B.FDCANRead.Data,
                      6 * sizeof(uint8_T));
      }
    }
  }

  /* MATLABSystem: '<S1>/FDCAN Write1' incorporates:
   *  S-Function (scanunpack): '<S1>/CAN Unpack'
   * */
  MW_FDCAN_TransmitMessage(FDCAN_GATEWAY_DW.obj_e.MW_FDCAN_HANDLE,
    &FDCAN_GATEWAY_B.CANUnpack_o1[0], 544U, 0, 0, 4U, 1U, 0, 0, &fifoLevel);

  /* S-Function (byte2any_svd): '<S4>/Byte Unpack5' */

  /* Unpack: <S4>/Byte Unpack5 */
  {
    uint32_T MW_inputPortOffset = 0U;
    uint16_T MW_outputPortWidth = 0U;

    /* Packed input data type - uint8_T */
    void* unpackData = &FDCAN_GATEWAY_B.CANUnpack2[0];

    /* Unpacking the values to output 1 */
    /* Output data type - uint8_T, size - 1 */
    {
      MW_outputPortWidth = sizeof(uint8_T);
      memcpy((void*)&rtb_DataTypeConversion1, (void *)&(((uint8_T *)unpackData)
              [MW_inputPortOffset]), MW_outputPortWidth);
    }
  }

  /* S-Function (byte2any_svd): '<S4>/Byte Unpack6' */

  /* Unpack: <S4>/Byte Unpack6 */
  {
    uint32_T MW_inputPortOffset = 0U;
    uint16_T MW_outputPortWidth = 0U;

    /* Packed input data type - uint8_T */
    void* unpackData = &FDCAN_GATEWAY_B.CANUnpack2[1];

    /* Unpacking the values to output 1 */
    /* Output data type - uint8_T, size - 1 */
    {
      MW_outputPortWidth = sizeof(uint8_T);
      memcpy((void*)&rtb_ByteUnpack6, (void *)&(((uint8_T *)unpackData)
              [MW_inputPortOffset]), MW_outputPortWidth);
    }
  }

  /* S-Function (byte2any_svd): '<S4>/Byte Unpack7' */

  /* Unpack: <S4>/Byte Unpack7 */
  {
    uint32_T MW_inputPortOffset = 0U;
    uint16_T MW_outputPortWidth = 0U;

    /* Packed input data type - uint8_T */
    void* unpackData = &FDCAN_GATEWAY_B.CANUnpack2[2];

    /* Unpacking the values to output 1 */
    /* Output data type - uint8_T, size - 1 */
    {
      MW_outputPortWidth = sizeof(uint8_T);
      memcpy((void*)&rtb_ByteUnpack7, (void *)&(((uint8_T *)unpackData)
              [MW_inputPortOffset]), MW_outputPortWidth);
    }
  }

  /* S-Function (byte2any_svd): '<S4>/Byte Unpack1' */

  /* Unpack: <S4>/Byte Unpack1 */
  {
    uint32_T MW_inputPortOffset = 0U;
    uint16_T MW_outputPortWidth = 0U;

    /* Packed input data type - uint8_T */
    void* unpackData = &FDCAN_GATEWAY_B.CANUnpack2[3];

    /* Unpacking the values to output 1 */
    /* Output data type - uint8_T, size - 1 */
    {
      MW_outputPortWidth = sizeof(uint8_T);
      memcpy((void*)&rtb_ByteUnpack1, (void *)&(((uint8_T *)unpackData)
              [MW_inputPortOffset]), MW_outputPortWidth);
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
    if ((4 == FDCAN_GATEWAY_B.FDCANRead1.Length) &&
        (FDCAN_GATEWAY_B.FDCANRead1.ID != INVALID_CAN_ID) ) {
      if ((545 == FDCAN_GATEWAY_B.FDCANRead1.ID) && (0U ==
           FDCAN_GATEWAY_B.FDCANRead1.Extended) ) {
        msgReceived = 1;
        (void) memcpy(&FDCAN_GATEWAY_B.CANUnpack1_o1[0],
                      FDCAN_GATEWAY_B.FDCANRead1.Data,
                      4 * sizeof(uint8_T));
      }
    }

    /* Status port */
    FDCAN_GATEWAY_B.CANUnpack1_o2 = msgReceived;
  }

  /* RelationalOperator: '<S4>/Relational Operator' incorporates:
   *  BitConcat: '<S8>/BitConcat2'
   *  Constant: '<S1>/Constant1'
   */
  rtb_LogicalOperator_a = ((rtb_DataTypeConversion1 << 8 | rtb_ByteUnpack6) ==
    FDCAN_GATEWAY_P.Constant1_Value);

  /* S-Function (byte2any_svd): '<S5>/Byte Unpack5' */

  /* Unpack: <S5>/Byte Unpack5 */
  {
    uint32_T MW_inputPortOffset = 0U;
    uint16_T MW_outputPortWidth = 0U;

    /* Packed input data type - uint8_T */
    void* unpackData = &FDCAN_GATEWAY_B.CANUnpack1_o1[0];

    /* Unpacking the values to output 1 */
    /* Output data type - uint8_T, size - 1 */
    {
      MW_outputPortWidth = sizeof(uint8_T);
      memcpy((void*)&rtb_DataTypeConversion1, (void *)&(((uint8_T *)unpackData)
              [MW_inputPortOffset]), MW_outputPortWidth);
    }
  }

  /* S-Function (byte2any_svd): '<S5>/Byte Unpack6' */

  /* Unpack: <S5>/Byte Unpack6 */
  {
    uint32_T MW_inputPortOffset = 0U;
    uint16_T MW_outputPortWidth = 0U;

    /* Packed input data type - uint8_T */
    void* unpackData = &FDCAN_GATEWAY_B.CANUnpack1_o1[1];

    /* Unpacking the values to output 1 */
    /* Output data type - uint8_T, size - 1 */
    {
      MW_outputPortWidth = sizeof(uint8_T);
      memcpy((void*)&rtb_ByteUnpack6, (void *)&(((uint8_T *)unpackData)
              [MW_inputPortOffset]), MW_outputPortWidth);
    }
  }

  /* BitConcat: '<S9>/BitConcat2' */
  rtb_BitConcat2 = (uint16_T)(rtb_DataTypeConversion1 << 8 | rtb_ByteUnpack6);

  /* S-Function (byte2any_svd): '<S5>/Byte Unpack7' */

  /* Unpack: <S5>/Byte Unpack7 */
  {
    uint32_T MW_inputPortOffset = 0U;
    uint16_T MW_outputPortWidth = 0U;

    /* Packed input data type - uint8_T */
    void* unpackData = &FDCAN_GATEWAY_B.CANUnpack1_o1[2];

    /* Unpacking the values to output 1 */
    /* Output data type - uint8_T, size - 1 */
    {
      MW_outputPortWidth = sizeof(uint8_T);
      memcpy((void*)&rtb_DataTypeConversion1, (void *)&(((uint8_T *)unpackData)
              [MW_inputPortOffset]), MW_outputPortWidth);
    }
  }

  /* Sum: '<S5>/Sum' incorporates:
   *  Constant: '<S1>/Constant6'
   */
  rtb_Switch = (real_T)rtb_DataTypeConversion1 + FDCAN_GATEWAY_P.Constant6_Value;

  /* S-Function (byte2any_svd): '<S5>/Byte Unpack1' */

  /* Unpack: <S5>/Byte Unpack1 */
  {
    uint32_T MW_inputPortOffset = 0U;
    uint16_T MW_outputPortWidth = 0U;

    /* Packed input data type - uint8_T */
    void* unpackData = &FDCAN_GATEWAY_B.CANUnpack1_o1[3];

    /* Unpacking the values to output 1 */
    /* Output data type - uint8_T, size - 1 */
    {
      MW_outputPortWidth = sizeof(uint8_T);
      memcpy((void*)&rtb_DataTypeConversion1, (void *)&(((uint8_T *)unpackData)
              [MW_inputPortOffset]), MW_outputPortWidth);
    }
  }

  /* SignalConversion generated from: '<S1>/FDCAN Write2' incorporates:
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant3'
   *  Constant: '<S1>/Constant4'
   *  Constant: '<S1>/Constant5'
   *  DataTypeConversion: '<S1>/Data Type Conversion1'
   *  Logic: '<S1>/Logical Operator1'
   *  Logic: '<S4>/Logical Operator'
   *  Logic: '<S5>/Logical Operator'
   *  RelationalOperator: '<S4>/Relational Operator1'
   *  RelationalOperator: '<S5>/Relational Operator'
   *  RelationalOperator: '<S5>/Relational Operator1'
   *  Sum: '<S4>/Sum'
   */
  rtb_TmpSignalConversionAtFDC_ep[0] = FDCAN_GATEWAY_P.Constant3_Value;
  rtb_TmpSignalConversionAtFDC_ep[1] = FDCAN_GATEWAY_B.CANUnpack2[4];
  rtb_TmpSignalConversionAtFDC_ep[2] = (uint8_T)(rtb_LogicalOperator_a &&
    ((real_T)rtb_ByteUnpack7 + FDCAN_GATEWAY_P.Constant2_Value ==
     rtb_ByteUnpack1) && ((FDCAN_GATEWAY_P.Constant5_Value == rtb_BitConcat2) &&
    (rtb_Switch == rtb_DataTypeConversion1) && (FDCAN_GATEWAY_P.Constant4_Value
    != 0.0)) && (FDCAN_GATEWAY_B.CANUnpack2[5] != 0));

  /* MATLABSystem: '<S1>/FDCAN Write2' */
  MW_FDCAN_TransmitMessage(FDCAN_GATEWAY_DW.obj_b.MW_FDCAN_HANDLE,
    &rtb_TmpSignalConversionAtFDC_ep[0], 550U, 0, 0, 3U, 1U, 0, 0, &fifoLevel);

  /* SignalConversion generated from: '<S2>/FDCAN Write1' incorporates:
   *  Constant: '<S2>/Constant1'
   */
  rtb_TmpSignalConversionAtFDCANW[0] = FDCAN_GATEWAY_P.Constant1_Value_c;
  rtb_TmpSignalConversionAtFDCANW[1] = FDCAN_GATEWAY_P.Constant1_Value_c;
  rtb_TmpSignalConversionAtFDCANW[2] = FDCAN_GATEWAY_P.Constant1_Value_c;
  rtb_TmpSignalConversionAtFDCANW[3] = FDCAN_GATEWAY_P.Constant1_Value_c;
  rtb_TmpSignalConversionAtFDCANW[4] = FDCAN_GATEWAY_P.Constant1_Value_c;
  rtb_TmpSignalConversionAtFDCANW[5] = FDCAN_GATEWAY_P.Constant1_Value_c;
  rtb_TmpSignalConversionAtFDCANW[6] = FDCAN_GATEWAY_P.Constant1_Value_c;
  rtb_TmpSignalConversionAtFDCANW[7] = FDCAN_GATEWAY_P.Constant1_Value_c;
  rtb_TmpSignalConversionAtFDCANW[8] = FDCAN_GATEWAY_P.Constant1_Value_c;
  rtb_TmpSignalConversionAtFDCANW[9] = FDCAN_GATEWAY_P.Constant1_Value_c;
  rtb_TmpSignalConversionAtFDCANW[10] = FDCAN_GATEWAY_P.Constant1_Value_c;
  rtb_TmpSignalConversionAtFDCANW[11] = FDCAN_GATEWAY_P.Constant1_Value_c;

  /* MATLABSystem: '<S2>/FDCAN Write1' */
  MW_FDCAN_TransmitMessage(FDCAN_GATEWAY_DW.obj_n.MW_FDCAN_HANDLE,
    &rtb_TmpSignalConversionAtFDCANW[0], 548U, 0, 0, 12U, 1U, 1, 0, &fifoLevel);

  /* MATLABSystem: '<S2>/FDCAN Write2' */
  MW_FDCAN_TransmitMessage(FDCAN_GATEWAY_DW.obj_c.MW_FDCAN_HANDLE,
    &rtb_TmpSignalConversionAtFDCANW[0], 549U, 0, 0, 12U, 1U, 1, 0, &fifoLevel);

  /* MATLABSystem: '<S2>/FDCAN Write3' */
  MW_FDCAN_TransmitMessage(FDCAN_GATEWAY_DW.obj_i.MW_FDCAN_HANDLE,
    &rtb_TmpSignalConversionAtFDCANW[0], 550U, 0, 0, 12U, 1U, 1, 0, &fifoLevel);

  /* MATLABSystem: '<S7>/Digital Port Write' */
  portNameLoc = GPIOD;

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant'
   *  Memory: '<S1>/Memory'
   */
  if (FDCAN_GATEWAY_DW.Memory_PreviousInput) {
    rtb_Switch = 1.0;
  } else {
    rtb_Switch = FDCAN_GATEWAY_P.Constant_Value;
  }

  /* MATLABSystem: '<S7>/Digital Port Write' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   *  Switch: '<S1>/Switch'
   */
  if (rtb_Switch != 0.0) {
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

  /* Start for S-Function (scanunpack): '<S1>/CAN Unpack2' */

  /*-----------S-Function Block: <S1>/CAN Unpack2 -----------------*/

  /* Start for S-Function (scanunpack): '<S1>/CAN Unpack1' */

  /*-----------S-Function Block: <S1>/CAN Unpack1 -----------------*/

  /* InitializeConditions for Memory: '<S1>/Memory' */
  FDCAN_GATEWAY_DW.Memory_PreviousInput =
    FDCAN_GATEWAY_P.Memory_InitialCondition;

  /* Start for MATLABSystem: '<S1>/FDCAN Read' */
  FDCAN_GATEWAY_DW.obj_l.matlabCodegenIsDeleted = false;
  FDCAN_GATEWAY_DW.obj_l.isInitialized = 1;
  FDCAN_GATEWAY_DW.obj_l.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(1);
  MW_FDCAN_Start(FDCAN_GATEWAY_DW.obj_l.MW_FDCAN_HANDLE);
  FDCAN_GATEWAY_DW.obj_l.isSetupComplete = true;

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

  /* Start for MATLABSystem: '<S1>/FDCAN Read1' */
  FDCAN_GATEWAY_DW.obj.matlabCodegenIsDeleted = false;
  FDCAN_GATEWAY_DW.obj.isInitialized = 1;
  FDCAN_GATEWAY_DW.obj.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(2);
  MW_FDCAN_Start(FDCAN_GATEWAY_DW.obj.MW_FDCAN_HANDLE);
  FDCAN_GATEWAY_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<S1>/FDCAN Write2' */
  FDCAN_GATEWAY_DW.obj_b.matlabCodegenIsDeleted = false;
  FDCAN_GATEWAY_DW.obj_b.isInitialized = 1;
  FDCAN_GATEWAY_DW.obj_b.MW_FDCAN_HANDLE = MW_FDCAN_Initialize(2);
  MW_FDCAN_Start(FDCAN_GATEWAY_DW.obj_b.MW_FDCAN_HANDLE);
  FDCAN_GATEWAY_DW.obj_b.isSetupComplete = true;

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

  /* Terminate for MATLABSystem: '<S1>/FDCAN Read1' */
  if (!FDCAN_GATEWAY_DW.obj.matlabCodegenIsDeleted) {
    FDCAN_GATEWAY_DW.obj.matlabCodegenIsDeleted = true;
    if ((FDCAN_GATEWAY_DW.obj.isInitialized == 1) &&
        FDCAN_GATEWAY_DW.obj.isSetupComplete) {
      MW_FDCAN_Close(FDCAN_GATEWAY_DW.obj.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/FDCAN Read1' */

  /* Terminate for MATLABSystem: '<S1>/FDCAN Write2' */
  if (!FDCAN_GATEWAY_DW.obj_b.matlabCodegenIsDeleted) {
    FDCAN_GATEWAY_DW.obj_b.matlabCodegenIsDeleted = true;
    if ((FDCAN_GATEWAY_DW.obj_b.isInitialized == 1) &&
        FDCAN_GATEWAY_DW.obj_b.isSetupComplete) {
      MW_FDCAN_Close(FDCAN_GATEWAY_DW.obj_b.MW_FDCAN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/FDCAN Write2' */

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
