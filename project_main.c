/**
 * @file project_main.c
 * @author manigupta ()
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"activity1.h"
#include"activity2.h"
#include"activity3.h"
#include"activity4.h"

int main(void)
{ uint16_t reg;
while(1)
{int z;
z=activity1();//to make led on when button & heater on
if(z==1)
{int m;
reg=activity2();// convert analod to digital;
m=activity3(reg);//to view and  give the selected temperature of the seat 
activity4(m);// transmit the selected temperature
}
else
{
OCR1A=0;
}
}
return 0;
}
