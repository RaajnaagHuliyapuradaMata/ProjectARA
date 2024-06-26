/******************************************************************************/
/* File   : RTE_Stub_Output.cpp                                               */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Rte_CtApHufTpmsSWC.h"

#include "RTE_Stub_Output.h"
#include "RTE_Stub_NvmServicesX.h"
#include "RTE_Stub_CalPrmX.h"
#include "Rte_Stub_CddDataX.h"
#include "Rte_Stub_CcmX.h"
#include "Rte_Stub_FlexRayDataX.h"
#include "Rte_Stub_StbMBX.h"
#include "Rte_Stub_DemServicesX.h"

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
extern struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciCommonBlock;
extern struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciDiagBlock1;
extern struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciDiagBlock2;
extern struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciErfsBlock;
extern struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciErfsEcoBlock;
extern struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciErfsTsaBlock;
extern struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciRidQrBlock1;
extern struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciRidQrBlock2;
extern struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciWarnStatusBlock;
extern struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciZoHistoryBlock;
extern struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciZomBlock1;
extern struct Rte_PDS_CtApHufTpmsSWC_NvMService_R                        tCpNvmRdciZomBlock2;
extern struct Rte_PDS_CtApHufTpmsSWC_PiCalPrmRDCi_R                      tRpCalPrmRDCi;
extern struct Rte_PDS_CtApHufTpmsSWC_PiCcm_DISP_CC_BYPA_00_P             tPpCcm_DISP_CC_BYPA_00;
extern struct Rte_PDS_CtApHufTpmsSWC_PiCddAbsData_R                      tRpCddAbsData;
extern struct Rte_PDS_CtApHufTpmsSWC_PiCddRdcData_R                      tRpCddRdcData;
extern struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_CON_VEH_R                   tRpFrPdu_CON_VEH;
extern struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_ST_TYR_P                    tPpFrPdu_ST_TYR;
extern struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_V_VEH_R                     tRpFrPdu_V_VEH;
extern struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_WMOM_DRV_4_R                tRpFrPdu_WMOM_DRV_4;
extern struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_A_TEMP_R                    tRpFrPdu_A_TEMP;
extern struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_BEDIENUNG_FAHRWERK_R        tRpFrPdu_BEDIENUNG_FAHRWERK;
extern struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_DT_PT_1_R                   tRpFrPdu_DT_PT_1;
extern struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_EINHEITEN_BN2020_R          tRpFrPdu_EINHEITEN_BN2020;
extern struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_FZZSTD_R                    tRpFrPdu_FZZSTD;
extern struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_KILOMETERSTAND_R            tRpFrPdu_KILOMETERSTAND;
extern struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_NMEARawData2Part2_R         tRpFrPdu_NMEARawData2Part2;
extern struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_NMEARawData2Part3_R         tRpFrPdu_NMEARawData2Part3;
extern struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_RELATIVZEIT_R               tRpFrPdu_RELATIVZEIT;
extern struct Rte_PDS_CtApHufTpmsSWC_PiFrPdu_UHRZEIT_DATUM_R             tRpFrPdu_UHRZEIT_DATUM;
extern struct Rte_PDS_CtApHufTpmsSWC_PiRdci_FrBusState_R                 tRpRdci_FrBusState;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdci1To3WrongWuMountedInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdci1To3WrongWuMounted;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdci4WrongWuMountedInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdci4WrongWuMounted;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciATempInvalidInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciATempInvalid;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciATempTimeoutInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciATempTimeout;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciAusfallInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciAusfall;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciAutoLearningFailedInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciAutoLearningFailed;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciBefuellhinweisInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciBefuellhinweis;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciConVehAliveInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciConVehAlive;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciConVehCrcInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciConVehCrc;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciConVehInvalidInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciConVehInvalid;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciConVehTimeoutInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciConVehTimeout;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciDruckwarnungInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciDruckwarnung;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciEinheitenBn2020InvalidInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciEinheitenBn2020Invalid;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciEinheitenBn2020TimeoutInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciEinheitenBn2020Timeout;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciErfsCodingDataInconsistentInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciErfsCodingDataInconsistent;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciGatewayOrAntennaErrorInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciGatewayOrAntennaError;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciKalibrierungInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciKalibrierung;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciOtherWuSensorTypeInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciOtherWuSensorType;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciPannenwarnungInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciPannenwarnung;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciPartialSystemAvailabilityInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciPartialSystemAvailability;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciSystemNotAvailableInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciSystemNotAvailable;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciRdcDtPckg1AliveInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciRdcDtPckg1Alive;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciRdcDtPckg1InvalidInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciRdcDtPckg1Invalid;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciRdcDtPckg1TimeoutInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciRdcDtPckg1Timeout;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciRelativzeitInvalidInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciRelativzeitInvalid;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciRelativzeitTimeoutInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciRelativzeitTimeout;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciRfExternalInterferenceInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciRfExternalInterference;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciTpmsManufactoryModeInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciTpmsManufactoryMode;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciUnspecifiedWfcDefectInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciUnspecifiedWfcDefect;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciUnspecifiedWuMuteInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciUnspecifiedWuMute;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciVVehAliveFailureInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciVVehAliveFailure;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciVVehCogInvalidInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciVVehCogInvalid;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciVVehCogQualifierInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciVVehCogQualifier;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciVVehCrcFailureInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciVVehCrcFailure;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciVVehTimeoutInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciVVehTimeout;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWarnruecknahmeInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWarnruecknahme;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuDefectFlInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuDefectFl;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuDefectFrInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuDefectFr;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuDefectRlInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuDefectRl;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuDefectRrInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuDefectRr;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuLocalisationFailedInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuLocalisationFailed;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuLowBatteryFlInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuLowBatteryFl;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuLowBatteryFrInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuLowBatteryFr;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuLowBatteryRlInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuLowBatteryRl;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuLowBatteryRrInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuLowBatteryRr;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuMuteFlInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuMuteFl;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuMuteFrInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuMuteFr;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuMuteRlInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuMuteRl;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemInfo_R                  tDemErrorRdciWuMuteRrInfo;
extern struct Rte_PDS_CtApHufTpmsSWC_PiServiceDemMonitor_R               tDemErrorRdciWuMuteRr;
extern struct Rte_PDS_CtApHufTpmsSWC_StbMB_AbsoluteTimeBaseValue_R       tStbMB_AbsoluteTimeBaseValue;

