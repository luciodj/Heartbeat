/**
  NCO1 Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    nco1.c

  @Summary
    This is the generated driver implementation file for the NCO1 driver using MPLAB® Code Configurator

  @Description
    This header file provides implementations for driver APIs for NCO1.
    Generation Information :
        Product Revision  :  MPLAB® Code Configurator - v2.10.3
        Device            :  PIC16F1509
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 v1.34
        MPLAB             :  MPLAB X 2.26
*/

/*
Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*/

/**
  Section: Included Files
*/

#include <xc.h>
#include "nco1.h"

/**
  Section: NCO Module APIs
*/

void NCO1_Initialize (void)
{
    // Set the NCO to the options selected in the GUI
    // N1OUT out_lo; N1PFM FDC_mode; N1POL active_lo; N1EN disabled; N1OE enabled; 
    NCO1CON = 0x50;

    // N1PWS 1_clk; N1CKS FOSC; 
    NCO1CLK = 0x01;

    // NCOACCU 0; 
    NCO1ACCU = 0x00;

    // NCOACCH 0; 
    NCO1ACCH = 0x00;

    // NCOACCL 0; 
    NCO1ACCL = 0x00;




    // NCO1INCH 32
    NCO1INCH = 32;

    // NCO1INCL 5
    NCO1INCL = 5;



    // Enable the NCO module
    NCO1CONbits.N1EN = 1;
}

bool NCO1_GetOutputStatus(void)
{
    // Return output status on accumulator over flow
    return (NCO1CONbits.N1OUT);
}
/**
 End of File
*/

