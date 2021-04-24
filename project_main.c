/**
 * @file project_main.c
 * @author manigupta ()
 * @brief Project to Blink an LED at 1000ms ON and 500 ms OFF Interval
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "project_config.h"

#include "user_utils.h"
#include "blinky.h"

int main(void)
 {
     DDRB|=(1<<PB0); //set B=1
     DDRD &=~(1<<PD0);
     PORTD|=(1<<PD0);
     DDRD &=~(1<<PD1);
     PORTD|=(1<<PD1);

    while(1)
      {if(!(PIND&(1<<PD0)))
          {if(!(PIND&(1<<PD1)))
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
    
return 0;
}