Rte_DE_Rdci_AVL_P_TYR_FLH_Type                                    tAVL_P_TYR_FLH                                  = { Rte_InitValue_PpFrPdu_AVL_P_TYR_AVL_P_TYR_FLH };
Rte_DE_Rdci_AVL_P_TYR_FRH_Type                                    tAVL_P_TYR_FRH                                  = { Rte_InitValue_PpFrPdu_AVL_P_TYR_AVL_P_TYR_FRH };
Rte_DE_Rdci_AVL_P_TYR_RLH_Type                                    tAVL_P_TYR_RLH                                  = { Rte_InitValue_PpFrPdu_AVL_P_TYR_AVL_P_TYR_RLH };
Rte_DE_Rdci_AVL_P_TYR_RRH_Type                                    tAVL_P_TYR_RRH                                  = { Rte_InitValue_PpFrPdu_AVL_P_TYR_AVL_P_TYR_RRH };
Rte_DE_Rdci_AVL_TEMP_TYR_FLH_Type                                 tAVL_TEMP_TYR_FLH                               = { Rte_InitValue_PpFrPdu_AVL_TEMP_TYR_AVL_TEMP_TYR_FLH };
Rte_DE_Rdci_AVL_TEMP_TYR_FRH_Type                                 tAVL_TEMP_TYR_FRH                               = { Rte_InitValue_PpFrPdu_AVL_TEMP_TYR_AVL_TEMP_TYR_FRH };
Rte_DE_Rdci_AVL_TEMP_TYR_RLH_Type                                 tAVL_TEMP_TYR_RLH                               = { Rte_InitValue_PpFrPdu_AVL_TEMP_TYR_AVL_TEMP_TYR_RLH };
Rte_DE_Rdci_AVL_TEMP_TYR_RRH_Type                                 tAVL_TEMP_TYR_RRH                               = { Rte_InitValue_PpFrPdu_AVL_TEMP_TYR_AVL_TEMP_TYR_RRH };
Rte_DE_Rdci_AA_BAX_TYP_TYR_Type                                   tAA_BAX_TYP_TYR                                 = { Rte_InitValue_PpFrPdu_BAX_TYP_TYR_AA_BAX_TYP_TYR };
Rte_DE_Rdci_AG_BAX_TYP_TYR_Type                                   tAG_BAX_TYP_TYR                                 = { Rte_InitValue_PpFrPdu_BAX_TYP_TYR_AG_BAX_TYP_TYR };
Rte_DE_Rdci_BAX_TYP_TYR_ID2_Type                                  tBAX_TYP_TYR_ID2                                = { Rte_InitValue_PpFrPdu_BAX_TYP_TYR_BAX_TYP_TYR_ID2 };
Rte_DE_Rdci_CAC_BAX_TYP_TYR_Type                                  tCAC_BAX_TYP_TYR                                = { Rte_InitValue_PpFrPdu_BAX_TYP_TYR_CAC_BAX_TYP_TYR };
Rte_DE_Rdci_IDX_LCC_BAX_TYP_TYR_Type                              tIDX_LCC_BAX_TYP_TYR                            = { Rte_InitValue_PpFrPdu_BAX_TYP_TYR_IDX_LCC_BAX_TYP_TYR };
Rte_DE_Rdci_IDX_V_BAX_TYP_TYR_Type                                tIDX_V_BAX_TYP_TYR                              = { Rte_InitValue_PpFrPdu_BAX_TYP_TYR_IDX_V_BAX_TYP_TYR };
Rte_DE_Rdci_LOR_BAX_TYP_TYR_Type                                  tLOR_BAX_TYP_TYR                                = { Rte_InitValue_PpFrPdu_BAX_TYP_TYR_LOR_BAX_TYP_TYR };
Rte_DE_Rdci_RAD_BAX_TYP_TYR_Type                                  tRAD_BAX_TYP_TYR                                = { Rte_InitValue_PpFrPdu_BAX_TYP_TYR_RAD_BAX_TYP_TYR };
Rte_DE_Rdci_RELA_SIDE_BAX_TYP_TYR_Type                            tRELA_SIDE_BAX_TYP_TYR                          = { Rte_InitValue_PpFrPdu_BAX_TYP_TYR_RELA_SIDE_BAX_TYP_TYR  };
Rte_DE_Rdci_RFL_BAX_TYP_TYR_Type                                  tRFL_BAX_TYP_TYR                                = { Rte_InitValue_PpFrPdu_BAX_TYP_TYR_RFL_BAX_TYP_TYR };
Rte_DE_Rdci_SEA_BAX_TYP_TYR_Type                                  tSEA_BAX_TYP_TYR                                = { Rte_InitValue_PpFrPdu_BAX_TYP_TYR_SEA_BAX_TYP_TYR };
Rte_DE_Rdci_ST_SLCTN_BAX_TYP_TYR_Type                             tST_SLCTN_BAX_TYP_TYR                           = { Rte_InitValue_PpFrPdu_BAX_TYP_TYR_ST_SLCTN_BAX_TYP_TYR };
Rte_DE_Rdci_WID_BAX_TYP_TYR_Type                                  tWID_BAX_TYP_TYR                                = { Rte_InitValue_PpFrPdu_BAX_TYP_TYR_WID_BAX_TYP_TYR };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_0                                    = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_1_RDCI_DATA_0  };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_1                                    = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_1_RDCI_DATA_1  };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_10                                   = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_1_RDCI_DATA_10 };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_11                                   = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_1_RDCI_DATA_11 };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_12                                   = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_1_RDCI_DATA_12 };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_13                                   = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_1_RDCI_DATA_13 };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_14                                   = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_1_RDCI_DATA_14 };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_15                                   = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_1_RDCI_DATA_15 };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_2                                    = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_1_RDCI_DATA_2  };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_3                                    = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_1_RDCI_DATA_3  };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_4                                    = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_1_RDCI_DATA_4  };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_5                                    = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_1_RDCI_DATA_5  };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_6                                    = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_1_RDCI_DATA_6  };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_7                                    = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_1_RDCI_DATA_7  };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_8                                    = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_1_RDCI_DATA_8  };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_9                                    = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_1_RDCI_DATA_9  };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_16                                   = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_2_RDCI_DATA_16 };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_17                                   = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_2_RDCI_DATA_17 };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_18                                   = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_2_RDCI_DATA_18 };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_19                                   = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_2_RDCI_DATA_19 };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_20                                   = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_2_RDCI_DATA_20 };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_21                                   = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_2_RDCI_DATA_21 };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_22                                   = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_2_RDCI_DATA_22 };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_23                                   = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_2_RDCI_DATA_23 };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_24                                   = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_2_RDCI_DATA_24 };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_25                                   = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_2_RDCI_DATA_25 };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_26                                   = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_2_RDCI_DATA_26 };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_27                                   = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_2_RDCI_DATA_27 };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_28                                   = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_2_RDCI_DATA_28 };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_29                                   = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_2_RDCI_DATA_29 };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_30                                   = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_2_RDCI_DATA_30 };
Rte_DE_Rdci_DEBUG_DATA_Type                                       tRDCI_DATA_31                                   = { Rte_InitValue_PpFrPdu_FR_DBG_DSC_SUPP_2_RDCI_DATA_31 };
Rte_DE_Rdci_AA_FTAX_TYP_TYR_Type                                  tAA_FTAX_TYP_TYR                                = { Rte_InitValue_PpFrPdu_FTAX_TYP_TYR_AA_FTAX_TYP_TYR };
Rte_DE_Rdci_AG_FTAX_TYP_TYR_Type                                  tAG_FTAX_TYP_TYR                                = { Rte_InitValue_PpFrPdu_FTAX_TYP_TYR_AG_FTAX_TYP_TYR };
Rte_DE_Rdci_CAC_FTAX_TYP_TYR_Type                                 tCAC_FTAX_TYP_TYR                               = { Rte_InitValue_PpFrPdu_FTAX_TYP_TYR_CAC_FTAX_TYP_TYR };
Rte_DE_Rdci_FTAX_TYP_TYR_ID2_Type                                 tFTAX_TYP_TYR_ID2                               = { Rte_InitValue_PpFrPdu_FTAX_TYP_TYR_FTAX_TYP_TYR_ID2 };
Rte_DE_Rdci_IDX_LCC_FTAX_TYP_TYR_Type                             tIDX_LCC_FTAX_TYP_TYR                           = { Rte_InitValue_PpFrPdu_FTAX_TYP_TYR_IDX_LCC_FTAX_TYP_TYR };
Rte_DE_Rdci_IDX_V_FTAX_TYP_TYR_Type                               tIDX_V_FTAX_TYP_TYR                             = { Rte_InitValue_PpFrPdu_FTAX_TYP_TYR_IDX_V_FTAX_TYP_TYR };
Rte_DE_Rdci_LOR_FTAX_TYP_TYR_Type                                 tLOR_FTAX_TYP_TYR                               = { Rte_InitValue_PpFrPdu_FTAX_TYP_TYR_LOR_FTAX_TYP_TYR };
Rte_DE_Rdci_RAD_FTAX_TYP_TYR_Type                                 tRAD_FTAX_TYP_TYR                               = { Rte_InitValue_PpFrPdu_FTAX_TYP_TYR_RAD_FTAX_TYP_TYR };
Rte_DE_Rdci_RELA_SIDE_FTAX_TYP_TYR_Type                           tRELA_SIDE_FTAX_TYP_TYR                         = { Rte_InitValue_PpFrPdu_FTAX_TYP_TYR_RELA_SIDE_FTAX_TYP_TYR };
Rte_DE_Rdci_RFL_FTAX_TYP_TYR_Type                                 tRFL_FTAX_TYP_TYR                               = { Rte_InitValue_PpFrPdu_FTAX_TYP_TYR_RFL_FTAX_TYP_TYR };
Rte_DE_Rdci_SEA_FTAX_TYP_TYR_Type                                 tSEA_FTAX_TYP_TYR                               = { Rte_InitValue_PpFrPdu_FTAX_TYP_TYR_SEA_FTAX_TYP_TYR };
Rte_DE_Rdci_WID_FTAX_TYP_TYR_Type                                 tWID_FTAX_TYP_TYR                               = { Rte_InitValue_PpFrPdu_FTAX_TYP_TYR_WID_FTAX_TYP_TYR };
Rte_DE_Rdci_CAC_TYP_TYR_Type                                      tCAC_TYP_TYR                                    = { Rte_InitValue_PpFrPdu_OL_AVLB_TYP_TYR_CAC_TYP_TYR };
Rte_DE_Rdci_IDX_LCC_TYP_TYR_Type                                  tIDX_LCC_TYP_TYR                                = { Rte_InitValue_PpFrPdu_OL_AVLB_TYP_TYR_IDX_LCC_TYP_TYR };
Rte_DE_Rdci_IDX_V_TYP_TYR_Type                                    tIDX_V_TYP_TYR                                  = { Rte_InitValue_PpFrPdu_OL_AVLB_TYP_TYR_IDX_V_TYP_TYR };
Rte_DE_Rdci_OL_AVLB_TYP_TYR_ID2_Type                              tOL_AVLB_TYP_TYR_ID2                            = { Rte_InitValue_PpFrPdu_OL_AVLB_TYP_TYR_OL_AVLB_TYP_TYR_ID2 };
Rte_DE_Rdci_RAD_TYP_TYR_Type                                      tRAD_TYP_TYR                                    = { Rte_InitValue_PpFrPdu_OL_AVLB_TYP_TYR_RAD_TYP_TYR };
Rte_DE_Rdci_RELA_SIDE_TYP_TYR_Type                                tRELA_SIDE_TYP_TYR                              = { Rte_InitValue_PpFrPdu_OL_AVLB_TYP_TYR_RELA_SIDE_TYP_TYR };
Rte_DE_Rdci_RFL_TYP_TYR_Type                                      tRFL_TYP_TYR                                    = { Rte_InitValue_PpFrPdu_OL_AVLB_TYP_TYR_RFL_TYP_TYR };
Rte_DE_Rdci_SEA_TYP_TYR_Type                                      tSEA_TYP_TYR                                    = { Rte_InitValue_PpFrPdu_OL_AVLB_TYP_TYR_SEA_TYP_TYR };
Rte_DE_Rdci_ST_TYR_OL_ID_Type                                     tST_TYR_OL_ID                                   = { Rte_InitValue_PpFrPdu_OL_AVLB_TYP_TYR_ST_TYR_OL_ID };
Rte_DE_Rdci_WID_TYP_TYR_Type                                      tWID_TYP_TYR                                    = { Rte_InitValue_PpFrPdu_OL_AVLB_TYP_TYR_WID_TYP_TYR };
Rte_DE_Rdci_CAC_SUTR_TYP_TYR_Type                                 tCAC_SUTR_TYP_TYR                               = { Rte_InitValue_PpFrPdu_SOTR_TYP_TYR_CAC_SUTR_TYP_TYR };
Rte_DE_Rdci_IDX_LCC_SUTR_TYP_TYR_Type                             tIDX_LCC_SUTR_TYP_TYR                           = { Rte_InitValue_PpFrPdu_SOTR_TYP_TYR_IDX_LCC_SUTR_TYP_TYR };
Rte_DE_Rdci_IDX_V_SUTR_TYP_TYR_Type                               tIDX_V_SUTR_TYP_TYR                             = { Rte_InitValue_PpFrPdu_SOTR_TYP_TYR_IDX_V_SUTR_TYP_TYR };
Rte_DE_Rdci_RAD_SUTR_TYP_TYR_Type                                 tRAD_SUTR_TYP_TYR                               = { Rte_InitValue_PpFrPdu_SOTR_TYP_TYR_RAD_SUTR_TYP_TYR };
Rte_DE_Rdci_RELA_SIDE_SUTR_TYP_TYR_Type                           tRELA_SIDE_SUTR_TYP_TYR                         = { Rte_InitValue_PpFrPdu_SOTR_TYP_TYR_RELA_SIDE_SUTR_TYP_TYR };
Rte_DE_Rdci_RFL_SUTR_TYP_TYR_Type                                 tRFL_SUTR_TYP_TYR                               = { Rte_InitValue_PpFrPdu_SOTR_TYP_TYR_RFL_SUTR_TYP_TYR };
Rte_DE_Rdci_SEA_SUTR_TYP_TYR_Type                                 tSEA_SUTR_TYP_TYR                               = { Rte_InitValue_PpFrPdu_SOTR_TYP_TYR_SEA_SUTR_TYP_TYR };
Rte_DE_Rdci_SOTR_TYP_TYR_ID2_Type                                 tSOTR_TYP_TYR_ID2                               = { Rte_InitValue_PpFrPdu_SOTR_TYP_TYR_SOTR_TYP_TYR_ID2 };
Rte_DE_Rdci_WID_SUTR_TYP_TYR_Type                                 tWID_SUTR_TYP_TYR                               = { Rte_InitValue_PpFrPdu_SOTR_TYP_TYR_WID_SUTR_TYP_TYR };
Rte_DE_Rdci_L_OL_TYP_TYR_Type                                     tL_OL_TYP_TYR                                   = { Rte_InitValue_PpFrPdu_ST_TYR_2_L_OL_TYP_TYR };
Rte_DE_Rdci_QU_RDC_INIT_DISP_Type                                 tQU_RDC_INIT_DISP                               = { Rte_InitValue_PpFrPdu_ST_TYR_2_QU_RDC_INIT_DISP };
Rte_DE_Rdci_ST_MAN_SLCTN_Type                                     tST_MAN_SLCTN                                   = { Rte_InitValue_PpFrPdu_ST_TYR_2_ST_MAN_SLCTN };
Rte_DE_Rdci_ST_SLCTN_SUTR_AVLB_Type                               tST_SLCTN_SUTR_AVLB                             = { Rte_InitValue_PpFrPdu_ST_TYR_2_ST_SLCTN_SUTR_AVLB };
Rte_DE_Rdci_ST_SLCTN_TYR_Type                                     tST_SLCTN_TYR                                   = { Rte_InitValue_PpFrPdu_ST_TYR_2_ST_SLCTN_TYR };
Rte_DE_Rdci_ST_SLCTN_WITR_AVLB_Type                               tST_SLCTN_WITR_AVLB                             = { Rte_InitValue_PpFrPdu_ST_TYR_2_ST_SLCTN_WITR_AVLB };
Rte_DE_Rdci_ST_TAR_P_LOCO_TPCT_Type                               tST_TAR_P_LOCO_TPCT                             = { Rte_InitValue_PpFrPdu_ST_TYR_2_ST_TAR_P_LOCO_TPCT };
Rte_DE_Rdci_ST_TYR_SEA_TPCT_Type                                  tST_TYR_SEA_TPCT                                = { Rte_InitValue_PpFrPdu_ST_TYR_2_ST_TYR_SEA_TPCT };
Rte_DE_Rdci_OP_IDR_MSGC_Type                                      tOP_IDR_MSGC                                    = { Rte_InitValue_PpFrPdu_ST_TYR_2_OP_IDR_MSGC };
Rte_DE_Rdci_StatusWheelTypeChangeDetection_Type                   tStatusWheelTypeChangeDetection                 = { Rte_InitValue_PpFrPdu_StatusWheelTypeChange_StatusWheelTypeChangeDetection };
Rte_DE_Rdci_StatusWheelTypeChangePosition_Type                    tStatusWheelTypeChangePosition                  = { Rte_InitValue_PpFrPdu_StatusWheelTypeChange_StatusWheelTypeChangePosition };
Rte_DE_Rdci_TAR_P_TYR_FLH_Type                                    tTAR_P_TYR_FLH                                  = { Rte_InitValue_PpFrPdu_TAR_P_TYR_TAR_P_TYR_FLH };
Rte_DE_Rdci_TAR_P_TYR_FRH_Type                                    tTAR_P_TYR_FRH                                  = { Rte_InitValue_PpFrPdu_TAR_P_TYR_TAR_P_TYR_FRH };
Rte_DE_Rdci_TAR_P_TYR_RLH_Type                                    tTAR_P_TYR_RLH                                  = { Rte_InitValue_PpFrPdu_TAR_P_TYR_TAR_P_TYR_RLH };
Rte_DE_Rdci_TAR_P_TYR_RRH_Type                                    tTAR_P_TYR_RRH                                  = { Rte_InitValue_PpFrPdu_TAR_P_TYR_TAR_P_TYR_RRH };
Rte_DE_Rdci_TpmsInternalLastBatteryStatusId1_Type                 tTpmsInternalLastBatteryStatusId1               = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastBatteryStatusId1 };
Rte_DE_Rdci_TpmsInternalLastBatteryStatusId2_Type                 tTpmsInternalLastBatteryStatusId2               = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastBatteryStatusId2 };
Rte_DE_Rdci_TpmsInternalLastBatteryStatusId3_Type                 tTpmsInternalLastBatteryStatusId3               = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastBatteryStatusId3 };
Rte_DE_Rdci_TpmsInternalLastBatteryStatusId4_Type                 tTpmsInternalLastBatteryStatusId4               = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastBatteryStatusId4 };
Rte_DE_Rdci_TpmsInternalLastPositionId1_Type                      tTpmsInternalLastPositionId1                    = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastPositionId1 };
Rte_DE_Rdci_TpmsInternalLastPositionId2_Type                      tTpmsInternalLastPositionId2                    = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastPositionId2 };
Rte_DE_Rdci_TpmsInternalLastPositionId3_Type                      tTpmsInternalLastPositionId3                    = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastPositionId3 };
Rte_DE_Rdci_TpmsInternalLastPositionId4_Type                      tTpmsInternalLastPositionId4                    = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastPositionId4 };
Rte_DE_Rdci_TpmsInternalLastPressureMbarId1_Type                  tTpmsInternalLastPressureMbarId1                = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastPressureMbarId1 };
Rte_DE_Rdci_TpmsInternalLastPressureMbarId2_Type                  tTpmsInternalLastPressureMbarId2                = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastPressureMbarId2 };
Rte_DE_Rdci_TpmsInternalLastPressureMbarId3_Type                  tTpmsInternalLastPressureMbarId3                = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastPressureMbarId3 };
Rte_DE_Rdci_TpmsInternalLastPressureMbarId4_Type                  tTpmsInternalLastPressureMbarId4                = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastPressureMbarId4 };
Rte_DE_Rdci_TpmsInternalLastReceptionRssiId1_Type                 tTpmsInternalLastReceptionRssiId1               = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastReceptionRssiId1 };
Rte_DE_Rdci_TpmsInternalLastReceptionRssiId2_Type                 tTpmsInternalLastReceptionRssiId2               = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastReceptionRssiId2 };
Rte_DE_Rdci_TpmsInternalLastReceptionRssiId3_Type                 tTpmsInternalLastReceptionRssiId3               = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastReceptionRssiId3 };
Rte_DE_Rdci_TpmsInternalLastReceptionRssiId4_Type                 tTpmsInternalLastReceptionRssiId4               = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastReceptionRssiId4 };
Rte_DE_Rdci_TpmsInternalLastReceptionYieldId1_Type                tTpmsInternalLastReceptionYieldId1              = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastReceptionYieldId1 };
Rte_DE_Rdci_TpmsInternalLastReceptionYieldId2_Type                tTpmsInternalLastReceptionYieldId2              = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastReceptionYieldId2 };
Rte_DE_Rdci_TpmsInternalLastReceptionYieldId3_Type                tTpmsInternalLastReceptionYieldId3              = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastReceptionYieldId3 };
Rte_DE_Rdci_TpmsInternalLastReceptionYieldId4_Type                tTpmsInternalLastReceptionYieldId4              = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastReceptionYieldId4 };
Rte_DE_Rdci_TpmsInternalLastSensorSerNoId1_Type                   tTpmsInternalLastSensorSerNoId1                 = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastSensorSerNoId1 };
Rte_DE_Rdci_TpmsInternalLastSensorSerNoId2_Type                   tTpmsInternalLastSensorSerNoId2                 = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastSensorSerNoId2 };
Rte_DE_Rdci_TpmsInternalLastSensorSerNoId3_Type                   tTpmsInternalLastSensorSerNoId3                 = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastSensorSerNoId3 };
Rte_DE_Rdci_TpmsInternalLastSensorSerNoId4_Type                   tTpmsInternalLastSensorSerNoId4                 = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastSensorSerNoId4 };
Rte_DE_Rdci_TpmsInternalLastTargetPressureMbarId1_Type            tTpmsInternalLastTargetPressureMbarId1          = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastTargetPressureMbarId1 };
Rte_DE_Rdci_TpmsInternalLastTargetPressureMbarId2_Type            tTpmsInternalLastTargetPressureMbarId2          = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastTargetPressureMbarId2 };
Rte_DE_Rdci_TpmsInternalLastTargetPressureMbarId3_Type            tTpmsInternalLastTargetPressureMbarId3          = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastTargetPressureMbarId3 };
Rte_DE_Rdci_TpmsInternalLastTargetPressureMbarId4_Type            tTpmsInternalLastTargetPressureMbarId4          = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastTargetPressureMbarId4 };
Rte_DE_Rdci_TpmsInternalLastTemperatureDegCId1_Type               tTpmsInternalLastTemperatureDegCId1             = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastTemperatureDegCId1 };
Rte_DE_Rdci_TpmsInternalLastTemperatureDegCId2_Type               tTpmsInternalLastTemperatureDegCId2             = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastTemperatureDegCId2 };
Rte_DE_Rdci_TpmsInternalLastTemperatureDegCId3_Type               tTpmsInternalLastTemperatureDegCId3             = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastTemperatureDegCId3 };
Rte_DE_Rdci_TpmsInternalLastTemperatureDegCId4_Type               tTpmsInternalLastTemperatureDegCId4             = { Rte_InitValue_PpFrPdu_TPMSInternalLastValues_TpmsInternalLastTemperatureDegCId4 };
Rte_DE_Rdci_TireMileageInventoryNoId1_Type                        tTireMileageInventoryNoId1                      = { Rte_InitValue_PpFrPdu_TireMileageDataPart1_TireMileageInventoryNoId1 };
Rte_DE_Rdci_TireMileageInventoryNoId2_Type                        tTireMileageInventoryNoId2                      = { Rte_InitValue_PpFrPdu_TireMileageDataPart1_TireMileageInventoryNoId2 };
Rte_DE_Rdci_TireMileageInventoryNoId3_Type                        tTireMileageInventoryNoId3                      = { Rte_InitValue_PpFrPdu_TireMileageDataPart2_TireMileageInventoryNoId3 };
Rte_DE_Rdci_TireMileageInventoryNoId4_Type                        tTireMileageInventoryNoId4                      = { Rte_InitValue_PpFrPdu_TireMileageDataPart2_TireMileageInventoryNoId4 };
Rte_DE_Rdci_TireMileageLastAssemblyDateId1_Type                   tTireMileageLastAssemblyDateId1                 = { Rte_InitValue_PpFrPdu_TireMileageDataPart1_TireMileageLastAssemblyDateId1 };
Rte_DE_Rdci_TireMileageLastAssemblyDateId2_Type                   tTireMileageLastAssemblyDateId2                 = { Rte_InitValue_PpFrPdu_TireMileageDataPart1_TireMileageLastAssemblyDateId2 };
Rte_DE_Rdci_TireMileageLastAssemblyDateId3_Type                   tTireMileageLastAssemblyDateId3                 = { Rte_InitValue_PpFrPdu_TireMileageDataPart2_TireMileageLastAssemblyDateId3 };
Rte_DE_Rdci_TireMileageLastAssemblyDateId4_Type                   tTireMileageLastAssemblyDateId4                 = { Rte_InitValue_PpFrPdu_TireMileageDataPart2_TireMileageLastAssemblyDateId4 };
Rte_DE_Rdci_TireMileageLastAssemblyVehicleMileageId1_Type         tTireMileageLastAssemblyVehicleMileageId1       = { Rte_InitValue_PpFrPdu_TireMileageDataPart1_TireMileageLastAssemblyVehicleMileageId1 };
Rte_DE_Rdci_TireMileageLastAssemblyVehicleMileageId2_Type         tTireMileageLastAssemblyVehicleMileageId2       = { Rte_InitValue_PpFrPdu_TireMileageDataPart1_TireMileageLastAssemblyVehicleMileageId2 };
Rte_DE_Rdci_TireMileageLastAssemblyVehicleMileageId3_Type         tTireMileageLastAssemblyVehicleMileageId3       = { Rte_InitValue_PpFrPdu_TireMileageDataPart2_TireMileageLastAssemblyVehicleMileageId3 };
Rte_DE_Rdci_TireMileageLastAssemblyVehicleMileageId4_Type         tTireMileageLastAssemblyVehicleMileageId4       = { Rte_InitValue_PpFrPdu_TireMileageDataPart2_TireMileageLastAssemblyVehicleMileageId4 };
Rte_DE_Rdci_TireMileageLastDisassemblyDateId1_Type                tTireMileageLastDisassemblyDateId1              = { Rte_InitValue_PpFrPdu_TireMileageDataPart1_TireMileageLastDisassemblyDateId1 };
Rte_DE_Rdci_TireMileageLastDisassemblyDateId2_Type                tTireMileageLastDisassemblyDateId2              = { Rte_InitValue_PpFrPdu_TireMileageDataPart1_TireMileageLastDisassemblyDateId2 };
Rte_DE_Rdci_TireMileageLastDisassemblyDateId3_Type                tTireMileageLastDisassemblyDateId3              = { Rte_InitValue_PpFrPdu_TireMileageDataPart2_TireMileageLastDisassemblyDateId3 };
Rte_DE_Rdci_TireMileageLastDisassemblyDateId4_Type                tTireMileageLastDisassemblyDateId4              = { Rte_InitValue_PpFrPdu_TireMileageDataPart2_TireMileageLastDisassemblyDateId4 };
Rte_DE_Rdci_TireMileageLastDisassemblyVehicleMileageId1_Type      tTireMileageLastDisassemblyVehicleMileageId1    = { Rte_InitValue_PpFrPdu_TireMileageDataPart1_TireMileageLastDisassemblyVehicleMileageId1 };
Rte_DE_Rdci_TireMileageLastDisassemblyVehicleMileageId2_Type      tTireMileageLastDisassemblyVehicleMileageId2    = { Rte_InitValue_PpFrPdu_TireMileageDataPart1_TireMileageLastDisassemblyVehicleMileageId2 };
Rte_DE_Rdci_TireMileageLastDisassemblyVehicleMileageId3_Type      tTireMileageLastDisassemblyVehicleMileageId3    = { Rte_InitValue_PpFrPdu_TireMileageDataPart2_TireMileageLastDisassemblyVehicleMileageId3 };
Rte_DE_Rdci_TireMileageLastDisassemblyVehicleMileageId4_Type      tTireMileageLastDisassemblyVehicleMileageId4    = { Rte_InitValue_PpFrPdu_TireMileageDataPart2_TireMileageLastDisassemblyVehicleMileageId4 };
Rte_DE_Rdci_TireMileagePositionId1_Type                           tTireMileagePositionId1                         = { Rte_InitValue_PpFrPdu_TireMileageDataPart1_TireMileagePositionId1 };
Rte_DE_Rdci_TireMileagePositionId2_Type                           tTireMileagePositionId2                         = { Rte_InitValue_PpFrPdu_TireMileageDataPart1_TireMileagePositionId2 };
Rte_DE_Rdci_TireMileagePositionId3_Type                           tTireMileagePositionId3                         = { Rte_InitValue_PpFrPdu_TireMileageDataPart2_TireMileagePositionId3 };
Rte_DE_Rdci_TireMileagePositionId4_Type                           tTireMileagePositionId4                         = { Rte_InitValue_PpFrPdu_TireMileageDataPart2_TireMileagePositionId4 };
Rte_DE_Rdci_TireMileageTotalTireMileageOnVehicleId1_Type          tTireMileageTotalTireMileageOnVehicleId1        = { Rte_InitValue_PpFrPdu_TireMileageDataPart1_TireMileageTotalTireMileageOnVehicleId1 };
Rte_DE_Rdci_TireMileageTotalTireMileageOnVehicleId2_Type          tTireMileageTotalTireMileageOnVehicleId2        = { Rte_InitValue_PpFrPdu_TireMileageDataPart1_TireMileageTotalTireMileageOnVehicleId2 };
Rte_DE_Rdci_TireMileageTotalTireMileageOnVehicleId3_Type          tTireMileageTotalTireMileageOnVehicleId3        = { Rte_InitValue_PpFrPdu_TireMileageDataPart2_TireMileageTotalTireMileageOnVehicleId3 };
Rte_DE_Rdci_TireMileageTotalTireMileageOnVehicleId4_Type          tTireMileageTotalTireMileageOnVehicleId4        = { Rte_InitValue_PpFrPdu_TireMileageDataPart2_TireMileageTotalTireMileageOnVehicleId4 };
Rte_DE_Rdci_TpmsCalibrationActualTirePressureId1_Type             tTpmsCalibrationActualTirePressureId1           = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationActualTirePressureId1 };
Rte_DE_Rdci_TpmsCalibrationActualTirePressureId2_Type             tTpmsCalibrationActualTirePressureId2           = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationActualTirePressureId2 };
Rte_DE_Rdci_TpmsCalibrationActualTirePressureId3_Type             tTpmsCalibrationActualTirePressureId3           = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationActualTirePressureId3 };
Rte_DE_Rdci_TpmsCalibrationActualTirePressureId4_Type             tTpmsCalibrationActualTirePressureId4           = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationActualTirePressureId4 };
Rte_DE_Rdci_TpmsCalibrationActualTireTemperatureId1_Type          tTpmsCalibrationActualTireTemperatureId1        = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationActualTireTemperatureId1 };
Rte_DE_Rdci_TpmsCalibrationActualTireTemperatureId2_Type          tTpmsCalibrationActualTireTemperatureId2        = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationActualTireTemperatureId2 };
Rte_DE_Rdci_TpmsCalibrationActualTireTemperatureId3_Type          tTpmsCalibrationActualTireTemperatureId3        = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationActualTireTemperatureId3 };
Rte_DE_Rdci_TpmsCalibrationActualTireTemperatureId4_Type          tTpmsCalibrationActualTireTemperatureId4        = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationActualTireTemperatureId4 };
Rte_DE_Rdci_TpmsCalibrationAmbientPressure_Type                   tTpmsCalibrationAmbientPressure                 = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationAmbientPressure };
Rte_DE_Rdci_TpmsCalibrationAmbientTemperature_Type                tTpmsCalibrationAmbientTemperature              = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationAmbientTemperature };
Rte_DE_Rdci_TpmsCalibrationCalibrationType_Type                   tTpmsCalibrationCalibrationType                 = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationCalibrationType };
Rte_DE_Rdci_TpmsCalibrationDate_Type                              tTpmsCalibrationDate                            = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationDate };
Rte_DE_Rdci_TpmsCalibrationMileage_Type                           tTpmsCalibrationMileage                         = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationMileage };
Rte_DE_Rdci_TpmsCalibrationNoOfCalibrations_Type                  tTpmsCalibrationNoOfCalibrations                = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationNoOfCalibrations };
Rte_DE_Rdci_TpmsCalibrationPlausibility_Type                      tTpmsCalibrationPlausibility                    = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationPlausibility };
Rte_DE_Rdci_TpmsCalibrationPositionId1_Type                       tTpmsCalibrationPositionId1                     = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationPositionId1 };
Rte_DE_Rdci_TpmsCalibrationPositionId2_Type                       tTpmsCalibrationPositionId2                     = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationPositionId2 };
Rte_DE_Rdci_TpmsCalibrationPositionId3_Type                       tTpmsCalibrationPositionId3                     = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationPositionId3 };
Rte_DE_Rdci_TpmsCalibrationPositionId4_Type                       tTpmsCalibrationPositionId4                     = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationPositionId4 };
Rte_DE_Rdci_TpmsCalibrationTime_Type                              tTpmsCalibrationTime                            = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationTime };
Rte_DE_Rdci_TpmsCalibrationTireTargetPressureId1_Type             tTpmsCalibrationTireTargetPressureId1           = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationTireTargetPressureId1 };
Rte_DE_Rdci_TpmsCalibrationTireTargetPressureId2_Type             tTpmsCalibrationTireTargetPressureId2           = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationTireTargetPressureId2 };
Rte_DE_Rdci_TpmsCalibrationTireTargetPressureId3_Type             tTpmsCalibrationTireTargetPressureId3           = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationTireTargetPressureId3 };
Rte_DE_Rdci_TpmsCalibrationTireTargetPressureId4_Type             tTpmsCalibrationTireTargetPressureId4           = { Rte_InitValue_PpFrPdu_TpmsCalibrationData_TpmsCalibrationTireTargetPressureId4 };
Rte_DE_Rdci_TpmsErfsActTireDimSummerCarcass_Type                  tTpmsErfsActTireDimSummerCarcass                = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimSummerCarcass                };
Rte_DE_Rdci_TpmsErfsActTireDimSummerCrossSection_Type             tTpmsErfsActTireDimSummerCrossSection           = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimSummerCrossSection           };
Rte_DE_Rdci_TpmsErfsActTireDimSummerDiameter_Type                 tTpmsErfsActTireDimSummerDiameter               = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimSummerDiameter               };
Rte_DE_Rdci_TpmsErfsActTireDimSummerLoadIndex_Type                tTpmsErfsActTireDimSummerLoadIndex              = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimSummerLoadIndex              };
Rte_DE_Rdci_TpmsErfsActTireDimSummerMounted_Type                  tTpmsErfsActTireDimSummerMounted                = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimSummerMounted                };
Rte_DE_Rdci_TpmsErfsActTireDimSummerMountedInFactory_Type         tTpmsErfsActTireDimSummerMountedInFactory       = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimSummerMountedInFactory       };
Rte_DE_Rdci_TpmsErfsActTireDimSummerPosition_Type                 tTpmsErfsActTireDimSummerPosition               = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimSummerPosition               };
Rte_DE_Rdci_TpmsErfsActTireDimSummerRunflat_Type                  tTpmsErfsActTireDimSummerRunflat                = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimSummerRunflat                };
Rte_DE_Rdci_TpmsErfsActTireDimSummerSeason_Type                   tTpmsErfsActTireDimSummerSeason                 = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimSummerSeason                 };
Rte_DE_Rdci_TpmsErfsActTireDimSummerSpeedIndex_Type               tTpmsErfsActTireDimSummerSpeedIndex             = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimSummerSpeedIndex             };
Rte_DE_Rdci_TpmsErfsActTireDimSummerTargetPressureFaGroup0_Type   tTpmsErfsActTireDimSummerTargetPressureFaGroup0 = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimSummerTargetPressureFaGroup0 };
Rte_DE_Rdci_TpmsErfsActTireDimSummerTargetPressureFaGroup1_Type   tTpmsErfsActTireDimSummerTargetPressureFaGroup1 = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimSummerTargetPressureFaGroup1 };
Rte_DE_Rdci_TpmsErfsActTireDimSummerTargetPressureFaGroup2_Type   tTpmsErfsActTireDimSummerTargetPressureFaGroup2 = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimSummerTargetPressureFaGroup2 };
Rte_DE_Rdci_TpmsErfsActTireDimSummerTargetPressureRaGroup0_Type   tTpmsErfsActTireDimSummerTargetPressureRaGroup0 = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimSummerTargetPressureRaGroup0 };
Rte_DE_Rdci_TpmsErfsActTireDimSummerTargetPressureRaGroup1_Type   tTpmsErfsActTireDimSummerTargetPressureRaGroup1 = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimSummerTargetPressureRaGroup1 };
Rte_DE_Rdci_TpmsErfsActTireDimSummerTargetPressureRaGroup2_Type   tTpmsErfsActTireDimSummerTargetPressureRaGroup2 = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimSummerTargetPressureRaGroup2 };
Rte_DE_Rdci_TpmsErfsActTireDimSummerWidth_Type                    tTpmsErfsActTireDimSummerWidth                  = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimSummerWidth                  };
Rte_DE_Rdci_TpmsErfsActTireDimWinterCarcass_Type                  tTpmsErfsActTireDimWinterCarcass                = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimWinterCarcass                };
Rte_DE_Rdci_TpmsErfsActTireDimWinterCrossSection_Type             tTpmsErfsActTireDimWinterCrossSection           = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimWinterCrossSection           };
Rte_DE_Rdci_TpmsErfsActTireDimWinterDiameter_Type                 tTpmsErfsActTireDimWinterDiameter               = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimWinterDiameter               };
Rte_DE_Rdci_TpmsErfsActTireDimWinterLoadIndex_Type                tTpmsErfsActTireDimWinterLoadIndex              = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimWinterLoadIndex              };
Rte_DE_Rdci_TpmsErfsActTireDimWinterMounted_Type                  tTpmsErfsActTireDimWinterMounted                = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimWinterMounted                };
Rte_DE_Rdci_TpmsErfsActTireDimWinterMountedInFactory_Type         tTpmsErfsActTireDimWinterMountedInFactory       = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimWinterMountedInFactory       };
Rte_DE_Rdci_TpmsErfsActTireDimWinterPosition_Type                 tTpmsErfsActTireDimWinterPosition               = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimWinterPosition               };
Rte_DE_Rdci_TpmsErfsActTireDimWinterRunflat_Type                  tTpmsErfsActTireDimWinterRunflat                = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimWinterRunflat                };
Rte_DE_Rdci_TpmsErfsActTireDimWinterSeason_Type                   tTpmsErfsActTireDimWinterSeason                 = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimWinterSeason                 };
Rte_DE_Rdci_TpmsErfsActTireDimWinterSpeedIndex_Type               tTpmsErfsActTireDimWinterSpeedIndex             = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimWinterSpeedIndex             };
Rte_DE_Rdci_TpmsErfsActTireDimWinterTargetPressureFaGroup0_Type   tTpmsErfsActTireDimWinterTargetPressureFaGroup0 = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimWinterTargetPressureFaGroup0 };
Rte_DE_Rdci_TpmsErfsActTireDimWinterTargetPressureFaGroup1_Type   tTpmsErfsActTireDimWinterTargetPressureFaGroup1 = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimWinterTargetPressureFaGroup1 };
Rte_DE_Rdci_TpmsErfsActTireDimWinterTargetPressureFaGroup2_Type   tTpmsErfsActTireDimWinterTargetPressureFaGroup2 = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimWinterTargetPressureFaGroup2 };
Rte_DE_Rdci_TpmsErfsActTireDimWinterTargetPressureRaGroup0_Type   tTpmsErfsActTireDimWinterTargetPressureRaGroup0 = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimWinterTargetPressureRaGroup0 };
Rte_DE_Rdci_TpmsErfsActTireDimWinterTargetPressureRaGroup1_Type   tTpmsErfsActTireDimWinterTargetPressureRaGroup1 = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimWinterTargetPressureRaGroup1 };
Rte_DE_Rdci_TpmsErfsActTireDimWinterTargetPressureRaGroup2_Type   tTpmsErfsActTireDimWinterTargetPressureRaGroup2 = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimWinterTargetPressureRaGroup2 };
Rte_DE_Rdci_TpmsErfsActTireDimWinterWidth_Type                    tTpmsErfsActTireDimWinterWidth                  = { Rte_InitValue_PpFrPdu_TpmsErfsActualTireData_TpmsErfsActTireDimWinterWidth                  };
Rte_DE_Rdci_ExtParkSupConfig_Type                                 tExtParkSupConfig                               = { Rte_InitValue_PpFrPdu_TyreParkSupervision_ExtParkSupConfig };
Rte_DE_Rdci_LastReceivedAmbientPressure_Type                      tLastReceivedAmbientPressure                    = { Rte_InitValue_PpFrPdu_TyreParkSupervision_LastReceivedAmbientPressure };
Rte_DE_Rdci_MobilityLossThresholdValue_Type                       tMobilityLossThresholdValue                     = { Rte_InitValue_PpFrPdu_TyreParkSupervision_MobilityLossThresholdValue };
Rte_DE_Rdci_NotificationThresholdValueC_Type                      tNotificationThresholdValueC                    = { Rte_InitValue_PpFrPdu_TyreParkSupervision_NotificationThresholdValueC };
Rte_DE_Rdci_NotificationThresholdValueNc_Type                     tNotificationThresholdValueNc                   = { Rte_InitValue_PpFrPdu_TyreParkSupervision_NotificationThresholdValueNc };
Rte_DE_Rdci_PwfChange_Type                                        tPwfChange                                      = { Rte_InitValue_PpFrPdu_TyreParkSupervision_PwfChange };
Rte_DE_Rdci_RDCSystemReferenceTemp_Type                           tRDCSystemReferenceTemp                         = { Rte_InitValue_PpFrPdu_TyreParkSupervision_RDCSystemReferenceTemp };
Rte_DE_Rdci_RelRecommendedColdInflationPressureFrontAxle_Type     tRelRecommendedColdInflationPressureFrontAxle   = { Rte_InitValue_PpFrPdu_TyreParkSupervision_RelRecommendedColdInflationPressureFrontAxle };
Rte_DE_Rdci_RelRecommendedColdInflationPressureRearAxle_Type      tRelRecommendedColdInflationPressureRearAxle    = { Rte_InitValue_PpFrPdu_TyreParkSupervision_RelRecommendedColdInflationPressureRearAxle };
Rte_DE_Rdci_TolNoTempComp_Type                                    tTolNoTempComp                                  = { Rte_InitValue_PpFrPdu_TyreParkSupervision_TolNoTempComp };
Rte_DE_Rdci_TolTempComp_Type                                      tTolTempComp                                    = { Rte_InitValue_PpFrPdu_TyreParkSupervision_TolTempComp };
Rte_DE_Rdci_WarningThresholdValueC_Type                           tWarningThresholdValueC                         = { Rte_InitValue_PpFrPdu_TyreParkSupervision_WarningThresholdValueC };
Rte_DE_Rdci_WarningThresholdValueNc_Type                          tWarningThresholdValueNc                        = { Rte_InitValue_PpFrPdu_TyreParkSupervision_WarningThresholdValueNc };
Rte_DE_Rdci_CAC_WITR_TYP_TYR_Type                                 tCAC_WITR_TYP_TYR                               = { Rte_InitValue_PpFrPdu_WITR_TYP_TYR_CAC_WITR_TYP_TYR };
Rte_DE_Rdci_IDX_LCC_WITR_TYP_TYR_Type                             tIDX_LCC_WITR_TYP_TYR                           = { Rte_InitValue_PpFrPdu_WITR_TYP_TYR_IDX_LCC_WITR_TYP_TYR };
Rte_DE_Rdci_IDX_V_WITR_TYP_TYR_Type                               tIDX_V_WITR_TYP_TYR                             = { Rte_InitValue_PpFrPdu_WITR_TYP_TYR_IDX_V_WITR_TYP_TYR };
Rte_DE_Rdci_RAD_WITR_TYP_TYR_Type                                 tRAD_WITR_TYP_TYR                               = { Rte_InitValue_PpFrPdu_WITR_TYP_TYR_RAD_WITR_TYP_TYR };
Rte_DE_Rdci_RELA_SIDE_WITR_TYP_TYR_Type                           tRELA_SIDE_WITR_TYP_TYR                         = { Rte_InitValue_PpFrPdu_WITR_TYP_TYR_RELA_SIDE_WITR_TYP_TYR };
Rte_DE_Rdci_RFL_WITR_TYP_TYR_Type                                 tRFL_WITR_TYP_TYR                               = { Rte_InitValue_PpFrPdu_WITR_TYP_TYR_RFL_WITR_TYP_TYR };
Rte_DE_Rdci_SEA_WITR_TYP_TYR_Type                                 tSEA_WITR_TYP_TYR                               = { Rte_InitValue_PpFrPdu_WITR_TYP_TYR_SEA_WITR_TYP_TYR };
Rte_DE_Rdci_WID_WITR_TYP_TYR_Type                                 tWID_WITR_TYP_TYR                               = { Rte_InitValue_PpFrPdu_WITR_TYP_TYR_WID_WITR_TYP_TYR };
Rte_DE_Rdci_WITR_TYP_TYR_ID2_Type                                 tWITR_TYP_TYR_ID2                               = { Rte_InitValue_PpFrPdu_WITR_TYP_TYR_WITR_TYP_TYR_ID2 };
Rte_DE_Rdci_CNTR_FBD_TPMS_1_ID2_Type                              tCNTR_FBD_TPMS_1_ID2                            = { Rte_InitValue_PpFrPdu_CNTR_FBD_TPMS_1_CNTR_FBD_TPMS_1_ID2 };
Rte_DE_Rdci_CTR_FIL_ACTV_1_Type                                   tCTR_FIL_ACTV_1                                 = { Rte_InitValue_PpFrPdu_CNTR_FBD_TPMS_1_CTR_FIL_ACTV_1 };
Rte_DE_Rdci_CTR_SUPP_ID_1_Type                                    tCTR_SUPP_ID_1                                  = { Rte_InitValue_PpFrPdu_CNTR_FBD_TPMS_1_CTR_SUPP_ID_1 };
Rte_DE_Rdci_CTR_TYR_ID_1_Type                                     tCTR_TYR_ID_1                                   = { Rte_InitValue_PpFrPdu_CNTR_FBD_TPMS_1_CTR_TYR_ID_1 };
Rte_DE_Rdci_CNTR_FBD_TPMS_2_ID2_Type                              tCNTR_FBD_TPMS_2_ID2                            = { Rte_InitValue_PpFrPdu_CNTR_FBD_TPMS_2_CNTR_FBD_TPMS_2_ID2 };
Rte_DE_Rdci_CTR_FIL_ACTV_2_Type                                   tCTR_FIL_ACTV_2                                 = { Rte_InitValue_PpFrPdu_CNTR_FBD_TPMS_2_CTR_FIL_ACTV_2 };
Rte_DE_Rdci_CTR_SUPP_ID_2_Type                                    tCTR_SUPP_ID_2                                  = { Rte_InitValue_PpFrPdu_CNTR_FBD_TPMS_2_CTR_SUPP_ID_2 };
Rte_DE_Rdci_CTR_TYR_ID_2_Type                                     tCTR_TYR_ID_2                                   = { Rte_InitValue_PpFrPdu_CNTR_FBD_TPMS_2_CTR_TYR_ID_2 };
Rte_DE_Rdci_CNTR_FBD_TPMS_3_ID2_Type                              tCNTR_FBD_TPMS_3_ID2                            = { Rte_InitValue_PpFrPdu_CNTR_FBD_TPMS_3_CNTR_FBD_TPMS_3_ID2 };
Rte_DE_Rdci_CTR_FIL_ACTV_3_Type                                   tCTR_FIL_ACTV_3                                 = { Rte_InitValue_PpFrPdu_CNTR_FBD_TPMS_3_CTR_FIL_ACTV_3 };
Rte_DE_Rdci_CTR_SUPP_ID_3_Type                                    tCTR_SUPP_ID_3                                  = { Rte_InitValue_PpFrPdu_CNTR_FBD_TPMS_3_CTR_SUPP_ID_3 };
Rte_DE_Rdci_CTR_TYR_ID_3_Type                                     tCTR_TYR_ID_3                                   = { Rte_InitValue_PpFrPdu_CNTR_FBD_TPMS_3_CTR_TYR_ID_3 };
Rte_DE_Rdci_CNTR_FBD_TPMS_4_ID2_Type                              tCNTR_FBD_TPMS_4_ID2                            = { Rte_InitValue_PpFrPdu_CNTR_FBD_TPMS_4_CNTR_FBD_TPMS_4_ID2 };
Rte_DE_Rdci_CTR_FIL_ACTV_4_Type                                   tCTR_FIL_ACTV_4                                 = { Rte_InitValue_PpFrPdu_CNTR_FBD_TPMS_4_CTR_FIL_ACTV_4 };
Rte_DE_Rdci_CTR_SUPP_ID_4_Type                                    tCTR_SUPP_ID_4                                  = { Rte_InitValue_PpFrPdu_CNTR_FBD_TPMS_4_CTR_SUPP_ID_4 };
Rte_DE_Rdci_CTR_TYR_ID_4_Type                                     tCTR_TYR_ID_4                                   = { Rte_InitValue_PpFrPdu_CNTR_FBD_TPMS_4_CTR_TYR_ID_4 };
Rte_DE_Rdci_ACTVN_PM_Type                                         tACTVN_PM                                       = { Rte_InitValue_PpFrPdu_PM_ACTVN_PM };
Rte_DE_Rdci_PM_ID2_Type                                           tPM_ID2                                         = { Rte_InitValue_PpFrPdu_PM_PM_ID2 };
Rte_DE_Rdci_RQ_PM_DT_Type                                         tRQ_PM_DT                                       = { Rte_InitValue_PpFrPdu_PM_RQ_PM_DT };
Rte_DE_Rdci_QrCodeDotNoId1_Type                                   tQrCodeDotNoId1                                 = { Rte_InitValue_PpFrPdu_QrCodeData_QrCodeDotNoId1 };
Rte_DE_Rdci_QrCodeDotNoId2_Type                                   tQrCodeDotNoId2                                 = { Rte_InitValue_PpFrPdu_QrCodeData_QrCodeDotNoId2 };
Rte_DE_Rdci_QrCodeDotNoId3_Type                                   tQrCodeDotNoId3                                 = { Rte_InitValue_PpFrPdu_QrCodeData2_QrCodeDotNoId3 };
Rte_DE_Rdci_QrCodeDotNoId4_Type                                   tQrCodeDotNoId4                                 = { Rte_InitValue_PpFrPdu_QrCodeData2_QrCodeDotNoId4 };
Rte_DE_Rdci_QrCodeDotProdDateId1_Type                             tQrCodeDotProdDateId1                           = { Rte_InitValue_PpFrPdu_QrCodeData_QrCodeDotProdDateId1 };
Rte_DE_Rdci_QrCodeDotProdDateId2_Type                             tQrCodeDotProdDateId2                           = { Rte_InitValue_PpFrPdu_QrCodeData_QrCodeDotProdDateId2 };
Rte_DE_Rdci_QrCodeDotProdDateId3_Type                             tQrCodeDotProdDateId3                           = { Rte_InitValue_PpFrPdu_QrCodeData2_QrCodeDotProdDateId3 };
Rte_DE_Rdci_QrCodeDotProdDateId4_Type                             tQrCodeDotProdDateId4                           = { Rte_InitValue_PpFrPdu_QrCodeData2_QrCodeDotProdDateId4 };
Rte_DE_Rdci_QrCodeInventoryNoId1_Type                             tQrCodeInventoryNoId1                           = { Rte_InitValue_PpFrPdu_QrCodeData_QrCodeInventoryNoId1 };
Rte_DE_Rdci_QrCodeInventoryNoId2_Type                             tQrCodeInventoryNoId2                           = { Rte_InitValue_PpFrPdu_QrCodeData_QrCodeInventoryNoId2 };
Rte_DE_Rdci_QrCodeInventoryNoId3_Type                             tQrCodeInventoryNoId3                           = { Rte_InitValue_PpFrPdu_QrCodeData2_QrCodeInventoryNoId3 };
Rte_DE_Rdci_QrCodeInventoryNoId4_Type                             tQrCodeInventoryNoId4                           = { Rte_InitValue_PpFrPdu_QrCodeData2_QrCodeInventoryNoId4 };
Rte_DE_Rdci_QrCodeMountingStateId1_Type                           tQrCodeMountingStateId1                         = { Rte_InitValue_PpFrPdu_QrCodeData_QrCodeMountingStateId1 };
Rte_DE_Rdci_QrCodeMountingStateId2_Type                           tQrCodeMountingStateId2                         = { Rte_InitValue_PpFrPdu_QrCodeData_QrCodeMountingStateId2 };
Rte_DE_Rdci_QrCodeMountingStateId3_Type                           tQrCodeMountingStateId3                         = { Rte_InitValue_PpFrPdu_QrCodeData2_QrCodeMountingStateId3 };
Rte_DE_Rdci_QrCodeMountingStateId4_Type                           tQrCodeMountingStateId4                         = { Rte_InitValue_PpFrPdu_QrCodeData2_QrCodeMountingStateId4 };
Rte_DE_Rdci_QrCodePositionId1_Type                                tQrCodePositionId1                              = { Rte_InitValue_PpFrPdu_QrCodeData_QrCodePositionId1 };
Rte_DE_Rdci_QrCodePositionId2_Type                                tQrCodePositionId2                              = { Rte_InitValue_PpFrPdu_QrCodeData_QrCodePositionId2 };
Rte_DE_Rdci_QrCodePositionId3_Type                                tQrCodePositionId3                              = { Rte_InitValue_PpFrPdu_QrCodeData2_QrCodePositionId3 };
Rte_DE_Rdci_QrCodePositionId4_Type                                tQrCodePositionId4                              = { Rte_InitValue_PpFrPdu_QrCodeData2_QrCodePositionId4 };
Rte_DE_Rdci_QrCodeRubberSerialNoPartAId1_Type                     tQrCodeRubberSerialNoPartAId1                   = { Rte_InitValue_PpFrPdu_QrCodeData_QrCodeRubberSerialNoPartAId1 };
Rte_DE_Rdci_QrCodeRubberSerialNoPartAId2_Type                     tQrCodeRubberSerialNoPartAId2                   = { Rte_InitValue_PpFrPdu_QrCodeData_QrCodeRubberSerialNoPartAId2 };
Rte_DE_Rdci_QrCodeRubberSerialNoPartAId3_Type                     tQrCodeRubberSerialNoPartAId3                   = { Rte_InitValue_PpFrPdu_QrCodeData2_QrCodeRubberSerialNoPartAId3 };
Rte_DE_Rdci_QrCodeRubberSerialNoPartAId4_Type                     tQrCodeRubberSerialNoPartAId4                   = { Rte_InitValue_PpFrPdu_QrCodeData2_QrCodeRubberSerialNoPartAId4 };
Rte_DE_Rdci_QrCodeRubberSerialNoPartBId1_Type                     tQrCodeRubberSerialNoPartBId1                   = { Rte_InitValue_PpFrPdu_QrCodeData_QrCodeRubberSerialNoPartBId1 };
Rte_DE_Rdci_QrCodeRubberSerialNoPartBId2_Type                     tQrCodeRubberSerialNoPartBId2                   = { Rte_InitValue_PpFrPdu_QrCodeData_QrCodeRubberSerialNoPartBId2 };
Rte_DE_Rdci_QrCodeRubberSerialNoPartBId3_Type                     tQrCodeRubberSerialNoPartBId3                   = { Rte_InitValue_PpFrPdu_QrCodeData2_QrCodeRubberSerialNoPartBId3 };
Rte_DE_Rdci_QrCodeRubberSerialNoPartBId4_Type                     tQrCodeRubberSerialNoPartBId4                   = { Rte_InitValue_PpFrPdu_QrCodeData2_QrCodeRubberSerialNoPartBId4 };
Rte_DE_Rdci_QrCodeTireDimensionsId1_Type                          tQrCodeTireDimensionsId1                        = { Rte_InitValue_PpFrPdu_QrCodeData_QrCodeTireDimensionsId1 };
Rte_DE_Rdci_QrCodeTireDimensionsId2_Type                          tQrCodeTireDimensionsId2                        = { Rte_InitValue_PpFrPdu_QrCodeData_QrCodeTireDimensionsId2 };
Rte_DE_Rdci_QrCodeTireDimensionsId3_Type                          tQrCodeTireDimensionsId3                        = { Rte_InitValue_PpFrPdu_QrCodeData2_QrCodeTireDimensionsId3 };
Rte_DE_Rdci_QrCodeTireDimensionsId4_Type                          tQrCodeTireDimensionsId4                        = { Rte_InitValue_PpFrPdu_QrCodeData2_QrCodeTireDimensionsId4 };
Rte_DE_Rdci_QrCodeTireTypeId1_Type                                tQrCodeTireTypeId1                              = { Rte_InitValue_PpFrPdu_QrCodeData_QrCodeTireTypeId1 };
Rte_DE_Rdci_QrCodeTireTypeId2_Type                                tQrCodeTireTypeId2                              = { Rte_InitValue_PpFrPdu_QrCodeData_QrCodeTireTypeId2 };
Rte_DE_Rdci_QrCodeTireTypeId3_Type                                tQrCodeTireTypeId3                              = { Rte_InitValue_PpFrPdu_QrCodeData2_QrCodeTireTypeId3 };
Rte_DE_Rdci_QrCodeTireTypeId4_Type                                tQrCodeTireTypeId4                              = { Rte_InitValue_PpFrPdu_QrCodeData2_QrCodeTireTypeId4 };

