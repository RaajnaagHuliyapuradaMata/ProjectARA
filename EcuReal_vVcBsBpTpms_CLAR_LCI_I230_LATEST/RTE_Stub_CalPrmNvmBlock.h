#ifndef __RTE_STUB_CALPRM_NVM_BLOCK_H
#define __RTE_STUB_CALPRM_NVM_BLOCK_H
/******************************************************************************/
/* File   : RTE_Stub_CalPrmNvmBlock.h                                         */
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
#define C_FUNKTION_REIFENPANNENERKENNUNG_AKTIV_BYTE           ( (uint8) 0x16)
#define C_FUNKTION_REIFENPANNENERKENNUNG_AKTIV_MASK           ( (uint8) 0x03)

#define C_RDCI_T_PREWARN_NC_BYTE                              ( (uint8) 0x00)
#define C_RDCI_MAX_THRESHOLD_BYTE                             ( (uint8) 0x00)
#define C_RDCI_PREWARN_ENABLE_BYTE                            ( (uint8) 0x00)
#define C_RDCI_STAT_INIT_BYTE                                 ( (uint8) 0x00)
#define C_RDCI_NUM_PREWARN_DETECT_BYTE                        ( (uint8) 0x00)
#define C_RDCI_PREWARN_IGNITION_BYTE                          ( (uint8) 0x00)
#define C_RDCI_PANNE_BEF_POS_BYTE                             ( (uint8) 0x00)
#define C_RDCI_FAST_DEFLATE_ENABLE_BYTE                       ( (uint8) 0x00)
#define C_RDCI_TYR_ID_FILT_GW_BYTE                            ( (uint8) 0x01)
#define C_RDCI_RESET_PLAUSI_BYTE                              ( (uint8) 0x01)
#define C_RDCI_TPMS_MARKET_BYTE                               ( (uint8) 0x01)
#define C_RDCI_SENSOR_FOREIGN_AK_RDK_BYTE                     ( (uint8) 0x01)
#define C_RDCI_SENSOR_LOC_SYNC_BYTE                           ( (uint8) 0x01)
#define C_RDCI_ERFS_ENABLE_BYTE                               ( (uint8) 0x01)
#define C_RDCI_TREF_SEASONAL_ADJUSTMENT_ENABLE_BYTE           ( (uint8) 0x02)
#define C_RDCI_DEBUG_SWITCH_2_BYTE                            ( (uint8) 0x02)
#define C_RDCI_DEBUG_SWITCH_3_BYTE                            ( (uint8) 0x02)
#define C_RDCI_DEBUG_SWITCH_4_BYTE                            ( (uint8) 0x02)
#define C_RDCI_DISP_RESET_BYTE                                ( (uint8) 0x02)
#define C_RDCI_COR_HOLD_OFF_TIME_BYTE                         ( (uint8) 0x02)
#define C_RDCI_T_REF_SHIFT_BYTE                               ( (uint8) 0x03)
#define C_RDCI_UIA_TH_C_BYTE                                  ( (uint8) 0x04)
#define C_RDCI_UIW_TH_C_BYTE                                  ( (uint8) 0x05)
#define C_RDCI_UIA_TH_NC_BYTE                                 ( (uint8) 0x06)
#define C_RDCI_UIW_TH_NC_BYTE                                 ( (uint8) 0x07)
#define C_RDCI_PANNE_TH_BYTE                                  ( (uint8) 0x08)
#define C_RDCI_MIN_RCP_FA_BYTE                                ( (uint8) 0x09)
#define C_RDCI_MIN_RCP_RA_BYTE                                ( (uint8) 0x0A)
#define C_RDCI_DELTA_P_L_R_BYTE                               ( (uint8) 0x0B)
#define C_RDCI_P_INIT_RANGE_MAX_BYTE                          ( (uint8) 0x0C)
#define C_RDCI_TIMEOUT_PREWARN_BYTE                           ( (uint8) 0x0D)
#define C_RDCI_DT_AMB_PREWARN_BYTE                            ( (uint8) 0x0E)
#define C_RDCI_DP_TO_I_PMIN_BYTE                              ( (uint8) 0x0F)
#define C_RDCI_LEARN_LOCATE_CONFIG_BYTE_0                     ( (uint8) 0x10)
#define C_RDCI_LEARN_LOCATE_CONFIG_BYTE_1                     ( (uint8) 0x11)
#define C_RDCI_XMIN_COOL_TIRE_BYTE                            ( (uint8) 0x12)
#define C_RDCI_MAX_COR_TIME_BYTE                              ( (uint8) 0x13)
#define C_RDCI_MAX_COR_RCP_BYTE                               ( (uint8) 0x14)
#define C_RDCI_TH_C_TOL_BYTE                                  ( (uint8) 0x15)
#define C_RDCI_TH_NC_TOL_BYTE                                 ( (uint8) 0x15)
#define C_RDCI_LONG_HOLD_TIME_BYTE                            ( (uint8) 0x16)
#define C_RDCI_SHORT_HOLD_TIME_BYTE                           ( (uint8) 0x16)
#define C_RDCI_ECO_RCP_ENABLE_BYTE                            ( (uint8) 0x16)
#define C_RDCI_DEFAULT_LOAD_COND_BYTE                         ( (uint8) 0x17)
#define C_RDCI_ERFS_PLACARD_SOURCE_BYTE                       ( (uint8) 0x17)
#define C_RDCI_DEFAULT_MENU_SEL_BYTE                          ( (uint8) 0x17)
#define C_RDCI_DISP_CONF_TIMEOUT_BYTE                         ( (uint8) 0x17)
#define C_RDCI_RID_ENABLE_BYTE                                ( (uint8) 0x18)
#define C_RDCI_RESERVE_24_BYTE                                ( (uint8) 0x18)
#define C_RDCI_TREF_SEAS_ADJ_CONFIG_BYTE_0                    ( (uint8) 0x19)
#define C_RDCI_TREF_SEAS_ADJ_CONFIG_BYTE_1                    ( (uint8) 0x1A)
#define C_RDCI_TREF_SEAS_ADJ_CONFIG_BYTE_2                    ( (uint8) 0x1B)
#define C_RDCI_TREF_SEAS_ADJ_CONFIG_BYTE_3                    ( (uint8) 0x1C)
#define C_RDCI_RESERVE_29_BYTE                                ( (uint8) 0x1D)

