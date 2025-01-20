/*
 * File:   main.c
 * Author: User
 *
 * Created on 20 January 2025, 14:19
 */


#include "essentials.h"
#include "configurationBits.h"
#include "configOsc.h"
#include "configPins.h"
#include "putch.h"
#include "configEUSART.h"
#include "configIOC.h"
#include "configISR.h"
#include "__interrupt.h"


void main(void) 
{   
    configOsc();
    configPins();
    configEUSART();
    configISR();
    configIOC();
    printf("IOC demo\n");
    LATAbits.LATA4 = LO;
    while(1)
    {
       // LATAbits.LATA4 = ~LATAbits.LATA4;
       // __delay_ms(1000);
    }
}
