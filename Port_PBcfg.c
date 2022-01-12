 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Salma Ali
 ******************************************************************************/

#include "Port.h"

/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)

/* AUTOSAR Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif

/* PB structure used with Port_Init API */
   const Port_ConfigType Port_Configuration ={
                                            PortConf_A0_PORT_NUM,PortConf_A0_PIN_NUM,PortConf_A0_PIN_DIRECTION,PortConf_A0_PIN_MODE,
                                             PortConf_A0_PIN_INTERNAL_RESISTOR,PortConf_A0_PIN_INITIAL_VALUE,PortConf_A0_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_A0_PIN_MODE_CHANGEABLE,
                                               
                                             PortConf_A1_PORT_NUM,PortConf_A1_PIN_NUM,PortConf_A1_PIN_DIRECTION,PortConf_A1_PIN_MODE,
                                             PortConf_A1_PIN_INTERNAL_RESISTOR,PortConf_A1_PIN_INITIAL_VALUE,PortConf_A1_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_A1_PIN_MODE_CHANGEABLE,
                                               
                                             PortConf_A2_PORT_NUM,PortConf_A2_PIN_NUM,PortConf_A2_PIN_DIRECTION,PortConf_A2_PIN_MODE,
                                             PortConf_A2_PIN_INTERNAL_RESISTOR,PortConf_A2_PIN_INITIAL_VALUE,PortConf_A2_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_A2_PIN_MODE_CHANGEABLE,
                                             
                                             PortConf_A3_PORT_NUM,PortConf_A3_PIN_NUM,PortConf_A3_PIN_DIRECTION,PortConf_A3_PIN_MODE,
                                             PortConf_A3_PIN_INTERNAL_RESISTOR,PortConf_A3_PIN_INITIAL_VALUE,PortConf_A3_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_A3_PIN_MODE_CHANGEABLE,
                                            
				             PortConf_A4_PORT_NUM,PortConf_A4_PIN_NUM,PortConf_A4_PIN_DIRECTION,PortConf_A4_PIN_MODE,
                                             PortConf_A4_PIN_INTERNAL_RESISTOR,PortConf_A4_PIN_INITIAL_VALUE,PortConf_A4_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_A4_PIN_MODE_CHANGEABLE,
                                             
                                             PortConf_A5_PORT_NUM,PortConf_A5_PIN_NUM,PortConf_A5_PIN_DIRECTION,PortConf_A5_PIN_MODE,
                                             PortConf_A5_PIN_INTERNAL_RESISTOR,PortConf_A5_PIN_INITIAL_VALUE,PortConf_A5_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_A5_PIN_MODE_CHANGEABLE,
                                               
                                             PortConf_A6_PORT_NUM,PortConf_A6_PIN_NUM,PortConf_A6_PIN_DIRECTION,PortConf_A6_PIN_MODE,
                                             PortConf_A6_PIN_INTERNAL_RESISTOR,PortConf_A6_PIN_INITIAL_VALUE,PortConf_A6_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_A6_PIN_MODE_CHANGEABLE,
                                               
                                             PortConf_A7_PORT_NUM,PortConf_A7_PIN_NUM,PortConf_A7_PIN_DIRECTION,PortConf_A7_PIN_MODE,
                                             PortConf_A7_PIN_INTERNAL_RESISTOR,PortConf_A7_PIN_INITIAL_VALUE,PortConf_A7_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_A7_PIN_MODE_CHANGEABLE,
                                             
                                             PortConf_B0_PORT_NUM,PortConf_B0_PIN_NUM,PortConf_B0_PIN_DIRECTION,PortConf_B0_PIN_MODE,
                                             PortConf_B0_PIN_INTERNAL_RESISTOR,PortConf_B0_PIN_INITIAL_VALUE,PortConf_B0_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_B0_PIN_MODE_CHANGEABLE,
                                            
				             PortConf_B1_PORT_NUM,PortConf_B1_PIN_NUM,PortConf_B1_PIN_DIRECTION,PortConf_B1_PIN_MODE,
                                             PortConf_B1_PIN_INTERNAL_RESISTOR,PortConf_B1_PIN_INITIAL_VALUE,PortConf_B1_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_B1_PIN_MODE_CHANGEABLE,
                                             
                                             PortConf_B2_PORT_NUM,PortConf_B2_PIN_NUM,PortConf_B2_PIN_DIRECTION,PortConf_B2_PIN_MODE,
                                             PortConf_B2_PIN_INTERNAL_RESISTOR,PortConf_B2_PIN_INITIAL_VALUE,PortConf_B2_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_B2_PIN_MODE_CHANGEABLE,
                                               
                                             PortConf_B3_PORT_NUM,PortConf_B3_PIN_NUM,PortConf_B3_PIN_DIRECTION,PortConf_B3_PIN_MODE,
                                             PortConf_B3_PIN_INTERNAL_RESISTOR,PortConf_B3_PIN_INITIAL_VALUE,PortConf_B3_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_B3_PIN_MODE_CHANGEABLE,
                                               
                                             PortConf_B4_PORT_NUM,PortConf_B4_PIN_NUM,PortConf_B4_PIN_DIRECTION,PortConf_B4_PIN_MODE,
                                             PortConf_B4_PIN_INTERNAL_RESISTOR,PortConf_B4_PIN_INITIAL_VALUE,PortConf_B4_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_B4_PIN_MODE_CHANGEABLE,
                                             
                                             PortConf_B5_PORT_NUM,PortConf_B5_PIN_NUM,PortConf_B5_PIN_DIRECTION,PortConf_B5_PIN_MODE,
                                             PortConf_B5_PIN_INTERNAL_RESISTOR,PortConf_B5_PIN_INITIAL_VALUE,PortConf_B5_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_B5_PIN_MODE_CHANGEABLE,
                                            
				             PortConf_B6_PORT_NUM,PortConf_B6_PIN_NUM,PortConf_B6_PIN_DIRECTION,PortConf_B6_PIN_MODE,
                                             PortConf_B6_PIN_INTERNAL_RESISTOR,PortConf_B6_PIN_INITIAL_VALUE,PortConf_B6_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_B6_PIN_MODE_CHANGEABLE,
                                             
                                             PortConf_B7_PORT_NUM,PortConf_B7_PIN_NUM,PortConf_B7_PIN_DIRECTION,PortConf_B7_PIN_MODE,
                                             PortConf_B7_PIN_INTERNAL_RESISTOR,PortConf_B7_PIN_INITIAL_VALUE,PortConf_B7_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_B7_PIN_MODE_CHANGEABLE,
                                               
                                            PortConf_C0_PORT_NUM,PortConf_C0_PIN_NUM,PortConf_C0_PIN_DIRECTION,PortConf_C0_PIN_MODE,
                                             PortConf_C0_PIN_INTERNAL_RESISTOR,PortConf_C0_PIN_INITIAL_VALUE,PortConf_C0_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_C0_PIN_MODE_CHANGEABLE,
                                               
                                             PortConf_C1_PORT_NUM,PortConf_C1_PIN_NUM,PortConf_C1_PIN_DIRECTION,PortConf_C1_PIN_MODE,
                                             PortConf_C1_PIN_INTERNAL_RESISTOR,PortConf_C1_PIN_INITIAL_VALUE,PortConf_C1_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_C1_PIN_MODE_CHANGEABLE,
                                             
                                             PortConf_C2_PORT_NUM,PortConf_C2_PIN_NUM,PortConf_C2_PIN_DIRECTION,PortConf_C2_PIN_MODE,
                                             PortConf_C2_PIN_INTERNAL_RESISTOR,PortConf_C2_PIN_INITIAL_VALUE,PortConf_C2_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_C2_PIN_MODE_CHANGEABLE,
                                            
				             PortConf_C3_PORT_NUM,PortConf_C3_PIN_NUM,PortConf_C3_PIN_DIRECTION,PortConf_C3_PIN_MODE,
                                             PortConf_C3_PIN_INTERNAL_RESISTOR,PortConf_C3_PIN_INITIAL_VALUE,PortConf_C3_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_C3_PIN_MODE_CHANGEABLE,
                                             
                                             PortConf_C4_PORT_NUM,PortConf_C4_PIN_NUM,PortConf_C4_PIN_DIRECTION,PortConf_C4_PIN_MODE,
                                             PortConf_C4_PIN_INTERNAL_RESISTOR,PortConf_C4_PIN_INITIAL_VALUE,PortConf_C4_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_C4_PIN_MODE_CHANGEABLE,
                                               
                                             PortConf_C5_PORT_NUM,PortConf_C5_PIN_NUM,PortConf_C5_PIN_DIRECTION,PortConf_C5_PIN_MODE,
                                             PortConf_C5_PIN_INTERNAL_RESISTOR,PortConf_C5_PIN_INITIAL_VALUE,PortConf_C5_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_C5_PIN_MODE_CHANGEABLE,
                                             
                                             PortConf_C6_PORT_NUM,PortConf_C6_PIN_NUM,PortConf_C6_PIN_DIRECTION,PortConf_C6_PIN_MODE,
                                             PortConf_C6_PIN_INTERNAL_RESISTOR,PortConf_C6_PIN_INITIAL_VALUE,PortConf_C6_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_C6_PIN_MODE_CHANGEABLE,
                                             
                                             PortConf_C7_PORT_NUM,PortConf_C7_PIN_NUM,PortConf_C7_PIN_DIRECTION,PortConf_C7_PIN_MODE,
                                             PortConf_C7_PIN_INTERNAL_RESISTOR,PortConf_C7_PIN_INITIAL_VALUE,PortConf_C7_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_C7_PIN_MODE_CHANGEABLE,
                                            
				             PortConf_D0_PORT_NUM,PortConf_D0_PIN_NUM,PortConf_D0_PIN_DIRECTION,PortConf_D0_PIN_MODE,
                                             PortConf_D0_PIN_INTERNAL_RESISTOR,PortConf_D0_PIN_INITIAL_VALUE,PortConf_D0_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_D0_PIN_MODE_CHANGEABLE,
                                             
                                             PortConf_D1_PORT_NUM,PortConf_D1_PIN_NUM,PortConf_D1_PIN_DIRECTION,PortConf_D1_PIN_MODE,
                                             PortConf_D1_PIN_INTERNAL_RESISTOR,PortConf_D1_PIN_INITIAL_VALUE,PortConf_D1_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_D1_PIN_MODE_CHANGEABLE,
                                               
                                             PortConf_D2_PORT_NUM,PortConf_D2_PIN_NUM,PortConf_D2_PIN_DIRECTION,PortConf_D2_PIN_MODE,
                                             PortConf_D2_PIN_INTERNAL_RESISTOR,PortConf_D2_PIN_INITIAL_VALUE,PortConf_D2_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_D2_PIN_MODE_CHANGEABLE,
                                               
                                             PortConf_D3_PORT_NUM,PortConf_D3_PIN_NUM,PortConf_D3_PIN_DIRECTION,PortConf_D3_PIN_MODE,
                                             PortConf_D3_PIN_INTERNAL_RESISTOR,PortConf_D3_PIN_INITIAL_VALUE,PortConf_D3_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_D3_PIN_MODE_CHANGEABLE,
                                             
                                             PortConf_D4_PORT_NUM,PortConf_D4_PIN_NUM,PortConf_D4_PIN_DIRECTION,PortConf_D4_PIN_MODE,
                                             PortConf_D4_PIN_INTERNAL_RESISTOR,PortConf_D4_PIN_INITIAL_VALUE,PortConf_D4_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_D4_PIN_MODE_CHANGEABLE,
                                             
                                             PortConf_D5_PORT_NUM,PortConf_D5_PIN_NUM,PortConf_D5_PIN_DIRECTION,PortConf_D5_PIN_MODE,
                                             PortConf_D5_PIN_INTERNAL_RESISTOR,PortConf_D5_PIN_INITIAL_VALUE,PortConf_D5_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_D5_PIN_MODE_CHANGEABLE,
                                             
                                             PortConf_D6_PORT_NUM,PortConf_D6_PIN_NUM,PortConf_D6_PIN_DIRECTION,PortConf_D6_PIN_MODE,
                                             PortConf_D6_PIN_INTERNAL_RESISTOR,PortConf_D6_PIN_INITIAL_VALUE,PortConf_D6_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_D6_PIN_MODE_CHANGEABLE,
                                               
                                             PortConf_D7_PORT_NUM,PortConf_D7_PIN_NUM,PortConf_D7_PIN_DIRECTION,PortConf_D7_PIN_MODE,
                                             PortConf_D7_PIN_INTERNAL_RESISTOR,PortConf_D7_PIN_INITIAL_VALUE,PortConf_D7_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_D7_PIN_MODE_CHANGEABLE,
                                               
                                             PortConf_E0_PORT_NUM,PortConf_E0_PIN_NUM,PortConf_E0_PIN_DIRECTION,PortConf_E0_PIN_MODE,
                                             PortConf_E0_PIN_INTERNAL_RESISTOR,PortConf_E0_PIN_INITIAL_VALUE,PortConf_E0_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_E0_PIN_MODE_CHANGEABLE,
                                             
                                             PortConf_E1_PORT_NUM,PortConf_E1_PIN_NUM,PortConf_E1_PIN_DIRECTION,PortConf_E1_PIN_MODE,
                                             PortConf_E1_PIN_INTERNAL_RESISTOR,PortConf_E1_PIN_INITIAL_VALUE,PortConf_E1_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_E1_PIN_MODE_CHANGEABLE,
                                               
                                             PortConf_E2_PORT_NUM,PortConf_E2_PIN_NUM,PortConf_E2_PIN_DIRECTION,PortConf_E2_PIN_MODE,
                                             PortConf_E2_PIN_INTERNAL_RESISTOR,PortConf_E2_PIN_INITIAL_VALUE,PortConf_E2_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_E2_PIN_MODE_CHANGEABLE,
                                               
                                             PortConf_E3_PORT_NUM,PortConf_E3_PIN_NUM,PortConf_E3_PIN_DIRECTION,PortConf_E3_PIN_MODE,
                                             PortConf_E3_PIN_INTERNAL_RESISTOR,PortConf_E3_PIN_INITIAL_VALUE,PortConf_E3_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_E3_PIN_MODE_CHANGEABLE,
                                             
                                             PortConf_E4_PORT_NUM,PortConf_E4_PIN_NUM,PortConf_E4_PIN_DIRECTION,PortConf_E4_PIN_MODE,
                                             PortConf_E4_PIN_INTERNAL_RESISTOR,PortConf_E4_PIN_INITIAL_VALUE,PortConf_E4_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_E4_PIN_MODE_CHANGEABLE,
                                             
                                             PortConf_E5_PORT_NUM,PortConf_E5_PIN_NUM,PortConf_E5_PIN_DIRECTION,PortConf_E5_PIN_MODE,
                                             PortConf_E5_PIN_INTERNAL_RESISTOR,PortConf_E5_PIN_INITIAL_VALUE,PortConf_E5_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_E5_PIN_MODE_CHANGEABLE,
     
                                             PortConf_F0_PORT_NUM,PortConf_F0_PIN_NUM,PortConf_F0_PIN_DIRECTION,PortConf_F0_PIN_MODE,
                                             PortConf_F0_PIN_INTERNAL_RESISTOR,PortConf_F0_PIN_INITIAL_VALUE,PortConf_F0_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_F0_PIN_MODE_CHANGEABLE,
                                              
                                             PortConf_LED1_PORT_NUM,PortConf_LED1_PIN_NUM,PortConf_LED1_PIN_DIRECTION,PortConf_LED1_PIN_MODE,
                                             PortConf_LED1_PIN_INTERNAL_RESISTOR,PortConf_LED1_PIN_INITIAL_VALUE,PortConf_LED1_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_LED1_PIN_MODE_CHANGEABLE,
                                             
                                             PortConf_F2_PORT_NUM,PortConf_F2_PIN_NUM,PortConf_F2_PIN_DIRECTION,PortConf_F2_PIN_MODE,
                                             PortConf_F2_PIN_INTERNAL_RESISTOR,PortConf_F2_PIN_INITIAL_VALUE,PortConf_F2_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_F2_PIN_MODE_CHANGEABLE,
                                             
                                             PortConf_F3_PORT_NUM,PortConf_F3_PIN_NUM,PortConf_F3_PIN_DIRECTION,PortConf_F3_PIN_MODE,
                                             PortConf_F3_PIN_INTERNAL_RESISTOR,PortConf_F3_PIN_INITIAL_VALUE,PortConf_F3_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_F3_PIN_MODE_CHANGEABLE,
                                             
                                             PortConf_SW1_PORT_NUM,PortConf_SW1_PIN_NUM,PortConf_SW1_PIN_DIRECTION,PortConf_SW1_PIN_MODE,
                                             PortConf_SW1_PIN_INTERNAL_RESISTOR,PortConf_SW1_PIN_INITIAL_VALUE,PortConf_SW1_PIN_DIRECTION_CHANGEABLE,
                                             PortConf_SW1_PIN_MODE_CHANGEABLE
                                             
				         };