#define C_RDCI_SPEED_CCM_ENABLE_BYTE                          ( (uint8) 0x1E)
#define C_RDCI_SPEED_CCM_HYST_BYTE                            ( (uint8) 0x1F)
#define C_RDCI_SPEED_CCM_PRESS_OFFSET_FA_BYTE_0               ( (uint8) 0x20)
#define C_RDCI_SPEED_CCM_PRESS_OFFSET_FA_BYTE_1               ( (uint8) 0x21)
#define C_RDCI_SPEED_CCM_PRESS_OFFSET_RA_BYTE_0               ( (uint8) 0x22)
#define C_RDCI_SPEED_CCM_PRESS_OFFSET_RA_BYTE_1               ( (uint8) 0x23)
#define C_RDCI_SPEED_CCM_TH_BYTE_0                            ( (uint8) 0x24)
#define C_RDCI_SPEED_CCM_TH_BYTE_1                            ( (uint8) 0x25)
#define C_RDCI_SPEED_CCM_TIME_BYTE                            ( (uint8) 0x26)

#define C_RDCI_PARK_SUP_EXT_PARK_SUP_CONFIG_BYTE              ( (uint8) 0x27)
#define C_RDCI_PARK_SUP_MOBILITY_LOSS_THRESHOLD_BYTE          ( (uint8) 0x28)
#define C_RDCI_PARK_SUP_NOTIFICATION_THRESHOLD_VALUE_C_BYTE   ( (uint8) 0x29)
#define C_RDCI_PARK_SUP_NOTIFICATION_THRESHOLD_VALUE_NC_BYTE  ( (uint8) 0x2A)
#define C_RDCI_PARK_SUP_TOL_NO_TEMP_COMP_BYTE                 ( (uint8) 0x2B)
#define C_RDCI_PARK_SUP_TOL_TEMP_COMP_BYTE                    ( (uint8) 0x2C)
#define C_RDCI_PARK_SUP_WARNING_THRESHOLD_VALUE_C_BYTE        ( (uint8) 0x2D)
#define C_RDCI_PARK_SUP_WARNING_THRESHOLD_VALUE_NC_BYTE       ( (uint8) 0x2E)

