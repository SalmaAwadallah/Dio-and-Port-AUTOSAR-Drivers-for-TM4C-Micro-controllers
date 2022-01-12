 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.c
 *
 * Description: Source file for TM4C123GH6PM Microcontroller - Port Driver.
 *
 * Author: Salma Ali
 ******************************************************************************/

#include "Port.h"
#include "Port_Regs.h"

#if (DIO_DEV_ERROR_DETECT == STD_ON)

#include "Det.h"
/* AUTOSAR Version checking between Det and Port Modules */
#if ((DET_AR_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 || (DET_AR_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 || (DET_AR_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Det.h does not match the expected version"
#endif

#endif
   
STATIC const Port_ConfigPin * Port_PortPins= NULL_PTR;
STATIC uint8 Port_Status = PORT_NOT_INITIALIZED;


/************************************************************************************
* Service Name: Port_Init
* Service ID[hex]: 0x00
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Parameters (in): ConfigPtr - Pointer to post-build configuration data
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Initialize the Port module.
************************************************************************************/
void Port_Init(const Port_ConfigType * ConfigPtr )
{
  #if (PORT_DEV_ERROR_DETECT == STD_ON)
	/* check if the input configuration pointer is not a NULL_PTR */
	if (NULL_PTR == ConfigPtr)
	{
		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_INIT_SID,
		     PORT_E_PARAM_CONFIG);
	}
	else
