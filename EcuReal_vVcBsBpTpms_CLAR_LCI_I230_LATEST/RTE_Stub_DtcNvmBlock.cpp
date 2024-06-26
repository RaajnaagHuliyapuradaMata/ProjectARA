/******************************************************************************/
/* File   : RTE_Stub_DtcNvmBlock.cpp                                          */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "RTE_Stub_DtcNvmBlock.h"
#include "RTE_Stub_DemServicesX.h"
#include "Rte_CtApHufTpmsSWC.h"

#include <stdio.h>
#include <string.h>

#include "crc16X.h"

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
struct{
   uint16 Chksum;
   uint16 Version;
   uint8 Data[cMaxErrorCount * sizeof(tRDCiDtcListDef)];
}NvmBlockDtc;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
void NVM_ReadAllDTC(void)
{
#ifdef _EcuVirtual
  FILE* fStream;
  const char filename[] = "NvmRdciDTC.txt";
  const char mode[] = "rb";
   uint32 ulLoop;

   if(fopen_s(&fStream, filename, mode) == 0){
    fread( &NvmBlockDtc, sizeof(uint8), sizeof(NvmBlockDtc), fStream);
    fclose( fStream);
   }
   else{
    NvmBlockDtc.Chksum  = 0xFFFFu;
    NvmBlockDtc.Version = 0xFFFFu;

      for(ulLoop = 0; ulLoop < (cMaxErrorCount * sizeof(tRDCiDtcListDef)); ulLoop++){
      NvmBlockDtc.Data[ulLoop] = 0xFFu;
      }
   }
#else
#endif
}

void NVM_WriteAllDTC(void)
{
#ifdef _EcuVirtual
  FILE* fStream;
  const char filename[] = "NvmRdciDTC.txt";
  const char mode[] = "wb";
   static uint16 ushLastCrc;

  NvmBlockDtc.Version = 0x0100;
  NvmBlockDtc.Chksum = ushCalcCrc16( (uint8*) &NvmBlockDtc.Data, (uint16) sizeof(NvmBlockDtc.Data));

   if(NvmBlockDtc.Chksum != ushLastCrc){
      if(fopen_s(&fStream, filename, mode) == 0){
      fwrite( (uint8*) &NvmBlockDtc, sizeof(uint8), sizeof(NvmBlockDtc), fStream);
      fclose( fStream);
      }
      ushLastCrc = NvmBlockDtc.Chksum;
   }
#else
#endif
}

uint8 ucNvmDTC_ReadByte(uint32 ulIx)
{
   return NvmBlockDtc.Data[ulIx];
}

void NvmDTC_WriteByte(uint32 ulIx, uint8 ucNvmByte)
{
   if(ulIx < sizeof(NvmBlockDtc.Data)){
    NvmBlockDtc.Data[ulIx] = ucNvmByte;
   }
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

