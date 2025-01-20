#include "essentials.h"
void configISR(void)
{   
    //= Enable all active interrupts
    INTCONbits.GIE = HI;
    
    //enable peripheral interrupt enable bit
    INTCONbits.PEIE = HI;
}
