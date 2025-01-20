#include "essentials.h"
void __interrupt() isr(void)
{
   // test relevant interrupt flags to see if they are both SET
    if(INTCONbits.IOCIF && IOCAFbits.IOCAF0 == HI)
    {
        //turn LED on for 1 second
        LATAbits.LATA4 = HI;
        __delay_ms(1000);
    }
    //clear flags and turn off LED
    LATAbits.LATA4 = LO;
    IOCAFbits.IOCAF0 = LO;
    INTCONbits.IOCIF = LO;
}
