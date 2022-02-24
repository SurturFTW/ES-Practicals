#include<REG51.H>
void ToDelay(void); 
void main(void) 
{
while (1) 
{
P1=0xFF; //make high all bits of port 1
ToDelay(); 
P1=0x00; // make low all bits of port 1
ToDelay(); }
}
void ToDelay() //delay function
{
int i,j;
for(i=0;i<100;i++){
for(j=0;j<100;j++){
}
}
}