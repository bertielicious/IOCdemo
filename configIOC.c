#include "essentials.h"
void configIOC(void)
{
    //USB peripheral is disabled to allow IOC on RA0 pin 19
    UCONbits.USBEN = LO;  
    
    //enable the IOC module
    INTCONbits.IOCIE = HI;
    
    // enable a negative edge detect on RA0 pin 19
    IOCANbits.IOCAN0 = HI;
    
    //IOC interrupt flag is set if any pin generates an interrupt
    INTCONbits.IOCIF = LO;
}
