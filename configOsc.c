#include "essentials.h"
void configOsc(void)
{
    OSCCONbits.IRCF3 = HI;//Internal Oscillator Frequency Select bits
    OSCCONbits.IRCF2 = HI;//1111 = 16 MHz
    OSCCONbits.IRCF1 = HI;
    OSCCONbits.IRCF0 = HI;       
    OSCCONbits.SCS1 = HI; //= Internal oscillator block selected  
}
