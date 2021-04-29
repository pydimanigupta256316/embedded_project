/**
 * @file activity1.h
 * @author manigupta()
 * @brief to check button sensor and heater on
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED


#include <avr/io.h>
#include<util/delay.h>
/**
 * @brief to make led on &off the ports are assigned
 * 
 */

#define set_port_as_led_out DDRB|=(1<<PB0)
#define set_port_as_button_input DDRD &=~(1<<PD0)
#define button_activate !(PIND&(1<<PD0))
#define set_port_as_heater_input DDRD &=~(1<<PD1)
#define heater_activate !(PIND&(1<<PD0))
#define pullup_button_sensor PORTD|=(1<<PD0)
#define pullup_heater PORTD|=(1<<PD1)
#define led_on PORTB|=(1<<PB0)
#define led_off PORTB&=~(1<<PB0)
int activity1(void);
#endif // ACTIVITY1_H_INCLUDED
