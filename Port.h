 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - Port Driver.
 *
 * Author: Salma Ali
 ******************************************************************************/

#ifndef PORT_H
#define PORT_H
/* Id for the company in the AUTOSAR*/
#define PORT_VENDOR_ID    (1000U)

/* Dio Module Id */
#define PORT_MODULE_ID    (120U)

/* Dio Instance Id */
#define PORT_INSTANCE_ID  (0U)

/*
 * Module Version 1.0.0
 */
#define PORT_SW_MAJOR_VERSION           (1U)
#define PORT_SW_MINOR_VERSION           (0U)
#define PORT_SW_PATCH_VERSION           (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_AR_RELEASE_MAJOR_VERSION   (4U)
#define PORT_AR_RELEASE_MINOR_VERSION   (0U)
#define PORT_AR_RELEASE_PATCH_VERSION   (3U)

/*
 * Macros for Port Status
 */
#define PORT_INITIALIZED                (1U)
#define PORT_NOT_INITIALIZED            (0U)

/* Standard AUTOSAR types */
#include "Std_Types.h"

/* AUTOSAR checking between Std Types and Port Modules */
#if ((STD_TYPES_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (STD_TYPES_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Std_Types.h does not match the expected version"
#endif

/* PORT Pre-Compile Configuration Header file */
#include "Port_Cfg.h"

/* AUTOSAR Version checking between Port_Cfg.h and Port.h files */
#if ((PORT_CFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_CFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Port_Cfg.h does not match the expected version"
#endif

/* Software Version checking between Port_Cfg.h and Port.h files */
#if ((PORT_CFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_CFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_CFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of Port_Cfg.h does not match the expected version"
#endif

/* Non AUTOSAR files */
#include "Common_Macros.h"
 /******************************************************************************
 *                      API Service Id Macros                                 *
 ******************************************************************************/
/* Service ID for Port Init module*/
#define PORT_INIT_SID                             (uint8)0x00
 
   /* Service ID for PORT setPinDiection */
#define  PORT_SET_PIN_DIRECTION_SID               (uint8)0x01

   /* Service ID for PORT refreshPortDirection */
#define PORT_REFRESH_PORT_DIRECTION_SID           (uint8)0x02

/* Service ID for PORT getVersionInfo */
#define PORT_GET_VERSION_INFO_SID                 (uint8)0x03

/* Service ID for PORT setPinMode */
#define  PORT_SET_PIN_MODE_SID                    (uint8)0x04



/*******************************************************************************
 *                      DET Error Codes                                        *
 *******************************************************************************/
/* DET code to report Invalid port pin ID*/
#define PORT_E_PARAM_PIN                       (uint8)0x0A
/*  DET code to report port pin direction not configured as changeable */
#define PORT_E_DIRECTION_UNCHANGEABLE          (uint8)0x0B
/* Port_Init API service called with NULL pointer parameter */
#define PORT_E_PARAM_CONFIG                    (uint8)0x0C
/* Port_setPinMode API service called when mode is invalid */
#define PORT_E_PARAM_INVALID_MODE              (uint8)0x0D
/* Port_setPinMode API service called when mode is unchangeable */
#define PORT_E_MODE_UNCHANGEABLE               (uint8)0x0E
/*
 * The API service shall return immediately without any further action,
 * beside reporting this development error.
 */
#define PORT_E_PARAM_POINTER                    (uint8)0x10
   
/*
 * API service used without module initialization is reported using following
 * error code (Not exist in AUTOSAR 4.0.3 DIO SWS Document.
 */
#define PORT_E_UNINIT                           (uint8)0x0F

/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/
/* Description: Data type for the symbolic name of a port*/
typedef uint8 Port_PortType;
/* Description: Data type for the symbolic name of the initail value of a port*/
typedef uint8 Port_PinLevelInit;
/* Description: Data type for the symbolic name of a port-pin*/
typedef uint8 Port_PinType;
/* Description: Data type for the symbolic name of a port-pin mode*/
typedef enum
{
  DIGITAL_MODE0,DIGITAL_MODE1,DIGITAL_MODE2,DIGITAL_MODE3,DIGITAL_MODE4,DIGITAL_MODE5,DIGITAL_MODE6,DIGITAL_MODE7,DIGITAL_MODE8,DIGITAL_MODE9,DIGITAL_MODE10,
  DIGITAL_MODE11,DIGITAL_MODE12,DIGITAL_MODE13,DIGITAL_MODE14,DIGITAL_MODE15,ANALOG_MODE
}Port_PinMode;
/* Description: Enum to hold PIN direction */
typedef enum
{
    PORT_PIN_IN,PORT_PIN_OUT
}Port_PinDirectionType;

/* Description: Enum to hold internal resistor type for a PIN */
typedef enum
{
    PORT_INTERNAL_RESISTOR_OFF, PORT_INTERNAL_RESISTOR_PULL_UP, PORT_INTERNAL_RESISTOR_PULL_DOWN
}Port_InternalResistorType;

/* Description: Structure to configure each individual PIN:
 *	1. the PORT Which the pin belongs to. 0, 1, 2, 3, 4 or 5
 *	2. the number of the pin in the PORT.
 *      3. the direction of pin --> INPUT or OUTPUT
 *      4. the internal resistor --> Disable, Pull up or Pull down
 */
typedef struct 
{
    Port_PortType port_num; 
    Port_PinType pin_num; 
    Port_PinDirectionType pin_direction;
    Port_PinMode pin_mode;
    Port_InternalResistorType pin_internal_resistor;
    Port_PinLevelInit pin_initial_value;
    boolean pin_direction_changeable;
    boolean pin_mode_changeable;
    
}Port_ConfigPin;
/* Data Structure required for initializing the Port Driver */
typedef struct Port_ConfigType
{
	Port_ConfigPin Pins[PORT_CONFIGURED_PINS];
} Port_ConfigType;
/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/
/* Function for PORT Initialization API */
void Port_Init(const Port_ConfigType *ConfigPtr );

/* Function for PORT SetPinDirection API */
#if (PORT_SET_PIN_DIRECTION_API== STD_ON)
void Port_SetPinDirection (Port_PinType Pin, Port_PinDirectionType Direction);
#endif

/* Function for PORT Direction API */
void Port_refreshPortDirection(void);

/* Function for PORT GetVersionInfo API */
#if (PORT_VERSION_INFO_API == STD_ON)
void Port_GetVersionInfo(Std_VersionInfoType *versioninfo);
#endif

/* Function for PORT SetPinMode API */
#if (PORT_SET_PIN_MODE_API== STD_ON)
void Port_SetPinMode(const Port_ConfigType *ConfigPtr );
#endif

/*******************************************************************************
 *                       External Variables                                    *
 *******************************************************************************/

/* Extern PB structures to be used by Port and other modules */
extern const Port_ConfigType Port_Configuration;

#endif /* PORT_H */
