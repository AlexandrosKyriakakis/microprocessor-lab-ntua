# Askisi 1

Να υλοποιηθούν σε ένα σύστημα Μικροελεγκτή AVR (προσομοίωση στο Atmel Studio 7) οι λογικές συναρτήσεις: 
F0 = (A'B + B'CD)'
F1= (A*C)*(B+D)
Οι τιμές των F0- F1 να εμφανιστούν αντίστοιχα στα δύο LSB της θύρας εξόδου PORTB (0-1). 
Οι μεταβλητές εισόδου (A, B, C, D) υποθέτουμε ότι αντιστοιχούν στα 4 bit της θύρας εισόδου PORTC (0-3), με το A στο LSB. 
Το πρόγραμμα να δοθεί σε assembly και C.

```c

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

```

# Askisi 3

Nα δοθεί πρόγραμμα με ρουτίνα εξυπηρέτησης συνδεδεμένης με την εξωτερική διακοπή INT0 (PD2) που όταν ενεργοποιείται να ανάβει τόσα LEDs της θύρας PORTC (PC0-7) αρχίζοντας από τα LSB όσο το πλήθος των διακοπτών (dip switches) της θύρας PORTΒ (PΒ7-PΒ0) που είναι OΝ μόνο αν το PA2 είναι OFF. Αν το PA2 είναι ON τότε κατά την ρουτίνα εξυπηρέτησης να φαίνεται στην PORTC το πλήθος των διακοπτών (dip switches) της θύρας PORTΒ (PΒ7-PΒ0) που είναι OΝ σε δυαδική μορφή. Το πρόγραμμα να δοθεί σε C.

```c

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
```