#endif
	{
		/*
		 * Set the module state to initialized and point to the PB configuration structure using a global pointer.
		 * This global pointer is global to be used by other functions to read the PB configuration structures
		 */
		Port_Status= PORT_INITIALIZED;
		Port_PortPins = ConfigPtr->Pins; /* address of the first pins structure --> pins[0] */
	
         volatile uint32 * Port_Ptr = NULL_PTR; /* point to the required Port Registers base address */
         volatile uint32 delay = 0;
        for(Port_PinType PinId=0;PinId<PORT_CONFIGURED_PINS;PinId++)
 {
           switch(Port_PortPins[PinId].port_num)
       {
        case  0: Port_Ptr = (volatile uint32 *)GPIO_PORTA_BASE_ADDRESS; /* PORTA Base Address */
		 break;
	case  1: Port_Ptr = (volatile uint32 *)GPIO_PORTB_BASE_ADDRESS; /* PORTB Base Address */
		 break;
	case  2: Port_Ptr = (volatile uint32 *)GPIO_PORTC_BASE_ADDRESS; /* PORTC Base Address */
		 break;
	case  3: Port_Ptr = (volatile uint32 *)GPIO_PORTD_BASE_ADDRESS; /* PORTD Base Address */
		 break;
        case  4: Port_Ptr = (volatile uint32 *)GPIO_PORTE_BASE_ADDRESS; /* PORTE Base Address */
		 break;
        case  5: Port_Ptr = (volatile uint32 *)GPIO_PORTF_BASE_ADDRESS; /* PORTF Base Address */
		 break;
      }
      /* Enable clock for PORT and allow time for clock to start*/
    SYSCTL_REGCGC2_REG |= (1<<Port_PortPins[PinId].port_num);
    delay = SYSCTL_REGCGC2_REG;
  /**************************************************************************************************************************************************/   
    /*unlock the GPIOCR register, Set the corresponding bit in GPIOCR register to allow changes on this pin */
         if( ((Port_PortPins[PinId].port_num == 3) && (Port_PortPins[PinId].pin_num== 7)) || ((Port_PortPins[PinId].port_num == 5) && (Port_PortPins[PinId].pin_num == 0)) ) /* PD7 or PF0 */
    {
       /* Unlock the GPIOCR register */ 
        *(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_LOCK_REG_OFFSET) = 0x4C4F434B; 
        /* Set the corresponding bit in GPIOCR register to allow changes on this pin */
        SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_COMMIT_REG_OFFSET) , Port_PortPins[PinId].pin_num);  
    }
    else if( (Port_PortPins[PinId].port_num== 2) && (Port_PortPins[PinId].pin_num <= 3) ) /* PC0 to PC3 */
    {
        /* Do Nothing ...  this is the JTAG pins */
      continue;

    }
    else
    {
        /* Do Nothing ... No need to unlock the commit register for this pin */
    }
   /**************************************************************************************************************************************************/
     /*set the pin direction and set internal pullup/internal pulldown/disable in case of input pin or intial value in case of output pin*/
     if(Port_PortPins[PinId].pin_direction == PORT_PIN_OUT)
    {
       /* Set the corresponding bit in the GPIODIR register to configure it as output pin */
	SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIR_REG_OFFSET) , Port_PortPins[PinId].pin_num); 
        if( Port_PortPins[PinId].pin_initial_value == STD_HIGH)
        {
          /* Set the corresponding bit in the GPIODATA register to provide initial value 1 */
            SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DATA_REG_OFFSET) , Port_PortPins[PinId].pin_num);  
        }
        else
        {
           /* Clear the corresponding bit in the GPIODATA register to provide initial value 0 */
            CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DATA_REG_OFFSET) , Port_PortPins[PinId].pin_num);       
        }
    }
    else if( Port_PortPins[PinId].pin_direction == PORT_PIN_IN)
    {
      /* Clear the corresponding bit in the GPIODIR register to configure it as input pin */
        CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIR_REG_OFFSET) , Port_PortPins[PinId].pin_num);             
        
        if( Port_PortPins[PinId].pin_internal_resistor ==  PORT_INTERNAL_RESISTOR_PULL_UP)
        {  /* Set the corresponding bit in the GPIOPUR register to enable the internal pull up pin */
            SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PULL_UP_REG_OFFSET) ,Port_PortPins[PinId].pin_num);  
        }
        else if( Port_PortPins[PinId].pin_internal_resistor== PORT_INTERNAL_RESISTOR_PULL_DOWN)
        {
          /* Set the corresponding bit in the GPIOPDR register to enable the internal pull down pin */
            SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PULL_DOWN_REG_OFFSET) ,Port_PortPins[PinId].pin_num);   
        }
        else
        {
          /* Clear the corresponding bit in the GPIOPUR register to disable the internal pull up pin */
            CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PULL_UP_REG_OFFSET) ,Port_PortPins[PinId].pin_num);
          /* Clear the corresponding bit in the GPIOPDR register to disable the internal pull down pin */
            CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_PULL_DOWN_REG_OFFSET) ,Port_PortPins[PinId].pin_num); 
        }
    }
    else
    {
        /* Do Nothing */
    }
   /**************************************************************************************************************************************************/
    if(Port_PortPins[PinId].pin_mode==ANALOG_MODE)
    {
       /* Ser the corresponding bit in the GPIOAMSEL register to enable analog functionality on this pin */
       SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ANALOG_MODE_SEL_REG_OFFSET) ,  Port_PortPins[PinId].pin_num);
      /* Set the corresponding bit in the GPIODEN register to disable digital functionality on this pin */
       CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIGITAL_ENABLE_REG_OFFSET) , Port_PortPins[PinId].pin_num);
    }
    
    else
    {
       /* Clear the corresponding bit in the GPIOAMSEL register to disable analog functionality on this pin */
      CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ANALOG_MODE_SEL_REG_OFFSET) ,  Port_PortPins[PinId].pin_num);
      /* Set the corresponding bit in the GPIODEN register to enable digital functionality on this pin */
       SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIGITAL_ENABLE_REG_OFFSET) , Port_PortPins[PinId].pin_num);
       
    /*Disable or Enable Alternative Function based on Pin Mode*/
    if(Port_PortPins[PinId].pin_mode==DIGITAL_MODE0)  /*if pin is used as GPIO */
    {
      /* Disable Alternative function for this pin by clear the corresponding bit in GPIOAFSEL register */
     CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ALT_FUNC_REG_OFFSET) , Port_PortPins[PinId].pin_num); 
   
    }
    else /*if pin is used for any other functionality*/
    {
      /* Enable Alternative function for this pin by set the corresponding bit in GPIOAFSEL register */
      SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ALT_FUNC_REG_OFFSET) , Port_PortPins[PinId].pin_num);  
      
    }
      /*set the pin mode by first clearing PMCx bits then inserting the PMCx bits inside GPIOPCTL register */
    uint32 mask= (~(0x0F << (Port_PortPins[PinId].pin_num * 4)));
   ( *(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_CTL_REG_OFFSET))= (( *(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_CTL_REG_OFFSET))&mask )
     | ( Port_PortPins[PinId].pin_mode << (Port_PortPins[PinId].pin_num * 4)); 
   
  }
 }
}
}
/************************************************************************************
* Service Name: Port_SetPinDirection
* Service ID[hex]: 0x01
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Parameters (in): Pin, direction
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to set the port pin direction
************************************************************************************/ 
#if (PORT_SET_PIN_DIRECTION_API== STD_ON)
void Port_SetPinDirection (Port_PinType Pin, Port_PinDirectionType Direction)
{
  boolean error = FALSE;
  #if (PORT_DEV_ERROR_DETECT == STD_ON)
	/* Check if the Driver is initialized before using this function */
	if (PORT_NOT_INITIALIZED == Port_Status)
	{
		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,
				PORT_SET_PIN_DIRECTION_SID , PORT_E_UNINIT);
		error = TRUE;
	}
	else
	{
		/* No Action Required */
	}
	/* Check if the used direction is set to changeable */
	if (Port_PortPins[Pin].pin_direction_changeable==FALSE)
	{

		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,
				PORT_SET_PIN_DIRECTION_SID, PORT_E_DIRECTION_UNCHANGEABLE );
		error = TRUE;
	}
	else
	{
		/* No Action Required */
	}
        /* Check if the used Pin is within the valid range */
        if (PORT_CONFIGURED_PINS <= Pin)
	{

		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,
				PORT_SET_PIN_DIRECTION_SID,PORT_E_PARAM_PIN );
		error = TRUE;
	}
	else
	{
		/* No Action Required */
	}
