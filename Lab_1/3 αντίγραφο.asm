start:
	IN 10H
	LXI B,01F4H ; 500decimal
	MVI D,01H  ;arxiki thesi
	MVI E,01H ;direction left (lsb - > msb)
	JMP dir_left
change_dir_rl:
	MOV A,E
	XRI 01H
	MOV E,A
	MOV A,D
	CPI 01H
	JZ skip_rot1
	CPI 02H
	JZ skip_rot1  
	RLC
	RLC
skip_rot1:
	MOV D,A
dir_left:
	LDA 2000H
	MOV H,A
	ANI 80H          ;check MSB off -> lock
	CPI 80H
	JNZ dir_left
	MOV A,H
	ANI 01H
	CMP E
	JNZ change_dir_lr ;an E den einai 01H simainei oti exei allaksei ara allazei kai i fora
	MOV A,D
	CMA
	STA 3000H
	CMA
	CPI 01H
	JNZ no_extra_left
	CALL DELB
no_extra_left:
	CALL DELB
	RLC
	MOV D,A
	CPI 80H
	JZ dir_right
	JMP dir_left

change_dir_lr:
	MOV A,E
	XRI 01H
	MOV E,A
	MOV A,D
	CPI 80H
	JZ skip_rot2
	CPI 40H
	JZ skip_rot2
	RRC
	RRC
skip_rot2:
	MOV D,A
dir_right:
	LDA 2000H
	MOV H,A
	ANI 80H
	CPI 80H
	JNZ dir_right ; check MSB off -> lock
	MOV A,H
	ANI 01H
	CMP E		; elegxos gia allagi tou lsb
	JNZ change_dir_rl
	MOV A,D
	CMA
	STA 3000H
	CMA
	CPI 80H
	JNZ no_extra_right ;an einai apo allagi se akro diladi einai sto 80H xreiazetai extra kathisterisi
	CALL DELB
no_extra_right:
	CALL DELB
	RRC		
	MOV D,A
	CPI 01H	;elegxos an eftase sto deksi akro
	JZ dir_left
	JMP dir_right
END	

	