start:
	IN 10H
	LXI B,03E8H ;BC -> 1000dec (1ms*1000 = 1s)

count_up:
	LDA 2000H  ;check input
	ANI 0FH
	MOV D,A
	MVI A,FFH  ;FF gia na ginei 0 me to prwto inr
cont_up:
	MOV E,A
lock_up:
	LDA 2000H ;check for MSB 
	ANI 80H
	CPI 80H
	JNZ lock_up
	MOV A,E
	INR A
	CMA
	STA 3000H   ;arnitiki logiki stous diakoptes
	CALL DELB
	CMA
	CMP D
	JZ count_down  ;otan ftasei stin eisodo ksekina pros ta katw
	JMP cont_up

count_down:
	MOV E,A
lock_down:
	LDA 2000H ;check for MSB
	ANI 80H
	CPI 80H
	JNZ lock_down
	MOV A,E
	DCR A
	CMA
	STA 3000H
	CALL DELB
	CMA
	CPI 01H ; epomeno einai to 0 ara allazw se count_up
	JZ count_up   ;otan ftasei sto 0 diavase eisodo ksana kai metra pros ta panw pali.
	JMP count_down  ;alliws sinexise
	
END
