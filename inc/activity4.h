/**
 * @file activity4.h
 * @author manigupta ()
 * @brief  view the adjusted temperature in ser
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED


#include <avr/io.h>
#include<util/delay.h>

#define set_asynchronous_clock UCSR0C = (1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);
#define transmitting_receiving_interrupt_enable UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0)
#define data_notreceived !(UCSR0A & (1<<RXC0))
#define data_not_written !(UCSR0A & (1<<UDRE0))

void UARTinit(uint16_t);
char UARTreadchar();
void UARTwritecharacter(char);
void activity4(char);

#endif // ACTIVITY4_H_INCLUDED
