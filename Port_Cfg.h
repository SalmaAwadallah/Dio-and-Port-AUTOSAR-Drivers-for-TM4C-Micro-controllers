 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_Cfg.h
 *
 * Description: Pre-Compile Configuration Header file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Salma Ali
 ******************************************************************************/

#ifndef PORT_CFG_H
#define PORT_CFG_H

/*
 * Module Version 1.0.0
 */
#define PORT_CFG_SW_MAJOR_VERSION              (1U)
#define PORT_CFG_SW_MINOR_VERSION              (0U)
#define PORT_CFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_CFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_CFG_AR_RELEASE_PATCH_VERSION     (3U)

/* Pre-compile option for Development Error Detect */
#define PORT_DEV_ERROR_DETECT                   (STD_ON)

/* Pre-compile option for Version Info API */
#define PORT_VERSION_INFO_API                   (STD_ON)

/* Pre-compile option for Set Pin Direction API */
#define PORT_SET_PIN_DIRECTION_API              (STD_ON)

/* Number of configured Port Pins */
#define PORT_CONFIGURED_PINS                     (43U)

/* Number of MODES that can be supported by a pin */
#define PORT_MODE_RANGE                         (17U)


/* Pin Index in the array of structures in Port_PBcfg.c */
#define PortConf_A0_PIN_ID_INDEX        (uint8)0x00
#define PortConf_A1_PIN_ID_INDEX        (uint8)0x01 
#define PortConf_A2_PIN_ID_INDEX        (uint8)0x02
#define PortConf_A3_PIN_ID_INDEX        (uint8)0x03
#define PortConf_A4_PIN_ID_INDEX        (uint8)0x04
#define PortConf_A5_PIN_ID_INDEX        (uint8)0x05
#define PortConf_A6_PIN_ID_INDEX        (uint8)0x06
#define PortConf_A7_PIN_ID_INDEX        (uint8)0x07 

#define PortConf_B0_PIN_ID_INDEX        (uint8)0x08
#define PortConf_B1_PIN_ID_INDEX        (uint8)0x09
#define PortConf_B2_PIN_ID_INDEX        (uint8)0x0A
#define PortConf_B3_PIN_ID_INDEX        (uint8)0x0B
#define PortConf_B4_PIN_ID_INDEX        (uint8)0x0C
#define PortConf_B5_PIN_ID_INDEX        (uint8)0x0D
#define PortConf_B6_PIN_ID_INDEX        (uint8)0x0E
#define PortConf_B7_PIN_ID_INDEX        (uint8)0x0F

#define PortConf_C0_PIN_ID_INDEX        (uint8)0x10
#define PortConf_C1_PIN_ID_INDEX        (uint8)0x11
#define PortConf_C2_PIN_ID_INDEX        (uint8)0x12
#define PortConf_C3_PIN_ID_INDEX        (uint8)0x13 
#define PortConf_C4_PIN_ID_INDEX        (uint8)0x14
#define PortConf_C5_PIN_ID_INDEX        (uint8)0x15
#define PortConf_C6_PIN_ID_INDEX        (uint8)0x16
#define PortConf_C7_PIN_ID_INDEX        (uint8)0x17

#define PortConf_D0_PIN_ID_INDEX        (uint8)0x18
#define PortConf_D1_PIN_ID_INDEX        (uint8)0x19
#define PortConf_D2_PIN_ID_INDEX        (uint8)0x1A
#define PortConf_D3_PIN_ID_INDEX        (uint8)0x1B
#define PortConf_D4_PIN_ID_INDEX        (uint8)0x1C
#define PortConf_D5_PIN_ID_INDEX        (uint8)0x1D
#define PortConf_D6_PIN_ID_INDEX        (uint8)0x1E
#define PortConf_D7_PIN_ID_INDEX        (uint8)0x1F

#define PortConf_E0_PIN_ID_INDEX        (uint8)0x20
#define PortConf_E1_PIN_ID_INDEX        (uint8)0x21
#define PortConf_E2_PIN_ID_INDEX        (uint8)0x22
#define PortConf_E3_PIN_ID_INDEX        (uint8)0x23
#define PortConf_E4_PIN_ID_INDEX        (uint8)0x24
#define PortConf_E5_PIN_ID_INDEX        (uint8)0x25

