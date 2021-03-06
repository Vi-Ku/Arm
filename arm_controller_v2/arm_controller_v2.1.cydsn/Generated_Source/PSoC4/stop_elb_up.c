/*******************************************************************************
* File Name: stop_elb_up.c  
* Version 2.10
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "stop_elb_up.h"

#define SetP4PinDriveMode(shift, mode)  \
    do { \
        stop_elb_up_PC =   (stop_elb_up_PC & \
                                (uint32)(~(uint32)(stop_elb_up_DRIVE_MODE_IND_MASK << (stop_elb_up_DRIVE_MODE_BITS * (shift))))) | \
                                (uint32)((uint32)(mode) << (stop_elb_up_DRIVE_MODE_BITS * (shift))); \
    } while (0)


/*******************************************************************************
* Function Name: stop_elb_up_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None 
*  
*******************************************************************************/
void stop_elb_up_Write(uint8 value) 
{
    uint8 drVal = (uint8)(stop_elb_up_DR & (uint8)(~stop_elb_up_MASK));
    drVal = (drVal | ((uint8)(value << stop_elb_up_SHIFT) & stop_elb_up_MASK));
    stop_elb_up_DR = (uint32)drVal;
}


/*******************************************************************************
* Function Name: stop_elb_up_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  stop_elb_up_DM_STRONG     Strong Drive 
*  stop_elb_up_DM_OD_HI      Open Drain, Drives High 
*  stop_elb_up_DM_OD_LO      Open Drain, Drives Low 
*  stop_elb_up_DM_RES_UP     Resistive Pull Up 
*  stop_elb_up_DM_RES_DWN    Resistive Pull Down 
*  stop_elb_up_DM_RES_UPDWN  Resistive Pull Up/Down 
*  stop_elb_up_DM_DIG_HIZ    High Impedance Digital 
*  stop_elb_up_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void stop_elb_up_SetDriveMode(uint8 mode) 
{
	SetP4PinDriveMode(stop_elb_up__0__SHIFT, mode);
}


/*******************************************************************************
* Function Name: stop_elb_up_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro stop_elb_up_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 stop_elb_up_Read(void) 
{
    return (uint8)((stop_elb_up_PS & stop_elb_up_MASK) >> stop_elb_up_SHIFT);
}


/*******************************************************************************
* Function Name: stop_elb_up_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 stop_elb_up_ReadDataReg(void) 
{
    return (uint8)((stop_elb_up_DR & stop_elb_up_MASK) >> stop_elb_up_SHIFT);
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(stop_elb_up_INTSTAT) 

    /*******************************************************************************
    * Function Name: stop_elb_up_ClearInterrupt
    ********************************************************************************
    *
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 stop_elb_up_ClearInterrupt(void) 
    {
		uint8 maskedStatus = (uint8)(stop_elb_up_INTSTAT & stop_elb_up_MASK);
		stop_elb_up_INTSTAT = maskedStatus;
        return maskedStatus >> stop_elb_up_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
