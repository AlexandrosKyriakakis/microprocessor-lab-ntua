
#include <avr/io.h>
char x0,x1,x2,x3, pd5,pd6,pd7;

int main(void)
{
   DDRB = 0x00;	// initialize PORTB as input
	DDRD = 0xFF;	// initialize PORTD as output
	
   while (1) 
    {
		x0 = PINB & 0x01;
		x1 = (PINB & 0x02) >> 1;
		x2 = (PINB & 0x04) >> 2;
		x3 = (PINB & 0x08) >> 3;
      
   // pd5 = x0 + x1 + x2 + x3
      pd5 = (x0 | x1 | x2 | x3);

   // pd6 = (x0 * x1 * x2) + x3
      pd6 = ((x0 & x1 & x2) | x3);
   
   // pd7 = (x0 + x3) * x1
      pd7 = ((x0 | x3) & x1);
   
      PORTD = (((pd5 & 0x1) << 5) | ((pd6 & 0x1) << 6) | ((pd7 & 0x1) << 7));
   
    }
}

