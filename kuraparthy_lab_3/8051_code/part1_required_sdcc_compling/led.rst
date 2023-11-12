                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : FreeWare ANSI-C Compiler
                              3 ; Version 2.3.1-pj3 Fri Oct 07 15:35:41 2022
                              4 
                              5 ;--------------------------------------------------------
                              6 	.module led
                              7 	
                              8 ;--------------------------------------------------------
                              9 ; Public variables in this module
                             10 ;--------------------------------------------------------
                             11 	.globl _main
                             12 	.globl _delay
                             13 ;--------------------------------------------------------
                             14 ; special function registers
                             15 ;--------------------------------------------------------
                    0080     16 _P0	=	0x0080
                    0081     17 _SP	=	0x0081
                    0082     18 _DPL	=	0x0082
                    0083     19 _DPH	=	0x0083
                    0087     20 _PCON	=	0x0087
                    0088     21 _TCON	=	0x0088
                    0089     22 _TMOD	=	0x0089
                    008A     23 _TL0	=	0x008a
                    008B     24 _TL1	=	0x008b
                    008C     25 _TH0	=	0x008c
                    008D     26 _TH1	=	0x008d
                    0090     27 _P1	=	0x0090
                    0098     28 _SCON	=	0x0098
                    0099     29 _SBUF	=	0x0099
                    00A0     30 _P2	=	0x00a0
                    00A8     31 _IE	=	0x00a8
                    00B0     32 _P3	=	0x00b0
                    00B8     33 _IP	=	0x00b8
                    00D0     34 _PSW	=	0x00d0
                    00E0     35 _ACC	=	0x00e0
                    00F0     36 _B	=	0x00f0
                    00C8     37 _T2CON	=	0x00c8
                    00CA     38 _RCAP2L	=	0x00ca
                    00CB     39 _RCAP2H	=	0x00cb
                    00CC     40 _TL2	=	0x00cc
                    00CD     41 _TH2	=	0x00cd
                             42 ;--------------------------------------------------------
                             43 ; special function bits 
                             44 ;--------------------------------------------------------
                    0080     45 _P0_0	=	0x0080
                    0081     46 _P0_1	=	0x0081
                    0082     47 _P0_2	=	0x0082
                    0083     48 _P0_3	=	0x0083
                    0084     49 _P0_4	=	0x0084
                    0085     50 _P0_5	=	0x0085
                    0086     51 _P0_6	=	0x0086
                    0087     52 _P0_7	=	0x0087
                    0088     53 _IT0	=	0x0088
                    0089     54 _IE0	=	0x0089
                    008A     55 _IT1	=	0x008a
                    008B     56 _IE1	=	0x008b
                    008C     57 _TR0	=	0x008c
                    008D     58 _TF0	=	0x008d
                    008E     59 _TR1	=	0x008e
                    008F     60 _TF1	=	0x008f
                    0090     61 _P1_0	=	0x0090
                    0091     62 _P1_1	=	0x0091
                    0092     63 _P1_2	=	0x0092
                    0093     64 _P1_3	=	0x0093
                    0094     65 _P1_4	=	0x0094
                    0095     66 _P1_5	=	0x0095
                    0096     67 _P1_6	=	0x0096
                    0097     68 _P1_7	=	0x0097
                    0098     69 _RI	=	0x0098
                    0099     70 _TI	=	0x0099
                    009A     71 _RB8	=	0x009a
                    009B     72 _TB8	=	0x009b
                    009C     73 _REN	=	0x009c
                    009D     74 _SM2	=	0x009d
                    009E     75 _SM1	=	0x009e
                    009F     76 _SM0	=	0x009f
                    00A0     77 _P2_0	=	0x00a0
                    00A1     78 _P2_1	=	0x00a1
                    00A2     79 _P2_2	=	0x00a2
                    00A3     80 _P2_3	=	0x00a3
                    00A4     81 _P2_4	=	0x00a4
                    00A5     82 _P2_5	=	0x00a5
                    00A6     83 _P2_6	=	0x00a6
                    00A7     84 _P2_7	=	0x00a7
                    00A8     85 _EX0	=	0x00a8
                    00A9     86 _ET0	=	0x00a9
                    00AA     87 _EX1	=	0x00aa
                    00AB     88 _ET1	=	0x00ab
                    00AC     89 _ES	=	0x00ac
                    00AF     90 _EA	=	0x00af
                    00B0     91 _P3_0	=	0x00b0
                    00B1     92 _P3_1	=	0x00b1
                    00B2     93 _P3_2	=	0x00b2
                    00B3     94 _P3_3	=	0x00b3
                    00B4     95 _P3_4	=	0x00b4
                    00B5     96 _P3_5	=	0x00b5
                    00B6     97 _P3_6	=	0x00b6
                    00B7     98 _P3_7	=	0x00b7
                    00B0     99 _RXD	=	0x00b0
                    00B1    100 _TXD	=	0x00b1
                    00B2    101 _INT0	=	0x00b2
                    00B3    102 _INT1	=	0x00b3
                    00B4    103 _T0	=	0x00b4
                    00B5    104 _T1	=	0x00b5
                    00B6    105 _WR	=	0x00b6
                    00B7    106 _RD	=	0x00b7
                    00B8    107 _PX0	=	0x00b8
                    00B9    108 _PT0	=	0x00b9
                    00BA    109 _PX1	=	0x00ba
                    00BB    110 _PT1	=	0x00bb
                    00BC    111 _PS	=	0x00bc
                    00D0    112 _P	=	0x00d0
                    00D1    113 _F1	=	0x00d1
                    00D2    114 _OV	=	0x00d2
                    00D3    115 _RS0	=	0x00d3
                    00D4    116 _RS1	=	0x00d4
                    00D5    117 _F0	=	0x00d5
                    00D6    118 _AC	=	0x00d6
                    00D7    119 _CY	=	0x00d7
                    00AD    120 _ET2	=	0x00ad
                    00C8    121 _T2CON_0	=	0x00c8
                    00C9    122 _T2CON_1	=	0x00c9
                    00CA    123 _T2CON_2	=	0x00ca
                    00CB    124 _T2CON_3	=	0x00cb
                    00CC    125 _T2CON_4	=	0x00cc
                    00CD    126 _T2CON_5	=	0x00cd
                    00CE    127 _T2CON_6	=	0x00ce
                    00CF    128 _T2CON_7	=	0x00cf
                    00C8    129 _CP_RL2	=	0x00c8
                    00C9    130 _C_T2	=	0x00c9
                    00CA    131 _TR2	=	0x00ca
                    00CB    132 _EXEN2	=	0x00cb
                    00CC    133 _TCLK	=	0x00cc
                    00CD    134 _RCLK	=	0x00cd
                    00CE    135 _EXF2	=	0x00ce
                    00CF    136 _TF2	=	0x00cf
                            137 ;--------------------------------------------------------
                            138 ; internal ram data
                            139 ;--------------------------------------------------------
                            140 	.area DSEG    (DATA)
                            141 ;--------------------------------------------------------
                            142 ; overlayable items in internal ram 
                            143 ;--------------------------------------------------------
                            144 	.area	OSEG    (OVR,DATA)
                            145 ;--------------------------------------------------------
                            146 ; Stack segment in internal ram 
                            147 ;--------------------------------------------------------
                            148 	.area	SSEG	(DATA)
   0030                     149 __start__stack:
   0030                     150 	.ds	1
                            151 
                            152 ;--------------------------------------------------------
                            153 ; indirectly addressable internal ram data
                            154 ;--------------------------------------------------------
                            155 	.area ISEG    (DATA)
                            156 ;--------------------------------------------------------
                            157 ; bit data
                            158 ;--------------------------------------------------------
                            159 	.area BSEG    (BIT)
                            160 ;--------------------------------------------------------
                            161 ; external ram data
                            162 ;--------------------------------------------------------
                            163 	.area XSEG    (XDATA)
                            164 ;--------------------------------------------------------
                            165 ; external initialized ram data
                            166 ;--------------------------------------------------------
                            167 	.area XISEG   (XDATA)
                            168 ;--------------------------------------------------------
                            169 ; interrupt vector 
                            170 ;--------------------------------------------------------
                            171 	.area CSEG    (CODE)
   0000                     172 __interrupt_vect:
   0000 02 00 6F            173 	ljmp	__sdcc_gsinit_startup
   0003 32                  174 	reti
   0004                     175 	.ds	7
   000B 32                  176 	reti
   000C                     177 	.ds	7
   0013 32                  178 	reti
   0014                     179 	.ds	7
   001B 32                  180 	reti
   001C                     181 	.ds	7
   0023 32                  182 	reti
   0024                     183 	.ds	7
   002B 32                  184 	reti
   002C                     185 	.ds	7
                            186 ;--------------------------------------------------------
                            187 ; global & static initialisations
                            188 ;--------------------------------------------------------
                            189 	.area GSINIT  (CODE)
                            190 	.area GSFINAL (CODE)
                            191 	.area GSINIT  (CODE)
   006F                     192 __sdcc_gsinit_startup:
   006F 75 81 07            193 	mov	sp,#7
   0072 12 00 6B            194 	lcall	__sdcc_external_startup
   0075 E5 82               195 	mov	a,dpl
   0077 60 03               196 	jz	__sdcc_init_data
   0079 02 00 33            197 	ljmp	__sdcc_program_startup
   007C                     198 __sdcc_init_data:
                            199 ;	_mcs51_genXINIT() start
   007C 74 00               200 	mov	a,#l_XINIT
   007E 44 00               201 	orl	a,#l_XINIT>>8
   0080 60 29               202 	jz	00003$
   0082 74 AE               203 	mov	a,#s_XINIT
   0084 24 00               204 	add	a,#l_XINIT
   0086 F9                  205 	mov	r1,a
   0087 74 00               206 	mov	a,#s_XINIT>>8
   0089 34 00               207 	addc	a,#l_XINIT>>8
   008B FA                  208 	mov	r2,a
   008C 90 00 AE            209 	mov	dptr,#s_XINIT
   008F 78 00               210 	mov	r0,#s_XISEG
   0091 75 A0 00            211 	mov	p2,#(s_XISEG >> 8)
   0094 E4                  212 00001$:	clr	a
   0095 93                  213 	movc	a,@a+dptr
   0096 F2                  214 	movx	@r0,a
   0097 A3                  215 	inc	dptr
   0098 08                  216 	inc	r0
   0099 B8 00 02            217 	cjne	r0,#0,00002$
   009C 05 A0               218 	inc	p2
   009E E5 82               219 00002$:	mov	a,dpl
   00A0 B5 01 F1            220 	cjne	a,ar1,00001$
   00A3 E5 83               221 	mov	a,dph
   00A5 B5 02 EC            222 	cjne	a,ar2,00001$
   00A8 75 A0 FF            223 	mov	p2,#0xFF
   00AB                     224 00003$:
                            225 ;	_mcs51_genXINIT() end
                            226 	.area GSFINAL (CODE)
   00AB 02 00 33            227 	ljmp	__sdcc_program_startup
                            228 ;--------------------------------------------------------
                            229 ; Home
                            230 ;--------------------------------------------------------
                            231 	.area HOME    (CODE)
                            232 	.area CSEG    (CODE)
                            233 ;--------------------------------------------------------
                            234 ; code
                            235 ;--------------------------------------------------------
                            236 	.area CSEG    (CODE)
   0033                     237 __sdcc_program_startup:
   0033 12 00 38            238 	lcall	_main
                            239 ;	return from main will lock up
   0036 80 FE               240 	sjmp .
                            241 ;------------------------------------------------------------
                            242 ;Allocation info for local variables in function 'main'
                            243 ;------------------------------------------------------------
                            244 ;	led.c 5
                            245 ;	-----------------------------------------
                            246 ;	 function main
                            247 ;	-----------------------------------------
   0038                     248 _main:
                    0002    249 	ar2 = 0x02
                    0003    250 	ar3 = 0x03
                    0004    251 	ar4 = 0x04
                    0005    252 	ar5 = 0x05
                    0006    253 	ar6 = 0x06
                    0007    254 	ar7 = 0x07
                    0000    255 	ar0 = 0x00
                    0001    256 	ar1 = 0x01
                            257 ;	led.c 7
   0038                     258 00102$:
                            259 ;	led.c 9
                            260 ;	genAssign
   0038 75 90 FF            261 	mov	_P1,#0xFF
                            262 ;	led.c 10
                            263 ;	genCall
   003B 12 00 47            264 	lcall	_delay
                            265 ;	led.c 11
                            266 ;	genAssign
   003E 75 90 00            267 	mov	_P1,#0x00
                            268 ;	led.c 12
                            269 ;	genCall
   0041 12 00 47            270 	lcall	_delay
                            271 ; Peephole 132   changed ljmp to sjmp
   0044 80 F2               272 	sjmp 00102$
   0046                     273 00104$:
   0046 22                  274 	ret
                            275 ;------------------------------------------------------------
                            276 ;Allocation info for local variables in function 'delay'
                            277 ;------------------------------------------------------------
                            278 ;	led.c 16
                            279 ;	-----------------------------------------
                            280 ;	 function delay
                            281 ;	-----------------------------------------
   0047                     282 _delay:
                            283 ;	led.c 19
                            284 ;	genAssign
   0047 7A 00               285 	mov	r2,#0x00
   0049 7B 00               286 	mov	r3,#0x00
   004B                     287 00104$:
                            288 ;	genCmpLt
                            289 ;	genCmp
   004B C3                  290 	clr	c
   004C EA                  291 	mov	a,r2
   004D 94 55               292 	subb	a,#0x55
   004F EB                  293 	mov	a,r3
   0050 64 80               294 	xrl	a,#0x80
   0052 94 82               295 	subb	a,#0x82
                            296 ;	genIfxJump
                            297 ; Peephole 108   removed ljmp by inverse jump logic
   0054 50 14               298 	jnc  00108$
   0056                     299 00114$:
                            300 ;	genAssign
   0056 7C 55               301 	mov	r4,#0x55
   0058 7D 02               302 	mov	r5,#0x02
   005A                     303 00103$:
                            304 ;	genDjnz
                            305 ;	genMinus
                            306 ;	genMinusDec
   005A 1C                  307 	dec	r4
   005B BC FF 01            308 	cjne	r4,#0xff,00115$
   005E 1D                  309 	dec	r5
   005F                     310 00115$:
                            311 ;	genIfx
   005F EC                  312 	mov	a,r4
   0060 4D                  313 	orl	a,r5
                            314 ;	genIfxJump
                            315 ; Peephole 109   removed ljmp by inverse jump logic
   0061 70 F7               316 	jnz  00103$
   0063                     317 00116$:
                            318 ;	genPlus
                            319 ;	genPlusIncr
                            320 ;	tail increment optimized
   0063 0A                  321 	inc	r2
   0064 BA 00 E4            322 	cjne	r2,#0x00,00104$
   0067 0B                  323 	inc	r3
                            324 ; Peephole 132   changed ljmp to sjmp
   0068 80 E1               325 	sjmp 00104$
   006A                     326 00108$:
   006A 22                  327 	ret
                            328 	.area CSEG    (CODE)
                            329 	.area	XINIT   (CODE)
