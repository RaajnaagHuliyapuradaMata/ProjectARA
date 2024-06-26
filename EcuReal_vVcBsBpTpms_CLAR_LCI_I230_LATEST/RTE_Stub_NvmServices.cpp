/******************************************************************************/
/* File   : RTE_Stub_NvmServices.cpp                                          */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Rte_CtApHufTpmsSWC_Type.h"
#include "Rte_CtApHufTpmsSWC.h"
#include "RTE_Stub_NvmServicesX.h"

#include <stdio.h>
#include <string.h>

#include "crc16X.h"
#include "JumpTable.h"

#ifdef _EcuVirtual
#include "EcuVirtual_stdio.h"
#else
#endif

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
static uint8 ucDataIndexEcoBlock;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
void NVM_ReadAll(void)
{
   (void) RTE_Stub_Call_NvmRdciCommonBlock_ReadBlock( (uint8*) Rte_Pim_NvmRdciCommonBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC));
   (void) RTE_Stub_Call_NvmRdciDiagBlock1_ReadBlock( (uint8*) Rte_Pim_NvmRdciDiagBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC));
   (void) RTE_Stub_Call_NvmRdciDiagBlock2_ReadBlock( (uint8*) Rte_Pim_NvmRdciDiagBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC));
   (void) RTE_Stub_Call_NvmRdciErfsBlock_ReadBlock( (uint8*) Rte_Pim_NvmRdciErfsBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC));

   (void) RTE_Stub_Call_NvmRdciErfsTsaBlock_ReadBlock( (uint8*) Rte_Pim_NvmRdciErfsTsaBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC));
   (void) RTE_Stub_Call_NvmRdciRidQrBlock1_ReadBlock( (uint8*) Rte_Pim_NvmRdciRidQrBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC));
   (void) RTE_Stub_Call_NvmRdciRidQrBlock2_ReadBlock( (uint8*) Rte_Pim_NvmRdciRidQrBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC));
   (void) RTE_Stub_Call_NvmRdciWarnStatusBlock_ReadBlock( (uint8*) Rte_Pim_NvmRdciWarnStatusBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC));
   (void) RTE_Stub_Call_NvmRdciZoHistoryBlock_ReadBlock( (uint8*) Rte_Pim_NvmRdciZoHistoryBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC));
   (void) RTE_Stub_Call_NvmRdciZomBlock1_ReadBlock( (uint8*) Rte_Pim_NvmRdciZomBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC));
   (void) RTE_Stub_Call_NvmRdciZomBlock2_ReadBlock( (uint8*) Rte_Pim_NvmRdciZomBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC));
}