Rte_PimType_CtApHufTpmsSWC_NvmRdciCommonBlockType                 tNvmRdciCommonBlock_NVBlock_MirrorBlock;
Rte_PimType_CtApHufTpmsSWC_NvmRdciDiagBlock1Type                  tNvmRdciDiagBlock1_NVBlock_MirrorBlock;
Rte_PimType_CtApHufTpmsSWC_NvmRdciDiagBlock2Type                  tNvmRdciDiagBlock2_NVBlock_MirrorBlock;
Rte_PimType_CtApHufTpmsSWC_NvmRdciErfsBlockType                   tNvmRdciErfsBlock_NVBlock_MirrorBlock;
Rte_PimType_CtApHufTpmsSWC_NvmRdciErfsEcoBlockType                tNvmRdciErfsEcoBlock_NVBlock_MirrorBlock;
Rte_PimType_CtApHufTpmsSWC_NvmRdciErfsTsaBlockType                tNvmRdciErfsTsaBlock_NVBlock_MirrorBlock;
Rte_PimType_CtApHufTpmsSWC_NvmRdciRidQrBlock1Type                 tNvmRdciRidQrBlock1_NVBlock_MirrorBlock;
Rte_PimType_CtApHufTpmsSWC_NvmRdciRidQrBlock2Type                 tNvmRdciRidQrBlock2_NVBlock_MirrorBlock;
Rte_PimType_CtApHufTpmsSWC_NvmRdciWarnStatusBlockType             tNvmRdciWarnStatusBlock_NVBlock_MirrorBlock;
Rte_PimType_CtApHufTpmsSWC_NvmRdciZoHistoryBlockType              tNvmRdciZoHistoryBlock_NVBlock_MirrorBlock;
Rte_PimType_CtApHufTpmsSWC_NvmRdciZomBlock1Type                   tNvmRdciZomBlock1_NVBlock_MirrorBlock;
Rte_PimType_CtApHufTpmsSWC_NvmRdciZomBlock2Type                   tNvmRdciZomBlock2_NVBlock_MirrorBlock;