#endif
/* In-case there are no errors */
	if(FALSE == error)
	{
              volatile uint32 * Port_Ptr = NULL_PTR; /* point to the required Port Registers base address */
           switch(Port_PortPins[Pin].port_num)
    {
        case  0: Port_Ptr = (volatile uint32 *)GPIO_PORTA_BASE_ADDRESS; /* PORTA Base Address */
		 break;
	case  1: Port_Ptr = (volatile uint32 *)GPIO_PORTB_BASE_ADDRESS; /* PORTB Base Address */
		 break;
	case  2: Port_Ptr = (volatile uint32 *)GPIO_PORTC_BASE_ADDRESS; /* PORTC Base Address */
		 break;
	case  3: Port_Ptr = (volatile uint32 *)GPIO_PORTD_BASE_ADDRESS; /* PORTD Base Address */
		 break;
        case  4: Port_Ptr = (volatile uint32 *)GPIO_PORTE_BASE_ADDRESS; /* PORTE Base Address */
		 break;
        case  5: Port_Ptr = (volatile uint32 *)GPIO_PORTF_BASE_ADDRESS; /* PORTF Base Address */
		 break;
    }
       if(Direction == PORT_PIN_OUT)
    {
      /* Set the corresponding bit in the GPIODIR register to configure it as output pin */
	SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIR_REG_OFFSET) , Port_PortPins[Pin].pin_num); 
    }
     else if( Direction == PORT_PIN_IN)
    {
      /* Clear the corresponding bit in the GPIODIR register to configure it as input pin */
        CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIR_REG_OFFSET) , Port_PortPins[Pin].pin_num); 
    }
     else
    {
        /* Do Nothing */
    }
        }  
}
#endif
/************************************************************************************
* Service Name: Port_RefreshPortDirection
* Service ID[hex]: 0x02
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Parameters (in): None
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to refresh port direction
************************************************************************************/ 
void Port_RefreshPortDirection(void)
{
  /* Check if the Driver is initialized before using this function */
    #if (PORT_DEV_ERROR_DETECT == STD_ON)
	
	if (PORT_NOT_INITIALIZED == Port_Status)
	{
		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, PORT_REFRESH_PORT_DIRECTION_SID ,
		     PORT_E_UNINIT);
	}
	else
