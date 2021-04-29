#include"activity2.h"
#include"activity3.h"
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
    while(!(ADCSRA & (1<<ADIF)));//check ADC conversion complete or not
    ADCSRA|=(1<<ADIF);//when ADC conversion complete
    return(ADC);
}

int16_t activity2()
{  InitADC(); // necessary initialization of ADMUX
   uint16_t temp=0;
    {   temp=ReadADC(0);// storing the digital value into temporary register
        return(temp);

    }


}
