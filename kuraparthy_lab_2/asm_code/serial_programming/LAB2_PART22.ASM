	MOV	TMOD, #20H
	MOV	TH1, #-3
	MOV	SCON, #40H
	SETB	TR1
AGAIN: MOV	SBUF, #'U'
HERE: JNB	TI, HERE
	CLR	TI
	SJMP	AGAIN
	END