void NVM_WriteAll(void)
{
   ImpTypeArrayDcm_StatusRdcVersionReadDataType Data;
   uint16 ushVersion;

#ifdef _SwcApplTpms_CLAR_LCI
#else
   (void) RDCi_FunctiontablePtr->RDCi_ROpInvDcmStatusRdcVersion_ReadData_093(Rte_Inst_CtApHufTpmsSWC, (uint8*) &Data);
#endif

   ushVersion = (uint16) (Data[0] << 8) + Data[1];

  Rte_Pim_NvmRdciCommonBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Version = ushVersion;
  Rte_Pim_NvmRdciCommonBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Chksum = ushCalcCrc16( (uint8*) Rte_Pim_NvmRdciCommonBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data, (uint16) sizeof(Rte_Pim_NvmRdciCommonBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data));
   (void) RTE_Stub_Call_NvmRdciCommonBlock_WriteBlock( (uint8*) Rte_Pim_NvmRdciCommonBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC));

  Rte_Pim_NvmRdciDiagBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Version = ushVersion;
  Rte_Pim_NvmRdciDiagBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Chksum = ushCalcCrc16( (uint8*) Rte_Pim_NvmRdciDiagBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data, (uint16) sizeof(Rte_Pim_NvmRdciDiagBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data));
   (void) RTE_Stub_Call_NvmRdciDiagBlock1_WriteBlock( (uint8*) Rte_Pim_NvmRdciDiagBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC));

  Rte_Pim_NvmRdciDiagBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Version = ushVersion;
  Rte_Pim_NvmRdciDiagBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Chksum = ushCalcCrc16( (uint8*) Rte_Pim_NvmRdciDiagBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data, (uint16) sizeof(Rte_Pim_NvmRdciDiagBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data));
   (void) RTE_Stub_Call_NvmRdciDiagBlock2_WriteBlock( (uint8*) Rte_Pim_NvmRdciDiagBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC));

  Rte_Pim_NvmRdciErfsBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Version = ushVersion;
  Rte_Pim_NvmRdciErfsBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Chksum = ushCalcCrc16( (uint8*) Rte_Pim_NvmRdciErfsBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data, (uint16) sizeof(Rte_Pim_NvmRdciErfsBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data));
   (void) RTE_Stub_Call_NvmRdciErfsBlock_WriteBlock( (uint8*) Rte_Pim_NvmRdciErfsBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC));

  Rte_Pim_NvmRdciErfsTsaBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Version = ushVersion;
  Rte_Pim_NvmRdciErfsTsaBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Chksum = ushCalcCrc16( (uint8*) Rte_Pim_NvmRdciErfsTsaBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data, (uint16) sizeof(Rte_Pim_NvmRdciErfsTsaBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data));
   (void) RTE_Stub_Call_NvmRdciErfsTsaBlock_WriteBlock( (uint8*) Rte_Pim_NvmRdciErfsTsaBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC));

  Rte_Pim_NvmRdciRidQrBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Version = ushVersion;
  Rte_Pim_NvmRdciRidQrBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Chksum = ushCalcCrc16( (uint8*) Rte_Pim_NvmRdciRidQrBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data, (uint16) sizeof(Rte_Pim_NvmRdciRidQrBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data));
   (void) RTE_Stub_Call_NvmRdciRidQrBlock1_WriteBlock( (uint8*) Rte_Pim_NvmRdciRidQrBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC));

  Rte_Pim_NvmRdciRidQrBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Version = ushVersion;
  Rte_Pim_NvmRdciRidQrBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Chksum = ushCalcCrc16( (uint8*) Rte_Pim_NvmRdciRidQrBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data, (uint16) sizeof(Rte_Pim_NvmRdciRidQrBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data));
   (void) RTE_Stub_Call_NvmRdciRidQrBlock2_WriteBlock( (uint8*) Rte_Pim_NvmRdciRidQrBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC));

  Rte_Pim_NvmRdciWarnStatusBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Version = ushVersion;
  Rte_Pim_NvmRdciWarnStatusBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Chksum = ushCalcCrc16( (uint8*) Rte_Pim_NvmRdciWarnStatusBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data, (uint16) sizeof(Rte_Pim_NvmRdciWarnStatusBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data));
   (void) RTE_Stub_Call_NvmRdciWarnStatusBlock_WriteBlock( (uint8*) Rte_Pim_NvmRdciWarnStatusBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC));

  Rte_Pim_NvmRdciZoHistoryBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Version = ushVersion;
  Rte_Pim_NvmRdciZoHistoryBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Chksum = ushCalcCrc16( (uint8*) Rte_Pim_NvmRdciZoHistoryBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data, (uint16) sizeof(Rte_Pim_NvmRdciZoHistoryBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data));
   (void) RTE_Stub_Call_NvmRdciZoHistoryBlock_WriteBlock( (uint8*) Rte_Pim_NvmRdciZoHistoryBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC));

  Rte_Pim_NvmRdciZomBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Version = ushVersion;
  Rte_Pim_NvmRdciZomBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Chksum = ushCalcCrc16( (uint8*) Rte_Pim_NvmRdciZomBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data, (uint16) sizeof(Rte_Pim_NvmRdciZomBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data));
   (void) RTE_Stub_Call_NvmRdciZomBlock1_WriteBlock( (uint8*) Rte_Pim_NvmRdciZomBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC));

  Rte_Pim_NvmRdciZomBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Version = ushVersion;
  Rte_Pim_NvmRdciZomBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Chksum = ushCalcCrc16( (uint8*) Rte_Pim_NvmRdciZomBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data, (uint16) sizeof(Rte_Pim_NvmRdciZomBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data));
   (void) RTE_Stub_Call_NvmRdciZomBlock2_WriteBlock( (uint8*) Rte_Pim_NvmRdciZomBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC));
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciCommonBlock_GetDataIndex(uint8 *DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciCommonBlock_GetErrorStatus( P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus)
{
#ifdef _EcuVirtual
  UNUSED(ErrorStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciCommonBlock_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  FILE* fStream;
  const char filename[] = "NvmRdciCommonBlock.txt";

  const char mode[] = "rb";

   if(fopen_s(&fStream, filename, mode) == 0){
    fread( Rte_Pim_NvmRdciCommonBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC), sizeof(uint8), sizeof(NvmRdciCommonBlockType), fStream);
    fclose( fStream);
   }

  Data = (uint8*) Rte_Pim_NvmRdciCommonBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC);
#ifdef _EcuVirtual
  UNUSED(Data);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciCommonBlock_SetDataIndex(uint8 DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciCommonBlock_SetRamBlockStatus( boolean BlockStatus)
{
#ifdef _EcuVirtual
  UNUSED(BlockStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciCommonBlock_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  FILE* fStream;
  const char filename[] = "NvmRdciCommonBlock.txt";

  const char mode[] = "wb";

   if(fopen_s(&fStream, filename, mode) == 0){
    fwrite( Data, sizeof(uint8), sizeof(NvmRdciCommonBlockType), fStream);
    fclose( fStream);
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciCommonBlock_NvMNotifyJobFinished_JobFinished_153( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_OK);
   }
   else{
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciCommonBlock_NvMNotifyJobFinished_JobFinished_153( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_NOT_OK);
   }
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciErfsEcoBlock_GetDataIndex(uint8 *DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciErfsEcoBlock_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus)
{

  *ErrorStatus = NVM_REQ_OK;
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciErfsEcoBlock_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  FILE* fStream;
  char filename[30];
  const char mode[] = "rb";

   sprintf_s(filename, "NvmRdciErfsEcoBlock%d.txt", ucDataIndexEcoBlock);

   if(fopen_s(&fStream, filename, mode) == 0){
    fread( (Data), sizeof(uint8), sizeof(NvmRdciErfsEcoBlockType), fStream);
    fclose( fStream);
   }

   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciErfsEcoBlock_SetDataIndex(uint8 DataIndex)
{
   ucDataIndexEcoBlock = DataIndex;
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciErfsEcoBlock_SetRamBlockStatus( boolean BlockStatus)
{
#ifdef _EcuVirtual
  UNUSED(BlockStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciErfsEcoBlock_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  FILE* fStream;
  char filename[30];
  const char mode[] = "wb";

   sprintf_s(filename, "NvmRdciErfsEcoBlock%d.txt", ucDataIndexEcoBlock);

   if(fopen_s(&fStream, filename, mode) == 0){
    fwrite( Data, sizeof(uint8), sizeof(NvmRdciErfsEcoBlockType), fStream);
    fclose( fStream);
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciErfsEcoBlock_NvMNotifyJobFinished_JobFinished_157( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_OK);
   }
   else{
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciErfsEcoBlock_NvMNotifyJobFinished_JobFinished_157( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_NOT_OK);
   }

   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciDiagBlock1_GetDataIndex(uint8 *DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciDiagBlock1_GetErrorStatus( P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus)
{
#ifdef _EcuVirtual
  UNUSED(ErrorStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciDiagBlock1_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  FILE* fStream;
  const char filename[] = "NvmRdciDiagBlock1.txt";
  const char mode[] = "rb";

   if(fopen_s(&fStream, filename, mode) == 0){
    fread( Rte_Pim_NvmRdciDiagBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC), sizeof(uint8), sizeof(NvmRdciDiagBlock1Type), fStream);
    fclose( fStream);
   }

  Data = (uint8*) Rte_Pim_NvmRdciDiagBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC);
#ifdef _EcuVirtual
  UNUSED(Data);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciDiagBlock1_SetDataIndex(uint8 DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciDiagBlock1_SetRamBlockStatus( boolean BlockStatus)
{
#ifdef _EcuVirtual
  UNUSED(BlockStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciDiagBlock1_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  FILE* fStream;
  const char filename[] = "NvmRdciDiagBlock1.txt";
  const char mode[] = "wb";

   if(fopen_s(&fStream, filename, mode) == 0){
    fwrite( Data, sizeof(uint8), sizeof(NvmRdciDiagBlock1Type), fStream);
    fclose( fStream);
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciDiagBlock1_NvMNotifyJobFinished_JobFinished_154( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_OK);
   }
   else{
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciDiagBlock1_NvMNotifyJobFinished_JobFinished_154( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_NOT_OK);
   }

   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciDiagBlock2_GetDataIndex(uint8 *DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciDiagBlock2_GetErrorStatus( P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus)
{
#ifdef _EcuVirtual
  UNUSED(ErrorStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciDiagBlock2_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  FILE* fStream;
  const char filename[] = "NvmRdciDiagBlock2.txt";
  const char mode[] = "rb";

   if(fopen_s(&fStream, filename, mode) == 0){
    fread( Rte_Pim_NvmRdciDiagBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC), sizeof(uint8), sizeof(NvmRdciDiagBlock2Type), fStream);
    fclose( fStream);
   }

  Data = (uint8*) Rte_Pim_NvmRdciDiagBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC);
#ifdef _EcuVirtual
  UNUSED(Data);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciDiagBlock2_SetDataIndex(uint8 DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciDiagBlock2_SetRamBlockStatus( boolean BlockStatus)
{
#ifdef _EcuVirtual
  UNUSED(BlockStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciDiagBlock2_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  FILE* fStream;
  const char filename[] = "NvmRdciDiagBlock2.txt";
  const char mode[] = "wb";

   if(fopen_s(&fStream, filename, mode) == 0){
    fwrite( Data, sizeof(uint8), sizeof(NvmRdciDiagBlock2Type), fStream);
    fclose( fStream);
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciDiagBlock2_NvMNotifyJobFinished_JobFinished_155( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_OK);
   }
   else{
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciDiagBlock2_NvMNotifyJobFinished_JobFinished_155( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_NOT_OK);
   }

   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciErfsBlock_GetDataIndex(uint8 *DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciErfsBlock_GetErrorStatus( P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus)
{
#ifdef _EcuVirtual
  UNUSED(ErrorStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciErfsBlock_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  FILE* fStream;
  const char filename[] = "NvmRdciErfsBlock.txt";
  const char mode[] = "rb";

   if(fopen_s(&fStream, filename, mode) == 0){
    fread( Rte_Pim_NvmRdciErfsBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC), sizeof(uint8), sizeof(NvmRdciErfsBlockType), fStream);
    fclose( fStream);
   }

  Data = (uint8*) Rte_Pim_NvmRdciErfsBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC);
#ifdef _EcuVirtual
  UNUSED(Data);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciErfsBlock_SetDataIndex(uint8 DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciErfsBlock_SetRamBlockStatus( boolean BlockStatus)
{
#ifdef _EcuVirtual
  UNUSED(BlockStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciErfsBlock_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  FILE* fStream;
  const char filename[] = "NvmRdciErfsBlock.txt";
  const char mode[] = "wb";
   uint8 ucRetVal;

   if(fopen_s(&fStream, filename, mode) == 0){
    fwrite( Data, sizeof(uint8), sizeof(NvmRdciErfsBlockType), fStream);
    fclose( fStream);
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciErfsBlock_NvMNotifyJobFinished_JobFinished_156( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_OK);
      ucRetVal = RTE_E_OK;
   }
   else{

      ucRetVal = RTE_E_INVALID;
   }

   return ucRetVal;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciErfsTsaBlock_GetDataIndex(uint8 *DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciErfsTsaBlock_GetErrorStatus( P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus)
{
#ifdef _EcuVirtual
  UNUSED(ErrorStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciErfsTsaBlock_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  FILE* fStream;
  const char filename[] = "NvmRdciErfsTsaBlock.txt";
  const char mode[] = "rb";

   if(fopen_s(&fStream, filename, mode) == 0){
    fread( Rte_Pim_NvmRdciErfsTsaBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC), sizeof(uint8), sizeof(NvmRdciErfsTsaBlockType), fStream);
    fclose( fStream);
   }

  Data = (uint8*) Rte_Pim_NvmRdciErfsTsaBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC);
#ifdef _EcuVirtual
  UNUSED(Data);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciErfsTsaBlock_SetDataIndex(uint8 DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciErfsTsaBlock_SetRamBlockStatus( boolean BlockStatus)
{
#ifdef _EcuVirtual
  UNUSED(BlockStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciErfsTsaBlock_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  FILE* fStream;
  const char filename[] = "NvmRdciErfsTsaBlock.txt";
  const char mode[] = "wb";

   if(fopen_s(&fStream, filename, mode) == 0){
    fwrite( Data, sizeof(uint8), sizeof(NvmRdciErfsTsaBlockType), fStream);
    fclose( fStream);
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciErfsTsaBlock_NvMNotifyJobFinished_JobFinished_158( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_OK);
   }
   else{
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciErfsTsaBlock_NvMNotifyJobFinished_JobFinished_158( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_NOT_OK);
   }
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciWarnStatusBlock_GetDataIndex(uint8 *DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciWarnStatusBlock_GetErrorStatus( P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus)
{
#ifdef _EcuVirtual
  UNUSED(ErrorStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciWarnStatusBlock_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  FILE* fStream;
  const char filename[] = "NvmRdciWarnStatusBlock.txt";
  const char mode[] = "rb";

   if(fopen_s(&fStream, filename, mode) == 0){
    fread( Rte_Pim_NvmRdciWarnStatusBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC), sizeof(uint8), sizeof(NvmRdciWarnStatusBlockType), fStream);
    fclose( fStream);
   }

  Data = (uint8*) Rte_Pim_NvmRdciWarnStatusBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC);
#ifdef _EcuVirtual
  UNUSED(Data);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciWarnStatusBlock_SetDataIndex(uint8 DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciWarnStatusBlock_SetRamBlockStatus( boolean BlockStatus)
{
#ifdef _EcuVirtual
  UNUSED(BlockStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciWarnStatusBlock_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  FILE* fStream;
  const char filename[] = "NvmRdciWarnStatusBlock.txt";
  const char mode[] = "wb";

   if(fopen_s(&fStream, filename, mode) == 0){
    fwrite( Data, sizeof(uint8), sizeof(NvmRdciWarnStatusBlockType), fStream);
    fclose( fStream);
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciWarnStatusBlock_NvMNotifyJobFinished_JobFinished_161( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_OK);
   }
   else{
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciWarnStatusBlock_NvMNotifyJobFinished_JobFinished_161( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_NOT_OK);
   }
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciZoHistoryBlock_GetDataIndex(uint8 *DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciZoHistoryBlock_GetErrorStatus( P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus)
{
#ifdef _EcuVirtual
  UNUSED(ErrorStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciZoHistoryBlock_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  FILE* fStream;
  const char filename[] = "NvmRdciZoHistoryBlock.txt";
  const char mode[] = "rb";
   uint16 i;
   uint16 j;

   if(fopen_s(&fStream, filename, mode) == 0){
    i = (uint16) fread( Rte_Pim_NvmRdciZoHistoryBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC), sizeof(uint8), sizeof(NvmRdciZoHistoryBlockType), fStream);

      if(i != sizeof(NvmRdciZoHistoryBlockType)){
      i = 0;
      }

    fclose( fStream);
   }

   else{
    j=sizeof(Rte_Pim_NvmRdciZoHistoryBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data);
      for(i=0; i<j; i++){
      Rte_Pim_NvmRdciZoHistoryBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC)->Data[i] = 0xff;
      }
   }

  Data = (uint8*) Rte_Pim_NvmRdciZoHistoryBlock_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC);
#ifdef _EcuVirtual
  UNUSED(Data);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciZoHistoryBlock_SetDataIndex(uint8 DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciZoHistoryBlock_SetRamBlockStatus( boolean BlockStatus)
{
#ifdef _EcuVirtual
  UNUSED(BlockStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciZoHistoryBlock_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  FILE* fStream;
  const char filename[] = "NvmRdciZoHistoryBlock.txt";
  const char mode[] = "wb";

   if(fopen_s(&fStream, filename, mode) == 0){
    fwrite( Data, sizeof(uint8), sizeof(NvmRdciZoHistoryBlockType), fStream);
    fclose( fStream);
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciZoHistoryBlock_NvMNotifyJobFinished_JobFinished_162( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_OK);
   }
   else{
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciZoHistoryBlock_NvMNotifyJobFinished_JobFinished_162( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_NOT_OK);
   }
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciRidQrBlock1_GetDataIndex(uint8 *DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciRidQrBlock1_GetErrorStatus( P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus)
{
#ifdef _EcuVirtual
  UNUSED(ErrorStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciRidQrBlock1_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  FILE* fStream;
  const char filename[] = "NvmRdciRidQrBlock1.txt";

  const char mode[] = "rb";

   if(fopen_s(&fStream, filename, mode) == 0){
    fread( Rte_Pim_NvmRdciRidQrBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC), sizeof(uint8), sizeof(NvmRdciRidQrBlock1Type), fStream);
    fclose( fStream);
   }

  Data = (uint8*) Rte_Pim_NvmRdciRidQrBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC);
#ifdef _EcuVirtual
  UNUSED(Data);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciRidQrBlock1_SetDataIndex(uint8 DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciRidQrBlock1_SetRamBlockStatus( boolean BlockStatus)
{
#ifdef _EcuVirtual
  UNUSED(BlockStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciRidQrBlock1_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  FILE* fStream;
  const char filename[] = "NvmRdciRidQrBlock1.txt";

  const char mode[] = "wb";

   if(fopen_s(&fStream, filename, mode) == 0){
    fwrite( Data, sizeof(uint8), sizeof(NvmRdciRidQrBlock1Type), fStream);
    fclose( fStream);
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciRidQrBlock1_NvMNotifyJobFinished_JobFinished_159( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_OK);
   }
   else{
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciRidQrBlock1_NvMNotifyJobFinished_JobFinished_159( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_NOT_OK);
   }
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciRidQrBlock2_GetDataIndex(uint8 *DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciRidQrBlock2_GetErrorStatus( P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus)
{
#ifdef _EcuVirtual
  UNUSED(ErrorStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciRidQrBlock2_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  FILE* fStream;
  const char filename[] = "NvmRdciRidQrBlock2.txt";

  const char mode[] = "rb";

   if(fopen_s(&fStream, filename, mode) == 0){
    fread( Rte_Pim_NvmRdciRidQrBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC), sizeof(uint8), sizeof(NvmRdciRidQrBlock2Type), fStream);
    fclose( fStream);
   }

  Data = (uint8*) Rte_Pim_NvmRdciRidQrBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC);
#ifdef _EcuVirtual
  UNUSED(Data);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciRidQrBlock2_SetDataIndex(uint8 DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciRidQrBlock2_SetRamBlockStatus( boolean BlockStatus)
{
#ifdef _EcuVirtual
  UNUSED(BlockStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciRidQrBlock2_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  FILE* fStream;
  const char filename[] = "NvmRdciRidQrBlock2.txt";

  const char mode[] = "wb";

   if(fopen_s(&fStream, filename, mode) == 0){
    fwrite( Data, sizeof(uint8), sizeof(NvmRdciRidQrBlock2Type), fStream);
    fclose( fStream);
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciRidQrBlock2_NvMNotifyJobFinished_JobFinished_160( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_OK);
   }
   else{
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciRidQrBlock2_NvMNotifyJobFinished_JobFinished_160( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_NOT_OK);
   }
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciZomBlock1_GetDataIndex(uint8 *DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciZomBlock1_GetErrorStatus( P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus)
{
#ifdef _EcuVirtual
  UNUSED(ErrorStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciZomBlock1_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  FILE* fStream;
  const char filename[] = "NvmRdciZomBlock1.txt";

  const char mode[] = "rb";

   if(fopen_s(&fStream, filename, mode) == 0){
    fread( Rte_Pim_NvmRdciZomBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC), sizeof(uint8), sizeof(NvmRdciZomBlock1Type), fStream);
    fclose( fStream);
   }

  Data = (uint8*) Rte_Pim_NvmRdciZomBlock1_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC);
#ifdef _EcuVirtual
  UNUSED(Data);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciZomBlock1_SetDataIndex(uint8 DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciZomBlock1_SetRamBlockStatus( boolean BlockStatus)
{
#ifdef _EcuVirtual
  UNUSED(BlockStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciZomBlock1_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  FILE* fStream;
  const char filename[] = "NvmRdciZomBlock1.txt";

  const char mode[] = "wb";

   if(fopen_s(&fStream, filename, mode) == 0){
    fwrite( Data, sizeof(uint8), sizeof(NvmRdciZomBlock1Type), fStream);
    fclose( fStream);
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciZomBlock1_NvMNotifyJobFinished_JobFinished_163( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_OK);
   }
   else{
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciZomBlock1_NvMNotifyJobFinished_JobFinished_163( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_NOT_OK);
   }
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciZomBlock2_GetDataIndex(uint8 *DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciZomBlock2_GetErrorStatus( P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) ErrorStatus)
{
#ifdef _EcuVirtual
  UNUSED(ErrorStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciZomBlock2_ReadBlock(P2VAR(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_VAR) Data)
{
  FILE* fStream;
  const char filename[] = "NvmRdciZomBlock2.txt";

  const char mode[] = "rb";

   if(fopen_s(&fStream, filename, mode) == 0){
    fread( Rte_Pim_NvmRdciZomBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC), sizeof(uint8), sizeof(NvmRdciZomBlock2Type), fStream);
    fclose( fStream);
   }

  Data = (uint8*) Rte_Pim_NvmRdciZomBlock2_NVBlock_MirrorBlock( Rte_Inst_CtApHufTpmsSWC);
#ifdef _EcuVirtual
  UNUSED(Data);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciZomBlock2_SetDataIndex(uint8 DataIndex)
{
#ifdef _EcuVirtual
  UNUSED(DataIndex);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciZomBlock2_SetRamBlockStatus( boolean BlockStatus)
{
#ifdef _EcuVirtual
  UNUSED(BlockStatus);
#else
#endif
   return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Call_NvmRdciZomBlock2_WriteBlock(P2CONST(uint8, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) Data)
{
  FILE* fStream;
  const char filename[] = "NvmRdciZomBlock2.txt";

  const char mode[] = "wb";

   if(fopen_s(&fStream, filename, mode) == 0){
    fwrite( Data, sizeof(uint8), sizeof(NvmRdciZomBlock2Type), fStream);
    fclose( fStream);
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciZomBlock2_NvMNotifyJobFinished_JobFinished_164( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_OK);
   }
   else{
      RDCi_FunctiontablePtr->RDCi_ROpInvNvmRdciZomBlock2_NvMNotifyJobFinished_JobFinished_164( Rte_Inst_CtApHufTpmsSWC, NVM_WRITE_BLOCK, NVM_REQ_NOT_OK);
   }
   return E_OK;
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

