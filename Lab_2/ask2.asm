
.org 0x0					; ? ???? ??? ?????? (reset) ?????
rjmp reset					; ?? ????????? ???? ?/?? 0x0
.org 0x4					; ? ??????????? ??? INT1 
rjmp ISR1					; ???????? ???? ?/?? 0x4

reset:
	ldi r24, (1 << ISC11)|(1 << ISC10)	; ??? ??????? ?? ?????? ?????
										; ??? ????????????.
										;???????? ? ??????? INT1 ??
	out MCUCR, r24						; ??????????? ?? ???? ??????? ?????
	ldi r24, (1 << INT1)				; ???????????? ?? ??????? INT1
	out GICR, r24						
	ldi r26, low(RAMEND)				; ???????????? ??? stack
	out SPL, r26						; ??? ?? ????????? ?? ret
	ldi r26, high(RAMEND)
	out SPH, r26
	ser r26								; ?????? ?? ?????? ?? r26
	out DDRC, r26						; ??? ?? ????? ?? PORTC ???
	out DDRB, r26						; PORTB ??? ?????
	clr r15								; ???????? ?? r15 ??? ????? ? ???????? ??? ????????
	clr r26								; ???????? ?? r26
	clr r27								; ???????? ?? r27
	ldi r23, (1 << 7)|(1 << 6)			; ????? ?????????? bit 6 ??? bit 7
	out DDRD, r26						; ??? ?? ????? ?? PIND ??? ??????
	out PORTA, r26						; ??? ?? ????? ?? PINA ??? ??????
	sei									; ???????????? ????????
loop1:
	out PORTC, r26						; ???????? ???? ????? PORTC ??? ???? ??? ???????
	inc r26
	rjmp loop1


ISR1:
	push r26						; ???? ?? ??????????? ??? r26
	in r25, SREG					; ??? SREG (kataxwriths gia ta flags status resgister)
	push r25
	inc r15
	in r22,PINA
	and r22,r23						; ????? and ?? ??? ????? 11000000
	cp r22,r23						; ??????? ?? ??? ?? ??? bits ????? ?????
	brne if_not_equal				; ?? ????????? ??? ??? ???? ??? ????????? ????, ??????? ???? 
	out PORTB,r15					; ???????? ??? ???? ??? ??????? ???????? ??? PORTB
	rjmp equal
if_not_equal:
	out PORTB,r27					; ???????? 0 ??? PORTB
equal:
	pop r25							; ????????? ??????????? r26	
	out SREG, r25					; ??? SREG
	pop r26	
reti