#ifndef __RTE_STUB_DCM_SERVICES_H
#define __RTE_STUB_DCM_SERVICES_H
/******************************************************************************/
/* File   : RTE_Stub_DcmServices.h                                            */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Rte_CtApHufTpmsSWC_Type.h"

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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_StatusRdcLesen( ImpTypeArrayDcm_StatusRdcLesenReadDataType*);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_StatusRdcMessdatenblock1( ImpTypeArrayDcm_RdcMessdatenblock1ReadDataType*);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_StatusRdcMessdatenblock2( ImpTypeArrayDcm_RdcMessdatenblock2ReadDataType*);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_StatusRdcMessdatenblock3( ImpTypeArrayDcm_RdcMessdatenblock3ReadDataType*);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_StatusRdcMessdatenblock4( ImpTypeArrayDcm_RdcMessdatenblock4ReadDataType*);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_StatusRdcVersion( ImpTypeArrayDcm_StatusRdcVersionReadDataType*);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_StatusRdcAnlernenLokalisierungLesen( ImpTypeArrayDcm_RdcAnlernenLokalisierungLesenReadDataType*);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_StatusRdcHsInaktivereignis( ImpTypeArrayDcm_RdcHsInaktivereignisReadDataType*);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_StatusRdcHsKalibrierereignis( ImpTypeArrayDcm_RdcHsKalibrierereignisReadDataType*);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_StatusRdcHsWarnereignisRuecknahme( ImpTypeArrayDcm_RdcHsWarnereignisRuecknahmeReadDataType*);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_StatusRdcHsWarnereignis1( ImpTypeArrayDcm_RdcHsWarnereignis1ReadDataType*);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_StatusRdcHsWarnereignis2( ImpTypeArrayDcm_RdcHsWarnereignis2ReadDataType*);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_StatusRdcHsWarnereignis3( ImpTypeArrayDcm_RdcHsWarnereignis3ReadDataType*);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_StatusRdcHsWarnereignisWeich1( ImpTypeArrayDcm_RdcHsWarnereignisWeich1ReadDataType*);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_StatusRdcHsWarnereignisWeich2( ImpTypeArrayDcm_RdcHsWarnereignisWeich2ReadDataType*);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_StatusRdcHsWarnereignisWeich3( ImpTypeArrayDcm_RdcHsWarnereignisWeich3ReadDataType*);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_StatusReLesenDruckcodierung( ImpTypeArrayDcm_StatusReLesenDruckcodierungReadDataType*);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_StatusRdcDeveloperDataLesen( ImpTypeArrayDcm_StatusRdcDeveloperDataLesenReadDataType*);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_StatusRdcErfsAktReifenLesen( ImpTypeArrayDcm_StatusRdcErfsAktReifenLesenReadDataType*);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_StatusRdcErfsEcoTabelleLesen( ImpTypeArrayDcm_RdcErfsEcoTabelleLesenReadDataType*);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_StatusRdcErfsAktReifenEcoLesen( ImpTypeArrayDcm_StatusRdcErfsAktReifenEcoLesenReadDataType*);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_RdcRidAktReifenQrCodeLesen (ImpTypeArrayDcm_RdcRidAktReifenQrCodeLesenReadDataType* Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_RdcRidAlteReifenQrCodeLesen (ImpTypeArrayDcm_RdcRidAlteReifenQrCodeLesenReadDataType* Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_RdcRidAktReifenLaufstreckeLesen (ImpTypeArrayDcm_RdcRidAktReifenLaufstreckeLesenReadDataType* Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_RdcRidAlteReifenLaufstreckeLesen (ImpTypeArrayDcm_RdcRidAlteReifenLaufstreckeLesenReadDataType* Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_StatusRdcExtParkSupervisionLesen (ImpTypeArrayDcm_StatusRdcExtParkSupervisionLesenType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_SteuernDigitalRdc(uint8 , uint8);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_SteuernRadelektronikVorgeben(uint32 , uint8);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_SteuernRdcErfsEcoReifentabelleVorgeben(void);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_SteuernRdcErfsEcoNeueReifenVorgeben(void);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_SteuernRdcErfsEcoAktReifenPosVorgeben(void);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_SteuernRdcErfsDeveloperConfig(void);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_SteuernRdcDeveloperConfig( ImpTypeArrayDcm_SteuernRdcDeveloperConfigWriteDataType *);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_UWB_FunktionenReifendruckkontrolle_ReadData( ImpTypeValDcm_FunktionenReifendruckkontrolleReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_UWB_RdcAktuelleAussentemperatur_ReadData( ImpTypeValDcm_RdcAktuelleAussentemperaturReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_UWB_RdcAussendruck_ReadData( ImpTypeArrayDcm_RdcAussendruckReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_UWB_RdcInaktivStatus_ReadData( ImpTypeValDcm_RdcInaktivStatusReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_UWB_RdcKalibrierungStatus_ReadData( ImpTypeValDcm_RdcKalibrierungStatusReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_UWB_RdcKonfiguration_ReadData( ImpTypeValDcm_RdcKonfigurationReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_UWB_RdcPosition_ReadData( ImpTypeValDcm_RdcPositionReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_UWB_RdcReferenzAussentemperatur_ReadData( ImpTypeValDcm_RdcReferenzAussentemperaturReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_UWB_RdcReifendruckHl_ReadData( ImpTypeArrayDcm_RdcReifendruckHlReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_UWB_RdcReifendruckHr_ReadData( ImpTypeArrayDcm_RdcReifendruckHrReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_UWB_RdcReifendruckVl_ReadData( ImpTypeArrayDcm_RdcReifendruckVlReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_UWB_RdcReifendruckVr_ReadData( ImpTypeArrayDcm_RdcReifendruckVrReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_UWB_RdcReifentemperaturHl_ReadData( ImpTypeValDcm_RdcReifentemperaturHlReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_UWB_RdcReifentemperaturHr_ReadData( ImpTypeValDcm_RdcReifentemperaturHrReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_UWB_RdcReifentemperaturVl_ReadData( ImpTypeValDcm_RdcReifentemperaturVlReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_UWB_RdcReifentemperaturVr_ReadData( ImpTypeValDcm_RdcReifentemperaturVrReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_UWB_RdcSensorHersteller_ReadData( ImpTypeValDcm_RdcSensorHerstellerReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_UWB_RdcSolldruckHinten_ReadData( ImpTypeArrayDcm_RdcSolldruckHintenReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_UWB_RdcSolldruckVorn_ReadData( ImpTypeArrayDcm_RdcSolldruckVornReadDataType * Data);
extern ImpTypeRefDcm_NegativeResponseCodeType RTE_Stub_UWB_RdcStatus_ReadData( ImpTypeValDcm_RdcStatusReadDataType * Data);
extern uint8 *Stub_RdcAnlernenLokalisierungLesen_Output(uint8);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
#endif

