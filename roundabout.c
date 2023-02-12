// PIC16F877A Configuration Bit Settings
// 'C' source line config statements
// CONFIG
#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = ON         // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3/PGM pin has PGM function; low-voltage programming enabled)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#define _XTAL_FREQ 20000000
/*
 * File:   roundabout.c
 * Author: asaph
 *
 * Created on February 12, 2023, 1:56 PM
 */

void main(void) {
    TRISA = 0, TRISB = 0, TRISC = 0; TRISD = 0, TRISE = 0;
    
    RB6 = 0, RB5 = 0, RB4 = 1, RB7 = 0; //Junction 1
    RB1 = 0, RB2 = 1, RB3 = 0, RB0 = 0; //Junction 2
    RD1 = 0, RD2 = 1, RD3 = 0, RD0 = 0; //Junction 3
    RC6 = 0, RC5 = 1, RC4 = 0, RD7 = 0; //Junction 4
    RC2 = 0, RC1 = 1, RC0 = 0, RC3 = 0; //Junction 5
          
    
    while(1){
        
        RB6 = 0, RB5 = 0, RB4 = 1, RB7 = 0; //Junction 1
        RB1 = 0, RB2 = 0, RB3 = 0, RB0 = 1; //Junction 2
        RD1 = 0, RD2 = 1, RD3 = 0, RD0 = 0; //Junction 3
        RC6 = 0, RC5 = 1, RC4 = 0, RD7 = 0; //Junction 4
        RC2 = 1, RC1 = 0, RC0 = 0, RC3 = 0; //Junction 5
        
        __delay_ms(500);
        
        RB6 = 1, RB5 = 0, RB4 = 0, RB7 = 0; //Junction 1
        RB1 = 0, RB2 = 0, RB3 = 1, RB0 = 0; //Junction 2
        RD1 = 0, RD2 = 1, RD3 = 0, RD0 = 0; //Junction 3
        RC6 = 0, RC5 = 1, RC4 = 0, RD7 = 0; //Junction 4
        RC2 = 0, RC1 = 1, RC0 = 0, RC3 = 0; //Junction 5        
        __delay_ms(500);
        
        RB6 = 0, RB5 = 1, RB4 = 0, RB7 = 0; //Junction 1
        RB1 = 1, RB2 = 0, RB3 = 0, RB0 = 0; //Junction 2
        RD1 = 0, RD2 = 0, RD3 = 1, RD0 = 0; //Junction 3
        RC6 = 0, RC5 = 1, RC4 = 0, RD7 = 0; //Junction 4
        RC2 = 0, RC1 = 1, RC0 = 0, RC3 = 0; //Junction 5        
        __delay_ms(500);
        
        RB6 = 0, RB5 = 1, RB4 = 0, RB7 = 0; //Junction 1
        RB1 = 0, RB2 = 1, RB3 = 0, RB0 = 0; //Junction 2
        RD1 = 1, RD2 = 0, RD3 = 0, RD0 = 0; //Junction 3
        RC6 = 0, RC5 = 0, RC4 = 1, RD7 = 0; //Junction 4
        RC2 = 0, RC1 = 1, RC0 = 0, RC3 = 0; //Junction 5        
        __delay_ms(500);
        
        RB6 = 0, RB5 = 0, RB4 = 0, RB7 = 1; //Junction 1
        RB1 = 1, RB2 = 0, RB3 = 0, RB0 = 0; //Junction 2
        RD1 = 0, RD2 = 1, RD3 = 0, RD0 = 0; //Junction 3
        RC6 = 0, RC5 = 1, RC4 = 0, RD7 = 0; //Junction 4
        RC2 = 0, RC1 = 0, RC0 = 1, RC3 = 0; //Junction 5        
        __delay_ms(500);
    }
    return;
}
