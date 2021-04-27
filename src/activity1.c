/**
 * @file activity1.c
 * @author mani gupta ()
 * @brief 
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity1.h"

void activity1(void)
 {
     DDRB|=(1<<PB0); //set B0=1
     DDRD &=~(1<<PD0);// to clear D0
     PORTD|=(1<<PD0); // set D0=1
     DDRD &=~(1<<PD1);// to clear D1
     PORTD|=(1<<PD1);// set D1=1

    while(1)
      {if(!(PIND&(1<<PD0)))
          {if(!(PIND&(1<<PD1)))// when both switches on then led glows
           {PORTB|=(1<<PB0);
           delay_ms(20);
           }
           else{
        PORTB&=~(1<<PB0);
        delay_ms(20);

         }
          }

        else
        {PORTB&=~(1<<PB0);
        delay_ms(20);

    }
    }   
}

void delay_ms(uint32_t delay_time)
{  uint32_t units = 0;
	for (units = 0; units <= delay_time; units++)
	{
		_delay_ms(1);
	}
}