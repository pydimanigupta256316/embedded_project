#include"activity2.h"
/**
 * @brief In this we are converting the analog value to digital value
 * return temp (the binary value) 
 */
void InitADC()
{
    ADMUX=(1<<REFS0);//set refernce voltage
    ADCSRA=(1<<ADEN)|(7<<ADPS0);//to enable ADC & division factor

}
uint16_t ReadADC(uint8_t ch)
{
    ADMUX&=0Xf8; //clear admux
    ch=ch&0b00000111;
    ADMUX|=ch;//analog channel selection bits
    ADCSRA|=(1<<ADSC);//to start conversion
    while(ADC_not_occured);//check ADC conversion complete or not
    {set_ADC_interrupt_flag;//when ADC conversion complete
    }
    return(ADC);
}

int16_t activity2()
{  InitADC(); // necessary initialization of ADMUX
   uint16_t temp;
temp=ReadADC(0);// storing the digital value into temporary register
return(temp);
}
