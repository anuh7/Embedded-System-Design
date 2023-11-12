              ORG   $000
              MOV   A,#0BH
              MOV   B,#03h
              MOV   22H,B
              MOV   R1,22H
              MOV   20H,A
              RLC   A 
              CLR   C
              RLC   A
              JC    EXP2
              MOV   21H,A
              CJNE   R1,#0H,DIVI
              MOV   30H,#01h
              SJMP  ENDLOOP
EXP2:         MOV   23H,A
              MOV   30H,#02H
              SJMP  ENDLOOP
DIVI:         CJNE  A,22H,S
              INC   R0
              CLR   A 
              SJMP  FINISH
S:            JC    FINISH
              SUBB  A,22H
              INC   R0
              JNZ   DIVI
FINISH:       MOV   23H,R0
              MOV   24H,A
              MOV   30H,#0h


ENDLOOP:      SJMP	ENDLOOP
 