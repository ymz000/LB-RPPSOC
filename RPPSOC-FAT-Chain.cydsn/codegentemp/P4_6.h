/*******************************************************************************
* File Name: P4_6.h  
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

#if !defined(CY_PINS_P4_6_H) /* Pins P4_6_H */
#define CY_PINS_P4_6_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "P4_6_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v2_10 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 P4_6__PORT == 15 && ((P4_6__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    P4_6_Write(uint8 value) ;
void    P4_6_SetDriveMode(uint8 mode) ;
uint8   P4_6_ReadDataReg(void) ;
uint8   P4_6_Read(void) ;
uint8   P4_6_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define P4_6_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define P4_6_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define P4_6_DM_RES_UP          PIN_DM_RES_UP
#define P4_6_DM_RES_DWN         PIN_DM_RES_DWN
#define P4_6_DM_OD_LO           PIN_DM_OD_LO
#define P4_6_DM_OD_HI           PIN_DM_OD_HI
#define P4_6_DM_STRONG          PIN_DM_STRONG
#define P4_6_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define P4_6_MASK               P4_6__MASK
#define P4_6_SHIFT              P4_6__SHIFT
#define P4_6_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define P4_6_PS                     (* (reg8 *) P4_6__PS)
/* Data Register */
#define P4_6_DR                     (* (reg8 *) P4_6__DR)
/* Port Number */
#define P4_6_PRT_NUM                (* (reg8 *) P4_6__PRT) 
/* Connect to Analog Globals */                                                  
#define P4_6_AG                     (* (reg8 *) P4_6__AG)                       
/* Analog MUX bux enable */
#define P4_6_AMUX                   (* (reg8 *) P4_6__AMUX) 
/* Bidirectional Enable */                                                        
#define P4_6_BIE                    (* (reg8 *) P4_6__BIE)
/* Bit-mask for Aliased Register Access */
#define P4_6_BIT_MASK               (* (reg8 *) P4_6__BIT_MASK)
/* Bypass Enable */
#define P4_6_BYP                    (* (reg8 *) P4_6__BYP)
/* Port wide control signals */                                                   
#define P4_6_CTL                    (* (reg8 *) P4_6__CTL)
/* Drive Modes */
#define P4_6_DM0                    (* (reg8 *) P4_6__DM0) 
#define P4_6_DM1                    (* (reg8 *) P4_6__DM1)
#define P4_6_DM2                    (* (reg8 *) P4_6__DM2) 
/* Input Buffer Disable Override */
#define P4_6_INP_DIS                (* (reg8 *) P4_6__INP_DIS)
/* LCD Common or Segment Drive */
#define P4_6_LCD_COM_SEG            (* (reg8 *) P4_6__LCD_COM_SEG)
/* Enable Segment LCD */
#define P4_6_LCD_EN                 (* (reg8 *) P4_6__LCD_EN)
/* Slew Rate Control */
#define P4_6_SLW                    (* (reg8 *) P4_6__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define P4_6_PRTDSI__CAPS_SEL       (* (reg8 *) P4_6__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define P4_6_PRTDSI__DBL_SYNC_IN    (* (reg8 *) P4_6__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define P4_6_PRTDSI__OE_SEL0        (* (reg8 *) P4_6__PRTDSI__OE_SEL0) 
#define P4_6_PRTDSI__OE_SEL1        (* (reg8 *) P4_6__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define P4_6_PRTDSI__OUT_SEL0       (* (reg8 *) P4_6__PRTDSI__OUT_SEL0) 
#define P4_6_PRTDSI__OUT_SEL1       (* (reg8 *) P4_6__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define P4_6_PRTDSI__SYNC_OUT       (* (reg8 *) P4_6__PRTDSI__SYNC_OUT) 


#if defined(P4_6__INTSTAT)  /* Interrupt Registers */

    #define P4_6_INTSTAT                (* (reg8 *) P4_6__INTSTAT)
    #define P4_6_SNAP                   (* (reg8 *) P4_6__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_P4_6_H */


/* [] END OF FILE */
