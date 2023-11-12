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
                                     11 	.globl _main
                                     12 	.globl _Timer0_ISR
                                     13 	.globl _resetClock
                                     14 	.globl _display_clock
                                     15 	.globl _updateTimeCounters
                                     16 	.globl _serial_init
                                     17 	.globl _getchar
                                     18 	.globl _getstr
                                     19 	.globl _current_position
                                     20 	.globl _hexdump
                                     21 	.globl _lcdgetch
                                     22 	.globl _lcdclear
                                     23 	.globl _lcdgotoxy
                                     24 	.globl _lcdputstr
                                     25 	.globl _lcdgotoaddress
                                     26 	.globl _lcdputch
                                     27 	.globl _lcd_init
                                     28 	.globl _strtol
                                     29 	.globl _puts
                                     30 	.globl _printf
                                     31 	.globl _TF1
                                     32 	.globl _TR1
                                     33 	.globl _TF0
                                     34 	.globl _TR0
                                     35 	.globl _IE1
                                     36 	.globl _IT1
                                     37 	.globl _IE0
                                     38 	.globl _IT0
                                     39 	.globl _SM0
                                     40 	.globl _SM1
                                     41 	.globl _SM2
                                     42 	.globl _REN
                                     43 	.globl _TB8
                                     44 	.globl _RB8
                                     45 	.globl _TI
                                     46 	.globl _RI
                                     47 	.globl _CY
                                     48 	.globl _AC
                                     49 	.globl _F0
                                     50 	.globl _RS1
                                     51 	.globl _RS0
                                     52 	.globl _OV
                                     53 	.globl _F1
                                     54 	.globl _P
                                     55 	.globl _RD
                                     56 	.globl _WR
                                     57 	.globl _T1
                                     58 	.globl _T0
                                     59 	.globl _INT1
                                     60 	.globl _INT0
                                     61 	.globl _TXD0
                                     62 	.globl _TXD
                                     63 	.globl _RXD0
                                     64 	.globl _RXD
                                     65 	.globl _P3_7
                                     66 	.globl _P3_6
                                     67 	.globl _P3_5
                                     68 	.globl _P3_4
                                     69 	.globl _P3_3
                                     70 	.globl _P3_2
                                     71 	.globl _P3_1
                                     72 	.globl _P3_0
                                     73 	.globl _P2_7
                                     74 	.globl _P2_6
                                     75 	.globl _P2_5
                                     76 	.globl _P2_4
                                     77 	.globl _P2_3
                                     78 	.globl _P2_2
                                     79 	.globl _P2_1
                                     80 	.globl _P2_0
                                     81 	.globl _P1_7
                                     82 	.globl _P1_6
                                     83 	.globl _P1_5
                                     84 	.globl _P1_4
                                     85 	.globl _P1_3
                                     86 	.globl _P1_2
                                     87 	.globl _P1_1
                                     88 	.globl _P1_0
                                     89 	.globl _P0_7
                                     90 	.globl _P0_6
                                     91 	.globl _P0_5
                                     92 	.globl _P0_4
                                     93 	.globl _P0_3
                                     94 	.globl _P0_2
                                     95 	.globl _P0_1
                                     96 	.globl _P0_0
                                     97 	.globl _PS
                                     98 	.globl _PT1
                                     99 	.globl _PX1
                                    100 	.globl _PT0
                                    101 	.globl _PX0
                                    102 	.globl _EA
                                    103 	.globl _ES
                                    104 	.globl _ET1
                                    105 	.globl _EX1
                                    106 	.globl _ET0
                                    107 	.globl _EX0
                                    108 	.globl _BREG_F7
                                    109 	.globl _BREG_F6
                                    110 	.globl _BREG_F5
                                    111 	.globl _BREG_F4
                                    112 	.globl _BREG_F3
                                    113 	.globl _BREG_F2
                                    114 	.globl _BREG_F1
                                    115 	.globl _BREG_F0
                                    116 	.globl _P5_7
                                    117 	.globl _P5_6
                                    118 	.globl _P5_5
                                    119 	.globl _P5_4
                                    120 	.globl _P5_3
                                    121 	.globl _P5_2
                                    122 	.globl _P5_1
                                    123 	.globl _P5_0
                                    124 	.globl _P4_7
                                    125 	.globl _P4_6
                                    126 	.globl _P4_5
                                    127 	.globl _P4_4
                                    128 	.globl _P4_3
                                    129 	.globl _P4_2
                                    130 	.globl _P4_1
                                    131 	.globl _P4_0
                                    132 	.globl _PX0L
                                    133 	.globl _PT0L
                                    134 	.globl _PX1L
                                    135 	.globl _PT1L
                                    136 	.globl _PSL
                                    137 	.globl _PT2L
                                    138 	.globl _PPCL
                                    139 	.globl _EC
                                    140 	.globl _CCF0
                                    141 	.globl _CCF1
                                    142 	.globl _CCF2
                                    143 	.globl _CCF3
                                    144 	.globl _CCF4
                                    145 	.globl _CR
                                    146 	.globl _CF
                                    147 	.globl _TF2
                                    148 	.globl _EXF2
                                    149 	.globl _RCLK
                                    150 	.globl _TCLK
                                    151 	.globl _EXEN2
                                    152 	.globl _TR2
                                    153 	.globl _C_T2
                                    154 	.globl _CP_RL2
                                    155 	.globl _T2CON_7
                                    156 	.globl _T2CON_6
                                    157 	.globl _T2CON_5
                                    158 	.globl _T2CON_4
                                    159 	.globl _T2CON_3
                                    160 	.globl _T2CON_2
                                    161 	.globl _T2CON_1
                                    162 	.globl _T2CON_0
                                    163 	.globl _PT2
                                    164 	.globl _ET2
                                    165 	.globl _TMOD
                                    166 	.globl _TL1
                                    167 	.globl _TL0
                                    168 	.globl _TH1
                                    169 	.globl _TH0
                                    170 	.globl _TCON
                                    171 	.globl _SP
                                    172 	.globl _SCON
                                    173 	.globl _SBUF0
                                    174 	.globl _SBUF
                                    175 	.globl _PSW
                                    176 	.globl _PCON
                                    177 	.globl _P3
                                    178 	.globl _P2
                                    179 	.globl _P1
                                    180 	.globl _P0
                                    181 	.globl _IP
                                    182 	.globl _IE
                                    183 	.globl _DP0L
                                    184 	.globl _DPL
                                    185 	.globl _DP0H
                                    186 	.globl _DPH
                                    187 	.globl _B
                                    188 	.globl _ACC
                                    189 	.globl _EECON
                                    190 	.globl _KBF
                                    191 	.globl _KBE
                                    192 	.globl _KBLS
                                    193 	.globl _BRL
                                    194 	.globl _BDRCON
                                    195 	.globl _T2MOD
                                    196 	.globl _SPDAT
                                    197 	.globl _SPSTA
                                    198 	.globl _SPCON
                                    199 	.globl _SADEN
                                    200 	.globl _SADDR
                                    201 	.globl _WDTPRG
                                    202 	.globl _WDTRST
                                    203 	.globl _P5
                                    204 	.globl _P4
                                    205 	.globl _IPH1
                                    206 	.globl _IPL1
                                    207 	.globl _IPH0
                                    208 	.globl _IPL0
                                    209 	.globl _IEN1
                                    210 	.globl _IEN0
                                    211 	.globl _CMOD
                                    212 	.globl _CL
                                    213 	.globl _CH
                                    214 	.globl _CCON
                                    215 	.globl _CCAPM4
                                    216 	.globl _CCAPM3
                                    217 	.globl _CCAPM2
                                    218 	.globl _CCAPM1
                                    219 	.globl _CCAPM0
                                    220 	.globl _CCAP4L
                                    221 	.globl _CCAP3L
                                    222 	.globl _CCAP2L
                                    223 	.globl _CCAP1L
                                    224 	.globl _CCAP0L
                                    225 	.globl _CCAP4H
                                    226 	.globl _CCAP3H
                                    227 	.globl _CCAP2H
                                    228 	.globl _CCAP1H
                                    229 	.globl _CCAP0H
                                    230 	.globl _CKCON1
                                    231 	.globl _CKCON0
                                    232 	.globl _CKRL
                                    233 	.globl _AUXR1
                                    234 	.globl _AUXR
                                    235 	.globl _TH2
                                    236 	.globl _TL2
                                    237 	.globl _RCAP2H
                                    238 	.globl _RCAP2L
                                    239 	.globl _T2CON
                                    240 	.globl _displayFlag
                                    241 	.globl _timer_init
                                    242 ;--------------------------------------------------------
                                    243 ; special function registers
                                    244 ;--------------------------------------------------------
                                    245 	.area RSEG    (ABS,DATA)
      000000                        246 	.org 0x0000
                           0000C8   247 _T2CON	=	0x00c8
                           0000CA   248 _RCAP2L	=	0x00ca
                           0000CB   249 _RCAP2H	=	0x00cb
                           0000CC   250 _TL2	=	0x00cc
                           0000CD   251 _TH2	=	0x00cd
                           00008E   252 _AUXR	=	0x008e
                           0000A2   253 _AUXR1	=	0x00a2
                           000097   254 _CKRL	=	0x0097
                           00008F   255 _CKCON0	=	0x008f
                           0000AF   256 _CKCON1	=	0x00af
                           0000FA   257 _CCAP0H	=	0x00fa
                           0000FB   258 _CCAP1H	=	0x00fb
                           0000FC   259 _CCAP2H	=	0x00fc
                           0000FD   260 _CCAP3H	=	0x00fd
                           0000FE   261 _CCAP4H	=	0x00fe
                           0000EA   262 _CCAP0L	=	0x00ea
                           0000EB   263 _CCAP1L	=	0x00eb
                           0000EC   264 _CCAP2L	=	0x00ec
                           0000ED   265 _CCAP3L	=	0x00ed
                           0000EE   266 _CCAP4L	=	0x00ee
                           0000DA   267 _CCAPM0	=	0x00da
                           0000DB   268 _CCAPM1	=	0x00db
                           0000DC   269 _CCAPM2	=	0x00dc
                           0000DD   270 _CCAPM3	=	0x00dd
                           0000DE   271 _CCAPM4	=	0x00de
                           0000D8   272 _CCON	=	0x00d8
                           0000F9   273 _CH	=	0x00f9
                           0000E9   274 _CL	=	0x00e9
                           0000D9   275 _CMOD	=	0x00d9
                           0000A8   276 _IEN0	=	0x00a8
                           0000B1   277 _IEN1	=	0x00b1
                           0000B8   278 _IPL0	=	0x00b8
                           0000B7   279 _IPH0	=	0x00b7
                           0000B2   280 _IPL1	=	0x00b2
                           0000B3   281 _IPH1	=	0x00b3
                           0000C0   282 _P4	=	0x00c0
                           0000E8   283 _P5	=	0x00e8
                           0000A6   284 _WDTRST	=	0x00a6
                           0000A7   285 _WDTPRG	=	0x00a7
                           0000A9   286 _SADDR	=	0x00a9
                           0000B9   287 _SADEN	=	0x00b9
                           0000C3   288 _SPCON	=	0x00c3
                           0000C4   289 _SPSTA	=	0x00c4
                           0000C5   290 _SPDAT	=	0x00c5
                           0000C9   291 _T2MOD	=	0x00c9
                           00009B   292 _BDRCON	=	0x009b
                           00009A   293 _BRL	=	0x009a
                           00009C   294 _KBLS	=	0x009c
                           00009D   295 _KBE	=	0x009d
                           00009E   296 _KBF	=	0x009e
                           0000D2   297 _EECON	=	0x00d2
                           0000E0   298 _ACC	=	0x00e0
                           0000F0   299 _B	=	0x00f0
                           000083   300 _DPH	=	0x0083
                           000083   301 _DP0H	=	0x0083
                           000082   302 _DPL	=	0x0082
                           000082   303 _DP0L	=	0x0082
                           0000A8   304 _IE	=	0x00a8
                           0000B8   305 _IP	=	0x00b8
                           000080   306 _P0	=	0x0080
                           000090   307 _P1	=	0x0090
                           0000A0   308 _P2	=	0x00a0
                           0000B0   309 _P3	=	0x00b0
                           000087   310 _PCON	=	0x0087
                           0000D0   311 _PSW	=	0x00d0
                           000099   312 _SBUF	=	0x0099
                           000099   313 _SBUF0	=	0x0099
                           000098   314 _SCON	=	0x0098
                           000081   315 _SP	=	0x0081
                           000088   316 _TCON	=	0x0088
                           00008C   317 _TH0	=	0x008c
                           00008D   318 _TH1	=	0x008d
                           00008A   319 _TL0	=	0x008a
                           00008B   320 _TL1	=	0x008b
                           000089   321 _TMOD	=	0x0089
                                    322 ;--------------------------------------------------------
                                    323 ; special function bits
                                    324 ;--------------------------------------------------------
                                    325 	.area RSEG    (ABS,DATA)
      000000                        326 	.org 0x0000
                           0000AD   327 _ET2	=	0x00ad
                           0000BD   328 _PT2	=	0x00bd
                           0000C8   329 _T2CON_0	=	0x00c8
                           0000C9   330 _T2CON_1	=	0x00c9
                           0000CA   331 _T2CON_2	=	0x00ca
                           0000CB   332 _T2CON_3	=	0x00cb
                           0000CC   333 _T2CON_4	=	0x00cc
                           0000CD   334 _T2CON_5	=	0x00cd
                           0000CE   335 _T2CON_6	=	0x00ce
                           0000CF   336 _T2CON_7	=	0x00cf
                           0000C8   337 _CP_RL2	=	0x00c8
                           0000C9   338 _C_T2	=	0x00c9
                           0000CA   339 _TR2	=	0x00ca
                           0000CB   340 _EXEN2	=	0x00cb
                           0000CC   341 _TCLK	=	0x00cc
                           0000CD   342 _RCLK	=	0x00cd
                           0000CE   343 _EXF2	=	0x00ce
                           0000CF   344 _TF2	=	0x00cf
                           0000DF   345 _CF	=	0x00df
                           0000DE   346 _CR	=	0x00de
                           0000DC   347 _CCF4	=	0x00dc
                           0000DB   348 _CCF3	=	0x00db
                           0000DA   349 _CCF2	=	0x00da
                           0000D9   350 _CCF1	=	0x00d9
                           0000D8   351 _CCF0	=	0x00d8
                           0000AE   352 _EC	=	0x00ae
                           0000BE   353 _PPCL	=	0x00be
                           0000BD   354 _PT2L	=	0x00bd
                           0000BC   355 _PSL	=	0x00bc
                           0000BB   356 _PT1L	=	0x00bb
                           0000BA   357 _PX1L	=	0x00ba
                           0000B9   358 _PT0L	=	0x00b9
                           0000B8   359 _PX0L	=	0x00b8
                           0000C0   360 _P4_0	=	0x00c0
                           0000C1   361 _P4_1	=	0x00c1
                           0000C2   362 _P4_2	=	0x00c2
                           0000C3   363 _P4_3	=	0x00c3
                           0000C4   364 _P4_4	=	0x00c4
                           0000C5   365 _P4_5	=	0x00c5
                           0000C6   366 _P4_6	=	0x00c6
                           0000C7   367 _P4_7	=	0x00c7
                           0000E8   368 _P5_0	=	0x00e8
                           0000E9   369 _P5_1	=	0x00e9
                           0000EA   370 _P5_2	=	0x00ea
                           0000EB   371 _P5_3	=	0x00eb
                           0000EC   372 _P5_4	=	0x00ec
                           0000ED   373 _P5_5	=	0x00ed
                           0000EE   374 _P5_6	=	0x00ee
                           0000EF   375 _P5_7	=	0x00ef
                           0000F0   376 _BREG_F0	=	0x00f0
                           0000F1   377 _BREG_F1	=	0x00f1
                           0000F2   378 _BREG_F2	=	0x00f2
                           0000F3   379 _BREG_F3	=	0x00f3
                           0000F4   380 _BREG_F4	=	0x00f4
                           0000F5   381 _BREG_F5	=	0x00f5
                           0000F6   382 _BREG_F6	=	0x00f6
                           0000F7   383 _BREG_F7	=	0x00f7
                           0000A8   384 _EX0	=	0x00a8
                           0000A9   385 _ET0	=	0x00a9
                           0000AA   386 _EX1	=	0x00aa
                           0000AB   387 _ET1	=	0x00ab
                           0000AC   388 _ES	=	0x00ac
                           0000AF   389 _EA	=	0x00af
                           0000B8   390 _PX0	=	0x00b8
                           0000B9   391 _PT0	=	0x00b9
                           0000BA   392 _PX1	=	0x00ba
                           0000BB   393 _PT1	=	0x00bb
                           0000BC   394 _PS	=	0x00bc
                           000080   395 _P0_0	=	0x0080
                           000081   396 _P0_1	=	0x0081
                           000082   397 _P0_2	=	0x0082
                           000083   398 _P0_3	=	0x0083
                           000084   399 _P0_4	=	0x0084
                           000085   400 _P0_5	=	0x0085
                           000086   401 _P0_6	=	0x0086
                           000087   402 _P0_7	=	0x0087
                           000090   403 _P1_0	=	0x0090
                           000091   404 _P1_1	=	0x0091
                           000092   405 _P1_2	=	0x0092
                           000093   406 _P1_3	=	0x0093
                           000094   407 _P1_4	=	0x0094
                           000095   408 _P1_5	=	0x0095
                           000096   409 _P1_6	=	0x0096
                           000097   410 _P1_7	=	0x0097
                           0000A0   411 _P2_0	=	0x00a0
                           0000A1   412 _P2_1	=	0x00a1
                           0000A2   413 _P2_2	=	0x00a2
                           0000A3   414 _P2_3	=	0x00a3
                           0000A4   415 _P2_4	=	0x00a4
                           0000A5   416 _P2_5	=	0x00a5
                           0000A6   417 _P2_6	=	0x00a6
                           0000A7   418 _P2_7	=	0x00a7
                           0000B0   419 _P3_0	=	0x00b0
                           0000B1   420 _P3_1	=	0x00b1
                           0000B2   421 _P3_2	=	0x00b2
                           0000B3   422 _P3_3	=	0x00b3
                           0000B4   423 _P3_4	=	0x00b4
                           0000B5   424 _P3_5	=	0x00b5
                           0000B6   425 _P3_6	=	0x00b6
                           0000B7   426 _P3_7	=	0x00b7
                           0000B0   427 _RXD	=	0x00b0
                           0000B0   428 _RXD0	=	0x00b0
                           0000B1   429 _TXD	=	0x00b1
                           0000B1   430 _TXD0	=	0x00b1
                           0000B2   431 _INT0	=	0x00b2
                           0000B3   432 _INT1	=	0x00b3
                           0000B4   433 _T0	=	0x00b4
                           0000B5   434 _T1	=	0x00b5
                           0000B6   435 _WR	=	0x00b6
                           0000B7   436 _RD	=	0x00b7
                           0000D0   437 _P	=	0x00d0
                           0000D1   438 _F1	=	0x00d1
                           0000D2   439 _OV	=	0x00d2
                           0000D3   440 _RS0	=	0x00d3
                           0000D4   441 _RS1	=	0x00d4
                           0000D5   442 _F0	=	0x00d5
                           0000D6   443 _AC	=	0x00d6
                           0000D7   444 _CY	=	0x00d7
                           000098   445 _RI	=	0x0098
                           000099   446 _TI	=	0x0099
                           00009A   447 _RB8	=	0x009a
                           00009B   448 _TB8	=	0x009b
                           00009C   449 _REN	=	0x009c
                           00009D   450 _SM2	=	0x009d
                           00009E   451 _SM1	=	0x009e
                           00009F   452 _SM0	=	0x009f
                           000088   453 _IT0	=	0x0088
                           000089   454 _IE0	=	0x0089
                           00008A   455 _IT1	=	0x008a
                           00008B   456 _IE1	=	0x008b
                           00008C   457 _TR0	=	0x008c
                           00008D   458 _TF0	=	0x008d
                           00008E   459 _TR1	=	0x008e
                           00008F   460 _TF1	=	0x008f
                                    461 ;--------------------------------------------------------
                                    462 ; overlayable register banks
                                    463 ;--------------------------------------------------------
                                    464 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        465 	.ds 8
                                    466 ;--------------------------------------------------------
                                    467 ; overlayable bit register bank
                                    468 ;--------------------------------------------------------
                                    469 	.area BIT_BANK	(REL,OVR,DATA)
      000021                        470 bits:
      000021                        471 	.ds 1
                           008000   472 	b0 = bits[0]
                           008100   473 	b1 = bits[1]
                           008200   474 	b2 = bits[2]
                           008300   475 	b3 = bits[3]
                           008400   476 	b4 = bits[4]
                           008500   477 	b5 = bits[5]
                           008600   478 	b6 = bits[6]
                           008700   479 	b7 = bits[7]
                                    480 ;--------------------------------------------------------
                                    481 ; internal ram data
                                    482 ;--------------------------------------------------------
                                    483 	.area DSEG    (DATA)
                                    484 ;--------------------------------------------------------
                                    485 ; overlayable items in internal ram
                                    486 ;--------------------------------------------------------
                                    487 ;--------------------------------------------------------
                                    488 ; Stack segment in internal ram
                                    489 ;--------------------------------------------------------
                                    490 	.area	SSEG
      000023                        491 __start__stack:
      000023                        492 	.ds	1
                                    493 
                                    494 ;--------------------------------------------------------
                                    495 ; indirectly addressable internal ram data
                                    496 ;--------------------------------------------------------
                                    497 	.area ISEG    (DATA)
                                    498 ;--------------------------------------------------------
                                    499 ; absolute internal ram data
                                    500 ;--------------------------------------------------------
                                    501 	.area IABS    (ABS,DATA)
                                    502 	.area IABS    (ABS,DATA)
                                    503 ;--------------------------------------------------------
                                    504 ; bit data
                                    505 ;--------------------------------------------------------
                                    506 	.area BSEG    (BIT)
      000000                        507 _main_sloc0_1_0:
      000000                        508 	.ds 1
      000001                        509 _main_sloc1_1_0:
      000001                        510 	.ds 1
                                    511 ;--------------------------------------------------------
                                    512 ; paged external ram data
                                    513 ;--------------------------------------------------------
                                    514 	.area PSEG    (PAG,XDATA)
                                    515 ;--------------------------------------------------------
                                    516 ; external ram data
                                    517 ;--------------------------------------------------------
                                    518 	.area XSEG    (XDATA)
      000011                        519 _main_character_65536_113:
      000011                        520 	.ds 5
      000016                        521 _main_address_65536_113:
      000016                        522 	.ds 5
      00001B                        523 _main_string_65536_113:
      00001B                        524 	.ds 50
      00004D                        525 _main_row_65536_113:
      00004D                        526 	.ds 5
      000052                        527 _main_column_65536_113:
      000052                        528 	.ds 5
                                    529 ;--------------------------------------------------------
                                    530 ; absolute external ram data
                                    531 ;--------------------------------------------------------
                                    532 	.area XABS    (ABS,XDATA)
                                    533 ;--------------------------------------------------------
                                    534 ; external initialized ram data
                                    535 ;--------------------------------------------------------
                                    536 	.area XISEG   (XDATA)
      0000FC                        537 _displayFlag::
      0000FC                        538 	.ds 2
                                    539 	.area HOME    (CODE)
                                    540 	.area GSINIT0 (CODE)
                                    541 	.area GSINIT1 (CODE)
                                    542 	.area GSINIT2 (CODE)
                                    543 	.area GSINIT3 (CODE)
                                    544 	.area GSINIT4 (CODE)
                                    545 	.area GSINIT5 (CODE)
                                    546 	.area GSINIT  (CODE)
                                    547 	.area GSFINAL (CODE)
                                    548 	.area CSEG    (CODE)
                                    549 ;--------------------------------------------------------
                                    550 ; interrupt vector
                                    551 ;--------------------------------------------------------
                                    552 	.area HOME    (CODE)
      000000                        553 __interrupt_vect:
      000000 02 00 67         [24]  554 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  555 	reti
      000004                        556 	.ds	7
      00000B 32               [24]  557 	reti
      00000C                        558 	.ds	7
      000013 32               [24]  559 	reti
      000014                        560 	.ds	7
      00001B 32               [24]  561 	reti
      00001C                        562 	.ds	7
      000023 32               [24]  563 	reti
      000024                        564 	.ds	7
      00002B 32               [24]  565 	reti
      00002C                        566 	.ds	7
      000033 02 04 7B         [24]  567 	ljmp	_Timer0_ISR
                                    568 ;--------------------------------------------------------
                                    569 ; global & static initialisations
                                    570 ;--------------------------------------------------------
                                    571 	.area HOME    (CODE)
                                    572 	.area GSINIT  (CODE)
                                    573 	.area GSFINAL (CODE)
                                    574 	.area GSINIT  (CODE)
                                    575 	.globl __sdcc_gsinit_startup
                                    576 	.globl __sdcc_program_startup
                                    577 	.globl __start__stack
                                    578 	.globl __mcs51_genXINIT
                                    579 	.globl __mcs51_genXRAMCLEAR
                                    580 	.globl __mcs51_genRAMCLEAR
                                    581 	.area GSFINAL (CODE)
      0000C0 02 00 36         [24]  582 	ljmp	__sdcc_program_startup
                                    583 ;--------------------------------------------------------
                                    584 ; Home
                                    585 ;--------------------------------------------------------
                                    586 	.area HOME    (CODE)
                                    587 	.area HOME    (CODE)
      000036                        588 __sdcc_program_startup:
      000036 02 04 E1         [24]  589 	ljmp	_main
                                    590 ;	return from main will return to caller
                                    591 ;--------------------------------------------------------
                                    592 ; code
                                    593 ;--------------------------------------------------------
                                    594 	.area CSEG    (CODE)
                                    595 ;------------------------------------------------------------
                                    596 ;Allocation info for local variables in function 'timer_init'
                                    597 ;------------------------------------------------------------
                                    598 ;	main.c:43: void timer_init(void)           //software timer using PCA1 module initialization
                                    599 ;	-----------------------------------------
                                    600 ;	 function timer_init
                                    601 ;	-----------------------------------------
      000466                        602 _timer_init:
                           000007   603 	ar7 = 0x07
                           000006   604 	ar6 = 0x06
                           000005   605 	ar5 = 0x05
                           000004   606 	ar4 = 0x04
                           000003   607 	ar3 = 0x03
                           000002   608 	ar2 = 0x02
                           000001   609 	ar1 = 0x01
                           000000   610 	ar0 = 0x00
                                    611 ;	main.c:45: EA=1;                       //enabling global interrupt
                                    612 ;	assignBit
      000466 D2 AF            [12]  613 	setb	_EA
                                    614 ;	main.c:46: CMOD |= 0x03;               //enabling ECF bit to generate interrupt
      000468 43 D9 03         [24]  615 	orl	_CMOD,#0x03
                                    616 ;	main.c:47: CCAP1L = 0x6A;
      00046B 75 EB 6A         [24]  617 	mov	_CCAP1L,#0x6a
                                    618 ;	main.c:48: CCAP1H = 0xDC;              // for 10ms delay register= 6E35
      00046E 75 FB DC         [24]  619 	mov	_CCAP1H,#0xdc
                                    620 ;	main.c:49: CCAPM1 = 0x49;              //setting ECOM1, MAT1, CCF1
      000471 75 DB 49         [24]  621 	mov	_CCAPM1,#0x49
                                    622 ;	main.c:50: CR=1;                       //starting timer
                                    623 ;	assignBit
      000474 D2 DE            [12]  624 	setb	_CR
                                    625 ;	main.c:51: EC=1;                       //enabling PCA interrupt bit in interrupt enable register
                                    626 ;	assignBit
      000476 D2 AE            [12]  627 	setb	_EC
                                    628 ;	main.c:52: P1_2=0;
                                    629 ;	assignBit
      000478 C2 92            [12]  630 	clr	_P1_2
                                    631 ;	main.c:53: }
      00047A 22               [24]  632 	ret
                                    633 ;------------------------------------------------------------
                                    634 ;Allocation info for local variables in function 'Timer0_ISR'
                                    635 ;------------------------------------------------------------
                                    636 ;position                  Allocated with name '_Timer0_ISR_position_65537_110'
                                    637 ;------------------------------------------------------------
                                    638 ;	main.c:66: void Timer0_ISR (void) __interrupt(PCA_VECTOR)      //PCA Interrupt
                                    639 ;	-----------------------------------------
                                    640 ;	 function Timer0_ISR
                                    641 ;	-----------------------------------------
      00047B                        642 _Timer0_ISR:
      00047B C0 21            [24]  643 	push	bits
      00047D C0 E0            [24]  644 	push	acc
      00047F C0 F0            [24]  645 	push	b
      000481 C0 82            [24]  646 	push	dpl
      000483 C0 83            [24]  647 	push	dph
      000485 C0 07            [24]  648 	push	(0+7)
      000487 C0 06            [24]  649 	push	(0+6)
      000489 C0 05            [24]  650 	push	(0+5)
      00048B C0 04            [24]  651 	push	(0+4)
      00048D C0 03            [24]  652 	push	(0+3)
      00048F C0 02            [24]  653 	push	(0+2)
      000491 C0 01            [24]  654 	push	(0+1)
      000493 C0 00            [24]  655 	push	(0+0)
      000495 C0 D0            [24]  656 	push	psw
      000497 75 D0 00         [24]  657 	mov	psw,#0x00
                                    658 ;	main.c:69: CH=0;                //clear the counters
      00049A 75 F9 00         [24]  659 	mov	_CH,#0x00
                                    660 ;	main.c:70: CL=0;
      00049D 75 E9 00         [24]  661 	mov	_CL,#0x00
                                    662 ;	main.c:71: CCF1=0;
                                    663 ;	assignBit
      0004A0 C2 D9            [12]  664 	clr	_CCF1
                                    665 ;	main.c:72: P1_2=!P1_2;
      0004A2 B2 92            [12]  666 	cpl	_P1_2
                                    667 ;	main.c:74: uint8_t position= current_position();
      0004A4 12 03 3D         [24]  668 	lcall	_current_position
      0004A7 AF 82            [24]  669 	mov	r7,dpl
                                    670 ;	main.c:75: if (displayFlag){
      0004A9 90 00 FC         [24]  671 	mov	dptr,#_displayFlag
      0004AC E0               [24]  672 	movx	a,@dptr
      0004AD F5 F0            [12]  673 	mov	b,a
      0004AF A3               [24]  674 	inc	dptr
      0004B0 E0               [24]  675 	movx	a,@dptr
      0004B1 45 F0            [12]  676 	orl	a,b
      0004B3 60 0A            [24]  677 	jz	00102$
                                    678 ;	main.c:76: updateTimeCounters();     //if display flag is set
      0004B5 C0 07            [24]  679 	push	ar7
      0004B7 12 09 15         [24]  680 	lcall	_updateTimeCounters
                                    681 ;	main.c:77: display_clock();            //display clock
      0004BA 12 09 D8         [24]  682 	lcall	_display_clock
      0004BD D0 07            [24]  683 	pop	ar7
      0004BF                        684 00102$:
                                    685 ;	main.c:79: lcdgotoaddress(position);
      0004BF 8F 82            [24]  686 	mov	dpl,r7
      0004C1 12 02 3C         [24]  687 	lcall	_lcdgotoaddress
                                    688 ;	main.c:80: }
      0004C4 D0 D0            [24]  689 	pop	psw
      0004C6 D0 00            [24]  690 	pop	(0+0)
      0004C8 D0 01            [24]  691 	pop	(0+1)
      0004CA D0 02            [24]  692 	pop	(0+2)
      0004CC D0 03            [24]  693 	pop	(0+3)
      0004CE D0 04            [24]  694 	pop	(0+4)
      0004D0 D0 05            [24]  695 	pop	(0+5)
      0004D2 D0 06            [24]  696 	pop	(0+6)
      0004D4 D0 07            [24]  697 	pop	(0+7)
      0004D6 D0 83            [24]  698 	pop	dph
      0004D8 D0 82            [24]  699 	pop	dpl
      0004DA D0 F0            [24]  700 	pop	b
      0004DC D0 E0            [24]  701 	pop	acc
      0004DE D0 21            [24]  702 	pop	bits
      0004E0 32               [24]  703 	reti
                                    704 ;------------------------------------------------------------
                                    705 ;Allocation info for local variables in function 'main'
                                    706 ;------------------------------------------------------------
                                    707 ;data                      Allocated with name '_main_data_65536_113'
                                    708 ;character                 Allocated with name '_main_character_65536_113'
                                    709 ;address                   Allocated with name '_main_address_65536_113'
                                    710 ;string                    Allocated with name '_main_string_65536_113'
                                    711 ;addressint                Allocated with name '_main_addressint_65536_113'
                                    712 ;row                       Allocated with name '_main_row_65536_113'
                                    713 ;column                    Allocated with name '_main_column_65536_113'
                                    714 ;rowint                    Allocated with name '_main_rowint_65536_113'
                                    715 ;columnint                 Allocated with name '_main_columnint_65536_113'
                                    716 ;------------------------------------------------------------
                                    717 ;	main.c:83: void main(void)
                                    718 ;	-----------------------------------------
                                    719 ;	 function main
                                    720 ;	-----------------------------------------
      0004E1                        721 _main:
                                    722 ;	main.c:95: serial_init();
      0004E1 12 07 DB         [24]  723 	lcall	_serial_init
                                    724 ;	main.c:96: lcd_init();
      0004E4 12 01 46         [24]  725 	lcall	_lcd_init
                                    726 ;	main.c:99: puts("Press 1 to write data at the current cursor \r");
      0004E7 90 20 3C         [24]  727 	mov	dptr,#___str_0
      0004EA 75 F0 80         [24]  728 	mov	b,#0x80
      0004ED 12 14 8E         [24]  729 	lcall	_puts
                                    730 ;	main.c:100: puts("Press 2 to go to address \r");
      0004F0 90 20 6A         [24]  731 	mov	dptr,#___str_1
      0004F3 75 F0 80         [24]  732 	mov	b,#0x80
      0004F6 12 14 8E         [24]  733 	lcall	_puts
                                    734 ;	main.c:101: puts("Press 3 to go to x,y address \r");
      0004F9 90 20 85         [24]  735 	mov	dptr,#___str_2
      0004FC 75 F0 80         [24]  736 	mov	b,#0x80
      0004FF 12 14 8E         [24]  737 	lcall	_puts
                                    738 ;	main.c:102: puts("Press 4 to write string at current cursor \r");
      000502 90 20 A4         [24]  739 	mov	dptr,#___str_3
      000505 75 F0 80         [24]  740 	mov	b,#0x80
      000508 12 14 8E         [24]  741 	lcall	_puts
                                    742 ;	main.c:103: puts("Press 5 to clear LCD screen \r");
      00050B 90 20 D0         [24]  743 	mov	dptr,#___str_4
      00050E 75 F0 80         [24]  744 	mov	b,#0x80
      000511 12 14 8E         [24]  745 	lcall	_puts
                                    746 ;	main.c:104: puts("Press 6 to restart clock \r");
      000514 90 20 EE         [24]  747 	mov	dptr,#___str_5
      000517 75 F0 80         [24]  748 	mov	b,#0x80
      00051A 12 14 8E         [24]  749 	lcall	_puts
                                    750 ;	main.c:105: puts("Press 7 to stop clock display \r");
      00051D 90 21 09         [24]  751 	mov	dptr,#___str_6
      000520 75 F0 80         [24]  752 	mov	b,#0x80
      000523 12 14 8E         [24]  753 	lcall	_puts
                                    754 ;	main.c:106: puts("Press 8 to restart clock \r");
      000526 90 21 29         [24]  755 	mov	dptr,#___str_7
      000529 75 F0 80         [24]  756 	mov	b,#0x80
      00052C 12 14 8E         [24]  757 	lcall	_puts
                                    758 ;	main.c:107: puts("Press 9 to for DDRAM hexdump \r");
      00052F 90 21 44         [24]  759 	mov	dptr,#___str_8
      000532 75 F0 80         [24]  760 	mov	b,#0x80
      000535 12 14 8E         [24]  761 	lcall	_puts
                                    762 ;	main.c:108: puts("Press ? to for user menu \r");
      000538 90 21 63         [24]  763 	mov	dptr,#___str_9
      00053B 75 F0 80         [24]  764 	mov	b,#0x80
      00053E 12 14 8E         [24]  765 	lcall	_puts
                                    766 ;	main.c:110: while(1)                        //command processor
      000541                        767 00138$:
                                    768 ;	main.c:112: puts("<<Enter command for operation>>\n\r");
      000541 90 21 7E         [24]  769 	mov	dptr,#___str_10
      000544 75 F0 80         [24]  770 	mov	b,#0x80
      000547 12 14 8E         [24]  771 	lcall	_puts
                                    772 ;	main.c:113: getstr(character);
      00054A 90 00 11         [24]  773 	mov	dptr,#_main_character_65536_113
      00054D 75 F0 00         [24]  774 	mov	b,#0x00
      000550 12 08 9C         [24]  775 	lcall	_getstr
                                    776 ;	main.c:114: if (character[0]=='1')
      000553 90 00 11         [24]  777 	mov	dptr,#_main_character_65536_113
      000556 E0               [24]  778 	movx	a,@dptr
      000557 FF               [12]  779 	mov	r7,a
      000558 BF 31 11         [24]  780 	cjne	r7,#0x31,00135$
                                    781 ;	main.c:116: puts("Enter character to put at current cursor \n\r");
      00055B 90 21 A0         [24]  782 	mov	dptr,#___str_11
      00055E 75 F0 80         [24]  783 	mov	b,#0x80
      000561 12 14 8E         [24]  784 	lcall	_puts
                                    785 ;	main.c:117: data=getchar();
      000564 12 08 10         [24]  786 	lcall	_getchar
                                    787 ;	main.c:118: lcdputch(data);
      000567 12 01 CF         [24]  788 	lcall	_lcdputch
      00056A 80 D5            [24]  789 	sjmp	00138$
      00056C                        790 00135$:
                                    791 ;	main.c:120: else if (character[0]=='2')
      00056C BF 32 02         [24]  792 	cjne	r7,#0x32,00224$
      00056F 80 03            [24]  793 	sjmp	00225$
      000571                        794 00224$:
      000571 02 06 66         [24]  795 	ljmp	00132$
      000574                        796 00225$:
                                    797 ;	main.c:122: puts("Enter address to go to \n\r");
      000574 90 21 CC         [24]  798 	mov	dptr,#___str_12
      000577 75 F0 80         [24]  799 	mov	b,#0x80
      00057A 12 14 8E         [24]  800 	lcall	_puts
                                    801 ;	main.c:123: getstr(address);
      00057D 90 00 16         [24]  802 	mov	dptr,#_main_address_65536_113
      000580 75 F0 00         [24]  803 	mov	b,#0x00
      000583 12 08 9C         [24]  804 	lcall	_getstr
                                    805 ;	main.c:124: addressint= (int)strtol(address, NULL, 16);                             //taking address in hex
      000586 90 00 7A         [24]  806 	mov	dptr,#_strtol_PARM_2
      000589 E4               [12]  807 	clr	a
      00058A F0               [24]  808 	movx	@dptr,a
      00058B A3               [24]  809 	inc	dptr
      00058C F0               [24]  810 	movx	@dptr,a
      00058D A3               [24]  811 	inc	dptr
      00058E F0               [24]  812 	movx	@dptr,a
      00058F 90 00 7D         [24]  813 	mov	dptr,#_strtol_PARM_3
      000592 74 10            [12]  814 	mov	a,#0x10
      000594 F0               [24]  815 	movx	@dptr,a
      000595 E4               [12]  816 	clr	a
      000596 A3               [24]  817 	inc	dptr
      000597 F0               [24]  818 	movx	@dptr,a
      000598 90 00 16         [24]  819 	mov	dptr,#_main_address_65536_113
      00059B 75 F0 00         [24]  820 	mov	b,#0x00
      00059E 12 0C 33         [24]  821 	lcall	_strtol
      0005A1 AB 82            [24]  822 	mov	r3,dpl
                                    823 ;	main.c:125: if ((ROW1_START <= addressint && addressint <= ROW1_END) |              //checking address boundary wrt to clock
      0005A3 E5 83            [12]  824 	mov	a,dph
      0005A5 FC               [12]  825 	mov	r4,a
      0005A6 33               [12]  826 	rlc	a
      0005A7 92 00            [24]  827 	mov	_main_sloc0_1_0,c
      0005A9 40 11            [24]  828 	jc	00142$
      0005AB C3               [12]  829 	clr	c
      0005AC 74 0F            [12]  830 	mov	a,#0x0f
      0005AE 9B               [12]  831 	subb	a,r3
      0005AF 74 80            [12]  832 	mov	a,#(0x00 ^ 0x80)
      0005B1 8C F0            [24]  833 	mov	b,r4
      0005B3 63 F0 80         [24]  834 	xrl	b,#0x80
      0005B6 95 F0            [12]  835 	subb	a,b
      0005B8 92 00            [24]  836 	mov	_main_sloc0_1_0,c
      0005BA 50 04            [24]  837 	jnc	00143$
      0005BC                        838 00142$:
                                    839 ;	assignBit
      0005BC C2 00            [12]  840 	clr	_main_sloc0_1_0
      0005BE 80 02            [24]  841 	sjmp	00144$
      0005C0                        842 00143$:
                                    843 ;	assignBit
      0005C0 D2 00            [12]  844 	setb	_main_sloc0_1_0
      0005C2                        845 00144$:
                                    846 ;	main.c:126: (ROW2_START <= addressint && addressint <= ROW2_END) |
      0005C2 C3               [12]  847 	clr	c
      0005C3 EB               [12]  848 	mov	a,r3
      0005C4 94 40            [12]  849 	subb	a,#0x40
      0005C6 EC               [12]  850 	mov	a,r4
      0005C7 64 80            [12]  851 	xrl	a,#0x80
      0005C9 94 80            [12]  852 	subb	a,#0x80
      0005CB 92 01            [24]  853 	mov	_main_sloc1_1_0,c
      0005CD 40 11            [24]  854 	jc	00145$
      0005CF C3               [12]  855 	clr	c
      0005D0 74 4F            [12]  856 	mov	a,#0x4f
      0005D2 9B               [12]  857 	subb	a,r3
      0005D3 74 80            [12]  858 	mov	a,#(0x00 ^ 0x80)
      0005D5 8C F0            [24]  859 	mov	b,r4
      0005D7 63 F0 80         [24]  860 	xrl	b,#0x80
      0005DA 95 F0            [12]  861 	subb	a,b
      0005DC 92 01            [24]  862 	mov	_main_sloc1_1_0,c
      0005DE 50 04            [24]  863 	jnc	00146$
      0005E0                        864 00145$:
                                    865 ;	assignBit
      0005E0 C2 01            [12]  866 	clr	_main_sloc1_1_0
      0005E2 80 02            [24]  867 	sjmp	00147$
      0005E4                        868 00146$:
                                    869 ;	assignBit
      0005E4 D2 01            [12]  870 	setb	_main_sloc1_1_0
      0005E6                        871 00147$:
      0005E6 A2 00            [12]  872 	mov	c,_main_sloc0_1_0
      0005E8 E4               [12]  873 	clr	a
      0005E9 33               [12]  874 	rlc	a
      0005EA FE               [12]  875 	mov	r6,a
      0005EB A2 01            [12]  876 	mov	c,_main_sloc1_1_0
      0005ED E4               [12]  877 	clr	a
      0005EE 33               [12]  878 	rlc	a
      0005EF 42 06            [12]  879 	orl	ar6,a
                                    880 ;	main.c:127: (ROW3_START <= addressint && addressint <= ROW3_END) |
      0005F1 C3               [12]  881 	clr	c
      0005F2 EB               [12]  882 	mov	a,r3
      0005F3 94 10            [12]  883 	subb	a,#0x10
      0005F5 EC               [12]  884 	mov	a,r4
      0005F6 64 80            [12]  885 	xrl	a,#0x80
      0005F8 94 80            [12]  886 	subb	a,#0x80
      0005FA 92 01            [24]  887 	mov	_main_sloc1_1_0,c
      0005FC 40 11            [24]  888 	jc	00148$
      0005FE C3               [12]  889 	clr	c
      0005FF 74 1F            [12]  890 	mov	a,#0x1f
      000601 9B               [12]  891 	subb	a,r3
      000602 74 80            [12]  892 	mov	a,#(0x00 ^ 0x80)
      000604 8C F0            [24]  893 	mov	b,r4
      000606 63 F0 80         [24]  894 	xrl	b,#0x80
      000609 95 F0            [12]  895 	subb	a,b
      00060B 92 01            [24]  896 	mov	_main_sloc1_1_0,c
      00060D 50 04            [24]  897 	jnc	00149$
      00060F                        898 00148$:
                                    899 ;	assignBit
      00060F C2 01            [12]  900 	clr	_main_sloc1_1_0
      000611 80 02            [24]  901 	sjmp	00150$
      000613                        902 00149$:
                                    903 ;	assignBit
      000613 D2 01            [12]  904 	setb	_main_sloc1_1_0
      000615                        905 00150$:
      000615 A2 01            [12]  906 	mov	c,_main_sloc1_1_0
      000617 E4               [12]  907 	clr	a
      000618 33               [12]  908 	rlc	a
      000619 42 06            [12]  909 	orl	ar6,a
                                    910 ;	main.c:128: (ROW4_START <= addressint && addressint <= ROW4_CLOCK))
      00061B C3               [12]  911 	clr	c
      00061C EB               [12]  912 	mov	a,r3
      00061D 94 50            [12]  913 	subb	a,#0x50
      00061F EC               [12]  914 	mov	a,r4
      000620 64 80            [12]  915 	xrl	a,#0x80
      000622 94 80            [12]  916 	subb	a,#0x80
      000624 92 01            [24]  917 	mov	_main_sloc1_1_0,c
      000626 40 11            [24]  918 	jc	00151$
      000628 C3               [12]  919 	clr	c
      000629 74 58            [12]  920 	mov	a,#0x58
      00062B 9B               [12]  921 	subb	a,r3
      00062C 74 80            [12]  922 	mov	a,#(0x00 ^ 0x80)
      00062E 8C F0            [24]  923 	mov	b,r4
      000630 63 F0 80         [24]  924 	xrl	b,#0x80
      000633 95 F0            [12]  925 	subb	a,b
      000635 92 01            [24]  926 	mov	_main_sloc1_1_0,c
      000637 50 04            [24]  927 	jnc	00152$
      000639                        928 00151$:
                                    929 ;	assignBit
      000639 C2 01            [12]  930 	clr	_main_sloc1_1_0
      00063B 80 02            [24]  931 	sjmp	00153$
      00063D                        932 00152$:
                                    933 ;	assignBit
      00063D D2 01            [12]  934 	setb	_main_sloc1_1_0
      00063F                        935 00153$:
      00063F A2 01            [12]  936 	mov	c,_main_sloc1_1_0
      000641 E4               [12]  937 	clr	a
      000642 33               [12]  938 	rlc	a
      000643 4E               [12]  939 	orl	a,r6
      000644 60 08            [24]  940 	jz	00102$
                                    941 ;	main.c:130: lcdgotoaddress(addressint);
      000646 8B 82            [24]  942 	mov	dpl,r3
      000648 12 02 3C         [24]  943 	lcall	_lcdgotoaddress
      00064B 02 05 41         [24]  944 	ljmp	00138$
      00064E                        945 00102$:
                                    946 ;	main.c:135: printf("Enter valid address\n\r");
      00064E 74 E6            [12]  947 	mov	a,#___str_13
      000650 C0 E0            [24]  948 	push	acc
      000652 74 21            [12]  949 	mov	a,#(___str_13 >> 8)
      000654 C0 E0            [24]  950 	push	acc
      000656 74 80            [12]  951 	mov	a,#0x80
      000658 C0 E0            [24]  952 	push	acc
      00065A 12 15 3C         [24]  953 	lcall	_printf
      00065D 15 81            [12]  954 	dec	sp
      00065F 15 81            [12]  955 	dec	sp
      000661 15 81            [12]  956 	dec	sp
      000663 02 05 41         [24]  957 	ljmp	00138$
      000666                        958 00132$:
                                    959 ;	main.c:139: else if (character[0]=='3')
      000666 BF 33 6F         [24]  960 	cjne	r7,#0x33,00129$
                                    961 ;	main.c:141: puts("Enter row-1,2,3,4 to go to \n\r");
      000669 90 21 FC         [24]  962 	mov	dptr,#___str_14
      00066C 75 F0 80         [24]  963 	mov	b,#0x80
      00066F 12 14 8E         [24]  964 	lcall	_puts
                                    965 ;	main.c:142: getstr(row);
      000672 90 00 4D         [24]  966 	mov	dptr,#_main_row_65536_113
      000675 75 F0 00         [24]  967 	mov	b,#0x00
      000678 12 08 9C         [24]  968 	lcall	_getstr
                                    969 ;	main.c:143: rowint=(int)strtol(row, NULL, 10);
      00067B 90 00 7A         [24]  970 	mov	dptr,#_strtol_PARM_2
      00067E E4               [12]  971 	clr	a
      00067F F0               [24]  972 	movx	@dptr,a
      000680 A3               [24]  973 	inc	dptr
      000681 F0               [24]  974 	movx	@dptr,a
      000682 A3               [24]  975 	inc	dptr
      000683 F0               [24]  976 	movx	@dptr,a
      000684 90 00 7D         [24]  977 	mov	dptr,#_strtol_PARM_3
      000687 74 0A            [12]  978 	mov	a,#0x0a
      000689 F0               [24]  979 	movx	@dptr,a
      00068A E4               [12]  980 	clr	a
      00068B A3               [24]  981 	inc	dptr
      00068C F0               [24]  982 	movx	@dptr,a
      00068D 90 00 4D         [24]  983 	mov	dptr,#_main_row_65536_113
      000690 75 F0 00         [24]  984 	mov	b,#0x00
      000693 12 0C 33         [24]  985 	lcall	_strtol
      000696 AB 82            [24]  986 	mov	r3,dpl
                                    987 ;	main.c:144: puts("Enter column (0-15) to go to \n\r");
      000698 90 22 1A         [24]  988 	mov	dptr,#___str_15
      00069B 75 F0 80         [24]  989 	mov	b,#0x80
      00069E C0 03            [24]  990 	push	ar3
      0006A0 12 14 8E         [24]  991 	lcall	_puts
                                    992 ;	main.c:145: getstr(column);
      0006A3 90 00 52         [24]  993 	mov	dptr,#_main_column_65536_113
      0006A6 75 F0 00         [24]  994 	mov	b,#0x00
      0006A9 12 08 9C         [24]  995 	lcall	_getstr
                                    996 ;	main.c:146: columnint=(int)strtol(column, NULL, 10);
      0006AC 90 00 7A         [24]  997 	mov	dptr,#_strtol_PARM_2
      0006AF E4               [12]  998 	clr	a
      0006B0 F0               [24]  999 	movx	@dptr,a
      0006B1 A3               [24] 1000 	inc	dptr
      0006B2 F0               [24] 1001 	movx	@dptr,a
      0006B3 A3               [24] 1002 	inc	dptr
      0006B4 F0               [24] 1003 	movx	@dptr,a
      0006B5 90 00 7D         [24] 1004 	mov	dptr,#_strtol_PARM_3
      0006B8 74 0A            [12] 1005 	mov	a,#0x0a
      0006BA F0               [24] 1006 	movx	@dptr,a
      0006BB E4               [12] 1007 	clr	a
      0006BC A3               [24] 1008 	inc	dptr
      0006BD F0               [24] 1009 	movx	@dptr,a
      0006BE 90 00 52         [24] 1010 	mov	dptr,#_main_column_65536_113
      0006C1 75 F0 00         [24] 1011 	mov	b,#0x00
      0006C4 12 0C 33         [24] 1012 	lcall	_strtol
      0006C7 AA 82            [24] 1013 	mov	r2,dpl
      0006C9 D0 03            [24] 1014 	pop	ar3
      0006CB 90 00 0A         [24] 1015 	mov	dptr,#_lcdgotoxy_PARM_2
      0006CE EA               [12] 1016 	mov	a,r2
      0006CF F0               [24] 1017 	movx	@dptr,a
                                   1018 ;	main.c:147: lcdgotoxy(rowint, columnint);
      0006D0 8B 82            [24] 1019 	mov	dpl,r3
      0006D2 12 02 C2         [24] 1020 	lcall	_lcdgotoxy
      0006D5 02 05 41         [24] 1021 	ljmp	00138$
      0006D8                       1022 00129$:
                                   1023 ;	main.c:150: else if (character[0]=='4')
      0006D8 BF 34 1E         [24] 1024 	cjne	r7,#0x34,00126$
                                   1025 ;	main.c:152: puts("Enter string to print at cursor \n\r");
      0006DB 90 22 3A         [24] 1026 	mov	dptr,#___str_16
      0006DE 75 F0 80         [24] 1027 	mov	b,#0x80
      0006E1 12 14 8E         [24] 1028 	lcall	_puts
                                   1029 ;	main.c:153: getstr(string);
      0006E4 90 00 1B         [24] 1030 	mov	dptr,#_main_string_65536_113
      0006E7 75 F0 00         [24] 1031 	mov	b,#0x00
      0006EA 12 08 9C         [24] 1032 	lcall	_getstr
                                   1033 ;	main.c:154: lcdputstr(string);
      0006ED 90 00 1B         [24] 1034 	mov	dptr,#_main_string_65536_113
      0006F0 75 F0 00         [24] 1035 	mov	b,#0x00
      0006F3 12 02 54         [24] 1036 	lcall	_lcdputstr
      0006F6 02 05 41         [24] 1037 	ljmp	00138$
      0006F9                       1038 00126$:
                                   1039 ;	main.c:157: else if (character[0]=='5')
      0006F9 BF 35 0F         [24] 1040 	cjne	r7,#0x35,00123$
                                   1041 ;	main.c:159: puts("Clear lcd screen \n\r");
      0006FC 90 22 5D         [24] 1042 	mov	dptr,#___str_17
      0006FF 75 F0 80         [24] 1043 	mov	b,#0x80
      000702 12 14 8E         [24] 1044 	lcall	_puts
                                   1045 ;	main.c:160: lcdclear();
      000705 12 02 AA         [24] 1046 	lcall	_lcdclear
      000708 02 05 41         [24] 1047 	ljmp	00138$
      00070B                       1048 00123$:
                                   1049 ;	main.c:163: else if (character[0]=='6')
      00070B BF 36 15         [24] 1050 	cjne	r7,#0x36,00120$
                                   1051 ;	main.c:165: puts("Restart clock \n\r");
      00070E 90 22 71         [24] 1052 	mov	dptr,#___str_18
      000711 75 F0 80         [24] 1053 	mov	b,#0x80
      000714 12 14 8E         [24] 1054 	lcall	_puts
                                   1055 ;	main.c:166: displayFlag=1;
      000717 90 00 FC         [24] 1056 	mov	dptr,#_displayFlag
      00071A 74 01            [12] 1057 	mov	a,#0x01
      00071C F0               [24] 1058 	movx	@dptr,a
      00071D E4               [12] 1059 	clr	a
      00071E A3               [24] 1060 	inc	dptr
      00071F F0               [24] 1061 	movx	@dptr,a
      000720 02 05 41         [24] 1062 	ljmp	00138$
      000723                       1063 00120$:
                                   1064 ;	main.c:169: else if (character[0]=='7')
      000723 BF 37 13         [24] 1065 	cjne	r7,#0x37,00117$
                                   1066 ;	main.c:171: puts("Stop clock \n\r");
      000726 90 22 82         [24] 1067 	mov	dptr,#___str_19
      000729 75 F0 80         [24] 1068 	mov	b,#0x80
      00072C 12 14 8E         [24] 1069 	lcall	_puts
                                   1070 ;	main.c:172: displayFlag=0;
      00072F 90 00 FC         [24] 1071 	mov	dptr,#_displayFlag
      000732 E4               [12] 1072 	clr	a
      000733 F0               [24] 1073 	movx	@dptr,a
      000734 A3               [24] 1074 	inc	dptr
      000735 F0               [24] 1075 	movx	@dptr,a
      000736 02 05 41         [24] 1076 	ljmp	00138$
      000739                       1077 00117$:
                                   1078 ;	main.c:176: else if (character[0]=='8')
      000739 BF 38 0F         [24] 1079 	cjne	r7,#0x38,00114$
                                   1080 ;	main.c:178: puts("Reset clock \n\r");
      00073C 90 22 90         [24] 1081 	mov	dptr,#___str_20
      00073F 75 F0 80         [24] 1082 	mov	b,#0x80
      000742 12 14 8E         [24] 1083 	lcall	_puts
                                   1084 ;	main.c:179: resetClock();
      000745 12 0B 8E         [24] 1085 	lcall	_resetClock
      000748 02 05 41         [24] 1086 	ljmp	00138$
      00074B                       1087 00114$:
                                   1088 ;	main.c:182: else if (character[0]=='9')
      00074B BF 39 0F         [24] 1089 	cjne	r7,#0x39,00111$
                                   1090 ;	main.c:184: puts("DDRAM hexdump \n\r");
      00074E 90 22 9F         [24] 1091 	mov	dptr,#___str_21
      000751 75 F0 80         [24] 1092 	mov	b,#0x80
      000754 12 14 8E         [24] 1093 	lcall	_puts
                                   1094 ;	main.c:185: hexdump();
      000757 12 03 86         [24] 1095 	lcall	_hexdump
      00075A 02 05 41         [24] 1096 	ljmp	00138$
      00075D                       1097 00111$:
                                   1098 ;	main.c:188: else if (character[0]=='?')
      00075D BF 3F 5D         [24] 1099 	cjne	r7,#0x3f,00108$
                                   1100 ;	main.c:190: puts("Press 1 to write data at the current cursor \r");
      000760 90 20 3C         [24] 1101 	mov	dptr,#___str_0
      000763 75 F0 80         [24] 1102 	mov	b,#0x80
      000766 12 14 8E         [24] 1103 	lcall	_puts
                                   1104 ;	main.c:191: puts("Press 2 to go to address \r");
      000769 90 20 6A         [24] 1105 	mov	dptr,#___str_1
      00076C 75 F0 80         [24] 1106 	mov	b,#0x80
      00076F 12 14 8E         [24] 1107 	lcall	_puts
                                   1108 ;	main.c:192: puts("Press 3 to go to x,y address \r");
      000772 90 20 85         [24] 1109 	mov	dptr,#___str_2
      000775 75 F0 80         [24] 1110 	mov	b,#0x80
      000778 12 14 8E         [24] 1111 	lcall	_puts
                                   1112 ;	main.c:193: puts("Press 4 to write string at current cursor \r");
      00077B 90 20 A4         [24] 1113 	mov	dptr,#___str_3
      00077E 75 F0 80         [24] 1114 	mov	b,#0x80
      000781 12 14 8E         [24] 1115 	lcall	_puts
                                   1116 ;	main.c:194: puts("Press 5 to clear LCD screen \r");
      000784 90 20 D0         [24] 1117 	mov	dptr,#___str_4
      000787 75 F0 80         [24] 1118 	mov	b,#0x80
      00078A 12 14 8E         [24] 1119 	lcall	_puts
                                   1120 ;	main.c:195: puts("Press 6 to restart clock \r");
      00078D 90 20 EE         [24] 1121 	mov	dptr,#___str_5
      000790 75 F0 80         [24] 1122 	mov	b,#0x80
      000793 12 14 8E         [24] 1123 	lcall	_puts
                                   1124 ;	main.c:196: puts("Press 7 to stop clock display \r");
      000796 90 21 09         [24] 1125 	mov	dptr,#___str_6
      000799 75 F0 80         [24] 1126 	mov	b,#0x80
      00079C 12 14 8E         [24] 1127 	lcall	_puts
                                   1128 ;	main.c:197: puts("Press 8 to restart clock \r");
      00079F 90 21 29         [24] 1129 	mov	dptr,#___str_7
      0007A2 75 F0 80         [24] 1130 	mov	b,#0x80
      0007A5 12 14 8E         [24] 1131 	lcall	_puts
                                   1132 ;	main.c:198: puts("Press 9 to for DDRAM hexdump \r");
      0007A8 90 21 44         [24] 1133 	mov	dptr,#___str_8
      0007AB 75 F0 80         [24] 1134 	mov	b,#0x80
      0007AE 12 14 8E         [24] 1135 	lcall	_puts
                                   1136 ;	main.c:199: puts("Press ? to for user menu \r");
      0007B1 90 21 63         [24] 1137 	mov	dptr,#___str_9
      0007B4 75 F0 80         [24] 1138 	mov	b,#0x80
      0007B7 12 14 8E         [24] 1139 	lcall	_puts
      0007BA 02 05 41         [24] 1140 	ljmp	00138$
      0007BD                       1141 00108$:
                                   1142 ;	main.c:202: else if (character[0]=='0')
      0007BD BF 30 0F         [24] 1143 	cjne	r7,#0x30,00105$
                                   1144 ;	main.c:204: puts("Enter character to read at current cursor \n\r");
      0007C0 90 22 B0         [24] 1145 	mov	dptr,#___str_22
      0007C3 75 F0 80         [24] 1146 	mov	b,#0x80
      0007C6 12 14 8E         [24] 1147 	lcall	_puts
                                   1148 ;	main.c:205: lcdgetch();
      0007C9 12 03 5C         [24] 1149 	lcall	_lcdgetch
      0007CC 02 05 41         [24] 1150 	ljmp	00138$
      0007CF                       1151 00105$:
                                   1152 ;	main.c:209: puts("Enter a valid command or press '?' for user menu \n\r");
      0007CF 90 22 DD         [24] 1153 	mov	dptr,#___str_23
      0007D2 75 F0 80         [24] 1154 	mov	b,#0x80
      0007D5 12 14 8E         [24] 1155 	lcall	_puts
                                   1156 ;	main.c:212: }
      0007D8 02 05 41         [24] 1157 	ljmp	00138$
                                   1158 	.area CSEG    (CODE)
                                   1159 	.area CONST   (CODE)
                                   1160 	.area CONST   (CODE)
      00203C                       1161 ___str_0:
      00203C 50 72 65 73 73 20 31  1162 	.ascii "Press 1 to write data at the current cursor "
             20 74 6F 20 77 72 69
             74 65 20 64 61 74 61
             20 61 74 20 74 68 65
             20 63 75 72 72 65 6E
             74 20 63 75 72 73 6F
             72 20
      002068 0D                    1163 	.db 0x0d
      002069 00                    1164 	.db 0x00
                                   1165 	.area CSEG    (CODE)
                                   1166 	.area CONST   (CODE)
      00206A                       1167 ___str_1:
      00206A 50 72 65 73 73 20 32  1168 	.ascii "Press 2 to go to address "
             20 74 6F 20 67 6F 20
             74 6F 20 61 64 64 72
             65 73 73 20
      002083 0D                    1169 	.db 0x0d
      002084 00                    1170 	.db 0x00
                                   1171 	.area CSEG    (CODE)
                                   1172 	.area CONST   (CODE)
      002085                       1173 ___str_2:
      002085 50 72 65 73 73 20 33  1174 	.ascii "Press 3 to go to x,y address "
             20 74 6F 20 67 6F 20
             74 6F 20 78 2C 79 20
             61 64 64 72 65 73 73
             20
      0020A2 0D                    1175 	.db 0x0d
      0020A3 00                    1176 	.db 0x00
                                   1177 	.area CSEG    (CODE)
                                   1178 	.area CONST   (CODE)
      0020A4                       1179 ___str_3:
      0020A4 50 72 65 73 73 20 34  1180 	.ascii "Press 4 to write string at current cursor "
             20 74 6F 20 77 72 69
             74 65 20 73 74 72 69
             6E 67 20 61 74 20 63
             75 72 72 65 6E 74 20
             63 75 72 73 6F 72 20
      0020CE 0D                    1181 	.db 0x0d
      0020CF 00                    1182 	.db 0x00
                                   1183 	.area CSEG    (CODE)
                                   1184 	.area CONST   (CODE)
      0020D0                       1185 ___str_4:
      0020D0 50 72 65 73 73 20 35  1186 	.ascii "Press 5 to clear LCD screen "
             20 74 6F 20 63 6C 65
             61 72 20 4C 43 44 20
             73 63 72 65 65 6E 20
      0020EC 0D                    1187 	.db 0x0d
      0020ED 00                    1188 	.db 0x00
                                   1189 	.area CSEG    (CODE)
                                   1190 	.area CONST   (CODE)
      0020EE                       1191 ___str_5:
      0020EE 50 72 65 73 73 20 36  1192 	.ascii "Press 6 to restart clock "
             20 74 6F 20 72 65 73
             74 61 72 74 20 63 6C
             6F 63 6B 20
      002107 0D                    1193 	.db 0x0d
      002108 00                    1194 	.db 0x00
                                   1195 	.area CSEG    (CODE)
                                   1196 	.area CONST   (CODE)
      002109                       1197 ___str_6:
      002109 50 72 65 73 73 20 37  1198 	.ascii "Press 7 to stop clock display "
             20 74 6F 20 73 74 6F
             70 20 63 6C 6F 63 6B
             20 64 69 73 70 6C 61
             79 20
      002127 0D                    1199 	.db 0x0d
      002128 00                    1200 	.db 0x00
                                   1201 	.area CSEG    (CODE)
                                   1202 	.area CONST   (CODE)
      002129                       1203 ___str_7:
      002129 50 72 65 73 73 20 38  1204 	.ascii "Press 8 to restart clock "
             20 74 6F 20 72 65 73
             74 61 72 74 20 63 6C
             6F 63 6B 20
      002142 0D                    1205 	.db 0x0d
      002143 00                    1206 	.db 0x00
                                   1207 	.area CSEG    (CODE)
                                   1208 	.area CONST   (CODE)
      002144                       1209 ___str_8:
      002144 50 72 65 73 73 20 39  1210 	.ascii "Press 9 to for DDRAM hexdump "
             20 74 6F 20 66 6F 72
             20 44 44 52 41 4D 20
             68 65 78 64 75 6D 70
             20
      002161 0D                    1211 	.db 0x0d
      002162 00                    1212 	.db 0x00
                                   1213 	.area CSEG    (CODE)
                                   1214 	.area CONST   (CODE)
      002163                       1215 ___str_9:
      002163 50 72 65 73 73 20 3F  1216 	.ascii "Press ? to for user menu "
             20 74 6F 20 66 6F 72
             20 75 73 65 72 20 6D
             65 6E 75 20
      00217C 0D                    1217 	.db 0x0d
      00217D 00                    1218 	.db 0x00
                                   1219 	.area CSEG    (CODE)
                                   1220 	.area CONST   (CODE)
      00217E                       1221 ___str_10:
      00217E 3C 3C 45 6E 74 65 72  1222 	.ascii "<<Enter command for operation>>"
             20 63 6F 6D 6D 61 6E
             64 20 66 6F 72 20 6F
             70 65 72 61 74 69 6F
             6E 3E 3E
      00219D 0A                    1223 	.db 0x0a
      00219E 0D                    1224 	.db 0x0d
      00219F 00                    1225 	.db 0x00
                                   1226 	.area CSEG    (CODE)
                                   1227 	.area CONST   (CODE)
      0021A0                       1228 ___str_11:
      0021A0 45 6E 74 65 72 20 63  1229 	.ascii "Enter character to put at current cursor "
             68 61 72 61 63 74 65
             72 20 74 6F 20 70 75
             74 20 61 74 20 63 75
             72 72 65 6E 74 20 63
             75 72 73 6F 72 20
      0021C9 0A                    1230 	.db 0x0a
      0021CA 0D                    1231 	.db 0x0d
      0021CB 00                    1232 	.db 0x00
                                   1233 	.area CSEG    (CODE)
                                   1234 	.area CONST   (CODE)
      0021CC                       1235 ___str_12:
      0021CC 45 6E 74 65 72 20 61  1236 	.ascii "Enter address to go to "
             64 64 72 65 73 73 20
             74 6F 20 67 6F 20 74
             6F 20
      0021E3 0A                    1237 	.db 0x0a
      0021E4 0D                    1238 	.db 0x0d
      0021E5 00                    1239 	.db 0x00
                                   1240 	.area CSEG    (CODE)
                                   1241 	.area CONST   (CODE)
      0021E6                       1242 ___str_13:
      0021E6 45 6E 74 65 72 20 76  1243 	.ascii "Enter valid address"
             61 6C 69 64 20 61 64
             64 72 65 73 73
      0021F9 0A                    1244 	.db 0x0a
      0021FA 0D                    1245 	.db 0x0d
      0021FB 00                    1246 	.db 0x00
                                   1247 	.area CSEG    (CODE)
                                   1248 	.area CONST   (CODE)
      0021FC                       1249 ___str_14:
      0021FC 45 6E 74 65 72 20 72  1250 	.ascii "Enter row-1,2,3,4 to go to "
             6F 77 2D 31 2C 32 2C
             33 2C 34 20 74 6F 20
             67 6F 20 74 6F 20
      002217 0A                    1251 	.db 0x0a
      002218 0D                    1252 	.db 0x0d
      002219 00                    1253 	.db 0x00
                                   1254 	.area CSEG    (CODE)
                                   1255 	.area CONST   (CODE)
      00221A                       1256 ___str_15:
      00221A 45 6E 74 65 72 20 63  1257 	.ascii "Enter column (0-15) to go to "
             6F 6C 75 6D 6E 20 28
             30 2D 31 35 29 20 74
             6F 20 67 6F 20 74 6F
             20
      002237 0A                    1258 	.db 0x0a
      002238 0D                    1259 	.db 0x0d
      002239 00                    1260 	.db 0x00
                                   1261 	.area CSEG    (CODE)
                                   1262 	.area CONST   (CODE)
      00223A                       1263 ___str_16:
      00223A 45 6E 74 65 72 20 73  1264 	.ascii "Enter string to print at cursor "
             74 72 69 6E 67 20 74
             6F 20 70 72 69 6E 74
             20 61 74 20 63 75 72
             73 6F 72 20
      00225A 0A                    1265 	.db 0x0a
      00225B 0D                    1266 	.db 0x0d
      00225C 00                    1267 	.db 0x00
                                   1268 	.area CSEG    (CODE)
                                   1269 	.area CONST   (CODE)
      00225D                       1270 ___str_17:
      00225D 43 6C 65 61 72 20 6C  1271 	.ascii "Clear lcd screen "
             63 64 20 73 63 72 65
             65 6E 20
      00226E 0A                    1272 	.db 0x0a
      00226F 0D                    1273 	.db 0x0d
      002270 00                    1274 	.db 0x00
                                   1275 	.area CSEG    (CODE)
                                   1276 	.area CONST   (CODE)
      002271                       1277 ___str_18:
      002271 52 65 73 74 61 72 74  1278 	.ascii "Restart clock "
             20 63 6C 6F 63 6B 20
      00227F 0A                    1279 	.db 0x0a
      002280 0D                    1280 	.db 0x0d
      002281 00                    1281 	.db 0x00
                                   1282 	.area CSEG    (CODE)
                                   1283 	.area CONST   (CODE)
      002282                       1284 ___str_19:
      002282 53 74 6F 70 20 63 6C  1285 	.ascii "Stop clock "
             6F 63 6B 20
      00228D 0A                    1286 	.db 0x0a
      00228E 0D                    1287 	.db 0x0d
      00228F 00                    1288 	.db 0x00
                                   1289 	.area CSEG    (CODE)
                                   1290 	.area CONST   (CODE)
      002290                       1291 ___str_20:
      002290 52 65 73 65 74 20 63  1292 	.ascii "Reset clock "
             6C 6F 63 6B 20
      00229C 0A                    1293 	.db 0x0a
      00229D 0D                    1294 	.db 0x0d
      00229E 00                    1295 	.db 0x00
                                   1296 	.area CSEG    (CODE)
                                   1297 	.area CONST   (CODE)
      00229F                       1298 ___str_21:
      00229F 44 44 52 41 4D 20 68  1299 	.ascii "DDRAM hexdump "
             65 78 64 75 6D 70 20
      0022AD 0A                    1300 	.db 0x0a
      0022AE 0D                    1301 	.db 0x0d
      0022AF 00                    1302 	.db 0x00
                                   1303 	.area CSEG    (CODE)
                                   1304 	.area CONST   (CODE)
      0022B0                       1305 ___str_22:
      0022B0 45 6E 74 65 72 20 63  1306 	.ascii "Enter character to read at current cursor "
             68 61 72 61 63 74 65
             72 20 74 6F 20 72 65
             61 64 20 61 74 20 63
             75 72 72 65 6E 74 20
             63 75 72 73 6F 72 20
      0022DA 0A                    1307 	.db 0x0a
      0022DB 0D                    1308 	.db 0x0d
      0022DC 00                    1309 	.db 0x00
                                   1310 	.area CSEG    (CODE)
                                   1311 	.area CONST   (CODE)
      0022DD                       1312 ___str_23:
      0022DD 45 6E 74 65 72 20 61  1313 	.ascii "Enter a valid command or press '?' for user menu "
             20 76 61 6C 69 64 20
             63 6F 6D 6D 61 6E 64
             20 6F 72 20 70 72 65
             73 73 20 27 3F 27 20
             66 6F 72 20 75 73 65
             72 20 6D 65 6E 75 20
      00230E 0A                    1314 	.db 0x0a
      00230F 0D                    1315 	.db 0x0d
      002310 00                    1316 	.db 0x00
                                   1317 	.area CSEG    (CODE)
                                   1318 	.area XINIT   (CODE)
      002329                       1319 __xinit__displayFlag:
      002329 01 00                 1320 	.byte #0x01, #0x00	;  1
                                   1321 	.area CABS    (ABS,CODE)
