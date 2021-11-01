# Askisi 1

Να υλοποιηθούν σε ένα σύστημα Μικροελεγκτή AVR (προσομοίωση στο Atmel Studio 7) οι λογικές συναρτήσεις: 
F0 = (A'B + B'CD)'
F1= (A*C)*(B+D)
Οι τιμές των F0- F1 να εμφανιστούν αντίστοιχα στα δύο LSB της θύρας εξόδου PORTB (0-1).
Οι μεταβλητές εισόδου (A, B, C, D) υποθέτουμε ότι αντιστοιχούν στα 4 bit της θύρας εισόδου PORTC (0-3), με το A στο LSB. 
Το πρόγραμμα να δοθεί σε assembly και C.

```asm

.include "m16def.inc"
start:	ldi	r24, low(RAMEND)		; arxikopoihsh stack pointer
		out	SPL, r24
		ldi	r24, high(RAMEND)
		out SPH, r24

		ser r24						; r24 = FF
		out DDRB, r24				; arxikopoiw thn PORTB gia output
		clr	r24						; clear register set zero
		out DDRC, r24				; arxikopoiw thn PORTC gia input

; F0 = r24 = (A'B + B'CD)'

main:	in	r25, PINC				; pare thn eisodo apo to PORTC
		mov r26, r25				; antigrafw r25 ston r26
		mov r24, r26				; antigrapse ton r26 ston r24 (estw sysoreyw to F0 sto r24)
		com r24						; sympliroma ws pros 1 tou r24
		lsr r26					   ; shift once right (peftei to B panw sto A' kai to C sto B')
		and r24, r26				; kanw mazi tis prakseis A'B kai B'C
		lsr r26						; kanw pali shift deksia giati twra tha pesei to D panw sto B'C
		ori r26, 1					; petaw to LSB gia na mh xalasei to A'B
		and	r24, r26				; kai athroizw B'C me D (ara twra exw A'B sto LSB toy r24 kai B'CD sto diplano tou LSB)
		mov r26, r24				; antigrafw r24 sto r26
		lsr r26						; shift right
		or	r24, r26				; kanw to or A'B + B'CD kai menei to ()'
		com r24						; kanw to sumpliroma ws pros 1 ()' 
		andi r24, 1					; petaw ta ypoloipa bits

; F1 = r25 = (AC)(B+D)		
		mov r26, r25				; epanaferw thn eisodo gia na synexisw me F1
		lsr r26
		lsr r26						; double shift right gia na pesoyn ta C panw sto A kai D panw sto B
		ori r26, 254				; vale maska gia na perasei mono to LSB
		and r25, r26				; LSB  = AC 
		mov r26, r25				; ksana pare to giati exei ta B kai D
		lsr r26
		lsr r26						; gia na pesei pali to D panw sto B
		andi r26, 2					; vazw maska sto 2o bit gia na ginei mono to B+D
		or r25, r26					; kanw thn praksh B+D
		mov r26, r25				; menei na kanw mono to sunoliko and (AC)(B+D)
		lsl	r26						; vazw to AC na pesei panw sto B+D
		and r25, r26				; kanw thn praksh kai to apotelesma vrisketai sto 2o LSB bit
		andi r25, 2					; vazw maska gia na perasei mono to 2o bit
		or r24, r25					; ta grafw ola sto r24 kai emfanizw
		out PORTB, r24				; grafw sta led

		rjmp start

```

# Askisi 2

Υποθέτουμε ότι «τρέχει» το προηγούμενο πρόγραμμα του μετρητή (Πίνακας 2.1) με θύρα όμως εξόδου το PORTC. Να δοθεί ρουτίνα εξυπηρέτησης της εξωτερικής διακοπής INT1 (PD3) που όταν ενεργοποιείται να απαριθμεί το πλήθος των διακοπών με την προϋπόθεση ότι τα dip switches PΑ7 και PA6 είναι στο λογικό ‘1’, αλλιώς όχι. Ο παραπάνω μετρητής (Πίνακας 2.1, με θύρα όμως εξόδου το PORTC) που αποτελεί το κύριο πρόγραμμα, να απεικονίζει στα leds PC7-PC0 την μέτρησή του. Η μέτρηση του πλήθους των εξωτερικών διακοπών INT1 να δίνεται σε δυαδική μορφή στα leds PB7-PB0. Το πρόγραμμα να δοθεί σε assembly.


```asm


.org 0x0					; Η αρχή του κώδικα (reset) πάντα
rjmp reset					; θα δηλώνεται στην δ/ση 0x0
.org 0x4					; Η εξυπηρέτηση της INT1 
rjmp ISR1					; ορίζεται στην δ/ση 0x4

reset:
	ldi r24, (1 << ISC11)|(1 << ISC10)	; Εδώ αρχίζει το κυρίως τμήμα
										; του προγράμματος.
										;ορίζεται η διακοπή INT1 να
	out MCUCR, r24						; προκαλείται με σήμα θετικής ακμής
	ldi r24, (1 << INT1)				; Ενεργοποίησε τη διακοπή INT1
	out GICR, r24						
	
	ldi r26, low(RAMEND)				; Αρχικοποίηση του stack
	out SPL, r26						; για να δουλεύουν τα ret
	ldi r26, high(RAMEND)
	out SPH, r26
	
	ser r26								; γεμίζω με άσσους το r26
	out DDRC, r26						; για να ορίσω τα PORTC και
	out DDRB, r26						; PORTB για έξοδο
	
   clr r26								; Μηδενίζω το r26
	out DDRD, r26						; για να ορίσω το PIND για είσοδο
	out PORTA, r26						; για να ορίσω το PINA για είσοδο
   
   clr r15								; Μηδενίζω το r15 που είναι ο μετρητής των διακοπών
	clr r27								; Μηδενίζω το r27
	
   ldi r23, (1 << 7)|(1 << 6)		; Μάσκα απομόνωσης bit 6 και bit 7
	
	sei									; ενεργοποίηση διακοπών
loop1:
	out PORTC, r26						; εμφανίζω στην έξοδο PORTC την τιμή του μετρητή
	inc r26
	rjmp loop1


ISR1:
	push r26						; σώσε το περιεχόμενο των r26
	in r26, SREG					; και SREG
	push r26
	inc r15
	in r22,PINA
	and r22,r23						; πράξη and με την μάσκα 11000000
	cp r22,r23						; έλεγχος αν και τα δύο bits είναι άσσοι
	brne if_not_equal				; σε περίπτωση που δεν έχει την επιθυμητή τιμή, γίνεται άλμα 
	out PORTB,r15					; εμφάνισε την τιμή του μετρητή διακοπών στο PORTB
	rjmp equal
if_not_equal:
	out PORTB,r27					; εμφάνισε 0 στο PORTB
equal:
	pop r26							; επίστρεψε περιεχόμενο r26	
	out SREG, r26					; και SREG
	pop r26	
reti
```