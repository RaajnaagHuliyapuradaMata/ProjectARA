/******************************************************************************/
/* File   : ProjectARA.cpp                                                    */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ProjectARA.hpp"
#include "infProjectARA_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef struct{ //TBD: move to destination module specific Rte interface
   sint16     s16AdcResult[3u];
   TPhaseCurr PhaseCurr;
   uint16     u16SpeedReference;
   uint16     u16DcLinkVoltage;
}type_Rte_Buffer;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_ProjectARA, RTE_VAR) ProjectARA;
static type_Rte_Buffer Rte_Buffer;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, RTE_CODE) module_ProjectARA::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, RTE_CONST,       RTE_APPL_CONST) lptrNvMBlocksRomModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   RTE_CONFIG_DATA, RTE_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ProjectARA_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrNvMBlocksRomModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrNvMBlocksRom = lptrNvMBlocksRomModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ProjectARA_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
      Rte_Buffer.PhaseCurr.A = 0;
      Rte_Buffer.PhaseCurr.B = 0;
#if(STD_ON == ProjectARA_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ProjectARA_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  RTE_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, RTE_CODE) module_ProjectARA::DeInitFunction(
   void
){
#if(STD_ON == ProjectARA_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ProjectARA_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ProjectARA_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  RTE_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, RTE_CODE) module_ProjectARA::MainFunction(
   void
){
#if(STD_ON == ProjectARA_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ProjectARA_InitCheck)
   }
   else{
#if(STD_ON == ProjectARA_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  RTE_E_UNINIT
      );
#endif
   }
#endif
}

#include <cstring> //TBD: Re-arrange headers
void RteWrite_PhaseCurr(
   TPhaseCurr* lptrInput
){
   memcpy(
         &Rte_Buffer.PhaseCurr
      ,  lptrInput
      ,  sizeof(Rte_Buffer.PhaseCurr)
   );
}

void RteRead_PhaseCurr(
   TPhaseCurr* lptrOutput
){
   memcpy(
         lptrOutput
      ,  &Rte_Buffer.PhaseCurr
      ,  sizeof(Rte_Buffer.PhaseCurr)
   );
}

void RteWrite_AdcResult(
   sint16* lptrInput
){
   memcpy(
         &Rte_Buffer.s16AdcResult[0]
      ,  lptrInput
      ,  sizeof(Rte_Buffer.s16AdcResult)
   );
}

void RteRead_AdcResult(
   sint16* lptrOutput
){
   memcpy(
         lptrOutput
      ,  &Rte_Buffer.s16AdcResult[0]
      ,  sizeof(Rte_Buffer.s16AdcResult)
   );
}

uint32 RteRead_Adc2(void){return Rte_Buffer.s16AdcResult[2u];}

#include "adc1.hpp"
uint16 RteRead_SpeedReference(void){
/******************************************************************************/
//TBD: seperate from RteRead
/******************************************************************************/
   uint16 lu16Adc1Ch4Result = 0;
   if(
         true
      == ADC1_GetChResult_mV(
              &lu16Adc1Ch4Result
            ,  ADC1_CH4
         )
   ){
      Rte_Buffer.u16SpeedReference = lu16Adc1Ch4Result/2; //TBD: Scheduling and move to RteWrite
   }
   else{}
/******************************************************************************/
//END
/******************************************************************************/

   return Rte_Buffer.u16SpeedReference;
}

uint16 RteRead_u16DcLinkVoltage(void){
   Rte_Buffer.u16DcLinkVoltage = ADC1_GetRES_OUT6(); //TBD: Scheduling and move to RteWrite
   Rte_Buffer.u16DcLinkVoltage = 1; //TBD: Remove after complete implementation
   return Rte_Buffer.u16DcLinkVoltage;
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

