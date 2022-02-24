#include<reg51.h>
void delay(int time);
void main() 
{
P1 = 00000000; // Initialize Port 1 as Output Port
while(1)
{
P1++; // Increment Port 1 (Binary Counter)
delay(100); 
} 
} 
void delay(int time) 
{
int i,j;
for(i=0;i<=time;i++) 
for(j=0;j<=23;j++); 
}
