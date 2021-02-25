#include "mbed.h"

DigitalOut myLED(LED1);
DigitalOut myLED2(LED3);

void Led(DigitalOut &ledpin1, DigitalOut &ledpin2);

int main()
{
   myLED = 0;
   myLED2 = 0;
   while (true)
   {
      Led(myLED, myLED2);
   }
}