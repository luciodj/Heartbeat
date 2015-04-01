/**
  CLC2 Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    clc2.c

  @Summary
    This is the generated driver implementation file for the CLC2 driver using MPLAB® Code Configurator

  @Description
    This source file provides implementations for driver APIs for CLC2.
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
#include "clc2.h"

/**
  Section: CLC2 APIs
*/

void CLC2_Initialize(void)
{
    // Set the CLC2 to the options selected in the User Interface

    // LC2G3POL not_inverted; LC2POL not_inverted; LC2G4POL not_inverted; LC2G1POL not_inverted; LC2G2POL not_inverted; 
    CLC2POL = 0x00;

    // LC2D1S CLCIN0; LC2D2S FOSC; 
    CLC2SEL0 = 0x00;

    // LC2D4S PWM1OUT; LC2D3S LC3OUT; 
    CLC2SEL1 = 0x22;

    // LC2G1D2N disabled; LC2G1D1N disabled; LC2G1D4N disabled; LC2G1D3N disabled; LC2G1D4T enabled; LC2G1D1T disabled; LC2G1D2T disabled; LC2G1D3T disabled; 
    CLC2GLS0 = 0x80;

    // LC2G2D2N disabled; LC2G2D4T disabled; LC2G2D1N disabled; LC2G2D3T enabled; LC2G2D3N disabled; LC2G2D4N disabled; LC2G2D1T disabled; LC2G2D2T disabled; 
    CLC2GLS1 = 0x20;

    // LC2G3D4N disabled; LC2G3D1T disabled; LC2G3D1N disabled; LC2G3D3N disabled; LC2G3D2N disabled; LC2G3D4T disabled; LC2G3D2T disabled; LC2G3D3T disabled; 
    CLC2GLS2 = 0x00;

    // LC2G4D4T disabled; LC2G4D3T disabled; LC2G4D2T disabled; LC2G4D1T disabled; LC2G4D1N disabled; LC2G4D3N disabled; LC2G4D4N disabled; LC2G4D2N disabled; 
    CLC2GLS3 = 0x00;

    // LC2MODE AND-OR; LCINTP disabled; LC2OE enabled; LCINTN disabled; LC2OUT disabled; LC2EN enabled; 
    CLC2CON = 0xC0;

}
/**
 End of File
*/