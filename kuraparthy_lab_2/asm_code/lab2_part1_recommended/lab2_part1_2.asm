	ORG	0000H
	SJMP	MAIN	
	ORG	0000BH
	SETB	P1.5
	INC	R0
	CLR	TR0
		JB P1.3, JUMP2		
JUMP:	MOV TL0, #053H
		MOV TH0, #06H
		SJMP JUMP3
JUMP2:	MOV	TL0, #07EH
		MOV TH0, #0CBH
JUMP3:	SETB	TR0
		CJNE R0, #024, EXIT
		CPL	P1.1
		MOV R0, #0H
EXIT:	CLR	P1.5
RETI


MAIN: MOV TMOD, #01H
MOV TL0, #0FBH
MOV TH0, #03H
START: MOV IE, #82H
SETB	P1.1
SETB	TR0
MOV	R0, #00H
LOOP: SJMP LOOP
END


