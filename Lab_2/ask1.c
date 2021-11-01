/*
 * ask1_C.c
 *
 * Created: 11/1/2020 11:09:55 PM
 * Author : Alexandros Kyriakakis
 */ 

#include <avr/io.h>
char a,b,c,d, f0, f1;

int main(void)
{
    DDRB = 0xFF;	// initialize PORTB as output
	DDRC = 0x00;	// initialize PORTC as input
	
    while (1) 
    {
		a = PINC & 0x01;
		b = (PINC & 0x02) >> 1;
		c = (PINC & 0x04) >> 2;
		d = (PINC & 0x08) >> 3;
	//	F0 = (A'B + B'CD)'
		f0 = ~(((~a) & b) | ((~b) & c & d));
	//	F1 = (AC)(B+D)
		f1 = (a & c) & (b | d);
		PORTB = ((f0 & 0x01) | ((f1 & 0x01) << 1));
    }
}

