/**
 * @file activity2.h
 * @author manigupta ()
 * @brief to adjust the temperature
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED



#include <avr/io.h>
#include <util/delay.h>

#define ADC_not_occured !(ADCSRA & (1<<ADIF)) 
#define set_ADC_interrupt_flag ADCSRA|=(1<<ADIF)



void InitADC();
uint16_t ReadADC(uint8_t ch);
int16_t activity2();

#endif // ACTIVITY2_H_INCLUDED