const struct Rte_CDS_CtApHufTpmsSWC tRte_CDS_CtApHufTpmsSWC = {
   &tAVL_P_TYR_FLH,
   &tAVL_P_TYR_FRH,
   &tAVL_P_TYR_RLH,
   &tAVL_P_TYR_RRH,
   &tAVL_TEMP_TYR_FLH,
   &tAVL_TEMP_TYR_FRH,
   &tAVL_TEMP_TYR_RLH,
   &tAVL_TEMP_TYR_RRH,
   &tAA_BAX_TYP_TYR,
   &tAG_BAX_TYP_TYR,
   &tBAX_TYP_TYR_ID2,
   &tCAC_BAX_TYP_TYR,
   &tIDX_LCC_BAX_TYP_TYR,
   &tIDX_V_BAX_TYP_TYR,
   &tLOR_BAX_TYP_TYR,
   &tRAD_BAX_TYP_TYR,
   &tRELA_SIDE_BAX_TYP_TYR,
   &tRFL_BAX_TYP_TYR,
   &tSEA_BAX_TYP_TYR,
   &tST_SLCTN_BAX_TYP_TYR,
   &tWID_BAX_TYP_TYR,
   &tCNTR_FBD_TPMS_1_ID2,
   &tCTR_FIL_ACTV_1,
   &tCTR_SUPP_ID_1,
   &tCTR_TYR_ID_1,
   &tCNTR_FBD_TPMS_2_ID2,
   &tCTR_FIL_ACTV_2,
   &tCTR_SUPP_ID_2,
   &tCTR_TYR_ID_2,
   &tCNTR_FBD_TPMS_3_ID2,
   &tCTR_FIL_ACTV_3,
   &tCTR_SUPP_ID_3,
   &tCTR_TYR_ID_3,
   &tCNTR_FBD_TPMS_4_ID2,
   &tCTR_FIL_ACTV_4,
   &tCTR_SUPP_ID_4,
   &tCTR_TYR_ID_4,
   &tRDCI_DATA_0 ,
   &tRDCI_DATA_1 ,
   &tRDCI_DATA_2 ,
   &tRDCI_DATA_3 ,
   &tRDCI_DATA_4 ,
   &tRDCI_DATA_5 ,
   &tRDCI_DATA_6 ,
   &tRDCI_DATA_7 ,
   &tRDCI_DATA_8 ,
   &tRDCI_DATA_9 ,
   &tRDCI_DATA_10,
   &tRDCI_DATA_11,
   &tRDCI_DATA_12,
   &tRDCI_DATA_13,
   &tRDCI_DATA_14,
   &tRDCI_DATA_15,
   &tRDCI_DATA_16,
   &tRDCI_DATA_17,
   &tRDCI_DATA_18,
   &tRDCI_DATA_19,
   &tRDCI_DATA_20,
   &tRDCI_DATA_21,
   &tRDCI_DATA_22,
   &tRDCI_DATA_23,
   &tRDCI_DATA_24,
   &tRDCI_DATA_25,
   &tRDCI_DATA_26,
   &tRDCI_DATA_27,
   &tRDCI_DATA_28,
   &tRDCI_DATA_29,
   &tRDCI_DATA_30,
   &tRDCI_DATA_31,
   &tAA_FTAX_TYP_TYR,
   &tAG_FTAX_TYP_TYR,
   &tCAC_FTAX_TYP_TYR,
   &tFTAX_TYP_TYR_ID2,
   &tIDX_LCC_FTAX_TYP_TYR,
   &tIDX_V_FTAX_TYP_TYR,
   &tLOR_FTAX_TYP_TYR,
   &tRAD_FTAX_TYP_TYR,
   &tRELA_SIDE_FTAX_TYP_TYR,
   &tRFL_FTAX_TYP_TYR,
   &tSEA_FTAX_TYP_TYR,
   &tWID_FTAX_TYP_TYR,
   &tCAC_TYP_TYR,
   &tIDX_LCC_TYP_TYR,
   &tIDX_V_TYP_TYR,
   &tOL_AVLB_TYP_TYR_ID2,
   &tRAD_TYP_TYR,
   &tRELA_SIDE_TYP_TYR,
   &tRFL_TYP_TYR,
   &tSEA_TYP_TYR,
   &tST_TYR_OL_ID,
   &tWID_TYP_TYR,
   &tACTVN_PM,
   &tPM_ID2,
   &tRQ_PM_DT,
   &tQrCodeDotNoId3,
   &tQrCodeDotNoId4,
   &tQrCodeDotProdDateId3,
   &tQrCodeDotProdDateId4,
   &tQrCodeInventoryNoId3,
   &tQrCodeInventoryNoId4,
   &tQrCodeMountingStateId3,
   &tQrCodeMountingStateId4,
   &tQrCodePositionId3,
   &tQrCodePositionId4,
   &tQrCodeRubberSerialNoPartAId3,
   &tQrCodeRubberSerialNoPartAId4,
   &tQrCodeRubberSerialNoPartBId3,
   &tQrCodeRubberSerialNoPartBId4,
   &tQrCodeTireDimensionsId3,
   &tQrCodeTireDimensionsId4,
   &tQrCodeTireTypeId3,
   &tQrCodeTireTypeId4,
   &tQrCodeDotNoId1,
   &tQrCodeDotNoId2,
   &tQrCodeDotProdDateId1,
   &tQrCodeDotProdDateId2,
   &tQrCodeInventoryNoId1,
   &tQrCodeInventoryNoId2,
   &tQrCodeMountingStateId1,
   &tQrCodeMountingStateId2,
   &tQrCodePositionId1,
   &tQrCodePositionId2,
   &tQrCodeRubberSerialNoPartAId1,
   &tQrCodeRubberSerialNoPartAId2,
   &tQrCodeRubberSerialNoPartBId1,
   &tQrCodeRubberSerialNoPartBId2,
   &tQrCodeTireDimensionsId1,
   &tQrCodeTireDimensionsId2,
   &tQrCodeTireTypeId1,
   &tQrCodeTireTypeId2,
   &tCAC_SUTR_TYP_TYR,
   &tIDX_LCC_SUTR_TYP_TYR,
   &tIDX_V_SUTR_TYP_TYR,
   &tRAD_SUTR_TYP_TYR,
   &tRELA_SIDE_SUTR_TYP_TYR,
   &tRFL_SUTR_TYP_TYR,
   &tSEA_SUTR_TYP_TYR,
   &tSOTR_TYP_TYR_ID2,
   &tWID_SUTR_TYP_TYR,
   &tL_OL_TYP_TYR,
   &tOP_IDR_MSGC,
   &tQU_RDC_INIT_DISP,
   &tST_MAN_SLCTN,
   &tST_SLCTN_SUTR_AVLB,
   &tST_SLCTN_TYR,
   &tST_SLCTN_WITR_AVLB,
   &tST_TAR_P_LOCO_TPCT,
   &tST_TYR_SEA_TPCT,
   &tStatusWheelTypeChangeDetection,
   &tStatusWheelTypeChangePosition,
   &tTAR_P_TYR_FLH,
   &tTAR_P_TYR_FRH,
   &tTAR_P_TYR_RLH,
   &tTAR_P_TYR_RRH,
   &tTpmsInternalLastBatteryStatusId1,
   &tTpmsInternalLastBatteryStatusId2,
   &tTpmsInternalLastBatteryStatusId3,
   &tTpmsInternalLastBatteryStatusId4,
   &tTpmsInternalLastPositionId1,
   &tTpmsInternalLastPositionId2,
   &tTpmsInternalLastPositionId3,
   &tTpmsInternalLastPositionId4,
   &tTpmsInternalLastPressureMbarId1,
   &tTpmsInternalLastPressureMbarId2,
   &tTpmsInternalLastPressureMbarId3,
   &tTpmsInternalLastPressureMbarId4,
   &tTpmsInternalLastReceptionRssiId1,
   &tTpmsInternalLastReceptionRssiId2,
   &tTpmsInternalLastReceptionRssiId3,
   &tTpmsInternalLastReceptionRssiId4,
   &tTpmsInternalLastReceptionYieldId1,
   &tTpmsInternalLastReceptionYieldId2,
   &tTpmsInternalLastReceptionYieldId3,
   &tTpmsInternalLastReceptionYieldId4,
   &tTpmsInternalLastSensorSerNoId1,
   &tTpmsInternalLastSensorSerNoId2,
   &tTpmsInternalLastSensorSerNoId3,
   &tTpmsInternalLastSensorSerNoId4,
   &tTpmsInternalLastTargetPressureMbarId1,
   &tTpmsInternalLastTargetPressureMbarId2,
   &tTpmsInternalLastTargetPressureMbarId3,
   &tTpmsInternalLastTargetPressureMbarId4,
   &tTpmsInternalLastTemperatureDegCId1,
   &tTpmsInternalLastTemperatureDegCId2,
   &tTpmsInternalLastTemperatureDegCId3,
   &tTpmsInternalLastTemperatureDegCId4,
   &tTireMileageInventoryNoId1,
   &tTireMileageInventoryNoId2,
   &tTireMileageLastAssemblyDateId1,
   &tTireMileageLastAssemblyDateId2,
   &tTireMileageLastAssemblyVehicleMileageId1,
   &tTireMileageLastAssemblyVehicleMileageId2,
   &tTireMileageLastDisassemblyDateId1,
   &tTireMileageLastDisassemblyDateId2,
   &tTireMileageLastDisassemblyVehicleMileageId1,
   &tTireMileageLastDisassemblyVehicleMileageId2,
   &tTireMileagePositionId1,
   &tTireMileagePositionId2,
   &tTireMileageTotalTireMileageOnVehicleId1,
   &tTireMileageTotalTireMileageOnVehicleId2,
   &tTireMileageInventoryNoId3,
   &tTireMileageInventoryNoId4,
   &tTireMileageLastAssemblyDateId3,
   &tTireMileageLastAssemblyDateId4,
   &tTireMileageLastAssemblyVehicleMileageId3,
   &tTireMileageLastAssemblyVehicleMileageId4,
   &tTireMileageLastDisassemblyDateId3,
   &tTireMileageLastDisassemblyDateId4,
   &tTireMileageLastDisassemblyVehicleMileageId3,
   &tTireMileageLastDisassemblyVehicleMileageId4,
   &tTireMileagePositionId3,
   &tTireMileagePositionId4,
   &tTireMileageTotalTireMileageOnVehicleId3,
   &tTireMileageTotalTireMileageOnVehicleId4,
   &tTpmsCalibrationActualTirePressureId1,
   &tTpmsCalibrationActualTirePressureId2,
   &tTpmsCalibrationActualTirePressureId3,
   &tTpmsCalibrationActualTirePressureId4,
   &tTpmsCalibrationActualTireTemperatureId1,
   &tTpmsCalibrationActualTireTemperatureId2,
   &tTpmsCalibrationActualTireTemperatureId3,
   &tTpmsCalibrationActualTireTemperatureId4,
   &tTpmsCalibrationAmbientPressure,
   &tTpmsCalibrationAmbientTemperature,
   &tTpmsCalibrationCalibrationType,
   &tTpmsCalibrationDate,
   &tTpmsCalibrationMileage,
   &tTpmsCalibrationNoOfCalibrations,
   &tTpmsCalibrationPlausibility,
   &tTpmsCalibrationPositionId1,
   &tTpmsCalibrationPositionId2,
   &tTpmsCalibrationPositionId3,
   &tTpmsCalibrationPositionId4,
   &tTpmsCalibrationTime,
   &tTpmsCalibrationTireTargetPressureId1,
   &tTpmsCalibrationTireTargetPressureId2,
   &tTpmsCalibrationTireTargetPressureId3,
   &tTpmsCalibrationTireTargetPressureId4,
   &tTpmsErfsActTireDimSummerCarcass,
   &tTpmsErfsActTireDimSummerCrossSection,
   &tTpmsErfsActTireDimSummerDiameter,
   &tTpmsErfsActTireDimSummerLoadIndex,
   &tTpmsErfsActTireDimSummerMounted,
   &tTpmsErfsActTireDimSummerMountedInFactory,
   &tTpmsErfsActTireDimSummerPosition,
   &tTpmsErfsActTireDimSummerRunflat,
   &tTpmsErfsActTireDimSummerSeason,
   &tTpmsErfsActTireDimSummerSpeedIndex,
   &tTpmsErfsActTireDimSummerTargetPressureFaGroup0,
   &tTpmsErfsActTireDimSummerTargetPressureFaGroup1,
   &tTpmsErfsActTireDimSummerTargetPressureFaGroup2,
   &tTpmsErfsActTireDimSummerTargetPressureRaGroup0,
   &tTpmsErfsActTireDimSummerTargetPressureRaGroup1,
   &tTpmsErfsActTireDimSummerTargetPressureRaGroup2,
   &tTpmsErfsActTireDimSummerWidth,
   &tTpmsErfsActTireDimWinterCarcass,
   &tTpmsErfsActTireDimWinterCrossSection,
   &tTpmsErfsActTireDimWinterDiameter,
   &tTpmsErfsActTireDimWinterLoadIndex,
   &tTpmsErfsActTireDimWinterMounted,
   &tTpmsErfsActTireDimWinterMountedInFactory,
   &tTpmsErfsActTireDimWinterPosition,
   &tTpmsErfsActTireDimWinterRunflat,
   &tTpmsErfsActTireDimWinterSeason,
   &tTpmsErfsActTireDimWinterSpeedIndex,
   &tTpmsErfsActTireDimWinterTargetPressureFaGroup0,
   &tTpmsErfsActTireDimWinterTargetPressureFaGroup1,
   &tTpmsErfsActTireDimWinterTargetPressureFaGroup2,
   &tTpmsErfsActTireDimWinterTargetPressureRaGroup0,
   &tTpmsErfsActTireDimWinterTargetPressureRaGroup1,
   &tTpmsErfsActTireDimWinterTargetPressureRaGroup2,
   &tTpmsErfsActTireDimWinterWidth,
   &tExtParkSupConfig,
   &tLastReceivedAmbientPressure,
   &tMobilityLossThresholdValue,
   &tNotificationThresholdValueC,
   &tNotificationThresholdValueNc,
   &tPwfChange,
   &tRDCSystemReferenceTemp,
   &tRelRecommendedColdInflationPressureFrontAxle,
   &tRelRecommendedColdInflationPressureRearAxle,
   &tTolNoTempComp,
   &tTolTempComp,
   &tWarningThresholdValueC,
   &tWarningThresholdValueNc,
   &tCAC_WITR_TYP_TYR,
   &tIDX_LCC_WITR_TYP_TYR,
   &tIDX_V_WITR_TYP_TYR,
   &tRAD_WITR_TYP_TYR,
   &tRELA_SIDE_WITR_TYP_TYR,
   &tRFL_WITR_TYP_TYR,
   &tSEA_WITR_TYP_TYR,
   &tWID_WITR_TYP_TYR,
   &tWITR_TYP_TYR_ID2,
   &tAVL_P_TYR_FLH,
   &tAVL_P_TYR_FRH,
   &tAVL_P_TYR_RLH,
   &tAVL_P_TYR_RRH,
   &tAVL_TEMP_TYR_FLH,
   &tAVL_TEMP_TYR_FRH,
   &tAVL_TEMP_TYR_RLH,
   &tAVL_TEMP_TYR_RRH,
   &tAA_BAX_TYP_TYR,
   &tAG_BAX_TYP_TYR,
   &tBAX_TYP_TYR_ID2,
   &tCAC_BAX_TYP_TYR,
   &tIDX_LCC_BAX_TYP_TYR,
   &tIDX_V_BAX_TYP_TYR,
   &tLOR_BAX_TYP_TYR,
   &tRAD_BAX_TYP_TYR,
   &tRELA_SIDE_BAX_TYP_TYR,
   &tRFL_BAX_TYP_TYR,
   &tSEA_BAX_TYP_TYR,
   &tST_SLCTN_BAX_TYP_TYR,
   &tWID_BAX_TYP_TYR,
   &tCNTR_FBD_TPMS_1_ID2,
   &tCTR_FIL_ACTV_1,
   &tCTR_SUPP_ID_1,
   &tCTR_TYR_ID_1,
   &tCNTR_FBD_TPMS_2_ID2,
   &tCTR_FIL_ACTV_2,
   &tCTR_SUPP_ID_2,
   &tCTR_TYR_ID_2,
   &tCNTR_FBD_TPMS_3_ID2,
   &tCTR_FIL_ACTV_3,
   &tCTR_SUPP_ID_3,
   &tCTR_TYR_ID_3,
   &tCNTR_FBD_TPMS_4_ID2,
   &tCTR_FIL_ACTV_4,
   &tCTR_SUPP_ID_4,
   &tCTR_TYR_ID_4,
   &tRDCI_DATA_0 ,
   &tRDCI_DATA_1 ,
   &tRDCI_DATA_2 ,
   &tRDCI_DATA_3 ,
   &tRDCI_DATA_4 ,
   &tRDCI_DATA_5 ,
   &tRDCI_DATA_6 ,
   &tRDCI_DATA_7 ,
   &tRDCI_DATA_8 ,
   &tRDCI_DATA_9 ,
   &tRDCI_DATA_10,
   &tRDCI_DATA_11,
   &tRDCI_DATA_12,
   &tRDCI_DATA_13,
   &tRDCI_DATA_14,
   &tRDCI_DATA_15,
   &tRDCI_DATA_16,
   &tRDCI_DATA_17,
   &tRDCI_DATA_18,
   &tRDCI_DATA_19,
   &tRDCI_DATA_20,
   &tRDCI_DATA_21,
   &tRDCI_DATA_22,
   &tRDCI_DATA_23,
   &tRDCI_DATA_24,
   &tRDCI_DATA_25,
   &tRDCI_DATA_26,
   &tRDCI_DATA_27,
   &tRDCI_DATA_28,
   &tRDCI_DATA_29,
   &tRDCI_DATA_30,
   &tRDCI_DATA_31,
   &tAA_FTAX_TYP_TYR,
   &tAG_FTAX_TYP_TYR,
   &tCAC_FTAX_TYP_TYR,
   &tFTAX_TYP_TYR_ID2,
   &tIDX_LCC_FTAX_TYP_TYR,
   &tIDX_V_FTAX_TYP_TYR,
   &tLOR_FTAX_TYP_TYR,
   &tRAD_FTAX_TYP_TYR,
   &tRELA_SIDE_FTAX_TYP_TYR,
   &tRFL_FTAX_TYP_TYR,
   &tSEA_FTAX_TYP_TYR,
   &tWID_FTAX_TYP_TYR,
   &tCAC_TYP_TYR,
   &tIDX_LCC_TYP_TYR,
   &tIDX_V_TYP_TYR,
   &tOL_AVLB_TYP_TYR_ID2,
   &tRAD_TYP_TYR,
   &tRELA_SIDE_TYP_TYR,
   &tRFL_TYP_TYR,
   &tSEA_TYP_TYR,
   &tST_TYR_OL_ID,
   &tWID_TYP_TYR,
   &tACTVN_PM,
   &tPM_ID2,
   &tRQ_PM_DT,
   &tQrCodeDotNoId3,
   &tQrCodeDotNoId4,
   &tQrCodeDotProdDateId3,
   &tQrCodeDotProdDateId4,
   &tQrCodeInventoryNoId3,
   &tQrCodeInventoryNoId4,
   &tQrCodeMountingStateId3,
   &tQrCodeMountingStateId4,
   &tQrCodePositionId3,
   &tQrCodePositionId4,
   &tQrCodeRubberSerialNoPartAId3,
   &tQrCodeRubberSerialNoPartAId4,
   &tQrCodeRubberSerialNoPartBId3,
   &tQrCodeRubberSerialNoPartBId4,
   &tQrCodeTireDimensionsId3,
   &tQrCodeTireDimensionsId4,
   &tQrCodeTireTypeId3,
   &tQrCodeTireTypeId4,
   &tQrCodeDotNoId1,
   &tQrCodeDotNoId2,
   &tQrCodeDotProdDateId1,
   &tQrCodeDotProdDateId2,
   &tQrCodeInventoryNoId1,
   &tQrCodeInventoryNoId2,
   &tQrCodeMountingStateId1,
   &tQrCodeMountingStateId2,
   &tQrCodePositionId1,
   &tQrCodePositionId2,
   &tQrCodeRubberSerialNoPartAId1,
   &tQrCodeRubberSerialNoPartAId2,
   &tQrCodeRubberSerialNoPartBId1,
   &tQrCodeRubberSerialNoPartBId2,
   &tQrCodeTireDimensionsId1,
   &tQrCodeTireDimensionsId2,
   &tQrCodeTireTypeId1,
   &tQrCodeTireTypeId2,
   &tCAC_SUTR_TYP_TYR,
   &tIDX_LCC_SUTR_TYP_TYR,
   &tIDX_V_SUTR_TYP_TYR,
   &tRAD_SUTR_TYP_TYR,
   &tRELA_SIDE_SUTR_TYP_TYR,
   &tRFL_SUTR_TYP_TYR,
   &tSEA_SUTR_TYP_TYR,
   &tSOTR_TYP_TYR_ID2,
   &tWID_SUTR_TYP_TYR,
   &tL_OL_TYP_TYR,
   &tOP_IDR_MSGC,
   &tQU_RDC_INIT_DISP,
   &tST_MAN_SLCTN,
   &tST_SLCTN_SUTR_AVLB,
   &tST_SLCTN_TYR,
   &tST_SLCTN_WITR_AVLB,
   &tST_TAR_P_LOCO_TPCT,
   &tST_TYR_SEA_TPCT,
   &tStatusWheelTypeChangeDetection,
   &tStatusWheelTypeChangePosition,
   &tTAR_P_TYR_FLH,
   &tTAR_P_TYR_FRH,
   &tTAR_P_TYR_RLH,
   &tTAR_P_TYR_RRH,
   &tTpmsInternalLastBatteryStatusId1,
   &tTpmsInternalLastBatteryStatusId2,
   &tTpmsInternalLastBatteryStatusId3,
   &tTpmsInternalLastBatteryStatusId4,
   &tTpmsInternalLastPositionId1,
   &tTpmsInternalLastPositionId2,
   &tTpmsInternalLastPositionId3,
   &tTpmsInternalLastPositionId4,
   &tTpmsInternalLastPressureMbarId1,
   &tTpmsInternalLastPressureMbarId2,
   &tTpmsInternalLastPressureMbarId3,
   &tTpmsInternalLastPressureMbarId4,
   &tTpmsInternalLastReceptionRssiId1,
   &tTpmsInternalLastReceptionRssiId2,
   &tTpmsInternalLastReceptionRssiId3,
   &tTpmsInternalLastReceptionRssiId4,
   &tTpmsInternalLastReceptionYieldId1,
   &tTpmsInternalLastReceptionYieldId2,
   &tTpmsInternalLastReceptionYieldId3,
   &tTpmsInternalLastReceptionYieldId4,
   &tTpmsInternalLastSensorSerNoId1,
   &tTpmsInternalLastSensorSerNoId2,
   &tTpmsInternalLastSensorSerNoId3,
   &tTpmsInternalLastSensorSerNoId4,
   &tTpmsInternalLastTargetPressureMbarId1,
   &tTpmsInternalLastTargetPressureMbarId2,
   &tTpmsInternalLastTargetPressureMbarId3,
   &tTpmsInternalLastTargetPressureMbarId4,
   &tTpmsInternalLastTemperatureDegCId1,
   &tTpmsInternalLastTemperatureDegCId2,
   &tTpmsInternalLastTemperatureDegCId3,
   &tTpmsInternalLastTemperatureDegCId4,
   &tTireMileageInventoryNoId1,
   &tTireMileageInventoryNoId2,
   &tTireMileageLastAssemblyDateId1,
   &tTireMileageLastAssemblyDateId2,
   &tTireMileageLastAssemblyVehicleMileageId1,
   &tTireMileageLastAssemblyVehicleMileageId2,
   &tTireMileageLastDisassemblyDateId1,
   &tTireMileageLastDisassemblyDateId2,
   &tTireMileageLastDisassemblyVehicleMileageId1,
   &tTireMileageLastDisassemblyVehicleMileageId2,
   &tTireMileagePositionId1,
   &tTireMileagePositionId2,
   &tTireMileageTotalTireMileageOnVehicleId1,
   &tTireMileageTotalTireMileageOnVehicleId2,
   &tTireMileageInventoryNoId3,
   &tTireMileageInventoryNoId4,
   &tTireMileageLastAssemblyDateId3,
   &tTireMileageLastAssemblyDateId4,
   &tTireMileageLastAssemblyVehicleMileageId3,
   &tTireMileageLastAssemblyVehicleMileageId4,
   &tTireMileageLastDisassemblyDateId3,
   &tTireMileageLastDisassemblyDateId4,
   &tTireMileageLastDisassemblyVehicleMileageId3,
   &tTireMileageLastDisassemblyVehicleMileageId4,
   &tTireMileagePositionId3,
   &tTireMileagePositionId4,
   &tTireMileageTotalTireMileageOnVehicleId3,
   &tTireMileageTotalTireMileageOnVehicleId4,
   &tTpmsCalibrationActualTirePressureId1,
   &tTpmsCalibrationActualTirePressureId2,
   &tTpmsCalibrationActualTirePressureId3,
   &tTpmsCalibrationActualTirePressureId4,
   &tTpmsCalibrationActualTireTemperatureId1,
   &tTpmsCalibrationActualTireTemperatureId2,
   &tTpmsCalibrationActualTireTemperatureId3,
   &tTpmsCalibrationActualTireTemperatureId4,
   &tTpmsCalibrationAmbientPressure,
   &tTpmsCalibrationAmbientTemperature,
   &tTpmsCalibrationCalibrationType,
   &tTpmsCalibrationDate,
   &tTpmsCalibrationMileage,
   &tTpmsCalibrationNoOfCalibrations,
   &tTpmsCalibrationPlausibility,
   &tTpmsCalibrationPositionId1,
   &tTpmsCalibrationPositionId2,
   &tTpmsCalibrationPositionId3,
   &tTpmsCalibrationPositionId4,
   &tTpmsCalibrationTime,
   &tTpmsCalibrationTireTargetPressureId1,
   &tTpmsCalibrationTireTargetPressureId2,
   &tTpmsCalibrationTireTargetPressureId3,
   &tTpmsCalibrationTireTargetPressureId4,
   &tTpmsErfsActTireDimSummerCarcass,
   &tTpmsErfsActTireDimSummerCrossSection,
   &tTpmsErfsActTireDimSummerDiameter,
   &tTpmsErfsActTireDimSummerLoadIndex,
   &tTpmsErfsActTireDimSummerMounted,
   &tTpmsErfsActTireDimSummerMountedInFactory,
   &tTpmsErfsActTireDimSummerPosition,
   &tTpmsErfsActTireDimSummerRunflat,
   &tTpmsErfsActTireDimSummerSeason,
   &tTpmsErfsActTireDimSummerSpeedIndex,
   &tTpmsErfsActTireDimSummerTargetPressureFaGroup0,
   &tTpmsErfsActTireDimSummerTargetPressureFaGroup1,
   &tTpmsErfsActTireDimSummerTargetPressureFaGroup2,
   &tTpmsErfsActTireDimSummerTargetPressureRaGroup0,
   &tTpmsErfsActTireDimSummerTargetPressureRaGroup1,
   &tTpmsErfsActTireDimSummerTargetPressureRaGroup2,
   &tTpmsErfsActTireDimSummerWidth,
   &tTpmsErfsActTireDimWinterCarcass,
   &tTpmsErfsActTireDimWinterCrossSection,
   &tTpmsErfsActTireDimWinterDiameter,
   &tTpmsErfsActTireDimWinterLoadIndex,
   &tTpmsErfsActTireDimWinterMounted,
   &tTpmsErfsActTireDimWinterMountedInFactory,
   &tTpmsErfsActTireDimWinterPosition,
   &tTpmsErfsActTireDimWinterRunflat,
   &tTpmsErfsActTireDimWinterSeason,
   &tTpmsErfsActTireDimWinterSpeedIndex,
   &tTpmsErfsActTireDimWinterTargetPressureFaGroup0,
   &tTpmsErfsActTireDimWinterTargetPressureFaGroup1,
   &tTpmsErfsActTireDimWinterTargetPressureFaGroup2,
   &tTpmsErfsActTireDimWinterTargetPressureRaGroup0,
   &tTpmsErfsActTireDimWinterTargetPressureRaGroup1,
   &tTpmsErfsActTireDimWinterTargetPressureRaGroup2,
   &tTpmsErfsActTireDimWinterWidth,
   &tExtParkSupConfig,
   &tLastReceivedAmbientPressure,
   &tMobilityLossThresholdValue,
   &tNotificationThresholdValueC,
   &tNotificationThresholdValueNc,
   &tPwfChange,
   &tRDCSystemReferenceTemp,
   &tRelRecommendedColdInflationPressureFrontAxle,
   &tRelRecommendedColdInflationPressureRearAxle,
   &tTolNoTempComp,
   &tTolTempComp,
   &tWarningThresholdValueC,
   &tWarningThresholdValueNc,
   &tCAC_WITR_TYP_TYR,
   &tIDX_LCC_WITR_TYP_TYR,
   &tIDX_V_WITR_TYP_TYR,
   &tRAD_WITR_TYP_TYR,
   &tRELA_SIDE_WITR_TYP_TYR,
   &tRFL_WITR_TYP_TYR,
   &tSEA_WITR_TYP_TYR,
   &tWID_WITR_TYP_TYR,
   &tWITR_TYP_TYR_ID2,
   &tAVL_P_TYR_FLH,
   &tAVL_P_TYR_FRH,
   &tAVL_P_TYR_RLH,
   &tAVL_P_TYR_RRH,
   &tAVL_TEMP_TYR_FLH,
   &tAVL_TEMP_TYR_FRH,
   &tAVL_TEMP_TYR_RLH,
   &tAVL_TEMP_TYR_RRH,
   &tAA_BAX_TYP_TYR,
   &tAG_BAX_TYP_TYR,
   &tBAX_TYP_TYR_ID2,
   &tCAC_BAX_TYP_TYR,
   &tIDX_LCC_BAX_TYP_TYR,
   &tIDX_V_BAX_TYP_TYR,
   &tLOR_BAX_TYP_TYR,
   &tRAD_BAX_TYP_TYR,
   &tRELA_SIDE_BAX_TYP_TYR,
   &tRFL_BAX_TYP_TYR,
   &tSEA_BAX_TYP_TYR,
   &tST_SLCTN_BAX_TYP_TYR,
   &tWID_BAX_TYP_TYR,
   &tCNTR_FBD_TPMS_1_ID2,
   &tCTR_FIL_ACTV_1,
   &tCTR_SUPP_ID_1,
   &tCTR_TYR_ID_1,
   &tCNTR_FBD_TPMS_2_ID2,
   &tCTR_FIL_ACTV_2,
   &tCTR_SUPP_ID_2,
   &tCTR_TYR_ID_2,
   &tCNTR_FBD_TPMS_3_ID2,
   &tCTR_FIL_ACTV_3,
   &tCTR_SUPP_ID_3,
   &tCTR_TYR_ID_3,
   &tCNTR_FBD_TPMS_4_ID2,
   &tCTR_FIL_ACTV_4,
   &tCTR_SUPP_ID_4,
   &tCTR_TYR_ID_4,
   &tRDCI_DATA_0 ,
   &tRDCI_DATA_1 ,
   &tRDCI_DATA_2 ,
   &tRDCI_DATA_3 ,
   &tRDCI_DATA_4 ,
   &tRDCI_DATA_5 ,
   &tRDCI_DATA_6 ,
   &tRDCI_DATA_7 ,
   &tRDCI_DATA_8 ,
   &tRDCI_DATA_9 ,
   &tRDCI_DATA_10,
   &tRDCI_DATA_11,
   &tRDCI_DATA_12,
   &tRDCI_DATA_13,
   &tRDCI_DATA_14,
   &tRDCI_DATA_15,
   &tRDCI_DATA_16,
   &tRDCI_DATA_17,
   &tRDCI_DATA_18,
   &tRDCI_DATA_19,
   &tRDCI_DATA_20,
   &tRDCI_DATA_21,
   &tRDCI_DATA_22,
   &tRDCI_DATA_23,
   &tRDCI_DATA_24,
   &tRDCI_DATA_25,
   &tRDCI_DATA_26,
   &tRDCI_DATA_27,
   &tRDCI_DATA_28,
   &tRDCI_DATA_29,
   &tRDCI_DATA_30,
   &tRDCI_DATA_31,
   &tAA_FTAX_TYP_TYR,
   &tAG_FTAX_TYP_TYR,
   &tCAC_FTAX_TYP_TYR,
   &tFTAX_TYP_TYR_ID2,
   &tIDX_LCC_FTAX_TYP_TYR,
   &tIDX_V_FTAX_TYP_TYR,
   &tLOR_FTAX_TYP_TYR,
   &tRAD_FTAX_TYP_TYR,
   &tRELA_SIDE_FTAX_TYP_TYR,
   &tRFL_FTAX_TYP_TYR,
   &tSEA_FTAX_TYP_TYR,
   &tWID_FTAX_TYP_TYR,
   &tCAC_TYP_TYR,
   &tIDX_LCC_TYP_TYR,
   &tIDX_V_TYP_TYR,
   &tOL_AVLB_TYP_TYR_ID2,
   &tRAD_TYP_TYR,
   &tRELA_SIDE_TYP_TYR,
   &tRFL_TYP_TYR,
   &tSEA_TYP_TYR,
   &tST_TYR_OL_ID,
   &tWID_TYP_TYR,
   &tACTVN_PM,
   &tPM_ID2,
   &tRQ_PM_DT,
   &tQrCodeDotNoId3,
   &tQrCodeDotNoId4,
   &tQrCodeDotProdDateId3,
   &tQrCodeDotProdDateId4,
   &tQrCodeInventoryNoId3,
   &tQrCodeInventoryNoId4,
   &tQrCodeMountingStateId3,
   &tQrCodeMountingStateId4,
   &tQrCodePositionId3,
   &tQrCodePositionId4,
   &tQrCodeRubberSerialNoPartAId3,
   &tQrCodeRubberSerialNoPartAId4,
   &tQrCodeRubberSerialNoPartBId3,
   &tQrCodeRubberSerialNoPartBId4,
   &tQrCodeTireDimensionsId3,
   &tQrCodeTireDimensionsId4,
   &tQrCodeTireTypeId3,
   &tQrCodeTireTypeId4,
   &tQrCodeDotNoId1,
   &tQrCodeDotNoId2,
   &tQrCodeDotProdDateId1,
   &tQrCodeDotProdDateId2,
   &tQrCodeInventoryNoId1,
   &tQrCodeInventoryNoId2,
   &tQrCodeMountingStateId1,
   &tQrCodeMountingStateId2,
   &tQrCodePositionId1,
   &tQrCodePositionId2,
   &tQrCodeRubberSerialNoPartAId1,
   &tQrCodeRubberSerialNoPartAId2,
   &tQrCodeRubberSerialNoPartBId1,
   &tQrCodeRubberSerialNoPartBId2,
   &tQrCodeTireDimensionsId1,
   &tQrCodeTireDimensionsId2,
   &tQrCodeTireTypeId1,
   &tQrCodeTireTypeId2,
   &tCAC_SUTR_TYP_TYR,
   &tIDX_LCC_SUTR_TYP_TYR,
   &tIDX_V_SUTR_TYP_TYR,
   &tRAD_SUTR_TYP_TYR,
   &tRELA_SIDE_SUTR_TYP_TYR,
   &tRFL_SUTR_TYP_TYR,
   &tSEA_SUTR_TYP_TYR,
   &tSOTR_TYP_TYR_ID2,
   &tWID_SUTR_TYP_TYR,
   &tL_OL_TYP_TYR,
   &tOP_IDR_MSGC,
   &tQU_RDC_INIT_DISP,
   &tST_MAN_SLCTN,
   &tST_SLCTN_SUTR_AVLB,
   &tST_SLCTN_TYR,
   &tST_SLCTN_WITR_AVLB,
   &tST_TAR_P_LOCO_TPCT,
   &tST_TYR_SEA_TPCT,
   &tStatusWheelTypeChangeDetection,
   &tStatusWheelTypeChangePosition,
   &tTAR_P_TYR_FLH,
   &tTAR_P_TYR_FRH,
   &tTAR_P_TYR_RLH,
   &tTAR_P_TYR_RRH,
   &tTpmsInternalLastBatteryStatusId1,
   &tTpmsInternalLastBatteryStatusId2,
   &tTpmsInternalLastBatteryStatusId3,
   &tTpmsInternalLastBatteryStatusId4,
   &tTpmsInternalLastPositionId1,
   &tTpmsInternalLastPositionId2,
   &tTpmsInternalLastPositionId3,
   &tTpmsInternalLastPositionId4,
   &tTpmsInternalLastPressureMbarId1,
   &tTpmsInternalLastPressureMbarId2,
   &tTpmsInternalLastPressureMbarId3,
   &tTpmsInternalLastPressureMbarId4,
   &tTpmsInternalLastReceptionRssiId1,
   &tTpmsInternalLastReceptionRssiId2,
   &tTpmsInternalLastReceptionRssiId3,
   &tTpmsInternalLastReceptionRssiId4,
   &tTpmsInternalLastReceptionYieldId1,
   &tTpmsInternalLastReceptionYieldId2,
   &tTpmsInternalLastReceptionYieldId3,
   &tTpmsInternalLastReceptionYieldId4,
   &tTpmsInternalLastSensorSerNoId1,
   &tTpmsInternalLastSensorSerNoId2,
   &tTpmsInternalLastSensorSerNoId3,
   &tTpmsInternalLastSensorSerNoId4,
   &tTpmsInternalLastTargetPressureMbarId1,
   &tTpmsInternalLastTargetPressureMbarId2,
   &tTpmsInternalLastTargetPressureMbarId3,
   &tTpmsInternalLastTargetPressureMbarId4,
   &tTpmsInternalLastTemperatureDegCId1,
   &tTpmsInternalLastTemperatureDegCId2,
   &tTpmsInternalLastTemperatureDegCId3,
   &tTpmsInternalLastTemperatureDegCId4,
   &tTireMileageInventoryNoId1,
   &tTireMileageInventoryNoId2,
   &tTireMileageLastAssemblyDateId1,
   &tTireMileageLastAssemblyDateId2,
   &tTireMileageLastAssemblyVehicleMileageId1,
   &tTireMileageLastAssemblyVehicleMileageId2,
   &tTireMileageLastDisassemblyDateId1,
   &tTireMileageLastDisassemblyDateId2,
   &tTireMileageLastDisassemblyVehicleMileageId1,
   &tTireMileageLastDisassemblyVehicleMileageId2,
   &tTireMileagePositionId1,
   &tTireMileagePositionId2,
   &tTireMileageTotalTireMileageOnVehicleId1,
   &tTireMileageTotalTireMileageOnVehicleId2,
   &tTireMileageInventoryNoId3,
   &tTireMileageInventoryNoId4,
   &tTireMileageLastAssemblyDateId3,
   &tTireMileageLastAssemblyDateId4,
   &tTireMileageLastAssemblyVehicleMileageId3,
   &tTireMileageLastAssemblyVehicleMileageId4,
   &tTireMileageLastDisassemblyDateId3,
   &tTireMileageLastDisassemblyDateId4,
   &tTireMileageLastDisassemblyVehicleMileageId3,
   &tTireMileageLastDisassemblyVehicleMileageId4,
   &tTireMileagePositionId3,
   &tTireMileagePositionId4,
   &tTireMileageTotalTireMileageOnVehicleId3,
   &tTireMileageTotalTireMileageOnVehicleId4,
   &tTpmsCalibrationActualTirePressureId1,
   &tTpmsCalibrationActualTirePressureId2,
   &tTpmsCalibrationActualTirePressureId3,
   &tTpmsCalibrationActualTirePressureId4,
   &tTpmsCalibrationActualTireTemperatureId1,
   &tTpmsCalibrationActualTireTemperatureId2,
   &tTpmsCalibrationActualTireTemperatureId3,
   &tTpmsCalibrationActualTireTemperatureId4,
   &tTpmsCalibrationAmbientPressure,
   &tTpmsCalibrationAmbientTemperature,
   &tTpmsCalibrationCalibrationType,
   &tTpmsCalibrationDate,
   &tTpmsCalibrationMileage,
   &tTpmsCalibrationNoOfCalibrations,
   &tTpmsCalibrationPlausibility,
   &tTpmsCalibrationPositionId1,
   &tTpmsCalibrationPositionId2,
   &tTpmsCalibrationPositionId3,
   &tTpmsCalibrationPositionId4,
   &tTpmsCalibrationTime,
   &tTpmsCalibrationTireTargetPressureId1,
   &tTpmsCalibrationTireTargetPressureId2,
   &tTpmsCalibrationTireTargetPressureId3,
   &tTpmsCalibrationTireTargetPressureId4,
   &tTpmsErfsActTireDimSummerCarcass,
   &tTpmsErfsActTireDimSummerCrossSection,
   &tTpmsErfsActTireDimSummerDiameter,
   &tTpmsErfsActTireDimSummerLoadIndex,
   &tTpmsErfsActTireDimSummerMounted,
   &tTpmsErfsActTireDimSummerMountedInFactory,
   &tTpmsErfsActTireDimSummerPosition,
   &tTpmsErfsActTireDimSummerRunflat,
   &tTpmsErfsActTireDimSummerSeason,
   &tTpmsErfsActTireDimSummerSpeedIndex,
   &tTpmsErfsActTireDimSummerTargetPressureFaGroup0,
   &tTpmsErfsActTireDimSummerTargetPressureFaGroup1,
   &tTpmsErfsActTireDimSummerTargetPressureFaGroup2,
   &tTpmsErfsActTireDimSummerTargetPressureRaGroup0,
   &tTpmsErfsActTireDimSummerTargetPressureRaGroup1,
   &tTpmsErfsActTireDimSummerTargetPressureRaGroup2,
   &tTpmsErfsActTireDimSummerWidth,
   &tTpmsErfsActTireDimWinterCarcass,
   &tTpmsErfsActTireDimWinterCrossSection,
   &tTpmsErfsActTireDimWinterDiameter,
   &tTpmsErfsActTireDimWinterLoadIndex,
   &tTpmsErfsActTireDimWinterMounted,
   &tTpmsErfsActTireDimWinterMountedInFactory,
   &tTpmsErfsActTireDimWinterPosition,
   &tTpmsErfsActTireDimWinterRunflat,
   &tTpmsErfsActTireDimWinterSeason,
   &tTpmsErfsActTireDimWinterSpeedIndex,
   &tTpmsErfsActTireDimWinterTargetPressureFaGroup0,
   &tTpmsErfsActTireDimWinterTargetPressureFaGroup1,
   &tTpmsErfsActTireDimWinterTargetPressureFaGroup2,
   &tTpmsErfsActTireDimWinterTargetPressureRaGroup0,
   &tTpmsErfsActTireDimWinterTargetPressureRaGroup1,
   &tTpmsErfsActTireDimWinterTargetPressureRaGroup2,
   &tTpmsErfsActTireDimWinterWidth,
   &tExtParkSupConfig,
   &tLastReceivedAmbientPressure,
   &tMobilityLossThresholdValue,
   &tNotificationThresholdValueC,
   &tNotificationThresholdValueNc,
   &tPwfChange,
   &tRDCSystemReferenceTemp,
   &tRelRecommendedColdInflationPressureFrontAxle,
   &tRelRecommendedColdInflationPressureRearAxle,
   &tTolNoTempComp,
   &tTolTempComp,
   &tWarningThresholdValueC,
   &tWarningThresholdValueNc,
   &tCAC_WITR_TYP_TYR,
   &tIDX_LCC_WITR_TYP_TYR,
   &tIDX_V_WITR_TYP_TYR,
   &tRAD_WITR_TYP_TYR,
   &tRELA_SIDE_WITR_TYP_TYR,
   &tRFL_WITR_TYP_TYR,
   &tSEA_WITR_TYP_TYR,
   &tWID_WITR_TYP_TYR,
   &tWITR_TYP_TYR_ID2,
   &tNvmRdciCommonBlock_NVBlock_MirrorBlock,
   &tNvmRdciDiagBlock1_NVBlock_MirrorBlock,
   &tNvmRdciDiagBlock2_NVBlock_MirrorBlock,
   &tNvmRdciErfsBlock_NVBlock_MirrorBlock,
   &tNvmRdciErfsEcoBlock_NVBlock_MirrorBlock,
   &tNvmRdciErfsTsaBlock_NVBlock_MirrorBlock,
   &tNvmRdciRidQrBlock1_NVBlock_MirrorBlock,
   &tNvmRdciRidQrBlock2_NVBlock_MirrorBlock,
   &tNvmRdciWarnStatusBlock_NVBlock_MirrorBlock,
   &tNvmRdciZoHistoryBlock_NVBlock_MirrorBlock,
   &tNvmRdciZomBlock1_NVBlock_MirrorBlock,
   &tNvmRdciZomBlock2_NVBlock_MirrorBlock,
   tCpNvmRdciCommonBlock,
   tCpNvmRdciDiagBlock1,
   tCpNvmRdciDiagBlock2,
   tCpNvmRdciErfsBlock,
   tCpNvmRdciErfsEcoBlock,
   tCpNvmRdciErfsTsaBlock,
   tCpNvmRdciRidQrBlock1,
   tCpNvmRdciRidQrBlock2,
   tCpNvmRdciWarnStatusBlock,
   tCpNvmRdciZoHistoryBlock,
   tCpNvmRdciZomBlock1,
   tCpNvmRdciZomBlock2,
   tRpCalPrmRDCi,
   tPpCcm_DISP_CC_BYPA_00,
   tRpCddAbsData,
   tRpCddRdcData,
   tRpFrPdu_A_TEMP,
   tRpFrPdu_BEDIENUNG_FAHRWERK,
   tRpFrPdu_CON_VEH,
   tRpFrPdu_DT_PT_1,
   tRpFrPdu_EINHEITEN_BN2020,
   tRpFrPdu_FZZSTD,
   tRpFrPdu_KILOMETERSTAND,
   tRpFrPdu_NMEARawData2Part2,
   tRpFrPdu_NMEARawData2Part3,
   tRpFrPdu_RELATIVZEIT,
   tPpFrPdu_ST_TYR,
   tRpFrPdu_UHRZEIT_DATUM,
   tRpFrPdu_V_VEH,
   tRpFrPdu_WMOM_DRV_4,
   tRpRdci_FrBusState,
   tDemErrorRdci1To3WrongWuMountedInfo,
   tDemErrorRdci4WrongWuMountedInfo,
   tDemErrorRdciATempInvalidInfo,
   tDemErrorRdciATempTimeoutInfo,
   tDemErrorRdciAusfallInfo,
   tDemErrorRdciAutoLearningFailedInfo,
   tDemErrorRdciBefuellhinweisInfo,
   tDemErrorRdciConVehAliveInfo,
   tDemErrorRdciConVehCrcInfo,
   tDemErrorRdciConVehInvalidInfo,
   tDemErrorRdciConVehTimeoutInfo,
   tDemErrorRdciDruckwarnungInfo,
   tDemErrorRdciEinheitenBn2020InvalidInfo,
   tDemErrorRdciEinheitenBn2020TimeoutInfo,
   tDemErrorRdciErfsCodingDataInconsistentInfo,
   tDemErrorRdciGatewayOrAntennaErrorInfo,
   tDemErrorRdciKalibrierungInfo,
   tDemErrorRdciOtherWuSensorTypeInfo,
   tDemErrorRdciPannenwarnungInfo,
   tDemErrorRdciPartialSystemAvailabilityInfo,
   tDemErrorRdciRdcDtPckg1AliveInfo,
   tDemErrorRdciRdcDtPckg1InvalidInfo,
   tDemErrorRdciRdcDtPckg1TimeoutInfo,
   tDemErrorRdciRelativzeitInvalidInfo,
   tDemErrorRdciRelativzeitTimeoutInfo,
   tDemErrorRdciRfExternalInterferenceInfo,
   tDemErrorRdciSystemNotAvailableInfo,
   tDemErrorRdciTpmsManufactoryModeInfo,
   tDemErrorRdciUnspecifiedWfcDefectInfo,
   tDemErrorRdciUnspecifiedWuMuteInfo,
   tDemErrorRdciVVehAliveFailureInfo,
   tDemErrorRdciVVehCogInvalidInfo,
   tDemErrorRdciVVehCogQualifierInfo,
   tDemErrorRdciVVehCrcFailureInfo,
   tDemErrorRdciVVehTimeoutInfo,
   tDemErrorRdciWarnruecknahmeInfo,
   tDemErrorRdciWuDefectFlInfo,
   tDemErrorRdciWuDefectFrInfo,
   tDemErrorRdciWuDefectRlInfo,
   tDemErrorRdciWuDefectRrInfo,
   tDemErrorRdciWuLocalisationFailedInfo,
   tDemErrorRdciWuLowBatteryFlInfo,
   tDemErrorRdciWuLowBatteryFrInfo,
   tDemErrorRdciWuLowBatteryRlInfo,
   tDemErrorRdciWuLowBatteryRrInfo,
   tDemErrorRdciWuMuteFlInfo,
   tDemErrorRdciWuMuteFrInfo,
   tDemErrorRdciWuMuteRlInfo,
   tDemErrorRdciWuMuteRrInfo,
   tDemErrorRdci1To3WrongWuMounted,
   tDemErrorRdci4WrongWuMounted,
   tDemErrorRdciATempInvalid,
   tDemErrorRdciATempTimeout,
   tDemErrorRdciAusfall,
   tDemErrorRdciAutoLearningFailed,
   tDemErrorRdciBefuellhinweis,
   tDemErrorRdciConVehAlive,
   tDemErrorRdciConVehCrc,
   tDemErrorRdciConVehInvalid,
   tDemErrorRdciConVehTimeout,
   tDemErrorRdciDruckwarnung,
   tDemErrorRdciEinheitenBn2020Invalid,
   tDemErrorRdciEinheitenBn2020Timeout,
   tDemErrorRdciErfsCodingDataInconsistent,
   tDemErrorRdciGatewayOrAntennaError,
   tDemErrorRdciKalibrierung,
   tDemErrorRdciOtherWuSensorType,
   tDemErrorRdciPannenwarnung,
   tDemErrorRdciPartialSystemAvailability,
   tDemErrorRdciRdcDtPckg1Alive,
   tDemErrorRdciRdcDtPckg1Invalid,
   tDemErrorRdciRdcDtPckg1Timeout,
   tDemErrorRdciRelativzeitInvalid,
   tDemErrorRdciRelativzeitTimeout,
   tDemErrorRdciRfExternalInterference,
   tDemErrorRdciSystemNotAvailable,
   tDemErrorRdciTpmsManufactoryMode,
   tDemErrorRdciUnspecifiedWfcDefect,
   tDemErrorRdciUnspecifiedWuMute,
   tDemErrorRdciVVehAliveFailure,
   tDemErrorRdciVVehCogInvalid,
   tDemErrorRdciVVehCogQualifier,
   tDemErrorRdciVVehCrcFailure,
   tDemErrorRdciVVehTimeout,
   tDemErrorRdciWarnruecknahme,
   tDemErrorRdciWuDefectFl,
   tDemErrorRdciWuDefectFr,
   tDemErrorRdciWuDefectRl,
   tDemErrorRdciWuDefectRr,
   tDemErrorRdciWuLocalisationFailed,
   tDemErrorRdciWuLowBatteryFl,
   tDemErrorRdciWuLowBatteryFr,
   tDemErrorRdciWuLowBatteryRl,
   tDemErrorRdciWuLowBatteryRr,
   tDemErrorRdciWuMuteFl,
   tDemErrorRdciWuMuteFr,
   tDemErrorRdciWuMuteRl,
   tDemErrorRdciWuMuteRr,
   tStbMB_AbsoluteTimeBaseValue
};