#define PortConf_F0_PIN_ID_INDEX        (uint8)0x26
#define PortConf_LED1_PIN_ID_INDEX      (uint8)0x27 
#define PortConf_F2_PIN_ID_INDEX        (uint8)0x28
#define PortConf_F3_PIN_ID_INDEX        (uint8)0x29
#define PortConf_SW1_PIN_ID_INDEX       (uint8)0x2A 

/* PORT Configured Port IDs  */
#define PortConf_A0_PORT_NUM                 (Port_PortType)0 /* PORTA */
#define PortConf_A1_PORT_NUM                 (Port_PortType)0 /* PORTA */
#define PortConf_A2_PORT_NUM                 (Port_PortType)0 /* PORTA */
#define PortConf_A3_PORT_NUM                 (Port_PortType)0 /* PORTA */
#define PortConf_A4_PORT_NUM                 (Port_PortType)0 /* PORTA */
#define PortConf_A5_PORT_NUM                 (Port_PortType)0 /* PORTA */
#define PortConf_A6_PORT_NUM                 (Port_PortType)0 /* PORTA */
#define PortConf_A7_PORT_NUM                 (Port_PortType)0 /* PORTA */

#define PortConf_B0_PORT_NUM                 (Port_PortType)1 /* PORTB */
#define PortConf_B1_PORT_NUM                 (Port_PortType)1 /* PORTB */
#define PortConf_B2_PORT_NUM                 (Port_PortType)1 /* PORTB */
#define PortConf_B3_PORT_NUM                 (Port_PortType)1 /* PORTB */
#define PortConf_B4_PORT_NUM                 (Port_PortType)1 /* PORTB */
#define PortConf_B5_PORT_NUM                 (Port_PortType)1 /* PORTB */
#define PortConf_B6_PORT_NUM                 (Port_PortType)1 /* PORTB */
#define PortConf_B7_PORT_NUM                 (Port_PortType)1 /* PORTB */

#define PortConf_C0_PORT_NUM                 (Port_PortType)2 /* PORTC */
#define PortConf_C1_PORT_NUM                 (Port_PortType)2 /* PORTC */
#define PortConf_C2_PORT_NUM                 (Port_PortType)2 /* PORTC */
#define PortConf_C3_PORT_NUM                 (Port_PortType)2 /* PORTC */
#define PortConf_C4_PORT_NUM                 (Port_PortType)2 /* PORTC */
#define PortConf_C5_PORT_NUM                 (Port_PortType)2 /* PORTC */
#define PortConf_C6_PORT_NUM                 (Port_PortType)2 /* PORTC */
#define PortConf_C7_PORT_NUM                 (Port_PortType)2 /* PORTC */

#define PortConf_D0_PORT_NUM                 (Port_PortType)3 /* PORTD */
#define PortConf_D1_PORT_NUM                 (Port_PortType)3 /* PORTD */
#define PortConf_D2_PORT_NUM                 (Port_PortType)3 /* PORTD */
#define PortConf_D3_PORT_NUM                 (Port_PortType)3 /* PORTD */
#define PortConf_D4_PORT_NUM                 (Port_PortType)3 /* PORTD */
#define PortConf_D5_PORT_NUM                 (Port_PortType)3 /* PORTD */
#define PortConf_D6_PORT_NUM                 (Port_PortType)3 /* PORTD */
#define PortConf_D7_PORT_NUM                 (Port_PortType)3 /* PORTD */

#define PortConf_E0_PORT_NUM                 (Port_PortType)4 /* PORTE */
#define PortConf_E1_PORT_NUM                 (Port_PortType)4 /* PORTE */
#define PortConf_E2_PORT_NUM                 (Port_PortType)4 /* PORTE */
#define PortConf_E3_PORT_NUM                 (Port_PortType)4 /* PORTE */
#define PortConf_E4_PORT_NUM                 (Port_PortType)4 /* PORTE */
#define PortConf_E5_PORT_NUM                 (Port_PortType)4 /* PORTE */

#define PortConf_F0_PORT_NUM                 (Port_PortType)5 /* PORTF */
#define PortConf_LED1_PORT_NUM               (Port_PortType)5 /* PORTF */
#define PortConf_F2_PORT_NUM                 (Port_PortType)5 /* PORTF */
#define PortConf_F3_PORT_NUM                 (Port_PortType)5 /* PORTF */
#define PortConf_SW1_PORT_NUM                (Port_PortType)5 /* PORTF */


