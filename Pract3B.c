#include<REG51.H>
void ToDelay(void); // delay() function prototype
void main(void) 
{
while(1) 
{
P1=0xAA; // pattern to turn on alternate LEDs
ToDelay(); 
P1=0x55; // Reverse the sequence.
ToDelay(); 
}
}
void ToDelay()
{
unsigned int i,j;
for (j =0; j<24; j++)
 for(i=0;i<1000;i++); 
}