CONSTP2CONST(struct Rte_CDS_CtApHufTpmsSWC, RTE_CONST, RTE_CONST) Rte_Inst_CtApHufTpmsSWC = &tRte_CDS_CtApHufTpmsSWC;
Rdci_TAR_P_TYR_FLH_Type                                 TAR_P_TYR_FLH;
Rdci_TAR_P_TYR_FRH_Type                                 TAR_P_TYR_FRH;
Rdci_TAR_P_TYR_RLH_Type                                 TAR_P_TYR_RLH;
Rdci_TAR_P_TYR_RRH_Type                                 TAR_P_TYR_RRH;
Rdci_AVL_P_TYR_FLH_Type                                 AVL_P_TYR_FLH;
Rdci_AVL_P_TYR_FRH_Type                                 AVL_P_TYR_FRH;
Rdci_AVL_P_TYR_RLH_Type                                 AVL_P_TYR_RLH;
Rdci_AVL_P_TYR_RRH_Type                                 AVL_P_TYR_RRH;
Rdci_AVL_TEMP_TYR_FLH_Type                              AVL_TEMP_TYR_FLH;
Rdci_AVL_TEMP_TYR_FRH_Type                              AVL_TEMP_TYR_FRH;
Rdci_AVL_TEMP_TYR_RLH_Type                              AVL_TEMP_TYR_RLH;
Rdci_AVL_TEMP_TYR_RRH_Type                              AVL_TEMP_TYR_RRH;
Rdci_ST_TYR_Type                                        tST_TYR;
Rdci_L_OL_TYP_TYR_Type                                  LengthOfObjectList;
Rdci_QU_RDC_INIT_DISP_Type                              QU_RDC_INIT_DISP;
Rdci_ST_SLCTN_SUTR_AVLB_Type                            ST_SLCTN_SUTR_AVLB;
Rdci_ST_SLCTN_TYR_Type                                  ST_SLCTN_TYR;
Rdci_ST_SLCTN_WITR_AVLB_Type                            ST_SLCTN_WITR_AVLB;
Rdci_ST_TAR_P_LOCO_TPCT_Type                            ST_TAR_P_LOCO_TPCT;
Rdci_ST_TYR_SEA_TPCT_Type                               ST_TYR_SEA_TPCT;
Rdci_OP_IDR_MSGC_Type                                   OP_IDR_MSGC;
Rdci_ST_MAN_SLCTN_Type                                  ST_MAN_SLCTN;
Rdci_AA_BAX_TYP_TYR_Type                                AA_BAX_TYP_TYR;
Rdci_AG_BAX_TYP_TYR_Type                                AG_BAX_TYP_TYR;
Rdci_BAX_TYP_TYR_ID2_Type                               BAX_TYP_TYR_ID2;
Rdci_CAC_BAX_TYP_TYR_Type                               CAC_BAX_TYP_TYR;
Rdci_IDX_LCC_BAX_TYP_TYR_Type                           IDX_LCC_BAX_TYP_TYR;
Rdci_IDX_V_BAX_TYP_TYR_Type                             IDX_V_BAX_TYP_TYR;
Rdci_LOR_BAX_TYP_TYR_Type                               LOR_BAX_TYP_TYR;
Rdci_RAD_BAX_TYP_TYR_Type                               RAD_BAX_TYP_TYR;
Rdci_RELA_SIDE_BAX_TYP_TYR_Type                         RELA_SIDE_BAX_TYP_TYR;
Rdci_RFL_BAX_TYP_TYR_Type                               RFL_BAX_TYP_TYR;
Rdci_SEA_BAX_TYP_TYR_Type                               SEA_BAX_TYP_TYR;
Rdci_ST_SLCTN_BAX_TYP_TYR_Type                          ST_SLCTN_BAX_TYP_TYR;
Rdci_WID_BAX_TYP_TYR_Type                               WID_BAX_TYP_TYR;
Rdci_AA_FTAX_TYP_TYR_Type                               AA_FTAX_TYP_TYR;
Rdci_AG_FTAX_TYP_TYR_Type                               AG_FTAX_TYP_TYR;
Rdci_CAC_FTAX_TYP_TYR_Type                              CAC_FTAX_TYP_TYR;
Rdci_FTAX_TYP_TYR_ID2_Type                              FTAX_TYP_TYR_ID2;
Rdci_IDX_LCC_FTAX_TYP_TYR_Type                          IDX_LCC_FTAX_TYP_TYR;
Rdci_IDX_V_FTAX_TYP_TYR_Type                            IDX_V_FTAX_TYP_TYR;
Rdci_LOR_FTAX_TYP_TYR_Type                              LOR_FTAX_TYP_TYR;
Rdci_RAD_FTAX_TYP_TYR_Type                              RAD_FTAX_TYP_TYR;
Rdci_RELA_SIDE_FTAX_TYP_TYR_Type                        RELA_SIDE_FTAX_TYP_TYR;
Rdci_RFL_FTAX_TYP_TYR_Type                              RFL_FTAX_TYP_TYR;
Rdci_SEA_FTAX_TYP_TYR_Type                              SEA_FTAX_TYP_TYR;
Rdci_WID_FTAX_TYP_TYR_Type                              WID_FTAX_TYP_TYR;
Rdci_CAC_TYP_TYR_Type                                   CAC_TYP_TYR;
Rdci_IDX_LCC_TYP_TYR_Type                               IDX_LCC_TYP_TYR;
Rdci_IDX_V_TYP_TYR_Type                                 IDX_V_TYP_TYR;
Rdci_OL_AVLB_TYP_TYR_ID2_Type                           OL_AVLB_TYP_TYR_ID2;
Rdci_RAD_TYP_TYR_Type                                   RAD_TYP_TYR;
Rdci_RELA_SIDE_TYP_TYR_Type                             RELA_SIDE_TYP_TYR;
Rdci_RFL_TYP_TYR_Type                                   RFL_TYP_TYR;
Rdci_SEA_TYP_TYR_Type                                   SEA_TYP_TYR;
Rdci_ST_TYR_OL_ID_Type                                  ST_TYR_OL_ID;
Rdci_WID_TYP_TYR_Type                                   WID_TYP_TYR;
Rdci_CAC_SUTR_TYP_TYR_Type                              CAC_SUTR_TYP_TYR;
Rdci_IDX_LCC_SUTR_TYP_TYR_Type                          IDX_LCC_SUTR_TYP_TYR;
Rdci_IDX_V_SUTR_TYP_TYR_Type                            IDX_V_SUTR_TYP_TYR;
Rdci_RAD_SUTR_TYP_TYR_Type                              RAD_SUTR_TYP_TYR;
Rdci_RELA_SIDE_SUTR_TYP_TYR_Type                        RELA_SIDE_SUTR_TYP_TYR;
Rdci_RFL_SUTR_TYP_TYR_Type                              RFL_SUTR_TYP_TYR;
Rdci_SEA_SUTR_TYP_TYR_Type                              SEA_SUTR_TYP_TYR;
Rdci_SOTR_TYP_TYR_ID2_Type                              SOTR_TYP_TYR_ID2;
Rdci_WID_SUTR_TYP_TYR_Type                              WID_SUTR_TYP_TYR;
Rdci_CAC_WITR_TYP_TYR_Type                              CAC_WITR_TYP_TYR;
Rdci_IDX_LCC_WITR_TYP_TYR_Type                          IDX_LCC_WITR_TYP_TYR;
Rdci_IDX_V_WITR_TYP_TYR_Type                            IDX_V_WITR_TYP_TYR;
Rdci_RAD_WITR_TYP_TYR_Type                              RAD_WITR_TYP_TYR;
Rdci_RELA_SIDE_WITR_TYP_TYR_Type                        RELA_SIDE_WITR_TYP_TYR;
Rdci_RFL_WITR_TYP_TYR_Type                              RFL_WITR_TYP_TYR;
Rdci_SEA_WITR_TYP_TYR_Type                              SEA_WITR_TYP_TYR;
Rdci_WID_WITR_TYP_TYR_Type                              WID_WITR_TYP_TYR;
Rdci_WITR_TYP_TYR_ID2_Type                              WITR_TYP_TYR_ID2;
Rdci_CNTR_FBD_TPMS_1_ID2_Type                           CNTR_FBD_TPMS_1_ID2;
Rdci_CTR_FIL_ACTV_1_Type                                CTR_FIL_ACTV_1;
Rdci_CTR_SUPP_ID_1_Type                                 CTR_SUPP_ID_1;
Rdci_CTR_TYR_ID_1_Type                                  CTR_TYR_ID_1;
Rdci_CNTR_FBD_TPMS_2_ID2_Type                           CNTR_FBD_TPMS_2_ID2;
Rdci_CTR_FIL_ACTV_2_Type                                CTR_FIL_ACTV_2;
Rdci_CTR_SUPP_ID_2_Type                                 CTR_SUPP_ID_2;
Rdci_CTR_TYR_ID_2_Type                                  CTR_TYR_ID_2;
Rdci_CNTR_FBD_TPMS_3_ID2_Type                           CNTR_FBD_TPMS_3_ID2;
Rdci_CTR_FIL_ACTV_3_Type                                CTR_FIL_ACTV_3;
Rdci_CTR_SUPP_ID_3_Type                                 CTR_SUPP_ID_3;
Rdci_CTR_TYR_ID_3_Type                                  CTR_TYR_ID_3;
Rdci_CNTR_FBD_TPMS_4_ID2_Type                           CNTR_FBD_TPMS_4_ID2;
Rdci_CTR_FIL_ACTV_4_Type                                CTR_FIL_ACTV_4;
Rdci_CTR_SUPP_ID_4_Type                                 CTR_SUPP_ID_4;
Rdci_CTR_TYR_ID_4_Type                                  CTR_TYR_ID_4;
Rdci_ACTVN_PM_Type                                      ACTVN_PM;
Rdci_PM_ID2_Type                                        PM_ID2;
Rdci_RQ_PM_DT_Type                                      RQ_PM_DT;
Rdci_StatusWheelTypeChangeDetection_Type                StatusWheelTypeChangeDetection;
Rdci_StatusWheelTypeChangePosition_Type                 StatusWheelTypeChangePosition;
Rdci_LastReceivedAmbientPressure_Type                   LastReceivedAmbientPressure;
Rdci_MobilityLossThresholdValue_Type                    MobilityLossThresholdValue;
Rdci_NotificationThresholdValueC_Type                   NotificationThresholdValueC;
Rdci_NotificationThresholdValueNc_Type                  NotificationThresholdValueNc;
Rdci_RDCSystemReferenceTemp_Type                        RDCSystemReferenceTemp;
Rdci_PwfChange_Type                                     PwfChange;
Rdci_RelRecommendedColdInflationPressureFrontAxle_Type  RelRecommendedColdInflationPressureFrontAxle;
Rdci_RelRecommendedColdInflationPressureRearAxle_Type   RelRecommendedColdInflationPressureRearAxle;
Rdci_TolNoTempComp_Type                                 TolNoTempComp;
Rdci_TolTempComp_Type                                   TolTempComp;
Rdci_WarningThresholdValueC_Type                        WarningThresholdValueC;
Rdci_WarningThresholdValueNc_Type                       WarningThresholdValueNc;
Rdci_ExtParkSupConfig_Type                              ExtParkSupConfig;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
void GetRDCiOutputDataTAR_P_TYR_FLH(                                Rdci_TAR_P_TYR_FLH_Type*                                ptOutputData){*ptOutputData = TAR_P_TYR_FLH;}
void GetRDCiOutputDataTAR_P_TYR_FRH(                                Rdci_TAR_P_TYR_FRH_Type*                                ptOutputData){*ptOutputData = TAR_P_TYR_FRH;}
void GetRDCiOutputDataTAR_P_TYR_RLH(                                Rdci_TAR_P_TYR_RLH_Type*                                ptOutputData){*ptOutputData = TAR_P_TYR_RLH;}
void GetRDCiOutputDataTAR_P_TYR_RRH(                                Rdci_TAR_P_TYR_RRH_Type*                                ptOutputData){*ptOutputData = TAR_P_TYR_RRH;}
void GetRDCiOutputDataAVL_T_TYR_FLH(                                Rdci_AVL_TEMP_TYR_FLH_Type*                             ptOutputData){*ptOutputData = AVL_TEMP_TYR_FLH;}
void GetRDCiOutputDataAVL_T_TYR_FRH(                                Rdci_AVL_TEMP_TYR_FRH_Type*                             ptOutputData){*ptOutputData = AVL_TEMP_TYR_FRH;}
void GetRDCiOutputDataAVL_T_TYR_RLH(                                Rdci_AVL_TEMP_TYR_RLH_Type*                             ptOutputData){*ptOutputData = AVL_TEMP_TYR_RLH;}
void GetRDCiOutputDataAVL_T_TYR_RRH(                                Rdci_AVL_TEMP_TYR_RRH_Type*                             ptOutputData){*ptOutputData = AVL_TEMP_TYR_RRH;}
void GetRDCiOutputDataAVL_P_TYR_FLH(                                Rdci_AVL_P_TYR_FLH_Type*                                ptOutputData){*ptOutputData = AVL_P_TYR_FLH;}
void GetRDCiOutputDataAVL_P_TYR_FRH(                                Rdci_AVL_P_TYR_FRH_Type*                                ptOutputData){*ptOutputData = AVL_P_TYR_FRH;}
void GetRDCiOutputDataAVL_P_TYR_RLH(                                Rdci_AVL_P_TYR_RLH_Type*                                ptOutputData){*ptOutputData = AVL_P_TYR_RLH;}
void GetRDCiOutputDataAVL_P_TYR_RRH(                                Rdci_AVL_P_TYR_RRH_Type*                                ptOutputData){*ptOutputData = AVL_P_TYR_RRH;}
void GetRDCiOutputDataST_TYR(                                       Rdci_ST_TYR_Type*                                       ptOutputData){*ptOutputData = tST_TYR;}
void GetRDCiOutputDataLOL_TYP_TYR(                                  Rdci_L_OL_TYP_TYR_Type*                                 ptOutputData){*ptOutputData = LengthOfObjectList;}
void GetRDCiOutputDataQU_RDC_INIT_DISP(                             Rdci_QU_RDC_INIT_DISP_Type*                             ptOutputData){*ptOutputData = QU_RDC_INIT_DISP;}
void GetRDCiOutputDataST_SLCTN_SUTR_AVLB(                           Rdci_ST_SLCTN_SUTR_AVLB_Type*                           ptOutputData){*ptOutputData = ST_SLCTN_SUTR_AVLB;}
void GetRDCiOutputDataST_SLCTN_WITR_AVLB(                           Rdci_ST_SLCTN_WITR_AVLB_Type*                           ptOutputData){*ptOutputData = ST_SLCTN_WITR_AVLB;}
void GetRDCiOutputDataST_SLCTN_TYR(                                 Rdci_ST_SLCTN_TYR_Type*                                 ptOutputData){*ptOutputData = ST_SLCTN_TYR;}
void GetRDCiOutputDataST_TAR_P_LOCO_TPCT(                           Rdci_ST_TAR_P_LOCO_TPCT_Type*                           ptOutputData){*ptOutputData = ST_TAR_P_LOCO_TPCT;}
void GetRDCiOutputDataST_TYR_SEA_TPCT(                              Rdci_ST_TYR_SEA_TPCT_Type*                              ptOutputData){*ptOutputData = ST_TYR_SEA_TPCT;}
void GetRDCiOutputDataOP_IDR_MSGC(                                  Rdci_OP_IDR_MSGC_Type*                                  ptOutputData){*ptOutputData = OP_IDR_MSGC;}
void GetRDCiOutputDataST_MAN_SLCTN(                                 Rdci_ST_MAN_SLCTN_Type*                                 ptOutputData){*ptOutputData = ST_MAN_SLCTN;}
void GetRDCiOutputDataCAC_SUTR(                                     Rdci_CAC_SUTR_TYP_TYR_Type*                             ptOutputData){*ptOutputData = CAC_SUTR_TYP_TYR;}
void GetRDCiOutputDataIDX_LCC_SUTR(                                 Rdci_IDX_LCC_SUTR_TYP_TYR_Type*                         ptOutputData){*ptOutputData = IDX_LCC_SUTR_TYP_TYR;}
void GetRDCiOutputDataIDX_V_SUTR(                                   Rdci_IDX_V_SUTR_TYP_TYR_Type*                           ptOutputData){*ptOutputData = IDX_V_SUTR_TYP_TYR;}
void GetRDCiOutputDataRAD_SUTR(                                     Rdci_RAD_SUTR_TYP_TYR_Type*                             ptOutputData){*ptOutputData = RAD_SUTR_TYP_TYR;}
void GetRDCiOutputDataRELA_SIDE_SUTR(                               Rdci_RELA_SIDE_SUTR_TYP_TYR_Type*                       ptOutputData){*ptOutputData = RELA_SIDE_SUTR_TYP_TYR;}
void GetRDCiOutputDataRFL_SUTR(                                     Rdci_RFL_SUTR_TYP_TYR_Type*                             ptOutputData){*ptOutputData = RFL_SUTR_TYP_TYR;}
void GetRDCiOutputDataSEA_SUTR(                                     Rdci_SEA_SUTR_TYP_TYR_Type*                             ptOutputData){*ptOutputData = SEA_SUTR_TYP_TYR;}
void GetRDCiOutputDataWID_SUTR(                                     Rdci_WID_SUTR_TYP_TYR_Type*                             ptOutputData){*ptOutputData = WID_SUTR_TYP_TYR;}
void GetRDCiOutputDataCAC_WITR(                                     Rdci_CAC_WITR_TYP_TYR_Type*                             ptOutputData){*ptOutputData = CAC_WITR_TYP_TYR;}
void GetRDCiOutputDataIDX_LCC_WITR(                                 Rdci_IDX_LCC_WITR_TYP_TYR_Type*                         ptOutputData){*ptOutputData = IDX_LCC_WITR_TYP_TYR;}
void GetRDCiOutputDataIDX_V_WITR(                                   Rdci_IDX_V_WITR_TYP_TYR_Type*                           ptOutputData){*ptOutputData = IDX_V_WITR_TYP_TYR;}
void GetRDCiOutputDataRAD_WITR(                                     Rdci_RAD_WITR_TYP_TYR_Type*                             ptOutputData){*ptOutputData = RAD_WITR_TYP_TYR;}
void GetRDCiOutputDataRELA_SIDE_WITR(                               Rdci_RELA_SIDE_WITR_TYP_TYR_Type*                       ptOutputData){*ptOutputData = RELA_SIDE_WITR_TYP_TYR;}
void GetRDCiOutputDataRFL_WITR(                                     Rdci_RFL_WITR_TYP_TYR_Type*                             ptOutputData){*ptOutputData = RFL_WITR_TYP_TYR;}
void GetRDCiOutputDataSEA_WITR(                                     Rdci_SEA_WITR_TYP_TYR_Type*                             ptOutputData){*ptOutputData = SEA_WITR_TYP_TYR;}
void GetRDCiOutputDataWID_WITR(                                     Rdci_WID_WITR_TYP_TYR_Type*                             ptOutputData){*ptOutputData = WID_WITR_TYP_TYR;}
void GetRDCiOutputDataCAC_BAX(                                      Rdci_CAC_BAX_TYP_TYR_Type*                              ptOutputData){*ptOutputData = CAC_BAX_TYP_TYR;}
void GetRDCiOutputDataIDX_LCC_BAX(                                  Rdci_IDX_LCC_BAX_TYP_TYR_Type*                          ptOutputData){*ptOutputData = IDX_LCC_BAX_TYP_TYR;}
void GetRDCiOutputDataIDX_V_BAX(                                    Rdci_IDX_V_BAX_TYP_TYR_Type*                            ptOutputData){*ptOutputData = IDX_V_BAX_TYP_TYR;}
void GetRDCiOutputDataRAD_BAX(                                      Rdci_RAD_BAX_TYP_TYR_Type*                              ptOutputData){*ptOutputData = RAD_BAX_TYP_TYR;}
void GetRDCiOutputDataRELA_SIDE_BAX(                                Rdci_RELA_SIDE_BAX_TYP_TYR_Type*                        ptOutputData){*ptOutputData = RELA_SIDE_BAX_TYP_TYR;}
void GetRDCiOutputDataRFL_BAX(                                      Rdci_RFL_BAX_TYP_TYR_Type*                              ptOutputData){*ptOutputData = RFL_BAX_TYP_TYR;}
void GetRDCiOutputDataSEA_BAX(                                      Rdci_SEA_BAX_TYP_TYR_Type*                              ptOutputData){*ptOutputData = SEA_BAX_TYP_TYR;}
void GetRDCiOutputDataWID_BAX(                                      Rdci_WID_BAX_TYP_TYR_Type*                              ptOutputData){*ptOutputData = WID_BAX_TYP_TYR;}
void GetRDCiOutputDataST_SLCTN_BAX_TYP_TYR(                         Rdci_ST_SLCTN_BAX_TYP_TYR_Type*                         ptOutputData){*ptOutputData = ST_SLCTN_BAX_TYP_TYR;}
void GetRDCiOutputDataCAC_FTAX(                                     Rdci_CAC_FTAX_TYP_TYR_Type*                             ptOutputData){*ptOutputData = CAC_FTAX_TYP_TYR;}
void GetRDCiOutputDataIDX_LCC_FTAX(                                 Rdci_IDX_LCC_FTAX_TYP_TYR_Type*                         ptOutputData){*ptOutputData = IDX_LCC_FTAX_TYP_TYR;}
void GetRDCiOutputDataIDX_V_FTAX(                                   Rdci_IDX_V_FTAX_TYP_TYR_Type*                           ptOutputData){*ptOutputData = IDX_V_FTAX_TYP_TYR;}
void GetRDCiOutputDataRAD_FTAX(                                     Rdci_RAD_FTAX_TYP_TYR_Type*                             ptOutputData){*ptOutputData = RAD_FTAX_TYP_TYR;}
void GetRDCiOutputDataRELA_SIDE_FTAX(                               Rdci_RELA_SIDE_FTAX_TYP_TYR_Type*                       ptOutputData){*ptOutputData = RELA_SIDE_FTAX_TYP_TYR;}
void GetRDCiOutputDataRFL_FTAX(                                     Rdci_RFL_FTAX_TYP_TYR_Type*                             ptOutputData){*ptOutputData = RFL_FTAX_TYP_TYR;}
void GetRDCiOutputDataSEA_FTAX(                                     Rdci_SEA_FTAX_TYP_TYR_Type*                             ptOutputData){*ptOutputData = SEA_FTAX_TYP_TYR;}
void GetRDCiOutputDataWID_FTAX(                                     Rdci_WID_FTAX_TYP_TYR_Type*                             ptOutputData){*ptOutputData = WID_FTAX_TYP_TYR;}
void GetRDCiOutputDataCAC_TYTR(                                     Rdci_CAC_TYP_TYR_Type*                                  ptOutputData){*ptOutputData = CAC_TYP_TYR;}
void GetRDCiOutputDataIDX_LCC_TYTR(                                 Rdci_IDX_LCC_TYP_TYR_Type*                              ptOutputData){*ptOutputData = IDX_LCC_TYP_TYR;}
void GetRDCiOutputDataIDX_V_TYTR(                                   Rdci_IDX_V_TYP_TYR_Type*                                ptOutputData){*ptOutputData = IDX_V_TYP_TYR;}
void GetRDCiOutputDataRAD_TYTR(                                     Rdci_RAD_TYP_TYR_Type*                                  ptOutputData){*ptOutputData = RAD_TYP_TYR;}
void GetRDCiOutputDataRELA_SIDE_TYTR(                               Rdci_RELA_SIDE_TYP_TYR_Type*                            ptOutputData){*ptOutputData = RELA_SIDE_TYP_TYR;}
void GetRDCiOutputDataRFL_TYTR(                                     Rdci_RFL_TYP_TYR_Type*                                  ptOutputData){*ptOutputData = RFL_TYP_TYR;}
void GetRDCiOutputDataSEA_TYTR(                                     Rdci_SEA_TYP_TYR_Type*                                  ptOutputData){*ptOutputData = SEA_TYP_TYR;}
void GetRDCiOutputDataWID_TYTR(                                     Rdci_WID_TYP_TYR_Type*                                  ptOutputData){*ptOutputData = WID_TYP_TYR;}
void GetRDCiOutputDataOL_ID_TYTR(                                   Rdci_ST_TYR_OL_ID_Type*                                 ptOutputData){*ptOutputData = ST_TYR_OL_ID;}
void GetRDCiOutputDataStatusWheelTypeChangeDetection(               Rdci_StatusWheelTypeChangeDetection_Type*               ptOutputData){*ptOutputData = StatusWheelTypeChangeDetection;}
void GetRDCiOutputDataStatusWheelTypeChangePosition(                Rdci_StatusWheelTypeChangePosition_Type*                ptOutputData){*ptOutputData = StatusWheelTypeChangePosition;}
void GetRDCiOutputDataLastReceivedAmbientPressure(                  Rdci_LastReceivedAmbientPressure_Type*                  ptOutputData){*ptOutputData = LastReceivedAmbientPressure;}
void GetRDCiOutputDataMobilityLossThresholdValue(                   Rdci_MobilityLossThresholdValue_Type*                   ptOutputData){*ptOutputData = MobilityLossThresholdValue;}
void GetRDCiOutputDataNotificationThresholdValueC(                  Rdci_NotificationThresholdValueC_Type*                  ptOutputData){*ptOutputData = NotificationThresholdValueC;}
void GetRDCiOutputDataNotificationThresholdValueNc(                 Rdci_NotificationThresholdValueNc_Type*                 ptOutputData){*ptOutputData = NotificationThresholdValueNc;}
void GetRDCiOutputDataRDCSystemReferenceTemp(                       Rdci_RDCSystemReferenceTemp_Type*                       ptOutputData){*ptOutputData = RDCSystemReferenceTemp;}
void GetRDCiOutputDataPwfChange(                                    Rdci_PwfChange_Type*                                    ptOutputData){*ptOutputData = PwfChange;}
void GetRDCiOutputDataRelRecommendedColdInflationPressureFrontAxle( Rdci_RelRecommendedColdInflationPressureFrontAxle_Type* ptOutputData){*ptOutputData = RelRecommendedColdInflationPressureFrontAxle;}
void GetRDCiOutputDataRelRecommendedColdInflationPressureRearAxle(  Rdci_RelRecommendedColdInflationPressureRearAxle_Type*  ptOutputData){*ptOutputData = RelRecommendedColdInflationPressureRearAxle;}
void GetRDCiOutputDataTolNoTempComp(                                Rdci_TolNoTempComp_Type*                                ptOutputData){*ptOutputData = TolNoTempComp;}
void GetRDCiOutputDataTolTempComp(                                  Rdci_TolTempComp_Type*                                  ptOutputData){*ptOutputData = TolTempComp;}
void GetRDCiOutputDataWarningThresholdValueC(                       Rdci_WarningThresholdValueC_Type*                       ptOutputData){*ptOutputData = WarningThresholdValueC;}
void GetRDCiOutputDataWarningThresholdValueNc(                      Rdci_WarningThresholdValueNc_Type*                      ptOutputData){*ptOutputData = WarningThresholdValueNc;}
void GetRDCiOutputDataExtParkSupConfig(                             Rdci_ExtParkSupConfig_Type*                             ptOutputData){*ptOutputData = ExtParkSupConfig;}

