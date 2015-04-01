/**
  CLC3 Generated Driver API Header File

  @Company
    Microchip Technology Inc.

  @File Name
    clc3.h

  @Summary
    This is the generated header file for the CLC3 driver using MPLAB� Code Configurator

  @Description
    This header file provides APIs for driver for CLC3.
    Generation Information :
        Product Revision  :  MPLAB� Code Configurator - v2.10.3
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

#ifndef _CLC3_H
#define _CLC3_H

/**
  Section: Included Files
*/

#include <xc.h>

#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif

/**
  Section: CLC3 APIs
*/

/**
  @Summary
    Initializes the CLC3

  @Description
    This routine configures the CLC3 specific control registers

  @Preconditions
    None

  @Returns
    None

  @Param
    None

  @Comment
    

  @Example
    <code>
    CLC3_Initialize();
    </code>
*/
void CLC3_Initialize(void);


#ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif

#endif  // _CLC3_H
/**
 End of File
*/

