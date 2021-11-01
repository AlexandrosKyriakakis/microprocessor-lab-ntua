
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
		lsr	r26						; shift once right (peftei to B panw sto A' kai to C sto B')
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