FUNC(Std_ReturnType, RTE_CODE) RTE_Stub_Send_ST_TYR( P2CONST(Rdci_ST_TYR_Type, AUTOMATIC, RTE_CTAPHUFTPMSSWC_APPL_DATA) data){
   tST_TYR.ALIV_ST_TYR = data->ALIV_ST_TYR;
   tST_TYR.CRC_ST_TYR = data->CRC_ST_TYR;
   tST_TYR.QU_FN_TYR_INFO = data->QU_FN_TYR_INFO;
   tST_TYR.QU_TFAI = data->QU_TFAI;
   tST_TYR.QU_TPL = data->QU_TPL;
   tST_TYR.ST_TYR_dummy_12_15 = data->ST_TYR_dummy_12_15;

   return 0;
}

void RTE_Stub_CyclicOutputFunction(void){
   AVL_P_TYR_FLH                                 = *(Rdci_AVL_P_TYR_FLH_Type*)                                &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_AVL_P_TYR_AVL_P_TYR_FLH->value;
   AVL_P_TYR_FRH                                 = *(Rdci_AVL_P_TYR_FRH_Type*)                                &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_AVL_P_TYR_AVL_P_TYR_FRH->value;
   AVL_P_TYR_RLH                                 = *(Rdci_AVL_P_TYR_RLH_Type*)                                &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_AVL_P_TYR_AVL_P_TYR_RLH->value;
   AVL_P_TYR_RRH                                 = *(Rdci_AVL_P_TYR_RRH_Type*)                                &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_AVL_P_TYR_AVL_P_TYR_RRH->value;
   LengthOfObjectList                            = *(Rdci_L_OL_TYP_TYR_Type*)                                 &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_ST_TYR_2_L_OL_TYP_TYR->value;
   QU_RDC_INIT_DISP                              = *(Rdci_QU_RDC_INIT_DISP_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_ST_TYR_2_QU_RDC_INIT_DISP->value;
   ST_SLCTN_SUTR_AVLB                            = *(Rdci_ST_SLCTN_SUTR_AVLB_Type*)                           &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_ST_TYR_2_ST_SLCTN_SUTR_AVLB->value;
   ST_SLCTN_TYR                                  = *(Rdci_ST_SLCTN_TYR_Type*)                                 &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_ST_TYR_2_ST_SLCTN_TYR->value;
   ST_SLCTN_WITR_AVLB                            = *(Rdci_ST_SLCTN_WITR_AVLB_Type*)                           &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_ST_TYR_2_ST_SLCTN_WITR_AVLB->value;
   ST_TAR_P_LOCO_TPCT                            = *(Rdci_ST_TAR_P_LOCO_TPCT_Type*)                           &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_ST_TYR_2_ST_TAR_P_LOCO_TPCT->value;
   ST_TYR_SEA_TPCT                               = *(Rdci_ST_TYR_SEA_TPCT_Type*)                              &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_ST_TYR_2_ST_TYR_SEA_TPCT->value;
   OP_IDR_MSGC                                   = *(Rdci_OP_IDR_MSGC_Type*)                                  &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_ST_TYR_2_OP_IDR_MSGC->value;
   ST_MAN_SLCTN                                  = *(Rdci_ST_MAN_SLCTN_Type*)                                 &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_ST_TYR_2_ST_MAN_SLCTN->value;
   AVL_TEMP_TYR_FLH                              = *(Rdci_AVL_TEMP_TYR_FLH_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_AVL_TEMP_TYR_AVL_TEMP_TYR_FLH->value;
   AVL_TEMP_TYR_FRH                              = *(Rdci_AVL_TEMP_TYR_FRH_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_AVL_TEMP_TYR_AVL_TEMP_TYR_FRH->value;
   AVL_TEMP_TYR_RLH                              = *(Rdci_AVL_TEMP_TYR_RLH_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_AVL_TEMP_TYR_AVL_TEMP_TYR_RLH->value;
   AVL_TEMP_TYR_RRH                              = *(Rdci_AVL_TEMP_TYR_RRH_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_AVL_TEMP_TYR_AVL_TEMP_TYR_RRH->value;
   TAR_P_TYR_FLH                                 = *(Rdci_TAR_P_TYR_FLH_Type*)                                &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_TAR_P_TYR_TAR_P_TYR_FLH->value;
   TAR_P_TYR_FRH                                 = *(Rdci_TAR_P_TYR_FRH_Type*)                                &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_TAR_P_TYR_TAR_P_TYR_FRH->value;
   TAR_P_TYR_RLH                                 = *(Rdci_TAR_P_TYR_RLH_Type*)                                &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_TAR_P_TYR_TAR_P_TYR_RLH->value;
   TAR_P_TYR_RRH                                 = *(Rdci_TAR_P_TYR_RRH_Type*)                                &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_TAR_P_TYR_TAR_P_TYR_RRH->value;
   AA_BAX_TYP_TYR                                = *(Rdci_AA_BAX_TYP_TYR_Type*)                               &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_BAX_TYP_TYR_AA_BAX_TYP_TYR->value;
   AG_BAX_TYP_TYR                                = *(Rdci_AG_BAX_TYP_TYR_Type*)                               &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_BAX_TYP_TYR_AG_BAX_TYP_TYR->value;
   BAX_TYP_TYR_ID2                               = *(Rdci_BAX_TYP_TYR_ID2_Type*)                              &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_BAX_TYP_TYR_BAX_TYP_TYR_ID2->value;
   CAC_BAX_TYP_TYR                               = *(Rdci_CAC_BAX_TYP_TYR_Type*)                              &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_BAX_TYP_TYR_CAC_BAX_TYP_TYR->value;
   IDX_LCC_BAX_TYP_TYR                           = *(Rdci_IDX_LCC_BAX_TYP_TYR_Type*)                          &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_BAX_TYP_TYR_IDX_LCC_BAX_TYP_TYR->value;
   IDX_V_BAX_TYP_TYR                             = *(Rdci_IDX_V_BAX_TYP_TYR_Type*)                            &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_BAX_TYP_TYR_IDX_V_BAX_TYP_TYR->value;
   LOR_BAX_TYP_TYR                               = *(Rdci_LOR_BAX_TYP_TYR_Type*)                              &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_BAX_TYP_TYR_LOR_BAX_TYP_TYR->value;
   RAD_BAX_TYP_TYR                               = *(Rdci_RAD_BAX_TYP_TYR_Type*)                              &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_BAX_TYP_TYR_RAD_BAX_TYP_TYR->value;
   RELA_SIDE_BAX_TYP_TYR                         = *(Rdci_RELA_SIDE_BAX_TYP_TYR_Type*)                        &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_BAX_TYP_TYR_RELA_SIDE_BAX_TYP_TYR->value;
   RFL_BAX_TYP_TYR                               = *(Rdci_RFL_BAX_TYP_TYR_Type*)                              &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_BAX_TYP_TYR_RFL_BAX_TYP_TYR->value;
   SEA_BAX_TYP_TYR                               = *(Rdci_SEA_BAX_TYP_TYR_Type*)                              &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_BAX_TYP_TYR_SEA_BAX_TYP_TYR->value;
   ST_SLCTN_BAX_TYP_TYR                          = *(Rdci_ST_SLCTN_BAX_TYP_TYR_Type*)                         &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_BAX_TYP_TYR_ST_SLCTN_BAX_TYP_TYR->value;
   WID_BAX_TYP_TYR                               = *(Rdci_WID_BAX_TYP_TYR_Type*)                              &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_BAX_TYP_TYR_WID_BAX_TYP_TYR->value;
   AA_FTAX_TYP_TYR                               = *(Rdci_AA_FTAX_TYP_TYR_Type*)                              &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_FTAX_TYP_TYR_AA_FTAX_TYP_TYR->value;
   AG_FTAX_TYP_TYR                               = *(Rdci_AG_FTAX_TYP_TYR_Type*)                              &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_FTAX_TYP_TYR_AG_FTAX_TYP_TYR->value;
   CAC_FTAX_TYP_TYR                              = *(Rdci_CAC_FTAX_TYP_TYR_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_FTAX_TYP_TYR_CAC_FTAX_TYP_TYR->value;
   FTAX_TYP_TYR_ID2                              = *(Rdci_FTAX_TYP_TYR_ID2_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_FTAX_TYP_TYR_FTAX_TYP_TYR_ID2->value;
   IDX_LCC_FTAX_TYP_TYR                          = *(Rdci_IDX_LCC_FTAX_TYP_TYR_Type*)                         &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_FTAX_TYP_TYR_IDX_LCC_FTAX_TYP_TYR->value;
   IDX_V_FTAX_TYP_TYR                            = *(Rdci_IDX_V_FTAX_TYP_TYR_Type*)                           &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_FTAX_TYP_TYR_IDX_V_FTAX_TYP_TYR->value;
   LOR_FTAX_TYP_TYR                              = *(Rdci_LOR_FTAX_TYP_TYR_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_FTAX_TYP_TYR_LOR_FTAX_TYP_TYR->value;
   RAD_FTAX_TYP_TYR                              = *(Rdci_RAD_FTAX_TYP_TYR_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_FTAX_TYP_TYR_RAD_FTAX_TYP_TYR->value;
   RELA_SIDE_FTAX_TYP_TYR                        = *(Rdci_RELA_SIDE_FTAX_TYP_TYR_Type*)                       &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_FTAX_TYP_TYR_RELA_SIDE_FTAX_TYP_TYR->value;
   RFL_FTAX_TYP_TYR                              = *(Rdci_RFL_FTAX_TYP_TYR_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_FTAX_TYP_TYR_RFL_FTAX_TYP_TYR->value;
   SEA_FTAX_TYP_TYR                              = *(Rdci_SEA_FTAX_TYP_TYR_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_FTAX_TYP_TYR_SEA_FTAX_TYP_TYR->value;
   WID_FTAX_TYP_TYR                              = *(Rdci_WID_FTAX_TYP_TYR_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_FTAX_TYP_TYR_WID_FTAX_TYP_TYR->value;
   WITR_TYP_TYR_ID2                              = *(Rdci_WITR_TYP_TYR_ID2_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RCyclicRDCiTask_PpFrPdu_WITR_TYP_TYR_WITR_TYP_TYR_ID2->value;
   CAC_WITR_TYP_TYR                              = *(Rdci_CAC_WITR_TYP_TYR_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RCyclicRDCiTask_PpFrPdu_WITR_TYP_TYR_CAC_WITR_TYP_TYR->value;
   IDX_LCC_WITR_TYP_TYR                          = *(Rdci_IDX_LCC_WITR_TYP_TYR_Type*)                         &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_WITR_TYP_TYR_IDX_LCC_WITR_TYP_TYR->value;
   IDX_V_WITR_TYP_TYR                            = *(Rdci_IDX_V_WITR_TYP_TYR_Type*)                           &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_WITR_TYP_TYR_IDX_V_WITR_TYP_TYR->value;
   RAD_WITR_TYP_TYR                              = *(Rdci_RAD_WITR_TYP_TYR_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_WITR_TYP_TYR_RAD_WITR_TYP_TYR->value;
   RELA_SIDE_WITR_TYP_TYR                        = *(Rdci_RELA_SIDE_WITR_TYP_TYR_Type*)                       &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_WITR_TYP_TYR_RELA_SIDE_WITR_TYP_TYR->value;
   RFL_WITR_TYP_TYR                              = *(Rdci_RFL_WITR_TYP_TYR_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_WITR_TYP_TYR_RFL_WITR_TYP_TYR->value;
   SEA_WITR_TYP_TYR                              = *(Rdci_SEA_WITR_TYP_TYR_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_WITR_TYP_TYR_SEA_WITR_TYP_TYR->value;
   WID_WITR_TYP_TYR                              = *(Rdci_WID_WITR_TYP_TYR_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_WITR_TYP_TYR_WID_WITR_TYP_TYR->value;
   CAC_SUTR_TYP_TYR                              = *(Rdci_CAC_SUTR_TYP_TYR_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_SOTR_TYP_TYR_CAC_SUTR_TYP_TYR->value;
   IDX_LCC_SUTR_TYP_TYR                          = *(Rdci_IDX_LCC_SUTR_TYP_TYR_Type*)                         &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_SOTR_TYP_TYR_IDX_LCC_SUTR_TYP_TYR->value;
   IDX_V_SUTR_TYP_TYR                            = *(Rdci_IDX_V_SUTR_TYP_TYR_Type*)                           &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_SOTR_TYP_TYR_IDX_V_SUTR_TYP_TYR->value;
   RAD_SUTR_TYP_TYR                              = *(Rdci_RAD_SUTR_TYP_TYR_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_SOTR_TYP_TYR_RAD_SUTR_TYP_TYR->value;
   RELA_SIDE_SUTR_TYP_TYR                        = *(Rdci_RELA_SIDE_SUTR_TYP_TYR_Type*)                       &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_SOTR_TYP_TYR_RELA_SIDE_SUTR_TYP_TYR->value;
   RFL_SUTR_TYP_TYR                              = *(Rdci_RFL_SUTR_TYP_TYR_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_SOTR_TYP_TYR_RFL_SUTR_TYP_TYR->value;
   SEA_SUTR_TYP_TYR                              = *(Rdci_SEA_SUTR_TYP_TYR_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_SOTR_TYP_TYR_SEA_SUTR_TYP_TYR->value;
   SOTR_TYP_TYR_ID2                              = *(Rdci_SOTR_TYP_TYR_ID2_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_SOTR_TYP_TYR_SOTR_TYP_TYR_ID2->value;
   WID_SUTR_TYP_TYR                              = *(Rdci_WID_SUTR_TYP_TYR_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_SOTR_TYP_TYR_WID_SUTR_TYP_TYR->value;
   CAC_TYP_TYR                                   = *(Rdci_CAC_TYP_TYR_Type*)                                  &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_OL_AVLB_TYP_TYR_CAC_TYP_TYR->value;
   IDX_LCC_TYP_TYR                               = *(Rdci_IDX_LCC_TYP_TYR_Type*)                              &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_OL_AVLB_TYP_TYR_IDX_LCC_TYP_TYR->value;
   IDX_V_TYP_TYR                                 = *(Rdci_IDX_V_TYP_TYR_Type*)                                &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_OL_AVLB_TYP_TYR_IDX_V_TYP_TYR->value;
   OL_AVLB_TYP_TYR_ID2                           = *(Rdci_OL_AVLB_TYP_TYR_ID2_Type*)                          &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_OL_AVLB_TYP_TYR_OL_AVLB_TYP_TYR_ID2->value;
   RAD_TYP_TYR                                   = *(Rdci_RAD_TYP_TYR_Type*)                                  &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_OL_AVLB_TYP_TYR_RAD_TYP_TYR->value;
   RELA_SIDE_TYP_TYR                             = *(Rdci_RELA_SIDE_TYP_TYR_Type*)                            &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_OL_AVLB_TYP_TYR_RELA_SIDE_TYP_TYR->value;
   RFL_TYP_TYR                                   = *(Rdci_RFL_TYP_TYR_Type*)                                  &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_OL_AVLB_TYP_TYR_RFL_TYP_TYR->value;
   SEA_TYP_TYR                                   = *(Rdci_SEA_TYP_TYR_Type*)                                  &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_OL_AVLB_TYP_TYR_SEA_TYP_TYR->value;
   ST_TYR_OL_ID                                  = *(Rdci_ST_TYR_OL_ID_Type*)                                 &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_OL_AVLB_TYP_TYR_ST_TYR_OL_ID->value;
   WID_TYP_TYR                                   = *(Rdci_WID_TYP_TYR_Type*)                                  &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_OL_AVLB_TYP_TYR_WID_TYP_TYR->value;
   CNTR_FBD_TPMS_1_ID2                           = *(Rdci_CNTR_FBD_TPMS_1_ID2_Type*)                          &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_CNTR_FBD_TPMS_1_CNTR_FBD_TPMS_1_ID2->value;
   CTR_FIL_ACTV_1                                = *(Rdci_CTR_FIL_ACTV_1_Type*)                               &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_CNTR_FBD_TPMS_1_CTR_FIL_ACTV_1->value;
   CTR_SUPP_ID_1                                 = *(Rdci_CTR_SUPP_ID_1_Type*)                                &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_CNTR_FBD_TPMS_1_CTR_SUPP_ID_1->value;
   CTR_TYR_ID_1                                  = *(Rdci_CTR_TYR_ID_1_Type*)                                 &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_CNTR_FBD_TPMS_1_CTR_TYR_ID_1->value;
   CNTR_FBD_TPMS_2_ID2                           = *(Rdci_CNTR_FBD_TPMS_2_ID2_Type*)                          &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_CNTR_FBD_TPMS_2_CNTR_FBD_TPMS_2_ID2->value;
   CTR_FIL_ACTV_2                                = *(Rdci_CTR_FIL_ACTV_2_Type*)                               &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_CNTR_FBD_TPMS_2_CTR_FIL_ACTV_2->value;
   CTR_SUPP_ID_2                                 = *(Rdci_CTR_SUPP_ID_2_Type*)                                &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_CNTR_FBD_TPMS_2_CTR_SUPP_ID_2->value;
   CTR_TYR_ID_2                                  = *(Rdci_CTR_TYR_ID_2_Type*)                                 &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_CNTR_FBD_TPMS_2_CTR_TYR_ID_2->value;
   CNTR_FBD_TPMS_3_ID2                           = *(Rdci_CNTR_FBD_TPMS_3_ID2_Type*)                          &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_CNTR_FBD_TPMS_3_CNTR_FBD_TPMS_3_ID2->value;
   CTR_FIL_ACTV_3                                = *(Rdci_CTR_FIL_ACTV_3_Type*)                               &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_CNTR_FBD_TPMS_3_CTR_FIL_ACTV_3->value;
   CTR_SUPP_ID_3                                 = *(Rdci_CTR_SUPP_ID_3_Type*)                                &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_CNTR_FBD_TPMS_3_CTR_SUPP_ID_3->value;
   CTR_TYR_ID_3                                  = *(Rdci_CTR_TYR_ID_3_Type*)                                 &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_CNTR_FBD_TPMS_3_CTR_TYR_ID_3->value;
   CNTR_FBD_TPMS_4_ID2                           = *(Rdci_CNTR_FBD_TPMS_4_ID2_Type*)                          &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_CNTR_FBD_TPMS_4_CNTR_FBD_TPMS_4_ID2->value;
   CTR_FIL_ACTV_4                                = *(Rdci_CTR_FIL_ACTV_4_Type*)                               &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_CNTR_FBD_TPMS_4_CTR_FIL_ACTV_4->value;
   CTR_SUPP_ID_4                                 = *(Rdci_CTR_SUPP_ID_4_Type*)                                &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_CNTR_FBD_TPMS_4_CTR_SUPP_ID_4->value;
   CTR_TYR_ID_4                                  = *(Rdci_CTR_TYR_ID_4_Type*)                                 &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_CNTR_FBD_TPMS_4_CTR_TYR_ID_4->value;
   ACTVN_PM                                      = *(Rdci_ACTVN_PM_Type*)                                     &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_PM_ACTVN_PM->value;
   PM_ID2                                        = *(Rdci_PM_ID2_Type*)                                       &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_PM_PM_ID2->value;
   RQ_PM_DT                                      = *(Rdci_RQ_PM_DT_Type*)                                     &Rte_Inst_CtApHufTpmsSWC->RInitRDCiStartup_PpFrPdu_PM_RQ_PM_DT->value;
   StatusWheelTypeChangeDetection                = *(Rdci_StatusWheelTypeChangeDetection_Type*)               &Rte_Inst_CtApHufTpmsSWC->RCyclicRDCiTask_PpFrPdu_StatusWheelTypeChange_StatusWheelTypeChangeDetection->value;
   StatusWheelTypeChangePosition                 = *(Rdci_StatusWheelTypeChangePosition_Type*)                &Rte_Inst_CtApHufTpmsSWC->RCyclicRDCiTask_PpFrPdu_StatusWheelTypeChange_StatusWheelTypeChangePosition->value;
   LastReceivedAmbientPressure                   = *(Rdci_LastReceivedAmbientPressure_Type*)                  &Rte_Inst_CtApHufTpmsSWC->RCyclicRDCiTask_PpFrPdu_TyreParkSupervision_LastReceivedAmbientPressure->value;
   MobilityLossThresholdValue                    = *(Rdci_MobilityLossThresholdValue_Type*)                   &Rte_Inst_CtApHufTpmsSWC->RCyclicRDCiTask_PpFrPdu_TyreParkSupervision_MobilityLossThresholdValue->value;
   NotificationThresholdValueC                   = *(Rdci_NotificationThresholdValueC_Type*)                  &Rte_Inst_CtApHufTpmsSWC->RCyclicRDCiTask_PpFrPdu_TyreParkSupervision_NotificationThresholdValueC->value;
   NotificationThresholdValueNc                  = *(Rdci_NotificationThresholdValueNc_Type*)                 &Rte_Inst_CtApHufTpmsSWC->RCyclicRDCiTask_PpFrPdu_TyreParkSupervision_NotificationThresholdValueNc->value;
   RDCSystemReferenceTemp                        = *(Rdci_RDCSystemReferenceTemp_Type*)                       &Rte_Inst_CtApHufTpmsSWC->RCyclicRDCiTask_PpFrPdu_TyreParkSupervision_RDCSystemReferenceTemp->value;
   PwfChange                                     = *(Rdci_PwfChange_Type*)                                    &Rte_Inst_CtApHufTpmsSWC->RCyclicRDCiTask_PpFrPdu_TyreParkSupervision_PwfChange->value;
   RelRecommendedColdInflationPressureFrontAxle  = *(Rdci_RelRecommendedColdInflationPressureFrontAxle_Type*) &Rte_Inst_CtApHufTpmsSWC->RCyclicRDCiTask_PpFrPdu_TyreParkSupervision_RelRecommendedColdInflationPressureFrontAxle->value;
   RelRecommendedColdInflationPressureRearAxle   = *(Rdci_RelRecommendedColdInflationPressureRearAxle_Type*)  &Rte_Inst_CtApHufTpmsSWC->RCyclicRDCiTask_PpFrPdu_TyreParkSupervision_RelRecommendedColdInflationPressureRearAxle->value;
   TolNoTempComp                                 = *(Rdci_TolNoTempComp_Type*)                                &Rte_Inst_CtApHufTpmsSWC->RCyclicRDCiTask_PpFrPdu_TyreParkSupervision_TolNoTempComp->value;
   TolTempComp                                   = *(Rdci_TolTempComp_Type*)                                  &Rte_Inst_CtApHufTpmsSWC->RCyclicRDCiTask_PpFrPdu_TyreParkSupervision_TolTempComp->value;
   WarningThresholdValueC                        = *(Rdci_WarningThresholdValueC_Type*)                       &Rte_Inst_CtApHufTpmsSWC->RCyclicRDCiTask_PpFrPdu_TyreParkSupervision_WarningThresholdValueC->value;
   WarningThresholdValueNc                       = *(Rdci_WarningThresholdValueNc_Type*)                      &Rte_Inst_CtApHufTpmsSWC->RCyclicRDCiTask_PpFrPdu_TyreParkSupervision_WarningThresholdValueNc->value;
   ExtParkSupConfig                              = *(Rdci_ExtParkSupConfig_Type*)                             &Rte_Inst_CtApHufTpmsSWC->RCyclicRDCiTask_PpFrPdu_TyreParkSupervision_ExtParkSupConfig->value;
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

