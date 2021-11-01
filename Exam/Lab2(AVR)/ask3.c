
#include <avr/io.h>
#include <avr/interrupt.h>
unsigned char a,b,res;


ISR (INT0_vect) {
    b = PINB;
    a = PINA;
    res = 0x00;		// edw sysoreyw to apotelesma
	int counter = 0;
    if ((a & (1<<2)) == 0x00){	// tha mpei edw an PA2 == 0
        while (counter < 8){
            if ((b & (0x01)) == 0x01){ // an to lsb einai 1 tote vale allon ena asso sto lsb tou res
                res = res << 1;        // kai to sproxnw aristera
                res |= 0x01;    // krataw ta idi yparxonta 1 toy b
            }

            b = b>>1; // fernw to epomeno bit toy PINB
            counter++;
        }
        // sto telos to res exei tosous assous osous to b alla sth seira jekinontas apo to lsb
    }
    else{
        while (counter < 8){
            if ((b & (0x01)) == 0x01){ // an to lsb einai 1 tote prosthese allon ena asso sto res
                res++;
            }
            b = b>>1;            // sproxnw kai to a deksia
            counter++;
        }
    }
    PORTC = res;			// grafw to apotelesma sto PORTC
}
int main(void)
{
    DDRC = 0xFF;        // initialize as output
    DDRB = 0x00;        // initialize as input
    DDRA = 0x00;        // initialize also PA2 as input

    GICR = 0x40 ;    // energopoiei to INT0 interrupt 
    MCUCR = 0x03;    // INT0 Mode: sthn thetiki akmi
	
    sei();                // enable generally interrupts

    while (1);
}