#endif
	{
         
           volatile uint32 * Port_Ptr = NULL_PTR; /* point to the required Port Registers base address */
        for(Port_PinType PinId=0;PinId<PORT_CONFIGURED_PINS;PinId++)
        {
           switch(Port_PortPins[PinId].port_num)
    {
        case  0: Port_Ptr = (volatile uint32 *)GPIO_PORTA_BASE_ADDRESS; /* PORTA Base Address */
		 break;
	case  1: Port_Ptr = (volatile uint32 *)GPIO_PORTB_BASE_ADDRESS; /* PORTB Base Address */
		 break;
	case  2: Port_Ptr = (volatile uint32 *)GPIO_PORTC_BASE_ADDRESS; /* PORTC Base Address */
		 break;
	case  3: Port_Ptr = (volatile uint32 *)GPIO_PORTD_BASE_ADDRESS; /* PORTD Base Address */
		 break;
        case  4: Port_Ptr = (volatile uint32 *)GPIO_PORTE_BASE_ADDRESS; /* PORTE Base Address */
		 break;
        case  5: Port_Ptr = (volatile uint32 *)GPIO_PORTF_BASE_ADDRESS; /* PORTF Base Address */
		 break;
    }
           
    if(Port_PortPins[PinId].pin_direction_changeable==FALSE)
    {
       if(Port_PortPins[PinId].pin_direction == PORT_PIN_OUT)
       {
         /* Set the corresponding bit in the GPIODIR register to configure it as output pin */
	SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIR_REG_OFFSET) , Port_PortPins[PinId].pin_num); 
       }
       else if( Port_PortPins[PinId].pin_direction == PORT_PIN_IN)
       {
         /* Clear the corresponding bit in the GPIODIR register to configure it as input pin */
        CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIR_REG_OFFSET) , Port_PortPins[PinId].pin_num);             
        
       }
       else
       {
          /* Do Nothing */
       }
    }
    else
    {
    }
        }
        }
}

/************************************************************************************
* Service Name: Port_GetVersionInfo
* Service ID[hex]: 0x03
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): None
* Parameters (inout): None
* Parameters (out): VersionInfo - Pointer to where to store the version information of this module.
* Return value: None
* Description: Function to get the version information of this module.
************************************************************************************/
#if (PORT_VERSION_INFO_API == STD_ON)
void Port_GetVersionInfo(Std_VersionInfoType *versioninfo)
{
#if (PORT_DEV_ERROR_DETECT == STD_ON)
	/* Check if input pointer is not Null pointer */
	if(NULL_PTR == versioninfo)
	{
		/* Report to DET  */
		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,
				PORT_GET_VERSION_INFO_SID, PORT_E_PARAM_POINTER);
	}
	else
#endif 
	{
		/* Copy the vendor Id */
		versioninfo->vendorID = (uint16)PORT_VENDOR_ID;
		/* Copy the module Id */
		versioninfo->moduleID = (uint16)PORT_MODULE_ID;
		/* Copy Software Major Version */
                versioninfo->sw_major_version = (uint8)PORT_SW_MAJOR_VERSION;
		/* Copy Software Minor Version */
		versioninfo->sw_minor_version = (uint8)PORT_SW_MINOR_VERSION;
		/* Copy Software Patch Version */
		versioninfo->sw_patch_version = (uint8)PORT_SW_PATCH_VERSION;
	}
}
#endif
/************************************************************************************
* Service Name: Port_SetPinMode
* Service ID[hex]: 0x04
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Parameters (in): Pin, Mode
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to set the port pin Mode
************************************************************************************/ 
#if (PORT_SET_PIN_MODE_API== STD_ON)
void Port_SetPinMode (Port_PinType Pin, Port_PinModeType Mode)
{
  boolean error = FALSE;
   #if (PORT_DEV_ERROR_DETECT == STD_ON)
	/* Check if the Driver is initialized before using this function */
  	if (PORT_NOT_INITIALIZED == Port_Status)
	{
		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,
				PORT_SET_PIN_MODE_SID , PORT_E_UNINIT);
		error = TRUE;
	}
	else
	{
		/* No Action Required */
	}
	/* Check if the used Pin mode is set to changeable */
	if (Port_PortPins[Pin].pin_mode_changeable==FALSE)
	{

		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,
				PORT_SET_PIN_MODE_SID, PORT_E_MODE_UNCHANGEABLE );
		error = TRUE;
	}
	else
	{
		/* No Action Required */
	}
        /* Check if the used Pin is within the valid range */
        if (PORT_CONFIGURED_PINS <= Pin)
	{

		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,
				PORT_SET_PIN_MODE_SID,PORT_E_PARAM_PIN );
		error = TRUE;
	}
	else
	{
		/* No Action Required */
	}
         /* Check if the used mode is within the valid range */
	 if ( PORT_MODE_RANGE <= MODE)
	{

		Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID,
				PORT_SET_PIN_MODE_SID,PORT_E_PARAM_INVALID_MODE );
		error = TRUE;
	}
	else
	{
		/* No Action Required */
	}
  
         
       
