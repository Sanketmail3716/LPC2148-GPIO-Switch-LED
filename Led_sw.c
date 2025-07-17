#include<lpc21XX.h>           
#define led1 17
#define sw1  14
#define sw2  15

void Delay(unsigned int );          

void main (void)
{ PINSEL0=0x00000000;
	PINSEL1=0x00000000;
	PINSEL2=0x00000000;
	IODIR0|=(1<<led1);
  IODIR0|=(0<<sw1);	
	IODIR0|=(0<<sw2);	
	
    while(1)                
    {
				if((IOPIN0 &(1<<sw1))==0)
				{
						Delay(30); 
      
					IOSET0=(1<<led1); 
					  
				}	
				if(!(IOPIN0 &(1<<sw2)))//if((IOPIN0 &(1<<sw2))==0)
				{
					Delay(30); 
					IOCLR0=(1<<led1); 
				
				}
		}
}

void Delay(unsigned int time)
{
    int j;
    int i;
    for(i=0;i<time;i++)
    {
        for(j=0;j<60000;j++)
        {
        }
    }
}