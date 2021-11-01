

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
	clr r15								; Μηδενίζω το r15 που είναι ο μετρητής των διακοπών
	clr r26								; Μηδενίζω το r26
	clr r27								; Μηδενίζω το r27
	ldi r23, (1 << 7)|(1 << 6)			; Μάσκα απομόνωσης bit 6 και bit 7
	out DDRD, r26						; για να ορίσω το PIND για είσοδο
	out PORTA, r26						; για να ορίσω το PINA για είσοδο
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