/*PORT Configured Pin IDs */
#define PortConf_A0_PIN_NUM                  (Port_PinType)0/* Pin 0 in PORTA */
#define PortConf_A1_PIN_NUM                  (Port_PinType)1/* Pin 1 in PORTA */
#define PortConf_A2_PIN_NUM                  (Port_PinType)2/* Pin 2 in PORTA */
#define PortConf_A3_PIN_NUM                  (Port_PinType)3/* Pin 3 in PORTA */
#define PortConf_A4_PIN_NUM                  (Port_PinType)4/* Pin 4 in PORTA */
#define PortConf_A5_PIN_NUM                  (Port_PinType)5/* Pin 5 in PORTA */
#define PortConf_A6_PIN_NUM                  (Port_PinType)6/* Pin 6 in PORTA */
#define PortConf_A7_PIN_NUM                  (Port_PinType)7/* Pin 7 in PORTA */

#define PortConf_B0_PIN_NUM                  (Port_PinType)0/* Pin 0 in PORTB */
#define PortConf_B1_PIN_NUM                  (Port_PinType)1/* Pin 1 in PORTB */
#define PortConf_B2_PIN_NUM                  (Port_PinType)2/* Pin 2 in PORTB */
#define PortConf_B3_PIN_NUM                  (Port_PinType)3/* Pin 3 in PORTB */
#define PortConf_B4_PIN_NUM                  (Port_PinType)4/* Pin 4 in PORTB */
#define PortConf_B5_PIN_NUM                  (Port_PinType)5/* Pin 5 in PORTB */
#define PortConf_B6_PIN_NUM                  (Port_PinType)6/* Pin 6 in PORTB */
#define PortConf_B7_PIN_NUM                  (Port_PinType)7/* Pin 7 in PORTB */

#define PortConf_C0_PIN_NUM                  (Port_PinType)0/* Pin 0 in PORTC */
#define PortConf_C1_PIN_NUM                  (Port_PinType)1/* Pin 1 in PORTC */
#define PortConf_C2_PIN_NUM                  (Port_PinType)2/* Pin 2 in PORTC */
#define PortConf_C3_PIN_NUM                  (Port_PinType)3/* Pin 3 in PORTC */
#define PortConf_C4_PIN_NUM                  (Port_PinType)4/* Pin 4 in PORTC */
#define PortConf_C5_PIN_NUM                  (Port_PinType)5/* Pin 5 in PORTC */
#define PortConf_C6_PIN_NUM                  (Port_PinType)6/* Pin 6 in PORTC */
#define PortConf_C7_PIN_NUM                  (Port_PinType)7/* Pin 7 in PORTC */


#define PortConf_D0_PIN_NUM                  (Port_PinType)0/* Pin 0 in PORTD */
#define PortConf_D1_PIN_NUM                  (Port_PinType)1/* Pin 1 in PORTD */
#define PortConf_D2_PIN_NUM                  (Port_PinType)2/* Pin 2 in PORTD */
#define PortConf_D3_PIN_NUM                  (Port_PinType)3/* Pin 3 in PORTD */
#define PortConf_D4_PIN_NUM                  (Port_PinType)4/* Pin 4 in PORTD */
#define PortConf_D5_PIN_NUM                  (Port_PinType)5/* Pin 5 in PORTD */
#define PortConf_D6_PIN_NUM                  (Port_PinType)6/* Pin 6 in PORTD */
#define PortConf_D7_PIN_NUM                  (Port_PinType)7/* Pin 7 in PORTD */


#define PortConf_E0_PIN_NUM                  (Port_PinType)0/* Pin 0 in PORTE */
#define PortConf_E1_PIN_NUM                  (Port_PinType)1/* Pin 1 in PORTE */
#define PortConf_E2_PIN_NUM                  (Port_PinType)2/* Pin 2 in PORTE */
#define PortConf_E3_PIN_NUM                  (Port_PinType)3/* Pin 3 in PORTE */
#define PortConf_E4_PIN_NUM                  (Port_PinType)4/* Pin 4 in PORTE */
#define PortConf_E5_PIN_NUM                  (Port_PinType)5/* Pin 5 in PORTE */


#define PortConf_F0_PIN_NUM                   (Port_PinType)0/* Pin 0 in PORTF */
#define PortConf_LED1_PIN_NUM                 (Port_PinType)1/* Pin 1 in PORTF */
#define PortConf_F2_PIN_NUM                   (Port_PinType)2/* Pin 2 in PORTF */
#define PortConf_F3_PIN_NUM                   (Port_PinType)3/* Pin 3 in PORTF */
#define PortConf_SW1_PIN_NUM                  (Port_PinType)4/* Pin 4 in PORTF */