#define C_RDCI_T_PREWARN_NC_MASK                              ( (uint8) 0x01)
#define C_RDCI_MAX_THRESHOLD_MASK                             ( (uint8) 0x02)
#define C_RDCI_PREWARN_ENABLE_MASK                            ( (uint8) 0x04)
#define C_RDCI_STAT_INIT_MASK                                 ( (uint8) 0x08)
#define C_RDCI_NUM_PREWARN_DETECT_MASK                        ( (uint8) 0x10)
#define C_RDCI_PREWARN_IGNITION_MASK                          ( (uint8) 0x20)
#define C_RDCI_PANNE_BEF_POS_MASK                             ( (uint8) 0x40)
#define C_RDCI_FAST_DEFLATE_ENABLE_MASK                       ( (uint8) 0x80)
#define C_RDCI_TYR_ID_FILT_GW_MASK                            ( (uint8) 0x01)
#define C_RDCI_RESET_PLAUSI_MASK                              ( (uint8) 0x02)
#define C_RDCI_TPMS_MARKET_MASK                               ( (uint8) 0x1C)
#define C_RDCI_SENSOR_FOREIGN_AK_RDK_MASK                     ( (uint8) 0x20)
#define C_RDCI_SENSOR_LOC_SYNC_MASK                           ( (uint8) 0x40)
#define C_RDCI_ERFS_ENABLE_MASK                               ( (uint8) 0x80)
#define C_RDCI_TREF_SEASONAL_ADJUSTMENT_ENABLE_MASK           ( (uint8) 0x01)
#define C_RDCI_DEBUG_SWITCH_2_MASK                            ( (uint8) 0x02)
#define C_RDCI_DEBUG_SWITCH_3_MASK                            ( (uint8) 0x04)
#define C_RDCI_DEBUG_SWITCH_4_MASK                            ( (uint8) 0x08)
#define C_RDCI_DISP_RESET_MASK                                ( (uint8) 0x10)
#define C_RDCI_COR_HOLD_OFF_TIME_MASK                         ( (uint8) 0xE0)
#define C_RDCI_T_REF_SHIFT_MASK                               ( (uint8) 0xFF)
#define C_RDCI_UIA_TH_C_MASK                                  ( (uint8) 0xFF)
#define C_RDCI_UIW_TH_C_MASK                                  ( (uint8) 0xFF)
#define C_RDCI_UIA_TH_NC_MASK                                 ( (uint8) 0xFF)
#define C_RDCI_UIW_TH_NC_MASK                                 ( (uint8) 0xFF)
#define C_RDCI_PANNE_TH_MASK                                  ( (uint8) 0xFF)
#define C_RDCI_MIN_RCP_FA_MASK                                ( (uint8) 0xFF)
#define C_RDCI_MIN_RCP_RA_MASK                                ( (uint8) 0xFF)
#define C_RDCI_DELTA_P_L_R_MASK                               ( (uint8) 0xFF)
#define C_RDCI_P_INIT_RANGE_MAX_MASK                          ( (uint8) 0xFF)
#define C_RDCI_TIMEOUT_PREWARN_MASK                           ( (uint8) 0xFF)
#define C_RDCI_DT_AMB_PREWARN_MASK                            ( (uint8) 0xFF)
#define C_RDCI_DP_TO_I_PMIN_MASK                              ( (uint8) 0xFF)
#define C_RDCI_LEARN_LOCATE_CONFIG_MASK_0                     ( (uint8) 0xFF)
#define C_RDCI_LEARN_LOCATE_CONFIG_MASK_1                     ( (uint8) 0xFF)
#define C_RDCI_XMIN_COOL_TIRE_MASK                            ( (uint8) 0xFF)
#define C_RDCI_MAX_COR_TIME_MASK                              ( (uint8) 0xFF)
#define C_RDCI_MAX_COR_RCP_MASK                               ( (uint8) 0xFF)
#define C_RDCI_TH_C_TOL_MASK                                  ( (uint8) 0x0F)
#define C_RDCI_TH_NC_TOL_MASK                                 ( (uint8) 0xF0)
#define C_RDCI_LONG_HOLD_TIME_MASK                            ( (uint8) 0x0F)
#define C_RDCI_SHORT_HOLD_TIME_MASK                           ( (uint8) 0x70)
#define C_RDCI_ECO_RCP_ENABLE_MASK                            ( (uint8) 0x80)
#define C_RDCI_DEFAULT_LOAD_COND_MASK                         ( (uint8) 0x01)
#define C_RDCI_ERFS_PLACARD_SOURCE_MASK                       ( (uint8) 0x06)
#define C_RDCI_DEFAULT_MENU_SEL_MASK                          ( (uint8) 0x08)
#define C_RDCI_DISP_CONF_TIMEOUT_MASK                         ( (uint8) 0xF0)
#define C_RDCI_RID_ENABLE_MASK                                ( (uint8) 0x01)
#define C_RDCI_RESERVE_24_MASK                                ( (uint8) 0xFE)
#define C_RDCI_TREF_SEAS_ADJ_CONFIG_MASK_0                    ( (uint8) 0xFF)
#define C_RDCI_TREF_SEAS_ADJ_CONFIG_MASK_1                    ( (uint8) 0xFF)
#define C_RDCI_TREF_SEAS_ADJ_CONFIG_MASK_2                    ( (uint8) 0xFF)
#define C_RDCI_TREF_SEAS_ADJ_CONFIG_MASK_3                    ( (uint8) 0xFF)
#define C_RDCI_RESERVE_29_MASK                                ( (uint8) 0xFF)

