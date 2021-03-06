/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB� Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB� Code Configurator - v2.10.3
        Device            :  PIC16F1509
        Version           :  1.01
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set CLC1 aliases
#define CLC1_TRIS               TRISA2
#define CLC1_LAT                LATA2
#define CLC1_PORT               RA2
#define CLC1_WPU                WPUA2
#define CLC1_ANS                ANSA2
#define CLC1_SetHigh()    do { LATA2 = 1; } while(0)
#define CLC1_SetLow()   do { LATA2 = 0; } while(0)
#define CLC1_Toggle()   do { LATA2 = ~LATA2; } while(0)
#define CLC1_GetValue()         RA2
#define CLC1_SetDigitalInput()    do { TRISA2 = 1; } while(0)
#define CLC1_SetDigitalOutput()   do { TRISA2 = 0; } while(0)

#define CLC1_SetPullup()    do { WPUA2 = 1; } while(0)
#define CLC1_ResetPullup()   do { WPUA2 = 0; } while(0)
#define CLC1_SetAnalogMode()   do { ANSA2 = 1; } while(0)
#define CLC1_SetDigitalMode()   do { ANSA2 = 0; } while(0)
// get/set CLC2 aliases
#define CLC2_TRIS               TRISC0
#define CLC2_LAT                LATC0
#define CLC2_PORT               RC0
#define CLC2_ANS                ANSC0
#define CLC2_SetHigh()    do { LATC0 = 1; } while(0)
#define CLC2_SetLow()   do { LATC0 = 0; } while(0)
#define CLC2_Toggle()   do { LATC0 = ~LATC0; } while(0)
#define CLC2_GetValue()         RC0
#define CLC2_SetDigitalInput()    do { TRISC0 = 1; } while(0)
#define CLC2_SetDigitalOutput()   do { TRISC0 = 0; } while(0)

#define CLC2_SetAnalogMode()   do { ANSC0 = 1; } while(0)
#define CLC2_SetDigitalMode()   do { ANSC0 = 0; } while(0)
// get/set NCO1 aliases
#define NCO1_TRIS               TRISC1
#define NCO1_LAT                LATC1
#define NCO1_PORT               RC1
#define NCO1_ANS                ANSC1
#define NCO1_SetHigh()    do { LATC1 = 1; } while(0)
#define NCO1_SetLow()   do { LATC1 = 0; } while(0)
#define NCO1_Toggle()   do { LATC1 = ~LATC1; } while(0)
#define NCO1_GetValue()         RC1
#define NCO1_SetDigitalInput()    do { TRISC1 = 1; } while(0)
#define NCO1_SetDigitalOutput()   do { TRISC1 = 0; } while(0)

#define NCO1_SetAnalogMode()   do { ANSC1 = 1; } while(0)
#define NCO1_SetDigitalMode()   do { ANSC1 = 0; } while(0)
// get/set PWM1 aliases
#define PWM1_TRIS               TRISC5
#define PWM1_LAT                LATC5
#define PWM1_PORT               RC5
#define PWM1_SetHigh()    do { LATC5 = 1; } while(0)
#define PWM1_SetLow()   do { LATC5 = 0; } while(0)
#define PWM1_Toggle()   do { LATC5 = ~LATC5; } while(0)
#define PWM1_GetValue()         RC5
#define PWM1_SetDigitalInput()    do { TRISC5 = 1; } while(0)
#define PWM1_SetDigitalOutput()   do { TRISC5 = 0; } while(0)


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);

#endif // PIN_MANAGER_H
/**
 End of File
*/