/* PORT configured Pin Direction */ 
#define PortConf_A0_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 0 driection in PORTA to the default pin dirction*/
#define PortConf_A1_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 1 driection in PORTA to the default pin dirction*/
#define PortConf_A2_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 2 driection in PORTA to the default pin dirction*/
#define PortConf_A3_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 3 driection in PORTA to the default pin dirction*/
#define PortConf_A4_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 4 driection in PORTA to the default pin dirction*/ 
#define PortConf_A5_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 5 driection in PORTA to the default pin dirction*/
#define PortConf_A6_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 6 driection in PORTA to the default pin dirction*/ 
#define PortConf_A7_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 7 driection in PORTA to the default pin dirction*/ 

#define PortConf_B0_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 0 driection in PORTB to the default pin dirction*/
#define PortConf_B1_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 1 driection in PORTB to the default pin dirction*/ 
#define PortConf_B2_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 2 driection in PORTB to the default pin dirction*/
#define PortConf_B3_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 3 driection in PORTB to the default pin dirction*/
#define PortConf_B4_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 4 driection in PORTB to the default pin dirction*/ 
#define PortConf_B5_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 5 driection in PORTB to the default pin dirction*/ 
#define PortConf_B6_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 6 driection in PORTB to the default pin dirction*/ 
#define PortConf_B7_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 7 driection in PORTB to the default pin dirction*/

#define PortConf_C0_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 0 driection in PORTC to the default pin dirction*/
#define PortConf_C1_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 1 driection in PORTC to the default pin dirction*/ 
#define PortConf_C2_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 2 driection in PORTC to the default pin dirction*/ 
#define PortConf_C3_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 3 driection in PORTC to the default pin dirction*/ 
#define PortConf_C4_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 4 driection in PORTC to the default pin dirction*/
#define PortConf_C5_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 5 driection in PORTC to the default pin dirction*/  
#define PortConf_C6_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 6 driection in PORTC to the default pin dirction*/ 
#define PortConf_C7_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 7 driection in PORTC to the default pin dirction*/ 

#define PortConf_D0_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 0 driection in PORTD to the default pin dirction*/
#define PortConf_D1_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 1 driection in PORTD to the default pin dirction*/
#define PortConf_D2_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 2 driection in PORTD to the default pin dirction*/ 
#define PortConf_D3_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 3 driection in PORTD to the default pin dirction*/  
#define PortConf_D4_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 4 driection in PORTD to the default pin dirction*/
#define PortConf_D5_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 5 driection in PORTD to the default pin dirction*/ 
#define PortConf_D6_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 6 driection in PORTD to the default pin dirction*/ 
#define PortConf_D7_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 7 driection in PORTD to the default pin dirction*/

#define PortConf_E0_PIN_DIRECTION                   (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 0 driection in PORTE to the default pin dirction*/
#define PortConf_E1_PIN_DIRECTION                   (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 1 driection in PORTE to the default pin dirction*/ 
#define PortConf_E2_PIN_DIRECTION                   (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 2 driection in PORTE to the default pin dirction*/ 
#define PortConf_E3_PIN_DIRECTION                   (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 3 driection in PORTE to the default pin dirction*/ 
#define PortConf_E4_PIN_DIRECTION                   (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 4 driection in PORTE to the default pin dirction*/ 
#define PortConf_E5_PIN_DIRECTION                   (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 5 driection in PORTE to the default pin dirction*/ 

#define PortConf_F0_PIN_DIRECTION                   (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 0 driection in PORTF to the default pin dirction*/ 
#define PortConf_LED1_PIN_DIRECTION                 (Port_PinDirectionType)PORT_PIN_OUT/*configure Pin 1 driection in PORTF as an output pin*/ 
#define PortConf_F2_PIN_DIRECTION                   (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 2 driection in PORTF to the default pin dirction*/  
#define PortConf_F3_PIN_DIRECTION                   (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 3 driection in PORTF to the default pin dirction*/ 
#define PortConf_SW1_PIN_DIRECTION                  (Port_PinDirectionType)PORT_PIN_IN/*configure Pin 5 driection in PORTF as an input pin*/ 

