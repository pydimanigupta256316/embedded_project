#include"activity1.h"
int activity1()
 {
     set_port_as_led_out;//set led as output
     set_port_as_button_input;//clear the bit 0 of DDR D
    pullup_button_sensor;// set bit 0 of port D
     set_port_as_heater_input;//clear the bit 1 of DDR D
     pullup_heater;// set bit 1 of port D
     /**
      * @brief//when both are activated then led glows
      * return 1 when led glows 
      * return 0 when led don't glows  
      * 
      */
if(button_activate)
{
    if(heater_activate)
    {
        
        led_on;
        _delay_ms(20);
        return(1);
    }
    else{

        led_off;
        _delay_ms(20);
        return 0;
        }
}
// if any one is not activated then led do not glows
else
    {led_off;
    _delay_ms(20);
      return 0;
    }
}


