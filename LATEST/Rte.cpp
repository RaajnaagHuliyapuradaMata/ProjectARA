/******************************************************************************/
/* File   : Rte.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "infRte_Version.h"
#include "infRte_EcuM.h"
#include "infRte_Dcm.h"
#include "infRte_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Rte:
      public abstract_module
{
   public:
      FUNC(void, RTE_CODE) InitFunction   (void);
      FUNC(void, RTE_CODE) DeInitFunction (void);
      FUNC(void, RTE_CODE) GetVersionInfo (void);
      FUNC(void, RTE_CODE) MainFunction   (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Rte, RTE_VAR) Rte;
CONSTP2VAR(infEcuMClient, RTE_VAR, RTE_CONST) gptrinfEcuMClient_Rte = &Rte;
CONSTP2VAR(infDcmClient,  RTE_VAR, RTE_CONST) gptrinfDcmClient_Rte  = &Rte;
CONSTP2VAR(infSchMClient, RTE_VAR, RTE_CONST) gptrinfSchMClient_Rte = &Rte;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, RTE_CODE) module_Rte::InitFunction(void){
   Rte.IsInitDone = E_OK;
}

FUNC(void, RTE_CODE) module_Rte::DeInitFunction(void){
   Rte.IsInitDone = E_NOT_OK;
}

FUNC(void, RTE_CODE) module_Rte::GetVersionInfo(void){
}

FUNC(void, RTE_CODE) module_Rte::MainFunction(void){
}

#include "Rte_Unused.h"

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

