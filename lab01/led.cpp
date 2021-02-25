#include "mbed.h"

void Led(DigitalOut &ledpin1, DigitalOut &ledpin2)
{
   for (int i = 0; i < 6; ++i)
   {                     //blink for 3 times
      ledpin2 = !ledpin2; // toggle led
      ThisThread::sleep_for(500ms);
   }
   for (int i = 0; i < 4; ++i)
   {                     //blink for 2 times
      ledpin1 = !ledpin1; // toggle led
      ThisThread::sleep_for(500ms);
   }
}