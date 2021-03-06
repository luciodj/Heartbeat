# Heartbeat

This is a test project to demonstrate using Core Independent Peripherals (CIP) to generate automatically a Heartbeat (LED smooth Pulsing at 0.5Hz ).

* Device: PIC16F1509 (any other PIC16F1 featuring NCO and CLC)
* Board: PICDEM® Low Pin Count or [Simplicity](https://github.com/luciodj/Simplicity)
* Debugger: PICkit® 3

## The Basic Idea
* Use TMR2 + PWM1 to generate a square wave (50% duty cycle).
* Use the NCO to generate a similar square wave (50% duty cycle) but with a slightly higher frequency.
* Perform an AND between the two using the CLC and drive an LED with the output.

Effectively the LED will start blinking at the **beating** frequency:  

     Fbeat =  Fnco - Fpwm
     
     
## Limitations
1.     The PIC16F150x series offers a limited choice of connections between the CLC modules and the NCO (only CLC1 can take input or send output from/to the NCO)   
2.     Only CLC2 can drive directly one of he LEDs `(RC0 = LED1)` of the Low Pin Count demo board
3.     The beating period is determined by the NCO clock input frequency: to achieve a Heartbeat &gt; 1s (slow rhythmic pulsation) a low Fosc must be used (&lt; 2MHz). Counterintuitively this is true regardless of the choice of PWM frequency.
4.     The number of dimming steps is determined entirely by the Increment value used (2\^20 /  Increment). Values of Increment &lt; 16384 are desirable to achieve a sufficient dimming smoothness (&gt;256 steps)

See the Excel spreadsheet for validation of the formulas used.

## Basic Solution
* Use CLC1 as a pass through to bring the NCO output (50% mode) to other CLC blocks

* Use CLC2 to perform the AND between PWM1 and the CLC1 output (NCO) 
* Fosc = 1 MHz will allow a compromise of a 2s pulse rate  

### Result
 0 (zero) MIPS, set & forget, smoothly pulsating LED1 output 

## Advanced Solutions
1. More LEDs can be controlled by using additional CLC modules  
    **NOTE:** Not available on the Low Pin Count board unless a device with PPS is used to replace the PIC16F150x (for example PIC16F170x)

2. If a higher Fosc is desired/required by the _rest of the application_:
    * Use CLC4 and CLC1 (JK mode with toggle configuration) to divide Fosc by 4 and feed it to the NCO (only CLC1 can be used as clock input). 
    * Present the NCO output on the pin (sacrificed) and use the same pin as input to CLC3 (CLC3IN1). 
    * Use CLC3 as a pass through to CLC2 who performs the AND with PWM1 and  drives LED1 (low pin count board). 
    * **NOTE:** The last step won't be necessary on custom boards or if using devices with PPS.

## Related Projects and Demos
    
* Check the [Simplicity](https://github.com/luciodj/Simplicity) project for more demo like this using the MPLAB Code Configurator and the MikroElektronika Click(tm) boards.
     

    

