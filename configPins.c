#include "essentials.h"
void configPins(void)
{
    TRISAbits.TRISA4 = LO;// RA4 pin 3 is an output for LED
}