#endif
/* In-case there are no errors */
	if(FALSE == error)
        {
            volatile uint32 * Port_Ptr = NULL_PTR; /* point to the required Port Registers base address */
          
           switch(Port_PortPins[Pin].port_num)
    {
        case  0: Port_Ptr = (volatile uint32 *)GPIO_PORTA_BASE_ADDRESS; /* PORTA Base Address */
		 break;
	case  1: Port_Ptr = (volatile uint32 *)GPIO_PORTB_BASE_ADDRESS; /* PORTB Base Address */
		 break;
	case  2: Port_Ptr = (volatile uint32 *)GPIO_PORTC_BASE_ADDRESS; /* PORTC Base Address */
		 break;
	case  3: Port_Ptr = (volatile uint32 *)GPIO_PORTD_BASE_ADDRESS; /* PORTD Base Address */
		 break;
        case  4: Port_Ptr = (volatile uint32 *)GPIO_PORTE_BASE_ADDRESS; /* PORTE Base Address */
		 break;
        case  5: Port_Ptr = (volatile uint32 *)GPIO_PORTF_BASE_ADDRESS; /* PORTF Base Address */
		 break;
    }
   
    /*Check if the mode is analog or digital*/
     if(MODE==ANALOG_MODE) /*if it is an analog mode*/
     {
        /* Ser the corresponding bit in the GPIOAMSEL register to enable analog functionality on this pin */
       SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ANALOG_MODE_SEL_REG_OFFSET) ,  Port_PortPins[Pin].pin_num);
      /* Set the corresponding bit in the GPIODEN register to disable digital functionality on this pin */
       CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIGITAL_ENABLE_REG_OFFSET) , Port_PortPins[Pin].pin_num);
       
     }
     else/*if it is a digital mode*/
     { 
        /* Clear the corresponding bit in the GPIOAMSEL register to disable analog functionality on this pin */
        CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ANALOG_MODE_SEL_REG_OFFSET) ,  Port_PortPins[Pin].pin_num);
        
        /* Set the corresponding bit in the GPIODEN register to enable digital functionality on this pin */
        SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_DIGITAL_ENABLE_REG_OFFSET) , Port_PortPins[Pin].pin_num);
       
        /*Disable or Enable Alternative Function based on the given Mode*/
    
         if(MODE==DIGITAL_MODE0)  /*if pin is used as GPIO */
         {
         /* Disable Alternative function for this pin by clear the corresponding bit in GPIOAFSEL register */
          CLEAR_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ALT_FUNC_REG_OFFSET) , Port_PortPins[Pin].pin_num);  
         }
         else /*if pin is used for any other functionality*/
         {
             /* Enable Alternative function for this pin by set the corresponding bit in GPIOAFSEL register */
            SET_BIT(*(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_ALT_FUNC_REG_OFFSET) , Port_PortPins[Pin].pin_num);  
         }
    
              /*set the pin mode by first clearing PMCx bits then inserting the PMCx bits inside GPIOPCTL register */
              uint32 mask= (~(0x0F << (Port_PortPins[PinId].pin_num * 4)));
             ( *(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_CTL_REG_OFFSET))= (( *(volatile uint32 *)((volatile uint8 *)Port_Ptr + PORT_CTL_REG_OFFSET))&mask )
              | ( Port_PortPins[PinId].pin_mode << (Port_PortPins[PinId].pin_num * 4)); 
    
        }
     
        }
  
}
#endif