#ifndef ACTIVITY3_H_INCLUDED
#define ACTIVITY3_H_INCLUDED



#include <avr/io.h>
#include<util/delay.h>

#define set_prescaler TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10)
#define set_10bit_fast_pwm TCCR1A|=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10)
#define set_pwm_output DDRB|=(1<<PB1)
char activity3(uint16_t);



#endif // ACTIVITY3_H_INCLUDED
