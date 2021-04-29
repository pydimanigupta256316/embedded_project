#include"activity1.h"
#include"activity2.h"
#include"activity3.h"
#include"activity4.h"

int main(void)
{ uint16_t reg;
 int z,m;
while(1)
{
z=activity1();
if(z==1)
{
reg=activity2();
m=activity3(reg);
activity4(m);
}
else
{
OCR1A=0;
}
}
return 0;
}
