IN 10H
START:
	CALL	KIND	; FERE APO TO PLIKTROLOGIO
	CPI 	10H	; AN A>0x0F
	JNC	START	; PARE NEO NUM
	RLC		; x2
	RLC		; x4
	RLC		; x8
	RLC		; x16
	MOV	B,A	; GRAPSE TON A STO B
FERE_Y:
	CALL	KIND	; FERE KAI TON EPOMENO	
	CPI	10H	
	JNC	FERE_Y 
	ADD	B	; A = 16x + y
	MVI	B,00H	; MHDENIZW TON B
	MVI	C,00H	; MHDENIZW TON C
EKATONTADES:
	CPI	64H	; SYGKRINW ME TO 100
	JC	DEKADES ; AN EINAI MIKROTERO EKSETAZW TO 10
	INR	C	; PROSTHETO 1 STON DEIKTH TWN EKATONTADWN
	SUI	64H	; AFAIRW 100
	JMP	EKATONTADES
DEKADES:
	CPI	0AH	; SYGKRINW ME TO 10
	JC	DONE	; AN EINAI MIKROTERO TELEIWSA
	INR	B	; PROSTHETW ALLO ENA
	SUI	0AH	; AFAIRW 10
	JMP	DEKADES
DONE:	
	STA	0A00H	; GRAPSE TO PSIFIO TWN MONADWN
	MOV	A,B	; BALE TIS DEKADES STON ACUM
	STA	0A01H	; GRAPSE TO PSIFIO TWN DEKADWN
	MOV	A,C	; OMOIWS ME EKATONTADES
	STA	0A02H
	LXI	D,0A00H
	CALL	STDM	
	CALL	DCD
	JMP	START
END