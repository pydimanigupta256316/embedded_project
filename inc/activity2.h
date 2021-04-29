#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED



#include <avr/io.h>
#include <util/delay.h>



void InitADC();
uint16_t ReadADC(uint8_t ch);
int16_t activity2();

#endif // ACTIVITY2_H_INCLUDED
