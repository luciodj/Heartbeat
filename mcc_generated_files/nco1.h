/**
  NCO1 Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    nco1.c

  @Summary
    This is the generated driver implementation file for the NCO1 driver using MPLAB� Code Configurator

  @Description
    This header file provides implementations for driver APIs for NCO1.
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

#ifndef _NCO1_H
#define _NCO1_H

/**
  Section: Included Files
*/

#include <xc.h>
#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif

/**
  Section: NCO1 Module APIs
*/

/**
  @Summary
    Initializes the NCO1_Initialize

  @Description
    This routine initializes the NCO1_Initialize
    This routine must be called before any other NCO1 routine is called.
    This routine should only be called once during system initialization.

  @Preconditions
    None

  @Param
    None

  @Returns
    None

  @Comment
    Generate a 2,048.5 Hz output square wave (50% duty cycle)

 @Example
    <code>
    NCO1_Initialize();
    </code>
 */
void NCO1_Initialize(void);

/**
  @Summary
    Determines if output status is high or low.

  @Description
    This routine returns the NCO1 output status.
    high - Indicates output is high
    low - Indicates output is low

  @Preconditions
    NCO1_Initialize() function should have been called
	before calling this function.

  @Param
    None

  @Returns
    high - Indicates output is high
    low - Indicates output is low

  @Example
    <code>
    NCO1_Initialize();
    if(NCO1_GetOutputStatus())
    {
        // User code..
    }
    else
    {
         // User code..
    }
    </code>
 */
bool NCO1_GetOutputStatus(void);

#ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif

#endif  //_NCO1_H
/**
 End of File
*/


