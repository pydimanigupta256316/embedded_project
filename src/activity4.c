#include"activity4.h"
void activity4(char m)
{

    UARTinit(103);
    UARTwritecharacter(m);

}
void UARTinit(uint16_t ubrr_value){

    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&(0x00ff);//set the baud rate
    set_asynchronous_clock;//To make asyn clock & and to set no of data bits in a frame
    transmitting_receiving_interrupt_enable;//to set the enables for TRX

}

char UARTreadchar(){

while(data_notreceived){

}

return UDR0;

}

void UARTwritecharacter(char m){

while(data_not_written)
{

}
UDR0 = m;

}