/*PORT configured Pin Mode */
#define PortConf_A0_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0
#define PortConf_A1_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0 
#define PortConf_A2_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0
#define PortConf_A3_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0
#define PortConf_A4_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0 
#define PortConf_A5_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0
#define PortConf_A6_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0 
#define PortConf_A7_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0 

#define PortConf_B0_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0 
#define PortConf_B1_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0 
#define PortConf_B2_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0 
#define PortConf_B3_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0
#define PortConf_B4_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0 
#define PortConf_B5_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0 
#define PortConf_B6_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0 
#define PortConf_B7_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0

#define PortConf_C0_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0
#define PortConf_C1_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0 
#define PortConf_C2_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0 
#define PortConf_C3_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0 
#define PortConf_C4_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0
#define PortConf_C5_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0 
#define PortConf_C6_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0
#define PortConf_C7_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0 

#define PortConf_D0_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0 
#define PortConf_D1_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0
#define PortConf_D2_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0
#define PortConf_D3_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0 
#define PortConf_D4_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0 
#define PortConf_D5_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0 
#define PortConf_D6_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0
#define PortConf_D7_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0 

#define PortConf_E0_PIN_MODE                   (Port_PinMode)DIGITAL_MODE0 
#define PortConf_E1_PIN_MODE                   (Port_PinMode)DIGITAL_MODE0 
#define PortConf_E2_PIN_MODE                   (Port_PinMode)DIGITAL_MODE0 
#define PortConf_E3_PIN_MODE                   (Port_PinMode)DIGITAL_MODE0 
#define PortConf_E4_PIN_MODE                   (Port_PinMode)DIGITAL_MODE0 
#define PortConf_E5_PIN_MODE                   (Port_PinMode)DIGITAL_MODE0 

#define PortConf_F0_PIN_MODE                   (Port_PinMode)DIGITAL_MODE0 
#define PortConf_LED1_PIN_MODE                 (Port_PinMode)DIGITAL_MODE0 
#define PortConf_F2_PIN_MODE                   (Port_PinMode)DIGITAL_MODE0 
#define PortConf_F3_PIN_MODE                   (Port_PinMode)DIGITAL_MODE0 
#define PortConf_SW1_PIN_MODE                  (Port_PinMode)DIGITAL_MODE0 
  
/*PORT configured Pin internal resisitor*/
#define PortConf_A0_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_A1_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_A2_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_A3_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF
#define PortConf_A4_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_A5_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF
#define PortConf_A6_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_A7_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 

#define PortConf_B0_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_B1_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_B2_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_B3_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF
#define PortConf_B4_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_B5_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_B6_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_B7_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF

#define PortConf_C0_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF
#define PortConf_C1_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_C2_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_C3_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_C4_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF
#define PortConf_C5_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_C6_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF
#define PortConf_C7_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 

#define PortConf_D0_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_D1_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF
#define PortConf_D2_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF
#define PortConf_D3_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_D4_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_D5_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_D6_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF
#define PortConf_D7_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 

#define PortConf_E0_PIN_INTERNAL_RESISTOR                   (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_E1_PIN_INTERNAL_RESISTOR                   (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_E2_PIN_INTERNAL_RESISTOR                   (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_E3_PIN_INTERNAL_RESISTOR                   (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_E4_PIN_INTERNAL_RESISTOR                   (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_E5_PIN_INTERNAL_RESISTOR                   (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 

#define PortConf_F0_PIN_INTERNAL_RESISTOR                   (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_LED1_PIN_INTERNAL_RESISTOR                 (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_F2_PIN_INTERNAL_RESISTOR                   (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_F3_PIN_INTERNAL_RESISTOR                   (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_OFF 
#define PortConf_SW1_PIN_INTERNAL_RESISTOR                  (Port_InternalResistorType)PORT_INTERNAL_RESISTOR_PULL_UP 

/*PORT configured Pin initial value*/
#define PortConf_A0_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW
#define PortConf_A1_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW 
#define PortConf_A2_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW
#define PortConf_A3_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW
#define PortConf_A4_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW
#define PortConf_A5_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW
#define PortConf_A6_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW
#define PortConf_A7_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW 

#define PortConf_B0_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW
#define PortConf_B1_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW
#define PortConf_B2_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW
#define PortConf_B3_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW
#define PortConf_B4_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW 
#define PortConf_B5_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW 
#define PortConf_B6_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW 
#define PortConf_B7_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW

#define PortConf_C0_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW
#define PortConf_C1_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW 
#define PortConf_C2_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW 
#define PortConf_C3_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW 
#define PortConf_C4_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW
#define PortConf_C5_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW 
#define PortConf_C6_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW
#define PortConf_C7_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW 