#define C_RDCI_SPEED_CCM_ENABLE_MASK                          ( (uint8) 0x01)
#define C_RDCI_SPEED_CCM_HYST_MASK                            ( (uint8) 0xFF)
#define C_RDCI_SPEED_CCM_PRESS_OFFSET_FA_MASK_0               ( (uint8) 0xFF)
#define C_RDCI_SPEED_CCM_PRESS_OFFSET_FA_MASK_1               ( (uint8) 0xFF)
#define C_RDCI_SPEED_CCM_PRESS_OFFSET_RA_MASK_0               ( (uint8) 0xFF)
#define C_RDCI_SPEED_CCM_PRESS_OFFSET_RA_MASK_1               ( (uint8) 0xFF)
#define C_RDCI_SPEED_CCM_TH_MASK_0                            ( (uint8) 0xFF)
#define C_RDCI_SPEED_CCM_TH_MASK_1                            ( (uint8) 0xFF)
#define C_RDCI_SPEED_CCM_TIME_MASK                            ( (uint8) 0xFF)

#define C_RDCI_PARK_SUP_EXT_PARK_SUP_CONFIG_MASK              ( (uint8) 0xFF)
#define C_RDCI_PARK_SUP_MOBILITY_LOSS_THRESHOLD_MASK          ( (uint8) 0xFF)
#define C_RDCI_PARK_SUP_NOTIFICATION_THRESHOLD_VALUE_C_MASK   ( (uint8) 0xFF)
#define C_RDCI_PARK_SUP_NOTIFICATION_THRESHOLD_VALUE_NC_MASK  ( (uint8) 0xFF)
#define C_RDCI_PARK_SUP_TOL_NO_TEMP_COMP_MASK                 ( (uint8) 0xFF)
#define C_RDCI_PARK_SUP_TOL_TEMP_COMP_MASK                    ( (uint8) 0xFF)
#define C_RDCI_PARK_SUP_WARNING_THRESHOLD_VALUE_C_MASK        ( (uint8) 0xFF)
#define C_RDCI_PARK_SUP_WARNING_THRESHOLD_VALUE_NC_MASK       ( (uint8) 0xFF)

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
extern void NVM_ReadAllCalPrmBlocks(void);
extern void NVM_WriteAllCalPrmBlocks(void);
extern uint8 NvmDscCodierdatenAllgemein_ReadByte(uint8 , uint8);
extern void NvmDscCodierdatenAllgemein_WriteByte(uint8 , uint8 , uint8);
extern uint8 NvmDscCodierdatenRDCi_ReadByte(uint8 , uint8);
extern void NvmDscCodierdatenRDCi_WriteByte(uint8 , uint8 , uint8);
extern void NvmDscCodierdatenRDCi_Activate(uint8);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
#endif

