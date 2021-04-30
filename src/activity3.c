#include"activity3.h"


char activity3(uint16_t temp)
{

set_10bit_fast_pwm ;//set timer for pwm
set_prescaler;//to get  more resolution output
set_pwm_output;// set PB1 as output
char temperature;
/**
 * @brief In this temperature value is returning and we see the temp in  the form of duty cycle also
 * return temperature
 */

if(temp<=200)
   {OCR1A=204;//20% duty cycle
    _delay_ms(20);
     temperature=20;
   }
else if((201<=temp) && (temp<=500))
   {OCR1A=410;//40% duty cycle
    _delay_ms(20);
     temperature=25;
   }
else if((501<=temp) && (temp<=700))
   {OCR1A=717;//70%duty cycle
     _delay_ms(20);
     temperature=29;
   }
else if((701<=temp) && (temp<=1024))
   {OCR1A=973;//95% duty cycle
     _delay_ms(20);
     temperature=33;
   }
   else
   {
      OCR1A=0;//0 %duty cycle or off
     _delay_ms(20);
     temperature=0;
   }
return(temperature);
}
