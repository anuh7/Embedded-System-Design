                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	.optsdcc -mmcs51 --model-large
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _isr_zero
                                     12 	.globl _isr_one
                                     13 	.globl _timer_0
                                     14 	.globl _main
                                     15 	.globl _puts
                                     16 	.globl _TF1
                                     17 	.globl _TR1
                                     18 	.globl _TF0
                                     19 	.globl _TR0
                                     20 	.globl _IE1
                                     21 	.globl _IT1
                                     22 	.globl _IE0
                                     23 	.globl _IT0
                                     24 	.globl _SM0
                                     25 	.globl _SM1
                                     26 	.globl _SM2
                                     27 	.globl _REN
                                     28 	.globl _TB8
                                     29 	.globl _RB8
                                     30 	.globl _TI
                                     31 	.globl _RI
                                     32 	.globl _CY
                                     33 	.globl _AC
                                     34 	.globl _F0
                                     35 	.globl _RS1
                                     36 	.globl _RS0
                                     37 	.globl _OV
                                     38 	.globl _F1
                                     39 	.globl _P
                                     40 	.globl _RD
                                     41 	.globl _WR
                                     42 	.globl _T1
                                     43 	.globl _T0
                                     44 	.globl _INT1
                                     45 	.globl _INT0
                                     46 	.globl _TXD0
                                     47 	.globl _TXD
                                     48 	.globl _RXD0
                                     49 	.globl _RXD
                                     50 	.globl _P3_7
                                     51 	.globl _P3_6
                                     52 	.globl _P3_5
                                     53 	.globl _P3_4
                                     54 	.globl _P3_3
                                     55 	.globl _P3_2
                                     56 	.globl _P3_1
                                     57 	.globl _P3_0
                                     58 	.globl _P2_7
                                     59 	.globl _P2_6
                                     60 	.globl _P2_5
                                     61 	.globl _P2_4
                                     62 	.globl _P2_3
                                     63 	.globl _P2_2
                                     64 	.globl _P2_1
                                     65 	.globl _P2_0
                                     66 	.globl _P1_7
                                     67 	.globl _P1_6
                                     68 	.globl _P1_5
                                     69 	.globl _P1_4
                                     70 	.globl _P1_3
                                     71 	.globl _P1_2
                                     72 	.globl _P1_1
                                     73 	.globl _P1_0
                                     74 	.globl _P0_7
                                     75 	.globl _P0_6
                                     76 	.globl _P0_5
                                     77 	.globl _P0_4
                                     78 	.globl _P0_3
                                     79 	.globl _P0_2
                                     80 	.globl _P0_1
                                     81 	.globl _P0_0
                                     82 	.globl _PS
                                     83 	.globl _PT1
                                     84 	.globl _PX1
                                     85 	.globl _PT0
                                     86 	.globl _PX0
                                     87 	.globl _EA
                                     88 	.globl _ES
                                     89 	.globl _ET1
                                     90 	.globl _EX1
                                     91 	.globl _ET0
                                     92 	.globl _EX0
                                     93 	.globl _BREG_F7
                                     94 	.globl _BREG_F6
                                     95 	.globl _BREG_F5
                                     96 	.globl _BREG_F4
                                     97 	.globl _BREG_F3
                                     98 	.globl _BREG_F2
                                     99 	.globl _BREG_F1
                                    100 	.globl _BREG_F0
                                    101 	.globl _P5_7
                                    102 	.globl _P5_6
                                    103 	.globl _P5_5
                                    104 	.globl _P5_4
                                    105 	.globl _P5_3
                                    106 	.globl _P5_2
                                    107 	.globl _P5_1
                                    108 	.globl _P5_0
                                    109 	.globl _P4_7
                                    110 	.globl _P4_6
                                    111 	.globl _P4_5
                                    112 	.globl _P4_4
                                    113 	.globl _P4_3
                                    114 	.globl _P4_2
                                    115 	.globl _P4_1
                                    116 	.globl _P4_0
                                    117 	.globl _PX0L
                                    118 	.globl _PT0L
                                    119 	.globl _PX1L
                                    120 	.globl _PT1L
                                    121 	.globl _PSL
                                    122 	.globl _PT2L
                                    123 	.globl _PPCL
                                    124 	.globl _EC
                                    125 	.globl _CCF0
                                    126 	.globl _CCF1
                                    127 	.globl _CCF2
                                    128 	.globl _CCF3
                                    129 	.globl _CCF4
                                    130 	.globl _CR
                                    131 	.globl _CF
                                    132 	.globl _TF2
                                    133 	.globl _EXF2
                                    134 	.globl _RCLK
                                    135 	.globl _TCLK
                                    136 	.globl _EXEN2
                                    137 	.globl _TR2
                                    138 	.globl _C_T2
                                    139 	.globl _CP_RL2
                                    140 	.globl _T2CON_7
                                    141 	.globl _T2CON_6
                                    142 	.globl _T2CON_5
                                    143 	.globl _T2CON_4
                                    144 	.globl _T2CON_3
                                    145 	.globl _T2CON_2
                                    146 	.globl _T2CON_1
                                    147 	.globl _T2CON_0
                                    148 	.globl _PT2
                                    149 	.globl _ET2
                                    150 	.globl _TMOD
                                    151 	.globl _TL1
                                    152 	.globl _TL0
                                    153 	.globl _TH1
                                    154 	.globl _TH0
                                    155 	.globl _TCON
                                    156 	.globl _SP
                                    157 	.globl _SCON
                                    158 	.globl _SBUF0
                                    159 	.globl _SBUF
                                    160 	.globl _PSW
                                    161 	.globl _PCON
                                    162 	.globl _P3
                                    163 	.globl _P2
                                    164 	.globl _P1
                                    165 	.globl _P0
                                    166 	.globl _IP
                                    167 	.globl _IE
                                    168 	.globl _DP0L
                                    169 	.globl _DPL
                                    170 	.globl _DP0H
                                    171 	.globl _DPH
                                    172 	.globl _B
                                    173 	.globl _ACC
                                    174 	.globl _EECON
                                    175 	.globl _KBF
                                    176 	.globl _KBE
                                    177 	.globl _KBLS
                                    178 	.globl _BRL
                                    179 	.globl _BDRCON
                                    180 	.globl _T2MOD
                                    181 	.globl _SPDAT
                                    182 	.globl _SPSTA
                                    183 	.globl _SPCON
                                    184 	.globl _SADEN
                                    185 	.globl _SADDR
                                    186 	.globl _WDTPRG
                                    187 	.globl _WDTRST
                                    188 	.globl _P5
                                    189 	.globl _P4
                                    190 	.globl _IPH1
                                    191 	.globl _IPL1
                                    192 	.globl _IPH0
                                    193 	.globl _IPL0
                                    194 	.globl _IEN1
                                    195 	.globl _IEN0
                                    196 	.globl _CMOD
                                    197 	.globl _CL
                                    198 	.globl _CH
                                    199 	.globl _CCON
                                    200 	.globl _CCAPM4
                                    201 	.globl _CCAPM3
                                    202 	.globl _CCAPM2
                                    203 	.globl _CCAPM1
                                    204 	.globl _CCAPM0
                                    205 	.globl _CCAP4L
                                    206 	.globl _CCAP3L
                                    207 	.globl _CCAP2L
                                    208 	.globl _CCAP1L
                                    209 	.globl _CCAP0L
                                    210 	.globl _CCAP4H
                                    211 	.globl _CCAP3H
                                    212 	.globl _CCAP2H
                                    213 	.globl _CCAP1H
                                    214 	.globl _CCAP0H
                                    215 	.globl _CKCON1
                                    216 	.globl _CKCON0
                                    217 	.globl _CKRL
                                    218 	.globl _AUXR1
                                    219 	.globl _AUXR
                                    220 	.globl _TH2
                                    221 	.globl _TL2
                                    222 	.globl _RCAP2H
                                    223 	.globl _RCAP2L
                                    224 	.globl _T2CON
                                    225 	.globl _i
                                    226 	.globl _serial_init
                                    227 	.globl _pwm_init
                                    228 	.globl _timer_init
                                    229 	.globl _watchdog_init
                                    230 	.globl _putchar
                                    231 	.globl _getchar
                                    232 	.globl _putstr
                                    233 	.globl _getstr
                                    234 ;--------------------------------------------------------
                                    235 ; special function registers
                                    236 ;--------------------------------------------------------
                                    237 	.area RSEG    (ABS,DATA)
      000000                        238 	.org 0x0000
                           0000C8   239 _T2CON	=	0x00c8
                           0000CA   240 _RCAP2L	=	0x00ca
                           0000CB   241 _RCAP2H	=	0x00cb
                           0000CC   242 _TL2	=	0x00cc
                           0000CD   243 _TH2	=	0x00cd
                           00008E   244 _AUXR	=	0x008e
                           0000A2   245 _AUXR1	=	0x00a2
                           000097   246 _CKRL	=	0x0097
                           00008F   247 _CKCON0	=	0x008f
                           0000AF   248 _CKCON1	=	0x00af
                           0000FA   249 _CCAP0H	=	0x00fa
                           0000FB   250 _CCAP1H	=	0x00fb
                           0000FC   251 _CCAP2H	=	0x00fc
                           0000FD   252 _CCAP3H	=	0x00fd
                           0000FE   253 _CCAP4H	=	0x00fe
                           0000EA   254 _CCAP0L	=	0x00ea
                           0000EB   255 _CCAP1L	=	0x00eb
                           0000EC   256 _CCAP2L	=	0x00ec
                           0000ED   257 _CCAP3L	=	0x00ed
                           0000EE   258 _CCAP4L	=	0x00ee
                           0000DA   259 _CCAPM0	=	0x00da
                           0000DB   260 _CCAPM1	=	0x00db
                           0000DC   261 _CCAPM2	=	0x00dc
                           0000DD   262 _CCAPM3	=	0x00dd
                           0000DE   263 _CCAPM4	=	0x00de
                           0000D8   264 _CCON	=	0x00d8
                           0000F9   265 _CH	=	0x00f9
                           0000E9   266 _CL	=	0x00e9
                           0000D9   267 _CMOD	=	0x00d9
                           0000A8   268 _IEN0	=	0x00a8
                           0000B1   269 _IEN1	=	0x00b1
                           0000B8   270 _IPL0	=	0x00b8
                           0000B7   271 _IPH0	=	0x00b7
                           0000B2   272 _IPL1	=	0x00b2
                           0000B3   273 _IPH1	=	0x00b3
                           0000C0   274 _P4	=	0x00c0
                           0000E8   275 _P5	=	0x00e8
                           0000A6   276 _WDTRST	=	0x00a6
                           0000A7   277 _WDTPRG	=	0x00a7
                           0000A9   278 _SADDR	=	0x00a9
                           0000B9   279 _SADEN	=	0x00b9
                           0000C3   280 _SPCON	=	0x00c3
                           0000C4   281 _SPSTA	=	0x00c4
                           0000C5   282 _SPDAT	=	0x00c5
                           0000C9   283 _T2MOD	=	0x00c9
                           00009B   284 _BDRCON	=	0x009b
                           00009A   285 _BRL	=	0x009a
                           00009C   286 _KBLS	=	0x009c
                           00009D   287 _KBE	=	0x009d
                           00009E   288 _KBF	=	0x009e
                           0000D2   289 _EECON	=	0x00d2
                           0000E0   290 _ACC	=	0x00e0
                           0000F0   291 _B	=	0x00f0
                           000083   292 _DPH	=	0x0083
                           000083   293 _DP0H	=	0x0083
                           000082   294 _DPL	=	0x0082
                           000082   295 _DP0L	=	0x0082
                           0000A8   296 _IE	=	0x00a8
                           0000B8   297 _IP	=	0x00b8
                           000080   298 _P0	=	0x0080
                           000090   299 _P1	=	0x0090
                           0000A0   300 _P2	=	0x00a0
                           0000B0   301 _P3	=	0x00b0
                           000087   302 _PCON	=	0x0087
                           0000D0   303 _PSW	=	0x00d0
                           000099   304 _SBUF	=	0x0099
                           000099   305 _SBUF0	=	0x0099
                           000098   306 _SCON	=	0x0098
                           000081   307 _SP	=	0x0081
                           000088   308 _TCON	=	0x0088
                           00008C   309 _TH0	=	0x008c
                           00008D   310 _TH1	=	0x008d
                           00008A   311 _TL0	=	0x008a
                           00008B   312 _TL1	=	0x008b
                           000089   313 _TMOD	=	0x0089
                                    314 ;--------------------------------------------------------
                                    315 ; special function bits
                                    316 ;--------------------------------------------------------
                                    317 	.area RSEG    (ABS,DATA)
      000000                        318 	.org 0x0000
                           0000AD   319 _ET2	=	0x00ad
                           0000BD   320 _PT2	=	0x00bd
                           0000C8   321 _T2CON_0	=	0x00c8
                           0000C9   322 _T2CON_1	=	0x00c9
                           0000CA   323 _T2CON_2	=	0x00ca
                           0000CB   324 _T2CON_3	=	0x00cb
                           0000CC   325 _T2CON_4	=	0x00cc
                           0000CD   326 _T2CON_5	=	0x00cd
                           0000CE   327 _T2CON_6	=	0x00ce
                           0000CF   328 _T2CON_7	=	0x00cf
                           0000C8   329 _CP_RL2	=	0x00c8
                           0000C9   330 _C_T2	=	0x00c9
                           0000CA   331 _TR2	=	0x00ca
                           0000CB   332 _EXEN2	=	0x00cb
                           0000CC   333 _TCLK	=	0x00cc
                           0000CD   334 _RCLK	=	0x00cd
                           0000CE   335 _EXF2	=	0x00ce
                           0000CF   336 _TF2	=	0x00cf
                           0000DF   337 _CF	=	0x00df
                           0000DE   338 _CR	=	0x00de
                           0000DC   339 _CCF4	=	0x00dc
                           0000DB   340 _CCF3	=	0x00db
                           0000DA   341 _CCF2	=	0x00da
                           0000D9   342 _CCF1	=	0x00d9
                           0000D8   343 _CCF0	=	0x00d8
                           0000AE   344 _EC	=	0x00ae
                           0000BE   345 _PPCL	=	0x00be
                           0000BD   346 _PT2L	=	0x00bd
                           0000BC   347 _PSL	=	0x00bc
                           0000BB   348 _PT1L	=	0x00bb
                           0000BA   349 _PX1L	=	0x00ba
                           0000B9   350 _PT0L	=	0x00b9
                           0000B8   351 _PX0L	=	0x00b8
                           0000C0   352 _P4_0	=	0x00c0
                           0000C1   353 _P4_1	=	0x00c1
                           0000C2   354 _P4_2	=	0x00c2
                           0000C3   355 _P4_3	=	0x00c3
                           0000C4   356 _P4_4	=	0x00c4
                           0000C5   357 _P4_5	=	0x00c5
                           0000C6   358 _P4_6	=	0x00c6
                           0000C7   359 _P4_7	=	0x00c7
                           0000E8   360 _P5_0	=	0x00e8
                           0000E9   361 _P5_1	=	0x00e9
                           0000EA   362 _P5_2	=	0x00ea
                           0000EB   363 _P5_3	=	0x00eb
                           0000EC   364 _P5_4	=	0x00ec
                           0000ED   365 _P5_5	=	0x00ed
                           0000EE   366 _P5_6	=	0x00ee
                           0000EF   367 _P5_7	=	0x00ef
                           0000F0   368 _BREG_F0	=	0x00f0
                           0000F1   369 _BREG_F1	=	0x00f1
                           0000F2   370 _BREG_F2	=	0x00f2
                           0000F3   371 _BREG_F3	=	0x00f3
                           0000F4   372 _BREG_F4	=	0x00f4
                           0000F5   373 _BREG_F5	=	0x00f5
                           0000F6   374 _BREG_F6	=	0x00f6
                           0000F7   375 _BREG_F7	=	0x00f7
                           0000A8   376 _EX0	=	0x00a8
                           0000A9   377 _ET0	=	0x00a9
                           0000AA   378 _EX1	=	0x00aa
                           0000AB   379 _ET1	=	0x00ab
                           0000AC   380 _ES	=	0x00ac
                           0000AF   381 _EA	=	0x00af
                           0000B8   382 _PX0	=	0x00b8
                           0000B9   383 _PT0	=	0x00b9
                           0000BA   384 _PX1	=	0x00ba
                           0000BB   385 _PT1	=	0x00bb
                           0000BC   386 _PS	=	0x00bc
                           000080   387 _P0_0	=	0x0080
                           000081   388 _P0_1	=	0x0081
                           000082   389 _P0_2	=	0x0082
                           000083   390 _P0_3	=	0x0083
                           000084   391 _P0_4	=	0x0084
                           000085   392 _P0_5	=	0x0085
                           000086   393 _P0_6	=	0x0086
                           000087   394 _P0_7	=	0x0087
                           000090   395 _P1_0	=	0x0090
                           000091   396 _P1_1	=	0x0091
                           000092   397 _P1_2	=	0x0092
                           000093   398 _P1_3	=	0x0093
                           000094   399 _P1_4	=	0x0094
                           000095   400 _P1_5	=	0x0095
                           000096   401 _P1_6	=	0x0096
                           000097   402 _P1_7	=	0x0097
                           0000A0   403 _P2_0	=	0x00a0
                           0000A1   404 _P2_1	=	0x00a1
                           0000A2   405 _P2_2	=	0x00a2
                           0000A3   406 _P2_3	=	0x00a3
                           0000A4   407 _P2_4	=	0x00a4
                           0000A5   408 _P2_5	=	0x00a5
                           0000A6   409 _P2_6	=	0x00a6
                           0000A7   410 _P2_7	=	0x00a7
                           0000B0   411 _P3_0	=	0x00b0
                           0000B1   412 _P3_1	=	0x00b1
                           0000B2   413 _P3_2	=	0x00b2
                           0000B3   414 _P3_3	=	0x00b3
                           0000B4   415 _P3_4	=	0x00b4
                           0000B5   416 _P3_5	=	0x00b5
                           0000B6   417 _P3_6	=	0x00b6
                           0000B7   418 _P3_7	=	0x00b7
                           0000B0   419 _RXD	=	0x00b0
                           0000B0   420 _RXD0	=	0x00b0
                           0000B1   421 _TXD	=	0x00b1
                           0000B1   422 _TXD0	=	0x00b1
                           0000B2   423 _INT0	=	0x00b2
                           0000B3   424 _INT1	=	0x00b3
                           0000B4   425 _T0	=	0x00b4
                           0000B5   426 _T1	=	0x00b5
                           0000B6   427 _WR	=	0x00b6
                           0000B7   428 _RD	=	0x00b7
                           0000D0   429 _P	=	0x00d0
                           0000D1   430 _F1	=	0x00d1
                           0000D2   431 _OV	=	0x00d2
                           0000D3   432 _RS0	=	0x00d3
                           0000D4   433 _RS1	=	0x00d4
                           0000D5   434 _F0	=	0x00d5
                           0000D6   435 _AC	=	0x00d6
                           0000D7   436 _CY	=	0x00d7
                           000098   437 _RI	=	0x0098
                           000099   438 _TI	=	0x0099
                           00009A   439 _RB8	=	0x009a
                           00009B   440 _TB8	=	0x009b
                           00009C   441 _REN	=	0x009c
                           00009D   442 _SM2	=	0x009d
                           00009E   443 _SM1	=	0x009e
                           00009F   444 _SM0	=	0x009f
                           000088   445 _IT0	=	0x0088
                           000089   446 _IE0	=	0x0089
                           00008A   447 _IT1	=	0x008a
                           00008B   448 _IE1	=	0x008b
                           00008C   449 _TR0	=	0x008c
                           00008D   450 _TF0	=	0x008d
                           00008E   451 _TR1	=	0x008e
                           00008F   452 _TF1	=	0x008f
                                    453 ;--------------------------------------------------------
                                    454 ; overlayable register banks
                                    455 ;--------------------------------------------------------
                                    456 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        457 	.ds 8
                                    458 ;--------------------------------------------------------
                                    459 ; internal ram data
                                    460 ;--------------------------------------------------------
                                    461 	.area DSEG    (DATA)
                                    462 ;--------------------------------------------------------
                                    463 ; overlayable items in internal ram
                                    464 ;--------------------------------------------------------
                                    465 ;--------------------------------------------------------
                                    466 ; Stack segment in internal ram
                                    467 ;--------------------------------------------------------
                                    468 	.area	SSEG
      000008                        469 __start__stack:
      000008                        470 	.ds	1
                                    471 
                                    472 ;--------------------------------------------------------
                                    473 ; indirectly addressable internal ram data
                                    474 ;--------------------------------------------------------
                                    475 	.area ISEG    (DATA)
                                    476 ;--------------------------------------------------------
                                    477 ; absolute internal ram data
                                    478 ;--------------------------------------------------------
                                    479 	.area IABS    (ABS,DATA)
                                    480 	.area IABS    (ABS,DATA)
                                    481 ;--------------------------------------------------------
                                    482 ; bit data
                                    483 ;--------------------------------------------------------
                                    484 	.area BSEG    (BIT)
                                    485 ;--------------------------------------------------------
                                    486 ; paged external ram data
                                    487 ;--------------------------------------------------------
                                    488 	.area PSEG    (PAG,XDATA)
                                    489 ;--------------------------------------------------------
                                    490 ; external ram data
                                    491 ;--------------------------------------------------------
                                    492 	.area XSEG    (XDATA)
      000001                        493 _main_character_65537_49:
      000001                        494 	.ds 5
      000006                        495 _putchar_c_65536_69:
      000006                        496 	.ds 2
      000008                        497 _putstr_s_65536_73:
      000008                        498 	.ds 3
      00000B                        499 _getstr_a_65536_76:
      00000B                        500 	.ds 3
                                    501 ;--------------------------------------------------------
                                    502 ; absolute external ram data
                                    503 ;--------------------------------------------------------
                                    504 	.area XABS    (ABS,XDATA)
                                    505 ;--------------------------------------------------------
                                    506 ; external initialized ram data
                                    507 ;--------------------------------------------------------
                                    508 	.area XISEG   (XDATA)
      000012                        509 _i::
      000012                        510 	.ds 2
                                    511 	.area HOME    (CODE)
                                    512 	.area GSINIT0 (CODE)
                                    513 	.area GSINIT1 (CODE)
                                    514 	.area GSINIT2 (CODE)
                                    515 	.area GSINIT3 (CODE)
                                    516 	.area GSINIT4 (CODE)
                                    517 	.area GSINIT5 (CODE)
                                    518 	.area GSINIT  (CODE)
                                    519 	.area GSFINAL (CODE)
                                    520 	.area CSEG    (CODE)
                                    521 ;--------------------------------------------------------
                                    522 ; interrupt vector
                                    523 ;--------------------------------------------------------
                                    524 	.area HOME    (CODE)
      000000                        525 __interrupt_vect:
      000000 02 00 39         [24]  526 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  527 	reti
      000004                        528 	.ds	7
      00000B 02 01 7C         [24]  529 	ljmp	_isr_one
      00000E                        530 	.ds	5
      000013 32               [24]  531 	reti
      000014                        532 	.ds	7
      00001B 32               [24]  533 	reti
      00001C                        534 	.ds	7
      000023 32               [24]  535 	reti
      000024                        536 	.ds	7
      00002B 32               [24]  537 	reti
      00002C                        538 	.ds	7
      000033 02 01 7F         [24]  539 	ljmp	_isr_zero
                                    540 ;--------------------------------------------------------
                                    541 ; global & static initialisations
                                    542 ;--------------------------------------------------------
                                    543 	.area HOME    (CODE)
                                    544 	.area GSINIT  (CODE)
                                    545 	.area GSFINAL (CODE)
                                    546 	.area GSINIT  (CODE)
                                    547 	.globl __sdcc_gsinit_startup
                                    548 	.globl __sdcc_program_startup
                                    549 	.globl __start__stack
                                    550 	.globl __mcs51_genXINIT
                                    551 	.globl __mcs51_genXRAMCLEAR
                                    552 	.globl __mcs51_genRAMCLEAR
                                    553 	.area GSFINAL (CODE)
      000092 02 00 36         [24]  554 	ljmp	__sdcc_program_startup
                                    555 ;--------------------------------------------------------
                                    556 ; Home
                                    557 ;--------------------------------------------------------
                                    558 	.area HOME    (CODE)
                                    559 	.area HOME    (CODE)
      000036                        560 __sdcc_program_startup:
      000036 02 00 95         [24]  561 	ljmp	_main
                                    562 ;	return from main will return to caller
                                    563 ;--------------------------------------------------------
                                    564 ; code
                                    565 ;--------------------------------------------------------
                                    566 	.area CSEG    (CODE)
                                    567 ;------------------------------------------------------------
                                    568 ;Allocation info for local variables in function 'main'
                                    569 ;------------------------------------------------------------
                                    570 ;character                 Allocated with name '_main_character_65537_49'
                                    571 ;------------------------------------------------------------
                                    572 ;	main.c:19: void main()
                                    573 ;	-----------------------------------------
                                    574 ;	 function main
                                    575 ;	-----------------------------------------
      000095                        576 _main:
                           000007   577 	ar7 = 0x07
                           000006   578 	ar6 = 0x06
                           000005   579 	ar5 = 0x05
                           000004   580 	ar4 = 0x04
                           000003   581 	ar3 = 0x03
                           000002   582 	ar2 = 0x02
                           000001   583 	ar1 = 0x01
                           000000   584 	ar0 = 0x00
                                    585 ;	main.c:21: CKCON0=0X01;                         //X2 mode
      000095 75 8F 01         [24]  586 	mov	_CKCON0,#0x01
                                    587 ;	main.c:22: PCON=0x80;                            //baud rate of 115200
      000098 75 87 80         [24]  588 	mov	_PCON,#0x80
                                    589 ;	main.c:23: puts("watchdog reset\n\r");
      00009B 90 03 96         [24]  590 	mov	dptr,#___str_0
      00009E 75 F0 80         [24]  591 	mov	b,#0x80
      0000A1 12 03 16         [24]  592 	lcall	_puts
                                    593 ;	main.c:24: serial_init();                          //serial communication initialization
      0000A4 12 01 39         [24]  594 	lcall	_serial_init
                                    595 ;	main.c:25: timer_init();                           //software timer PCA module initialization
      0000A7 12 01 54         [24]  596 	lcall	_timer_init
                                    597 ;	main.c:26: pwm_init();                             //PWM PCA module initialization
      0000AA 12 01 47         [24]  598 	lcall	_pwm_init
                                    599 ;	main.c:27: puts("Enter 0 for turning off PWM output\n\r");
      0000AD 90 03 A7         [24]  600 	mov	dptr,#___str_1
      0000B0 75 F0 80         [24]  601 	mov	b,#0x80
      0000B3 12 03 16         [24]  602 	lcall	_puts
                                    603 ;	main.c:28: puts("Enter 1 for turning on PWM output\n\r");              //input command data
      0000B6 90 03 CC         [24]  604 	mov	dptr,#___str_2
      0000B9 75 F0 80         [24]  605 	mov	b,#0x80
      0000BC 12 03 16         [24]  606 	lcall	_puts
                                    607 ;	main.c:32: puts("Enter 5 for power down mode\n\r");
      0000BF 90 04 47         [24]  608 	mov	dptr,#___str_15
      0000C2 75 F0 80         [24]  609 	mov	b,#0x80
      0000C5 12 03 16         [24]  610 	lcall	_puts
                                    611 ;	main.c:34: while (1)
      0000C8                        612 00122$:
                                    613 ;	main.c:36: puts("<<Enter command character. Press ? for options>>\n\r");
      0000C8 90 03 F0         [24]  614 	mov	dptr,#___str_7
      0000CB 75 F0 80         [24]  615 	mov	b,#0x80
      0000CE 12 03 16         [24]  616 	lcall	_puts
                                    617 ;	main.c:37: getstr(character);                  //get command character
      0000D1 90 00 01         [24]  618 	mov	dptr,#_main_character_65537_49
      0000D4 75 F0 00         [24]  619 	mov	b,#0x00
      0000D7 12 02 82         [24]  620 	lcall	_getstr
                                    621 ;	main.c:38: if (character[0]=='1')
      0000DA 90 00 01         [24]  622 	mov	dptr,#_main_character_65537_49
      0000DD E0               [24]  623 	movx	a,@dptr
      0000DE FF               [12]  624 	mov	r7,a
      0000DF BF 31 05         [24]  625 	cjne	r7,#0x31,00119$
                                    626 ;	main.c:40: CCAPM0 |= 0x42;                         //turns on pwm pca module
      0000E2 43 DA 42         [24]  627 	orl	_CCAPM0,#0x42
      0000E5 80 E1            [24]  628 	sjmp	00122$
      0000E7                        629 00119$:
                                    630 ;	main.c:42: else if (character[0]=='?')
      0000E7 BF 3F 1D         [24]  631 	cjne	r7,#0x3f,00116$
                                    632 ;	main.c:44: puts("Enter 0 for turning off PWM output\r");
      0000EA 90 04 23         [24]  633 	mov	dptr,#___str_8
      0000ED 75 F0 80         [24]  634 	mov	b,#0x80
      0000F0 12 03 16         [24]  635 	lcall	_puts
                                    636 ;	main.c:45: puts("Enter 1 for turning on PWM output\n\r");              //input command data
      0000F3 90 03 CC         [24]  637 	mov	dptr,#___str_2
      0000F6 75 F0 80         [24]  638 	mov	b,#0x80
      0000F9 12 03 16         [24]  639 	lcall	_puts
                                    640 ;	main.c:49: puts("Enter 5 for power down mode\r");
      0000FC 90 04 FE         [24]  641 	mov	dptr,#___str_18
      0000FF 75 F0 80         [24]  642 	mov	b,#0x80
      000102 12 03 16         [24]  643 	lcall	_puts
      000105 80 C1            [24]  644 	sjmp	00122$
      000107                        645 00116$:
                                    646 ;	main.c:51: else if (character[0]=='0')
      000107 BF 30 05         [24]  647 	cjne	r7,#0x30,00113$
                                    648 ;	main.c:53: CCAPM0 = 0x00;                  //turns off pwm pca module
      00010A 75 DA 00         [24]  649 	mov	_CCAPM0,#0x00
      00010D 80 B9            [24]  650 	sjmp	00122$
      00010F                        651 00113$:
                                    652 ;	main.c:56: else if (character[0]=='2')
      00010F BF 32 05         [24]  653 	cjne	r7,#0x32,00110$
                                    654 ;	main.c:58: CKRL = 0x00;                     //setting CKRL register for minimum frequency
      000112 75 97 00         [24]  655 	mov	_CKRL,#0x00
      000115 80 B1            [24]  656 	sjmp	00122$
      000117                        657 00110$:
                                    658 ;	main.c:60: else if (character[0]=='3')
      000117 BF 33 05         [24]  659 	cjne	r7,#0x33,00107$
                                    660 ;	main.c:62: CKRL = 0xFF;                    //setting CKRL register for maximum frequency
      00011A 75 97 FF         [24]  661 	mov	_CKRL,#0xff
      00011D 80 A9            [24]  662 	sjmp	00122$
      00011F                        663 00107$:
                                    664 ;	main.c:64: else if (character[0]=='4')
      00011F BF 34 06         [24]  665 	cjne	r7,#0x34,00104$
                                    666 ;	main.c:67: PCON |= 0x01;                   //starting idle mode with setting PCON.0
      000122 43 87 01         [24]  667 	orl	_PCON,#0x01
      000125 02 00 C8         [24]  668 	ljmp	00122$
      000128                        669 00104$:
                                    670 ;	main.c:69: else if (character[0]=='5')
      000128 BF 35 02         [24]  671 	cjne	r7,#0x35,00170$
      00012B 80 03            [24]  672 	sjmp	00171$
      00012D                        673 00170$:
      00012D 02 00 C8         [24]  674 	ljmp	00122$
      000130                        675 00171$:
                                    676 ;	main.c:71: PCON &= 0X80;
      000130 53 87 80         [24]  677 	anl	_PCON,#0x80
                                    678 ;	main.c:72: PCON |= 0x02;                   //entering power down mode with setting PCON.1
      000133 43 87 02         [24]  679 	orl	_PCON,#0x02
                                    680 ;	main.c:75: }
      000136 02 00 C8         [24]  681 	ljmp	00122$
                                    682 ;------------------------------------------------------------
                                    683 ;Allocation info for local variables in function 'serial_init'
                                    684 ;------------------------------------------------------------
                                    685 ;	main.c:77: void serial_init(void){
                                    686 ;	-----------------------------------------
                                    687 ;	 function serial_init
                                    688 ;	-----------------------------------------
      000139                        689 _serial_init:
                                    690 ;	main.c:78: TMOD=0x20;
      000139 75 89 20         [24]  691 	mov	_TMOD,#0x20
                                    692 ;	main.c:79: TH1=0xFF;           //for max baud rate
      00013C 75 8D FF         [24]  693 	mov	_TH1,#0xff
                                    694 ;	main.c:80: SCON=0x50;
      00013F 75 98 50         [24]  695 	mov	_SCON,#0x50
                                    696 ;	main.c:81: TR1=1;
                                    697 ;	assignBit
      000142 D2 8E            [12]  698 	setb	_TR1
                                    699 ;	main.c:82: TI=1;
                                    700 ;	assignBit
      000144 D2 99            [12]  701 	setb	_TI
                                    702 ;	main.c:83: }
      000146 22               [24]  703 	ret
                                    704 ;------------------------------------------------------------
                                    705 ;Allocation info for local variables in function 'pwm_init'
                                    706 ;------------------------------------------------------------
                                    707 ;	main.c:85: void pwm_init()                 //output seen at p1.3 (PCA module0)
                                    708 ;	-----------------------------------------
                                    709 ;	 function pwm_init
                                    710 ;	-----------------------------------------
      000147                        711 _pwm_init:
                                    712 ;	main.c:87: CMOD |= 0x02;                 // Setup PCA timer for freq=Fclk_periph/2
      000147 43 D9 02         [24]  713 	orl	_CMOD,#0x02
                                    714 ;	main.c:89: CCAP0L = 0x40;                // Set the initial value same as CCAP0H
      00014A 75 EA 40         [24]  715 	mov	_CCAP0L,#0x40
                                    716 ;	main.c:90: CCAP0H = 0x40;                // 25% Duty Cycle
      00014D 75 FA 40         [24]  717 	mov	_CCAP0H,#0x40
                                    718 ;	main.c:92: CCAPM0 |= 0x42;               // Setup PCA module 0 in PWM mode.
      000150 43 DA 42         [24]  719 	orl	_CCAPM0,#0x42
                                    720 ;	main.c:93: }
      000153 22               [24]  721 	ret
                                    722 ;------------------------------------------------------------
                                    723 ;Allocation info for local variables in function 'timer_init'
                                    724 ;------------------------------------------------------------
                                    725 ;	main.c:95: void timer_init()
                                    726 ;	-----------------------------------------
                                    727 ;	 function timer_init
                                    728 ;	-----------------------------------------
      000154                        729 _timer_init:
                                    730 ;	main.c:97: EA=1;                       //enabling global interrupt
                                    731 ;	assignBit
      000154 D2 AF            [12]  732 	setb	_EA
                                    733 ;	main.c:98: CMOD |= 0x03;               //enabling ECF bit to generate interrupt
      000156 43 D9 03         [24]  734 	orl	_CMOD,#0x03
                                    735 ;	main.c:101: CCAP1L = 0x00;
      000159 75 EB 00         [24]  736 	mov	_CCAP1L,#0x00
                                    737 ;	main.c:102: CCAP1H = 0xFF;
      00015C 75 FB FF         [24]  738 	mov	_CCAP1H,#0xff
                                    739 ;	main.c:103: CCAPM1 = 0x49;              //setting ECOM1, MAT1, CCF1
      00015F 75 DB 49         [24]  740 	mov	_CCAPM1,#0x49
                                    741 ;	main.c:104: CR=1;                       //starting timer
                                    742 ;	assignBit
      000162 D2 DE            [12]  743 	setb	_CR
                                    744 ;	main.c:105: EC=1;                       //enabling PCA interrupt bit in interrupt enable register
                                    745 ;	assignBit
      000164 D2 AE            [12]  746 	setb	_EC
                                    747 ;	main.c:106: P1_1=0;                     //set port1.1=0
                                    748 ;	assignBit
      000166 C2 91            [12]  749 	clr	_P1_1
                                    750 ;	main.c:107: }
      000168 22               [24]  751 	ret
                                    752 ;------------------------------------------------------------
                                    753 ;Allocation info for local variables in function 'timer_0'
                                    754 ;------------------------------------------------------------
                                    755 ;	main.c:109: void timer_0()
                                    756 ;	-----------------------------------------
                                    757 ;	 function timer_0
                                    758 ;	-----------------------------------------
      000169                        759 _timer_0:
                                    760 ;	main.c:111: TMOD &= 0xF0;               //clearing out 4th bit in TMOD register
      000169 53 89 F0         [24]  761 	anl	_TMOD,#0xf0
                                    762 ;	main.c:112: TMOD |= 0x01;               //timer 0 in mode1
      00016C 43 89 01         [24]  763 	orl	_TMOD,#0x01
                                    764 ;	main.c:113: TH0 = 0X00;                 //max timer delay
      00016F 75 8C 00         [24]  765 	mov	_TH0,#0x00
                                    766 ;	main.c:114: TL0 = 0X00;
      000172 75 8A 00         [24]  767 	mov	_TL0,#0x00
                                    768 ;	main.c:115: ET0 = 1;                    //enabling timer0 interrupt bit in interrupt enable register
                                    769 ;	assignBit
      000175 D2 A9            [12]  770 	setb	_ET0
                                    771 ;	main.c:116: EA = 1;                     //global interrupt
                                    772 ;	assignBit
      000177 D2 AF            [12]  773 	setb	_EA
                                    774 ;	main.c:117: TR0 = 1;                    //starting timer0
                                    775 ;	assignBit
      000179 D2 8C            [12]  776 	setb	_TR0
                                    777 ;	main.c:118: }
      00017B 22               [24]  778 	ret
                                    779 ;------------------------------------------------------------
                                    780 ;Allocation info for local variables in function 'isr_one'
                                    781 ;------------------------------------------------------------
                                    782 ;	main.c:120: void isr_one(void) __interrupt (TF0_VECTOR)
                                    783 ;	-----------------------------------------
                                    784 ;	 function isr_one
                                    785 ;	-----------------------------------------
      00017C                        786 _isr_one:
                                    787 ;	main.c:122: TF0 = 0;                    //clearing timer0 flag in timer0 interrupt
                                    788 ;	assignBit
      00017C C2 8D            [12]  789 	clr	_TF0
                                    790 ;	main.c:123: }
      00017E 32               [24]  791 	reti
                                    792 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                    793 ;	eliminated unneeded push/pop not_psw
                                    794 ;	eliminated unneeded push/pop dpl
                                    795 ;	eliminated unneeded push/pop dph
                                    796 ;	eliminated unneeded push/pop b
                                    797 ;	eliminated unneeded push/pop acc
                                    798 ;------------------------------------------------------------
                                    799 ;Allocation info for local variables in function 'isr_zero'
                                    800 ;------------------------------------------------------------
                                    801 ;	main.c:125: void isr_zero(void) __interrupt (PCA_VECTOR)
                                    802 ;	-----------------------------------------
                                    803 ;	 function isr_zero
                                    804 ;	-----------------------------------------
      00017F                        805 _isr_zero:
      00017F C0 E0            [24]  806 	push	acc
      000181 C0 82            [24]  807 	push	dpl
      000183 C0 83            [24]  808 	push	dph
      000185 C0 07            [24]  809 	push	ar7
      000187 C0 06            [24]  810 	push	ar6
      000189 C0 D0            [24]  811 	push	psw
      00018B 75 D0 00         [24]  812 	mov	psw,#0x00
                                    813 ;	main.c:130: i++;
      00018E 90 00 12         [24]  814 	mov	dptr,#_i
      000191 E0               [24]  815 	movx	a,@dptr
      000192 24 01            [12]  816 	add	a,#0x01
      000194 F0               [24]  817 	movx	@dptr,a
      000195 A3               [24]  818 	inc	dptr
      000196 E0               [24]  819 	movx	a,@dptr
      000197 34 00            [12]  820 	addc	a,#0x00
      000199 F0               [24]  821 	movx	@dptr,a
                                    822 ;	main.c:131: if (i==1000){
      00019A 90 00 12         [24]  823 	mov	dptr,#_i
      00019D E0               [24]  824 	movx	a,@dptr
      00019E FE               [12]  825 	mov	r6,a
      00019F A3               [24]  826 	inc	dptr
      0001A0 E0               [24]  827 	movx	a,@dptr
      0001A1 FF               [12]  828 	mov	r7,a
      0001A2 BE E8 0E         [24]  829 	cjne	r6,#0xe8,00103$
      0001A5 BF 03 0B         [24]  830 	cjne	r7,#0x03,00103$
                                    831 ;	main.c:132: P1_1=!P1_1;                 //toggling P1.1 in software timer
      0001A8 B2 91            [12]  832 	cpl	_P1_1
                                    833 ;	main.c:133: CCF1=0;                     //clearing interrupt flag
                                    834 ;	assignBit
      0001AA C2 D9            [12]  835 	clr	_CCF1
                                    836 ;	main.c:134: i=0;
      0001AC 90 00 12         [24]  837 	mov	dptr,#_i
      0001AF E4               [12]  838 	clr	a
      0001B0 F0               [24]  839 	movx	@dptr,a
      0001B1 A3               [24]  840 	inc	dptr
      0001B2 F0               [24]  841 	movx	@dptr,a
      0001B3                        842 00103$:
                                    843 ;	main.c:136: }
      0001B3 D0 D0            [24]  844 	pop	psw
      0001B5 D0 06            [24]  845 	pop	ar6
      0001B7 D0 07            [24]  846 	pop	ar7
      0001B9 D0 83            [24]  847 	pop	dph
      0001BB D0 82            [24]  848 	pop	dpl
      0001BD D0 E0            [24]  849 	pop	acc
      0001BF 32               [24]  850 	reti
                                    851 ;	eliminated unneeded push/pop b
                                    852 ;------------------------------------------------------------
                                    853 ;Allocation info for local variables in function 'watchdog_init'
                                    854 ;------------------------------------------------------------
                                    855 ;	main.c:138: void watchdog_init()
                                    856 ;	-----------------------------------------
                                    857 ;	 function watchdog_init
                                    858 ;	-----------------------------------------
      0001C0                        859 _watchdog_init:
                                    860 ;	main.c:140: CMOD |= 0x42;
      0001C0 43 D9 42         [24]  861 	orl	_CMOD,#0x42
                                    862 ;	main.c:141: CCAP4L = 0xFF;
      0001C3 75 EE FF         [24]  863 	mov	_CCAP4L,#0xff
                                    864 ;	main.c:142: CCAP4H = 0xFF;
      0001C6 75 FE FF         [24]  865 	mov	_CCAP4H,#0xff
                                    866 ;	main.c:144: CCAPM4 = 0x48;
      0001C9 75 DE 48         [24]  867 	mov	_CCAPM4,#0x48
                                    868 ;	main.c:145: CR=1;
                                    869 ;	assignBit
      0001CC D2 DE            [12]  870 	setb	_CR
                                    871 ;	main.c:146: }
      0001CE 22               [24]  872 	ret
                                    873 ;------------------------------------------------------------
                                    874 ;Allocation info for local variables in function 'putchar'
                                    875 ;------------------------------------------------------------
                                    876 ;c                         Allocated with name '_putchar_c_65536_69'
                                    877 ;------------------------------------------------------------
                                    878 ;	main.c:148: int putchar (int c)
                                    879 ;	-----------------------------------------
                                    880 ;	 function putchar
                                    881 ;	-----------------------------------------
      0001CF                        882 _putchar:
      0001CF AF 83            [24]  883 	mov	r7,dph
      0001D1 E5 82            [12]  884 	mov	a,dpl
      0001D3 90 00 06         [24]  885 	mov	dptr,#_putchar_c_65536_69
      0001D6 F0               [24]  886 	movx	@dptr,a
      0001D7 EF               [12]  887 	mov	a,r7
      0001D8 A3               [24]  888 	inc	dptr
      0001D9 F0               [24]  889 	movx	@dptr,a
                                    890 ;	main.c:150: while (!TI);
      0001DA                        891 00101$:
      0001DA 30 99 FD         [24]  892 	jnb	_TI,00101$
                                    893 ;	main.c:151: while (TI == 0);
      0001DD                        894 00104$:
      0001DD 30 99 FD         [24]  895 	jnb	_TI,00104$
                                    896 ;	main.c:152: while ((SCON & 0x02) == 0);
      0001E0                        897 00107$:
      0001E0 E5 98            [12]  898 	mov	a,_SCON
      0001E2 30 E1 FB         [24]  899 	jnb	acc.1,00107$
                                    900 ;	main.c:154: SBUF = c;           // load serial port with transmit value
      0001E5 90 00 06         [24]  901 	mov	dptr,#_putchar_c_65536_69
      0001E8 E0               [24]  902 	movx	a,@dptr
      0001E9 FE               [12]  903 	mov	r6,a
      0001EA A3               [24]  904 	inc	dptr
      0001EB E0               [24]  905 	movx	a,@dptr
      0001EC FF               [12]  906 	mov	r7,a
      0001ED 8E 99            [24]  907 	mov	_SBUF,r6
                                    908 ;	main.c:155: TI = 0;             // clear TI flag
                                    909 ;	assignBit
      0001EF C2 99            [12]  910 	clr	_TI
                                    911 ;	main.c:157: return c;
      0001F1 8E 82            [24]  912 	mov	dpl,r6
      0001F3 8F 83            [24]  913 	mov	dph,r7
                                    914 ;	main.c:158: }
      0001F5 22               [24]  915 	ret
                                    916 ;------------------------------------------------------------
                                    917 ;Allocation info for local variables in function 'getchar'
                                    918 ;------------------------------------------------------------
                                    919 ;	main.c:160: int getchar (void)
                                    920 ;	-----------------------------------------
                                    921 ;	 function getchar
                                    922 ;	-----------------------------------------
      0001F6                        923 _getchar:
                                    924 ;	main.c:162: while (!RI);
      0001F6                        925 00101$:
      0001F6 30 98 FD         [24]  926 	jnb	_RI,00101$
                                    927 ;	main.c:163: while ((SCON & 0x01) == 0);
      0001F9                        928 00104$:
      0001F9 E5 98            [12]  929 	mov	a,_SCON
      0001FB 30 E0 FB         [24]  930 	jnb	acc.0,00104$
                                    931 ;	main.c:164: while (RI == 0);
      0001FE                        932 00107$:
                                    933 ;	main.c:166: RI = 0;                         // clear RI flag
                                    934 ;	assignBit
      0001FE 10 98 02         [24]  935 	jbc	_RI,00130$
      000201 80 FB            [24]  936 	sjmp	00107$
      000203                        937 00130$:
                                    938 ;	main.c:167: return SBUF;                    // return character from SBUF
      000203 AE 99            [24]  939 	mov	r6,_SBUF
      000205 7F 00            [12]  940 	mov	r7,#0x00
      000207 8E 82            [24]  941 	mov	dpl,r6
      000209 8F 83            [24]  942 	mov	dph,r7
                                    943 ;	main.c:168: }
      00020B 22               [24]  944 	ret
                                    945 ;------------------------------------------------------------
                                    946 ;Allocation info for local variables in function 'putstr'
                                    947 ;------------------------------------------------------------
                                    948 ;s                         Allocated with name '_putstr_s_65536_73'
                                    949 ;i                         Allocated with name '_putstr_i_65536_74'
                                    950 ;------------------------------------------------------------
                                    951 ;	main.c:170: int putstr (char *s)
                                    952 ;	-----------------------------------------
                                    953 ;	 function putstr
                                    954 ;	-----------------------------------------
      00020C                        955 _putstr:
      00020C AF F0            [24]  956 	mov	r7,b
      00020E AE 83            [24]  957 	mov	r6,dph
      000210 E5 82            [12]  958 	mov	a,dpl
      000212 90 00 08         [24]  959 	mov	dptr,#_putstr_s_65536_73
      000215 F0               [24]  960 	movx	@dptr,a
      000216 EE               [12]  961 	mov	a,r6
      000217 A3               [24]  962 	inc	dptr
      000218 F0               [24]  963 	movx	@dptr,a
      000219 EF               [12]  964 	mov	a,r7
      00021A A3               [24]  965 	inc	dptr
      00021B F0               [24]  966 	movx	@dptr,a
                                    967 ;	main.c:173: while (*s){            // output characters until NULL found
      00021C 90 00 08         [24]  968 	mov	dptr,#_putstr_s_65536_73
      00021F E0               [24]  969 	movx	a,@dptr
      000220 FD               [12]  970 	mov	r5,a
      000221 A3               [24]  971 	inc	dptr
      000222 E0               [24]  972 	movx	a,@dptr
      000223 FE               [12]  973 	mov	r6,a
      000224 A3               [24]  974 	inc	dptr
      000225 E0               [24]  975 	movx	a,@dptr
      000226 FF               [12]  976 	mov	r7,a
      000227 7B 00            [12]  977 	mov	r3,#0x00
      000229 7C 00            [12]  978 	mov	r4,#0x00
      00022B                        979 00101$:
      00022B 8D 82            [24]  980 	mov	dpl,r5
      00022D 8E 83            [24]  981 	mov	dph,r6
      00022F 8F F0            [24]  982 	mov	b,r7
      000231 12 03 76         [24]  983 	lcall	__gptrget
      000234 FA               [12]  984 	mov	r2,a
      000235 60 36            [24]  985 	jz	00108$
                                    986 ;	main.c:174: putchar(*s++);
      000237 0D               [12]  987 	inc	r5
      000238 BD 00 01         [24]  988 	cjne	r5,#0x00,00116$
      00023B 0E               [12]  989 	inc	r6
      00023C                        990 00116$:
      00023C 90 00 08         [24]  991 	mov	dptr,#_putstr_s_65536_73
      00023F ED               [12]  992 	mov	a,r5
      000240 F0               [24]  993 	movx	@dptr,a
      000241 EE               [12]  994 	mov	a,r6
      000242 A3               [24]  995 	inc	dptr
      000243 F0               [24]  996 	movx	@dptr,a
      000244 EF               [12]  997 	mov	a,r7
      000245 A3               [24]  998 	inc	dptr
      000246 F0               [24]  999 	movx	@dptr,a
      000247 8A 01            [24] 1000 	mov	ar1,r2
      000249 7A 00            [12] 1001 	mov	r2,#0x00
      00024B 89 82            [24] 1002 	mov	dpl,r1
      00024D 8A 83            [24] 1003 	mov	dph,r2
      00024F C0 07            [24] 1004 	push	ar7
      000251 C0 06            [24] 1005 	push	ar6
      000253 C0 05            [24] 1006 	push	ar5
      000255 C0 04            [24] 1007 	push	ar4
      000257 C0 03            [24] 1008 	push	ar3
      000259 12 01 CF         [24] 1009 	lcall	_putchar
      00025C D0 03            [24] 1010 	pop	ar3
      00025E D0 04            [24] 1011 	pop	ar4
      000260 D0 05            [24] 1012 	pop	ar5
      000262 D0 06            [24] 1013 	pop	ar6
      000264 D0 07            [24] 1014 	pop	ar7
                                   1015 ;	main.c:175: i++;
      000266 0B               [12] 1016 	inc	r3
      000267 BB 00 C1         [24] 1017 	cjne	r3,#0x00,00101$
      00026A 0C               [12] 1018 	inc	r4
      00026B 80 BE            [24] 1019 	sjmp	00101$
      00026D                       1020 00108$:
      00026D 90 00 08         [24] 1021 	mov	dptr,#_putstr_s_65536_73
      000270 ED               [12] 1022 	mov	a,r5
      000271 F0               [24] 1023 	movx	@dptr,a
      000272 EE               [12] 1024 	mov	a,r6
      000273 A3               [24] 1025 	inc	dptr
      000274 F0               [24] 1026 	movx	@dptr,a
      000275 EF               [12] 1027 	mov	a,r7
      000276 A3               [24] 1028 	inc	dptr
      000277 F0               [24] 1029 	movx	@dptr,a
                                   1030 ;	main.c:177: return i+1;
      000278 0B               [12] 1031 	inc	r3
      000279 BB 00 01         [24] 1032 	cjne	r3,#0x00,00118$
      00027C 0C               [12] 1033 	inc	r4
      00027D                       1034 00118$:
      00027D 8B 82            [24] 1035 	mov	dpl,r3
      00027F 8C 83            [24] 1036 	mov	dph,r4
                                   1037 ;	main.c:178: }
      000281 22               [24] 1038 	ret
                                   1039 ;------------------------------------------------------------
                                   1040 ;Allocation info for local variables in function 'getstr'
                                   1041 ;------------------------------------------------------------
                                   1042 ;a                         Allocated with name '_getstr_a_65536_76'
                                   1043 ;i                         Allocated with name '_getstr_i_65536_77'
                                   1044 ;------------------------------------------------------------
                                   1045 ;	main.c:180: int getstr(char *a)
                                   1046 ;	-----------------------------------------
                                   1047 ;	 function getstr
                                   1048 ;	-----------------------------------------
      000282                       1049 _getstr:
      000282 AF F0            [24] 1050 	mov	r7,b
      000284 AE 83            [24] 1051 	mov	r6,dph
      000286 E5 82            [12] 1052 	mov	a,dpl
      000288 90 00 0B         [24] 1053 	mov	dptr,#_getstr_a_65536_76
      00028B F0               [24] 1054 	movx	@dptr,a
      00028C EE               [12] 1055 	mov	a,r6
      00028D A3               [24] 1056 	inc	dptr
      00028E F0               [24] 1057 	movx	@dptr,a
      00028F EF               [12] 1058 	mov	a,r7
      000290 A3               [24] 1059 	inc	dptr
      000291 F0               [24] 1060 	movx	@dptr,a
                                   1061 ;	main.c:184: do{
      000292 7E 00            [12] 1062 	mov	r6,#0x00
      000294 7F 00            [12] 1063 	mov	r7,#0x00
      000296 90 00 0B         [24] 1064 	mov	dptr,#_getstr_a_65536_76
      000299 E0               [24] 1065 	movx	a,@dptr
      00029A FB               [12] 1066 	mov	r3,a
      00029B A3               [24] 1067 	inc	dptr
      00029C E0               [24] 1068 	movx	a,@dptr
      00029D FC               [12] 1069 	mov	r4,a
      00029E A3               [24] 1070 	inc	dptr
      00029F E0               [24] 1071 	movx	a,@dptr
      0002A0 FD               [12] 1072 	mov	r5,a
      0002A1                       1073 00101$:
                                   1074 ;	main.c:185: *a = getchar();
      0002A1 C0 07            [24] 1075 	push	ar7
      0002A3 C0 06            [24] 1076 	push	ar6
      0002A5 C0 05            [24] 1077 	push	ar5
      0002A7 C0 04            [24] 1078 	push	ar4
      0002A9 C0 03            [24] 1079 	push	ar3
      0002AB 12 01 F6         [24] 1080 	lcall	_getchar
      0002AE A9 82            [24] 1081 	mov	r1,dpl
      0002B0 D0 03            [24] 1082 	pop	ar3
      0002B2 D0 04            [24] 1083 	pop	ar4
      0002B4 D0 05            [24] 1084 	pop	ar5
      0002B6 D0 06            [24] 1085 	pop	ar6
      0002B8 D0 07            [24] 1086 	pop	ar7
      0002BA 8B 82            [24] 1087 	mov	dpl,r3
      0002BC 8C 83            [24] 1088 	mov	dph,r4
      0002BE 8D F0            [24] 1089 	mov	b,r5
      0002C0 E9               [12] 1090 	mov	a,r1
      0002C1 12 02 FB         [24] 1091 	lcall	__gptrput
      0002C4 A3               [24] 1092 	inc	dptr
      0002C5 AB 82            [24] 1093 	mov	r3,dpl
      0002C7 AC 83            [24] 1094 	mov	r4,dph
                                   1095 ;	main.c:186: i++;
      0002C9 0E               [12] 1096 	inc	r6
      0002CA BE 00 01         [24] 1097 	cjne	r6,#0x00,00115$
      0002CD 0F               [12] 1098 	inc	r7
      0002CE                       1099 00115$:
                                   1100 ;	main.c:187: }while(*a++ != '\r');
      0002CE 90 00 0B         [24] 1101 	mov	dptr,#_getstr_a_65536_76
      0002D1 EB               [12] 1102 	mov	a,r3
      0002D2 F0               [24] 1103 	movx	@dptr,a
      0002D3 EC               [12] 1104 	mov	a,r4
      0002D4 A3               [24] 1105 	inc	dptr
      0002D5 F0               [24] 1106 	movx	@dptr,a
      0002D6 ED               [12] 1107 	mov	a,r5
      0002D7 A3               [24] 1108 	inc	dptr
      0002D8 F0               [24] 1109 	movx	@dptr,a
      0002D9 B9 0D C5         [24] 1110 	cjne	r1,#0x0d,00101$
                                   1111 ;	main.c:189: *a = '\0';
      0002DC 90 00 0B         [24] 1112 	mov	dptr,#_getstr_a_65536_76
      0002DF EB               [12] 1113 	mov	a,r3
      0002E0 F0               [24] 1114 	movx	@dptr,a
      0002E1 EC               [12] 1115 	mov	a,r4
      0002E2 A3               [24] 1116 	inc	dptr
      0002E3 F0               [24] 1117 	movx	@dptr,a
      0002E4 ED               [12] 1118 	mov	a,r5
      0002E5 A3               [24] 1119 	inc	dptr
      0002E6 F0               [24] 1120 	movx	@dptr,a
      0002E7 8B 82            [24] 1121 	mov	dpl,r3
      0002E9 8C 83            [24] 1122 	mov	dph,r4
      0002EB 8D F0            [24] 1123 	mov	b,r5
      0002ED E4               [12] 1124 	clr	a
      0002EE 12 02 FB         [24] 1125 	lcall	__gptrput
                                   1126 ;	main.c:190: return i+1;
      0002F1 0E               [12] 1127 	inc	r6
      0002F2 BE 00 01         [24] 1128 	cjne	r6,#0x00,00118$
      0002F5 0F               [12] 1129 	inc	r7
      0002F6                       1130 00118$:
      0002F6 8E 82            [24] 1131 	mov	dpl,r6
      0002F8 8F 83            [24] 1132 	mov	dph,r7
                                   1133 ;	main.c:191: }
      0002FA 22               [24] 1134 	ret
                                   1135 	.area CSEG    (CODE)
                                   1136 	.area CONST   (CODE)
                                   1137 	.area CONST   (CODE)
      000396                       1138 ___str_0:
      000396 77 61 74 63 68 64 6F  1139 	.ascii "watchdog reset"
             67 20 72 65 73 65 74
      0003A4 0A                    1140 	.db 0x0a
      0003A5 0D                    1141 	.db 0x0d
      0003A6 00                    1142 	.db 0x00
                                   1143 	.area CSEG    (CODE)
                                   1144 	.area CONST   (CODE)
      0003A7                       1145 ___str_1:
      0003A7 45 6E 74 65 72 20 30  1146 	.ascii "Enter 0 for turning off PWM output"
             20 66 6F 72 20 74 75
             72 6E 69 6E 67 20 6F
             66 66 20 50 57 4D 20
             6F 75 74 70 75 74
      0003C9 0A                    1147 	.db 0x0a
      0003CA 0D                    1148 	.db 0x0d
      0003CB 00                    1149 	.db 0x00
                                   1150 	.area CSEG    (CODE)
                                   1151 	.area CONST   (CODE)
      0003CC                       1152 ___str_2:
      0003CC 45 6E 74 65 72 20 31  1153 	.ascii "Enter 1 for turning on PWM output"
             20 66 6F 72 20 74 75
             72 6E 69 6E 67 20 6F
             6E 20 50 57 4D 20 6F
             75 74 70 75 74
      0003ED 0A                    1154 	.db 0x0a
      0003EE 0D                    1155 	.db 0x0d
      0003EF 00                    1156 	.db 0x00
                                   1157 	.area CSEG    (CODE)
                                   1158 	.area CONST   (CODE)
      0003F0                       1159 ___str_7:
      0003F0 3C 3C 45 6E 74 65 72  1160 	.ascii "<<Enter command character. Press ? for options>>"
             20 63 6F 6D 6D 61 6E
             64 20 63 68 61 72 61
             63 74 65 72 2E 20 50
             72 65 73 73 20 3F 20
             66 6F 72 20 6F 70 74
             69 6F 6E 73 3E 3E
      000420 0A                    1161 	.db 0x0a
      000421 0D                    1162 	.db 0x0d
      000422 00                    1163 	.db 0x00
                                   1164 	.area CSEG    (CODE)
                                   1165 	.area CONST   (CODE)
      000423                       1166 ___str_8:
      000423 45 6E 74 65 72 20 30  1167 	.ascii "Enter 0 for turning off PWM output"
             20 66 6F 72 20 74 75
             72 6E 69 6E 67 20 6F
             66 66 20 50 57 4D 20
             6F 75 74 70 75 74
      000445 0D                    1168 	.db 0x0d
      000446 00                    1169 	.db 0x00
                                   1170 	.area CSEG    (CODE)
                                   1171 	.area CONST   (CODE)
      000447                       1172 ___str_15:
      000447 45 6E 74 65 72 20 32  1173 	.ascii "Enter 2 for setting peripheral clock to minimum frequency"
             20 66 6F 72 20 73 65
             74 74 69 6E 67 20 70
             65 72 69 70 68 65 72
             61 6C 20 63 6C 6F 63
             6B 20 74 6F 20 6D 69
             6E 69 6D 75 6D 20 66
             72 65 71 75 65 6E 63
             79
      000480 0A                    1174 	.db 0x0a
      000481 0D                    1175 	.db 0x0d
      000482 0A                    1176 	.db 0x0a
      000483 45 6E 74 65 72 20 33  1177 	.ascii "Enter 3 for setting peripheral clock to minimum frequency"
             20 66 6F 72 20 73 65
             74 74 69 6E 67 20 70
             65 72 69 70 68 65 72
             61 6C 20 63 6C 6F 63
             6B 20 74 6F 20 6D 69
             6E 69 6D 75 6D 20 66
             72 65 71 75 65 6E 63
             79
      0004BC 0A                    1178 	.db 0x0a
      0004BD 0D                    1179 	.db 0x0d
      0004BE 0A                    1180 	.db 0x0a
      0004BF 45 6E 74 65 72 20 34  1181 	.ascii "Enter 4 for starting idle mode"
             20 66 6F 72 20 73 74
             61 72 74 69 6E 67 20
             69 64 6C 65 20 6D 6F
             64 65
      0004DD 0A                    1182 	.db 0x0a
      0004DE 0D                    1183 	.db 0x0d
      0004DF 0A                    1184 	.db 0x0a
      0004E0 45 6E 74 65 72 20 35  1185 	.ascii "Enter 5 for power down mode"
             20 66 6F 72 20 70 6F
             77 65 72 20 64 6F 77
             6E 20 6D 6F 64 65
      0004FB 0A                    1186 	.db 0x0a
      0004FC 0D                    1187 	.db 0x0d
      0004FD 00                    1188 	.db 0x00
                                   1189 	.area CSEG    (CODE)
                                   1190 	.area CONST   (CODE)
      0004FE                       1191 ___str_18:
      0004FE 45 6E 74 65 72 20 32  1192 	.ascii "Enter 2 for setting peripheral clock to minimum frequency"
             20 66 6F 72 20 73 65
             74 74 69 6E 67 20 70
             65 72 69 70 68 65 72
             61 6C 20 63 6C 6F 63
             6B 20 74 6F 20 6D 69
             6E 69 6D 75 6D 20 66
             72 65 71 75 65 6E 63
             79
      000537 0D                    1193 	.db 0x0d
      000538 0A                    1194 	.db 0x0a
      000539 45 6E 74 65 72 20 33  1195 	.ascii "Enter 3 for setting peripheral clock to minimum frequency"
             20 66 6F 72 20 73 65
             74 74 69 6E 67 20 70
             65 72 69 70 68 65 72
             61 6C 20 63 6C 6F 63
             6B 20 74 6F 20 6D 69
             6E 69 6D 75 6D 20 66
             72 65 71 75 65 6E 63
             79
      000572 0D                    1196 	.db 0x0d
      000573 0A                    1197 	.db 0x0a
      000574 45 6E 74 65 72 20 34  1198 	.ascii "Enter 4 for starting idle mode"
             20 66 6F 72 20 73 74
             61 72 74 69 6E 67 20
             69 64 6C 65 20 6D 6F
             64 65
      000592 0D                    1199 	.db 0x0d
      000593 0A                    1200 	.db 0x0a
      000594 45 6E 74 65 72 20 35  1201 	.ascii "Enter 5 for power down mode"
             20 66 6F 72 20 70 6F
             77 65 72 20 64 6F 77
             6E 20 6D 6F 64 65
      0005AF 0D                    1202 	.db 0x0d
      0005B0 00                    1203 	.db 0x00
                                   1204 	.area CSEG    (CODE)
                                   1205 	.area XINIT   (CODE)
      0005B1                       1206 __xinit__i:
      0005B1 00 00                 1207 	.byte #0x00, #0x00	;  0
                                   1208 	.area CABS    (ABS,CODE)
