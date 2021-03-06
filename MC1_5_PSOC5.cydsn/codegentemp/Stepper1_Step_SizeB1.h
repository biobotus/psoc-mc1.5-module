/*******************************************************************************
* File Name: Stepper1_Step_SizeB1.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Stepper1_Step_SizeB1_H) /* Pins Stepper1_Step_SizeB1_H */
#define CY_PINS_Stepper1_Step_SizeB1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Stepper1_Step_SizeB1_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v2_10 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Stepper1_Step_SizeB1__PORT == 15 && ((Stepper1_Step_SizeB1__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    Stepper1_Step_SizeB1_Write(uint8 value) ;
void    Stepper1_Step_SizeB1_SetDriveMode(uint8 mode) ;
uint8   Stepper1_Step_SizeB1_ReadDataReg(void) ;
uint8   Stepper1_Step_SizeB1_Read(void) ;
uint8   Stepper1_Step_SizeB1_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Stepper1_Step_SizeB1_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Stepper1_Step_SizeB1_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Stepper1_Step_SizeB1_DM_RES_UP          PIN_DM_RES_UP
#define Stepper1_Step_SizeB1_DM_RES_DWN         PIN_DM_RES_DWN
#define Stepper1_Step_SizeB1_DM_OD_LO           PIN_DM_OD_LO
#define Stepper1_Step_SizeB1_DM_OD_HI           PIN_DM_OD_HI
#define Stepper1_Step_SizeB1_DM_STRONG          PIN_DM_STRONG
#define Stepper1_Step_SizeB1_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Stepper1_Step_SizeB1_MASK               Stepper1_Step_SizeB1__MASK
#define Stepper1_Step_SizeB1_SHIFT              Stepper1_Step_SizeB1__SHIFT
#define Stepper1_Step_SizeB1_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Stepper1_Step_SizeB1_PS                     (* (reg8 *) Stepper1_Step_SizeB1__PS)
/* Data Register */
#define Stepper1_Step_SizeB1_DR                     (* (reg8 *) Stepper1_Step_SizeB1__DR)
/* Port Number */
#define Stepper1_Step_SizeB1_PRT_NUM                (* (reg8 *) Stepper1_Step_SizeB1__PRT) 
/* Connect to Analog Globals */                                                  
#define Stepper1_Step_SizeB1_AG                     (* (reg8 *) Stepper1_Step_SizeB1__AG)                       
/* Analog MUX bux enable */
#define Stepper1_Step_SizeB1_AMUX                   (* (reg8 *) Stepper1_Step_SizeB1__AMUX) 
/* Bidirectional Enable */                                                        
#define Stepper1_Step_SizeB1_BIE                    (* (reg8 *) Stepper1_Step_SizeB1__BIE)
/* Bit-mask for Aliased Register Access */
#define Stepper1_Step_SizeB1_BIT_MASK               (* (reg8 *) Stepper1_Step_SizeB1__BIT_MASK)
/* Bypass Enable */
#define Stepper1_Step_SizeB1_BYP                    (* (reg8 *) Stepper1_Step_SizeB1__BYP)
/* Port wide control signals */                                                   
#define Stepper1_Step_SizeB1_CTL                    (* (reg8 *) Stepper1_Step_SizeB1__CTL)
/* Drive Modes */
#define Stepper1_Step_SizeB1_DM0                    (* (reg8 *) Stepper1_Step_SizeB1__DM0) 
#define Stepper1_Step_SizeB1_DM1                    (* (reg8 *) Stepper1_Step_SizeB1__DM1)
#define Stepper1_Step_SizeB1_DM2                    (* (reg8 *) Stepper1_Step_SizeB1__DM2) 
/* Input Buffer Disable Override */
#define Stepper1_Step_SizeB1_INP_DIS                (* (reg8 *) Stepper1_Step_SizeB1__INP_DIS)
/* LCD Common or Segment Drive */
#define Stepper1_Step_SizeB1_LCD_COM_SEG            (* (reg8 *) Stepper1_Step_SizeB1__LCD_COM_SEG)
/* Enable Segment LCD */
#define Stepper1_Step_SizeB1_LCD_EN                 (* (reg8 *) Stepper1_Step_SizeB1__LCD_EN)
/* Slew Rate Control */
#define Stepper1_Step_SizeB1_SLW                    (* (reg8 *) Stepper1_Step_SizeB1__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Stepper1_Step_SizeB1_PRTDSI__CAPS_SEL       (* (reg8 *) Stepper1_Step_SizeB1__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Stepper1_Step_SizeB1_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Stepper1_Step_SizeB1__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Stepper1_Step_SizeB1_PRTDSI__OE_SEL0        (* (reg8 *) Stepper1_Step_SizeB1__PRTDSI__OE_SEL0) 
#define Stepper1_Step_SizeB1_PRTDSI__OE_SEL1        (* (reg8 *) Stepper1_Step_SizeB1__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Stepper1_Step_SizeB1_PRTDSI__OUT_SEL0       (* (reg8 *) Stepper1_Step_SizeB1__PRTDSI__OUT_SEL0) 
#define Stepper1_Step_SizeB1_PRTDSI__OUT_SEL1       (* (reg8 *) Stepper1_Step_SizeB1__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Stepper1_Step_SizeB1_PRTDSI__SYNC_OUT       (* (reg8 *) Stepper1_Step_SizeB1__PRTDSI__SYNC_OUT) 


#if defined(Stepper1_Step_SizeB1__INTSTAT)  /* Interrupt Registers */

    #define Stepper1_Step_SizeB1_INTSTAT                (* (reg8 *) Stepper1_Step_SizeB1__INTSTAT)
    #define Stepper1_Step_SizeB1_SNAP                   (* (reg8 *) Stepper1_Step_SizeB1__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Stepper1_Step_SizeB1_H */


/* [] END OF FILE */