#define PortConf_D0_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW 
#define PortConf_D1_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW
#define PortConf_D2_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW
#define PortConf_D3_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW 
#define PortConf_D4_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW 
#define PortConf_D5_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW 
#define PortConf_D6_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW
#define PortConf_D7_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW 

#define PortConf_E0_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW 
#define PortConf_E1_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW 
#define PortConf_E2_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW 
#define PortConf_E3_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW 
#define PortConf_E4_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW 
#define PortConf_E5_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW

#define PortConf_F0_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW
#define PortConf_LED1_PIN_INITIAL_VALUE         (Port_PinLevelInit)STD_LOW 
#define PortConf_F2_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW 
#define PortConf_F3_PIN_INITIAL_VALUE           (Port_PinLevelInit)STD_LOW 
#define PortConf_SW1_PIN_INITIAL_VALUE          (Port_PinLevelInit)STD_LOW 

/*PORT configured Pin Direction is changeable*/
#define PortConf_A0_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_A1_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE 
#define PortConf_A2_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_A3_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_A4_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_A5_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_A6_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_A7_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE 

#define PortConf_B0_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_B1_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_B2_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_B3_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_B4_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE 
#define PortConf_B5_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE 
#define PortConf_B6_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE 
#define PortConf_B7_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE

#define PortConf_C0_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_C1_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_C2_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE 
#define PortConf_C3_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE 
#define PortConf_C4_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_C5_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE 
#define PortConf_C6_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_C7_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE 

#define PortConf_D0_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_D1_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_D2_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_D3_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE 
#define PortConf_D4_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_D5_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_D6_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_D7_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE 

#define PortConf_E0_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_E1_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE 
#define PortConf_E2_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_E3_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE 
#define PortConf_E4_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_E5_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE 

#define PortConf_F0_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_LED1_PIN_DIRECTION_CHANGEABLE (boolean)TRUE 
#define PortConf_F2_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE 
#define PortConf_F3_PIN_DIRECTION_CHANGEABLE   (boolean)TRUE
#define PortConf_SW1_PIN_DIRECTION_CHANGEABLE  (boolean)TRUE 

/*PORT configured Pin Mode is changeable*/
#define PortConf_A0_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_A1_PIN_MODE_CHANGEABLE   (boolean)TRUE 
#define PortConf_A2_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_A3_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_A4_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_A5_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_A6_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_A7_PIN_MODE_CHANGEABLE   (boolean)TRUE 

#define PortConf_B0_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_B1_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_B2_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_B3_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_B4_PIN_MODE_CHANGEABLE   (boolean)TRUE 
#define PortConf_B5_PIN_MODE_CHANGEABLE   (boolean)TRUE 
#define PortConf_B6_PIN_MODE_CHANGEABLE   (boolean)TRUE 
#define PortConf_B7_PIN_MODE_CHANGEABLE   (boolean)TRUE

#define PortConf_C0_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_C1_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_C2_PIN_MODE_CHANGEABLE   (boolean)TRUE 
#define PortConf_C3_PIN_MODE_CHANGEABLE   (boolean)TRUE 
#define PortConf_C4_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_C5_PIN_MODE_CHANGEABLE   (boolean)TRUE 
#define PortConf_C6_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_C7_PIN_MODE_CHANGEABLE   (boolean)TRUE 

#define PortConf_D0_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_D1_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_D2_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_D3_PIN_MODE_CHANGEABLE   (boolean)TRUE 
#define PortConf_D4_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_D5_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_D6_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_D7_PIN_MODE_CHANGEABLE   (boolean)TRUE 

#define PortConf_E0_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_E1_PIN_MODE_CHANGEABLE   (boolean)TRUE 
#define PortConf_E2_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_E3_PIN_MODE_CHANGEABLE   (boolean)TRUE 
#define PortConf_E4_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_E5_PIN_MODE_CHANGEABLE   (boolean)TRUE 

#define PortConf_F0_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_LED1_PIN_MODE_CHANGEABLE (boolean)TRUE 
#define PortConf_F2_PIN_MODE_CHANGEABLE   (boolean)TRUE 
#define PortConf_F3_PIN_MODE_CHANGEABLE   (boolean)TRUE
#define PortConf_SW1_PIN_MODE_CHANGEABLE  (boolean)TRUE 


#endif