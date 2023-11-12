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
                                     11 	.globl ___sdcc_heap_size
                                     12 	.globl _main
                                     13 	.globl __sdcc_external_startup
                                     14 	.globl _free
                                     15 	.globl _malloc
                                     16 	.globl _atoi
                                     17 	.globl _printf_tiny
                                     18 	.globl _puts
                                     19 	.globl _printf
                                     20 	.globl _printf_small
                                     21 	.globl _TF1
                                     22 	.globl _TR1
                                     23 	.globl _TF0
                                     24 	.globl _TR0
                                     25 	.globl _IE1
                                     26 	.globl _IT1
                                     27 	.globl _IE0
                                     28 	.globl _IT0
                                     29 	.globl _SM0
                                     30 	.globl _SM1
                                     31 	.globl _SM2
                                     32 	.globl _REN
                                     33 	.globl _TB8
                                     34 	.globl _RB8
                                     35 	.globl _TI
                                     36 	.globl _RI
                                     37 	.globl _CY
                                     38 	.globl _AC
                                     39 	.globl _F0
                                     40 	.globl _RS1
                                     41 	.globl _RS0
                                     42 	.globl _OV
                                     43 	.globl _F1
                                     44 	.globl _P
                                     45 	.globl _RD
                                     46 	.globl _WR
                                     47 	.globl _T1
                                     48 	.globl _T0
                                     49 	.globl _INT1
                                     50 	.globl _INT0
                                     51 	.globl _TXD0
                                     52 	.globl _TXD
                                     53 	.globl _RXD0
                                     54 	.globl _RXD
                                     55 	.globl _P3_7
                                     56 	.globl _P3_6
                                     57 	.globl _P3_5
                                     58 	.globl _P3_4
                                     59 	.globl _P3_3
                                     60 	.globl _P3_2
                                     61 	.globl _P3_1
                                     62 	.globl _P3_0
                                     63 	.globl _P2_7
                                     64 	.globl _P2_6
                                     65 	.globl _P2_5
                                     66 	.globl _P2_4
                                     67 	.globl _P2_3
                                     68 	.globl _P2_2
                                     69 	.globl _P2_1
                                     70 	.globl _P2_0
                                     71 	.globl _P1_7
                                     72 	.globl _P1_6
                                     73 	.globl _P1_5
                                     74 	.globl _P1_4
                                     75 	.globl _P1_3
                                     76 	.globl _P1_2
                                     77 	.globl _P1_1
                                     78 	.globl _P1_0
                                     79 	.globl _P0_7
                                     80 	.globl _P0_6
                                     81 	.globl _P0_5
                                     82 	.globl _P0_4
                                     83 	.globl _P0_3
                                     84 	.globl _P0_2
                                     85 	.globl _P0_1
                                     86 	.globl _P0_0
                                     87 	.globl _PS
                                     88 	.globl _PT1
                                     89 	.globl _PX1
                                     90 	.globl _PT0
                                     91 	.globl _PX0
                                     92 	.globl _EA
                                     93 	.globl _ES
                                     94 	.globl _ET1
                                     95 	.globl _EX1
                                     96 	.globl _ET0
                                     97 	.globl _EX0
                                     98 	.globl _BREG_F7
                                     99 	.globl _BREG_F6
                                    100 	.globl _BREG_F5
                                    101 	.globl _BREG_F4
                                    102 	.globl _BREG_F3
                                    103 	.globl _BREG_F2
                                    104 	.globl _BREG_F1
                                    105 	.globl _BREG_F0
                                    106 	.globl _P5_7
                                    107 	.globl _P5_6
                                    108 	.globl _P5_5
                                    109 	.globl _P5_4
                                    110 	.globl _P5_3
                                    111 	.globl _P5_2
                                    112 	.globl _P5_1
                                    113 	.globl _P5_0
                                    114 	.globl _P4_7
                                    115 	.globl _P4_6
                                    116 	.globl _P4_5
                                    117 	.globl _P4_4
                                    118 	.globl _P4_3
                                    119 	.globl _P4_2
                                    120 	.globl _P4_1
                                    121 	.globl _P4_0
                                    122 	.globl _PX0L
                                    123 	.globl _PT0L
                                    124 	.globl _PX1L
                                    125 	.globl _PT1L
                                    126 	.globl _PSL
                                    127 	.globl _PT2L
                                    128 	.globl _PPCL
                                    129 	.globl _EC
                                    130 	.globl _CCF0
                                    131 	.globl _CCF1
                                    132 	.globl _CCF2
                                    133 	.globl _CCF3
                                    134 	.globl _CCF4
                                    135 	.globl _CR
                                    136 	.globl _CF
                                    137 	.globl _TF2
                                    138 	.globl _EXF2
                                    139 	.globl _RCLK
                                    140 	.globl _TCLK
                                    141 	.globl _EXEN2
                                    142 	.globl _TR2
                                    143 	.globl _C_T2
                                    144 	.globl _CP_RL2
                                    145 	.globl _T2CON_7
                                    146 	.globl _T2CON_6
                                    147 	.globl _T2CON_5
                                    148 	.globl _T2CON_4
                                    149 	.globl _T2CON_3
                                    150 	.globl _T2CON_2
                                    151 	.globl _T2CON_1
                                    152 	.globl _T2CON_0
                                    153 	.globl _PT2
                                    154 	.globl _ET2
                                    155 	.globl _TMOD
                                    156 	.globl _TL1
                                    157 	.globl _TL0
                                    158 	.globl _TH1
                                    159 	.globl _TH0
                                    160 	.globl _TCON
                                    161 	.globl _SP
                                    162 	.globl _SCON
                                    163 	.globl _SBUF0
                                    164 	.globl _SBUF
                                    165 	.globl _PSW
                                    166 	.globl _PCON
                                    167 	.globl _P3
                                    168 	.globl _P2
                                    169 	.globl _P1
                                    170 	.globl _P0
                                    171 	.globl _IP
                                    172 	.globl _IE
                                    173 	.globl _DP0L
                                    174 	.globl _DPL
                                    175 	.globl _DP0H
                                    176 	.globl _DPH
                                    177 	.globl _B
                                    178 	.globl _ACC
                                    179 	.globl _EECON
                                    180 	.globl _KBF
                                    181 	.globl _KBE
                                    182 	.globl _KBLS
                                    183 	.globl _BRL
                                    184 	.globl _BDRCON
                                    185 	.globl _T2MOD
                                    186 	.globl _SPDAT
                                    187 	.globl _SPSTA
                                    188 	.globl _SPCON
                                    189 	.globl _SADEN
                                    190 	.globl _SADDR
                                    191 	.globl _WDTPRG
                                    192 	.globl _WDTRST
                                    193 	.globl _P5
                                    194 	.globl _P4
                                    195 	.globl _IPH1
                                    196 	.globl _IPL1
                                    197 	.globl _IPH0
                                    198 	.globl _IPL0
                                    199 	.globl _IEN1
                                    200 	.globl _IEN0
                                    201 	.globl _CMOD
                                    202 	.globl _CL
                                    203 	.globl _CH
                                    204 	.globl _CCON
                                    205 	.globl _CCAPM4
                                    206 	.globl _CCAPM3
                                    207 	.globl _CCAPM2
                                    208 	.globl _CCAPM1
                                    209 	.globl _CCAPM0
                                    210 	.globl _CCAP4L
                                    211 	.globl _CCAP3L
                                    212 	.globl _CCAP2L
                                    213 	.globl _CCAP1L
                                    214 	.globl _CCAP0L
                                    215 	.globl _CCAP4H
                                    216 	.globl _CCAP3H
                                    217 	.globl _CCAP2H
                                    218 	.globl _CCAP1H
                                    219 	.globl _CCAP0H
                                    220 	.globl _CKCON1
                                    221 	.globl _CKCON0
                                    222 	.globl _CKRL
                                    223 	.globl _AUXR1
                                    224 	.globl _AUXR
                                    225 	.globl _TH2
                                    226 	.globl _TL2
                                    227 	.globl _RCAP2H
                                    228 	.globl _RCAP2L
                                    229 	.globl _T2CON
                                    230 	.globl _hexDump_PARM_3
                                    231 	.globl _hexDump_PARM_2
                                    232 	.globl _heap
                                    233 	.globl ___sdcc_heap
                                    234 	.globl _dataout
                                    235 	.globl _serial_init
                                    236 	.globl _hexDump
                                    237 	.globl _putchar
                                    238 	.globl _getchar
                                    239 	.globl _putstr
                                    240 	.globl _getstr
                                    241 ;--------------------------------------------------------
                                    242 ; special function registers
                                    243 ;--------------------------------------------------------
                                    244 	.area RSEG    (ABS,DATA)
      000000                        245 	.org 0x0000
                           0000C8   246 _T2CON	=	0x00c8
                           0000CA   247 _RCAP2L	=	0x00ca
                           0000CB   248 _RCAP2H	=	0x00cb
                           0000CC   249 _TL2	=	0x00cc
                           0000CD   250 _TH2	=	0x00cd
                           00008E   251 _AUXR	=	0x008e
                           0000A2   252 _AUXR1	=	0x00a2
                           000097   253 _CKRL	=	0x0097
                           00008F   254 _CKCON0	=	0x008f
                           0000AF   255 _CKCON1	=	0x00af
                           0000FA   256 _CCAP0H	=	0x00fa
                           0000FB   257 _CCAP1H	=	0x00fb
                           0000FC   258 _CCAP2H	=	0x00fc
                           0000FD   259 _CCAP3H	=	0x00fd
                           0000FE   260 _CCAP4H	=	0x00fe
                           0000EA   261 _CCAP0L	=	0x00ea
                           0000EB   262 _CCAP1L	=	0x00eb
                           0000EC   263 _CCAP2L	=	0x00ec
                           0000ED   264 _CCAP3L	=	0x00ed
                           0000EE   265 _CCAP4L	=	0x00ee
                           0000DA   266 _CCAPM0	=	0x00da
                           0000DB   267 _CCAPM1	=	0x00db
                           0000DC   268 _CCAPM2	=	0x00dc
                           0000DD   269 _CCAPM3	=	0x00dd
                           0000DE   270 _CCAPM4	=	0x00de
                           0000D8   271 _CCON	=	0x00d8
                           0000F9   272 _CH	=	0x00f9
                           0000E9   273 _CL	=	0x00e9
                           0000D9   274 _CMOD	=	0x00d9
                           0000A8   275 _IEN0	=	0x00a8
                           0000B1   276 _IEN1	=	0x00b1
                           0000B8   277 _IPL0	=	0x00b8
                           0000B7   278 _IPH0	=	0x00b7
                           0000B2   279 _IPL1	=	0x00b2
                           0000B3   280 _IPH1	=	0x00b3
                           0000C0   281 _P4	=	0x00c0
                           0000E8   282 _P5	=	0x00e8
                           0000A6   283 _WDTRST	=	0x00a6
                           0000A7   284 _WDTPRG	=	0x00a7
                           0000A9   285 _SADDR	=	0x00a9
                           0000B9   286 _SADEN	=	0x00b9
                           0000C3   287 _SPCON	=	0x00c3
                           0000C4   288 _SPSTA	=	0x00c4
                           0000C5   289 _SPDAT	=	0x00c5
                           0000C9   290 _T2MOD	=	0x00c9
                           00009B   291 _BDRCON	=	0x009b
                           00009A   292 _BRL	=	0x009a
                           00009C   293 _KBLS	=	0x009c
                           00009D   294 _KBE	=	0x009d
                           00009E   295 _KBF	=	0x009e
                           0000D2   296 _EECON	=	0x00d2
                           0000E0   297 _ACC	=	0x00e0
                           0000F0   298 _B	=	0x00f0
                           000083   299 _DPH	=	0x0083
                           000083   300 _DP0H	=	0x0083
                           000082   301 _DPL	=	0x0082
                           000082   302 _DP0L	=	0x0082
                           0000A8   303 _IE	=	0x00a8
                           0000B8   304 _IP	=	0x00b8
                           000080   305 _P0	=	0x0080
                           000090   306 _P1	=	0x0090
                           0000A0   307 _P2	=	0x00a0
                           0000B0   308 _P3	=	0x00b0
                           000087   309 _PCON	=	0x0087
                           0000D0   310 _PSW	=	0x00d0
                           000099   311 _SBUF	=	0x0099
                           000099   312 _SBUF0	=	0x0099
                           000098   313 _SCON	=	0x0098
                           000081   314 _SP	=	0x0081
                           000088   315 _TCON	=	0x0088
                           00008C   316 _TH0	=	0x008c
                           00008D   317 _TH1	=	0x008d
                           00008A   318 _TL0	=	0x008a
                           00008B   319 _TL1	=	0x008b
                           000089   320 _TMOD	=	0x0089
                                    321 ;--------------------------------------------------------
                                    322 ; special function bits
                                    323 ;--------------------------------------------------------
                                    324 	.area RSEG    (ABS,DATA)
      000000                        325 	.org 0x0000
                           0000AD   326 _ET2	=	0x00ad
                           0000BD   327 _PT2	=	0x00bd
                           0000C8   328 _T2CON_0	=	0x00c8
                           0000C9   329 _T2CON_1	=	0x00c9
                           0000CA   330 _T2CON_2	=	0x00ca
                           0000CB   331 _T2CON_3	=	0x00cb
                           0000CC   332 _T2CON_4	=	0x00cc
                           0000CD   333 _T2CON_5	=	0x00cd
                           0000CE   334 _T2CON_6	=	0x00ce
                           0000CF   335 _T2CON_7	=	0x00cf
                           0000C8   336 _CP_RL2	=	0x00c8
                           0000C9   337 _C_T2	=	0x00c9
                           0000CA   338 _TR2	=	0x00ca
                           0000CB   339 _EXEN2	=	0x00cb
                           0000CC   340 _TCLK	=	0x00cc
                           0000CD   341 _RCLK	=	0x00cd
                           0000CE   342 _EXF2	=	0x00ce
                           0000CF   343 _TF2	=	0x00cf
                           0000DF   344 _CF	=	0x00df
                           0000DE   345 _CR	=	0x00de
                           0000DC   346 _CCF4	=	0x00dc
                           0000DB   347 _CCF3	=	0x00db
                           0000DA   348 _CCF2	=	0x00da
                           0000D9   349 _CCF1	=	0x00d9
                           0000D8   350 _CCF0	=	0x00d8
                           0000AE   351 _EC	=	0x00ae
                           0000BE   352 _PPCL	=	0x00be
                           0000BD   353 _PT2L	=	0x00bd
                           0000BC   354 _PSL	=	0x00bc
                           0000BB   355 _PT1L	=	0x00bb
                           0000BA   356 _PX1L	=	0x00ba
                           0000B9   357 _PT0L	=	0x00b9
                           0000B8   358 _PX0L	=	0x00b8
                           0000C0   359 _P4_0	=	0x00c0
                           0000C1   360 _P4_1	=	0x00c1
                           0000C2   361 _P4_2	=	0x00c2
                           0000C3   362 _P4_3	=	0x00c3
                           0000C4   363 _P4_4	=	0x00c4
                           0000C5   364 _P4_5	=	0x00c5
                           0000C6   365 _P4_6	=	0x00c6
                           0000C7   366 _P4_7	=	0x00c7
                           0000E8   367 _P5_0	=	0x00e8
                           0000E9   368 _P5_1	=	0x00e9
                           0000EA   369 _P5_2	=	0x00ea
                           0000EB   370 _P5_3	=	0x00eb
                           0000EC   371 _P5_4	=	0x00ec
                           0000ED   372 _P5_5	=	0x00ed
                           0000EE   373 _P5_6	=	0x00ee
                           0000EF   374 _P5_7	=	0x00ef
                           0000F0   375 _BREG_F0	=	0x00f0
                           0000F1   376 _BREG_F1	=	0x00f1
                           0000F2   377 _BREG_F2	=	0x00f2
                           0000F3   378 _BREG_F3	=	0x00f3
                           0000F4   379 _BREG_F4	=	0x00f4
                           0000F5   380 _BREG_F5	=	0x00f5
                           0000F6   381 _BREG_F6	=	0x00f6
                           0000F7   382 _BREG_F7	=	0x00f7
                           0000A8   383 _EX0	=	0x00a8
                           0000A9   384 _ET0	=	0x00a9
                           0000AA   385 _EX1	=	0x00aa
                           0000AB   386 _ET1	=	0x00ab
                           0000AC   387 _ES	=	0x00ac
                           0000AF   388 _EA	=	0x00af
                           0000B8   389 _PX0	=	0x00b8
                           0000B9   390 _PT0	=	0x00b9
                           0000BA   391 _PX1	=	0x00ba
                           0000BB   392 _PT1	=	0x00bb
                           0000BC   393 _PS	=	0x00bc
                           000080   394 _P0_0	=	0x0080
                           000081   395 _P0_1	=	0x0081
                           000082   396 _P0_2	=	0x0082
                           000083   397 _P0_3	=	0x0083
                           000084   398 _P0_4	=	0x0084
                           000085   399 _P0_5	=	0x0085
                           000086   400 _P0_6	=	0x0086
                           000087   401 _P0_7	=	0x0087
                           000090   402 _P1_0	=	0x0090
                           000091   403 _P1_1	=	0x0091
                           000092   404 _P1_2	=	0x0092
                           000093   405 _P1_3	=	0x0093
                           000094   406 _P1_4	=	0x0094
                           000095   407 _P1_5	=	0x0095
                           000096   408 _P1_6	=	0x0096
                           000097   409 _P1_7	=	0x0097
                           0000A0   410 _P2_0	=	0x00a0
                           0000A1   411 _P2_1	=	0x00a1
                           0000A2   412 _P2_2	=	0x00a2
                           0000A3   413 _P2_3	=	0x00a3
                           0000A4   414 _P2_4	=	0x00a4
                           0000A5   415 _P2_5	=	0x00a5
                           0000A6   416 _P2_6	=	0x00a6
                           0000A7   417 _P2_7	=	0x00a7
                           0000B0   418 _P3_0	=	0x00b0
                           0000B1   419 _P3_1	=	0x00b1
                           0000B2   420 _P3_2	=	0x00b2
                           0000B3   421 _P3_3	=	0x00b3
                           0000B4   422 _P3_4	=	0x00b4
                           0000B5   423 _P3_5	=	0x00b5
                           0000B6   424 _P3_6	=	0x00b6
                           0000B7   425 _P3_7	=	0x00b7
                           0000B0   426 _RXD	=	0x00b0
                           0000B0   427 _RXD0	=	0x00b0
                           0000B1   428 _TXD	=	0x00b1
                           0000B1   429 _TXD0	=	0x00b1
                           0000B2   430 _INT0	=	0x00b2
                           0000B3   431 _INT1	=	0x00b3
                           0000B4   432 _T0	=	0x00b4
                           0000B5   433 _T1	=	0x00b5
                           0000B6   434 _WR	=	0x00b6
                           0000B7   435 _RD	=	0x00b7
                           0000D0   436 _P	=	0x00d0
                           0000D1   437 _F1	=	0x00d1
                           0000D2   438 _OV	=	0x00d2
                           0000D3   439 _RS0	=	0x00d3
                           0000D4   440 _RS1	=	0x00d4
                           0000D5   441 _F0	=	0x00d5
                           0000D6   442 _AC	=	0x00d6
                           0000D7   443 _CY	=	0x00d7
                           000098   444 _RI	=	0x0098
                           000099   445 _TI	=	0x0099
                           00009A   446 _RB8	=	0x009a
                           00009B   447 _TB8	=	0x009b
                           00009C   448 _REN	=	0x009c
                           00009D   449 _SM2	=	0x009d
                           00009E   450 _SM1	=	0x009e
                           00009F   451 _SM0	=	0x009f
                           000088   452 _IT0	=	0x0088
                           000089   453 _IE0	=	0x0089
                           00008A   454 _IT1	=	0x008a
                           00008B   455 _IE1	=	0x008b
                           00008C   456 _TR0	=	0x008c
                           00008D   457 _TF0	=	0x008d
                           00008E   458 _TR1	=	0x008e
                           00008F   459 _TF1	=	0x008f
                                    460 ;--------------------------------------------------------
                                    461 ; overlayable register banks
                                    462 ;--------------------------------------------------------
                                    463 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        464 	.ds 8
                                    465 ;--------------------------------------------------------
                                    466 ; internal ram data
                                    467 ;--------------------------------------------------------
                                    468 	.area DSEG    (DATA)
      000008                        469 _main_sloc0_1_0:
      000008                        470 	.ds 2
      00000A                        471 _main_sloc1_1_0:
      00000A                        472 	.ds 2
      00000C                        473 _main_sloc2_1_0:
      00000C                        474 	.ds 3
      00000F                        475 _hexDump_sloc0_1_0:
      00000F                        476 	.ds 2
                                    477 ;--------------------------------------------------------
                                    478 ; overlayable items in internal ram
                                    479 ;--------------------------------------------------------
                                    480 ;--------------------------------------------------------
                                    481 ; Stack segment in internal ram
                                    482 ;--------------------------------------------------------
                                    483 	.area	SSEG
      00003B                        484 __start__stack:
      00003B                        485 	.ds	1
                                    486 
                                    487 ;--------------------------------------------------------
                                    488 ; indirectly addressable internal ram data
                                    489 ;--------------------------------------------------------
                                    490 	.area ISEG    (DATA)
                                    491 ;--------------------------------------------------------
                                    492 ; absolute internal ram data
                                    493 ;--------------------------------------------------------
                                    494 	.area IABS    (ABS,DATA)
                                    495 	.area IABS    (ABS,DATA)
                                    496 ;--------------------------------------------------------
                                    497 ; bit data
                                    498 ;--------------------------------------------------------
                                    499 	.area BSEG    (BIT)
                                    500 ;--------------------------------------------------------
                                    501 ; paged external ram data
                                    502 ;--------------------------------------------------------
                                    503 	.area PSEG    (PAG,XDATA)
                                    504 ;--------------------------------------------------------
                                    505 ; external ram data
                                    506 ;--------------------------------------------------------
                                    507 	.area XSEG    (XDATA)
      000001                        508 ___sdcc_heap::
      000001                        509 	.ds 4800
      0012C1                        510 _heap::
      0012C1                        511 	.ds 180
      001375                        512 _main_buffer0_65536_51:
      001375                        513 	.ds 2
      001377                        514 _main_newbuffers_65536_51:
      001377                        515 	.ds 60
      0013B3                        516 _main_size0_65536_51:
      0013B3                        517 	.ds 15
      0013C2                        518 _main_isFlag_65536_51:
      0013C2                        519 	.ds 1
      0013C3                        520 _main_total_size_65536_51:
      0013C3                        521 	.ds 2
      0013C5                        522 _main_character_65536_51:
      0013C5                        523 	.ds 5
      0013CA                        524 _main_buffer0ptr_65536_51:
      0013CA                        525 	.ds 2
      0013CC                        526 _main_buffer0CurrentSize_65536_51:
      0013CC                        527 	.ds 2
      0013CE                        528 _main_newBuffersize_65536_51:
      0013CE                        529 	.ds 10
      0013D8                        530 _main_newBufferscount_65536_51:
      0013D8                        531 	.ds 1
      0013D9                        532 _main_deleteBufferNumber_65536_51:
      0013D9                        533 	.ds 10
      0013E3                        534 _main_numOfCharactersReceived_65536_51:
      0013E3                        535 	.ds 2
      0013E5                        536 _dataout_v_65536_88:
      0013E5                        537 	.ds 1
      0013E6                        538 _hexDump_PARM_2:
      0013E6                        539 	.ds 2
      0013E8                        540 _hexDump_PARM_3:
      0013E8                        541 	.ds 2
      0013EA                        542 _hexDump_addr_65536_92:
      0013EA                        543 	.ds 3
      0013ED                        544 _hexDump_buff_65536_93:
      0013ED                        545 	.ds 17
      0013FE                        546 _putchar_c_65536_98:
      0013FE                        547 	.ds 2
      001400                        548 _putstr_s_65536_102:
      001400                        549 	.ds 3
      001403                        550 _getstr_a_65536_105:
      001403                        551 	.ds 3
                                    552 ;--------------------------------------------------------
                                    553 ; absolute external ram data
                                    554 ;--------------------------------------------------------
                                    555 	.area XABS    (ABS,XDATA)
                                    556 ;--------------------------------------------------------
                                    557 ; external initialized ram data
                                    558 ;--------------------------------------------------------
                                    559 	.area XISEG   (XDATA)
                                    560 	.area HOME    (CODE)
                                    561 	.area GSINIT0 (CODE)
                                    562 	.area GSINIT1 (CODE)
                                    563 	.area GSINIT2 (CODE)
                                    564 	.area GSINIT3 (CODE)
                                    565 	.area GSINIT4 (CODE)
                                    566 	.area GSINIT5 (CODE)
                                    567 	.area GSINIT  (CODE)
                                    568 	.area GSFINAL (CODE)
                                    569 	.area CSEG    (CODE)
                                    570 ;--------------------------------------------------------
                                    571 ; interrupt vector
                                    572 ;--------------------------------------------------------
                                    573 	.area HOME    (CODE)
      000000                        574 __interrupt_vect:
      000000 02 00 06         [24]  575 	ljmp	__sdcc_gsinit_startup
                                    576 ;--------------------------------------------------------
                                    577 ; global & static initialisations
                                    578 ;--------------------------------------------------------
                                    579 	.area HOME    (CODE)
                                    580 	.area GSINIT  (CODE)
                                    581 	.area GSFINAL (CODE)
                                    582 	.area GSINIT  (CODE)
                                    583 	.globl __sdcc_gsinit_startup
                                    584 	.globl __sdcc_program_startup
                                    585 	.globl __start__stack
                                    586 	.globl __mcs51_genXINIT
                                    587 	.globl __mcs51_genXRAMCLEAR
                                    588 	.globl __mcs51_genRAMCLEAR
                                    589 	.area GSFINAL (CODE)
      000065 02 00 03         [24]  590 	ljmp	__sdcc_program_startup
                                    591 ;--------------------------------------------------------
                                    592 ; Home
                                    593 ;--------------------------------------------------------
                                    594 	.area HOME    (CODE)
                                    595 	.area HOME    (CODE)
      000003                        596 __sdcc_program_startup:
      000003 02 00 6F         [24]  597 	ljmp	_main
                                    598 ;	return from main will return to caller
                                    599 ;--------------------------------------------------------
                                    600 ; code
                                    601 ;--------------------------------------------------------
                                    602 	.area CSEG    (CODE)
                                    603 ;------------------------------------------------------------
                                    604 ;Allocation info for local variables in function '_sdcc_external_startup'
                                    605 ;------------------------------------------------------------
                                    606 ;	main.c:39: _sdcc_external_startup(){
                                    607 ;	-----------------------------------------
                                    608 ;	 function _sdcc_external_startup
                                    609 ;	-----------------------------------------
      000068                        610 __sdcc_external_startup:
                           000007   611 	ar7 = 0x07
                           000006   612 	ar6 = 0x06
                           000005   613 	ar5 = 0x05
                           000004   614 	ar4 = 0x04
                           000003   615 	ar3 = 0x03
                           000002   616 	ar2 = 0x02
                           000001   617 	ar1 = 0x01
                           000000   618 	ar0 = 0x00
                                    619 ;	main.c:40: AUXR |=0x0C;                                                                /*enabling internal ram size=1024*/
      000068 43 8E 0C         [24]  620 	orl	_AUXR,#0x0c
                                    621 ;	main.c:41: return 0;
      00006B 90 00 00         [24]  622 	mov	dptr,#0x0000
                                    623 ;	main.c:42: }
      00006E 22               [24]  624 	ret
                                    625 ;------------------------------------------------------------
                                    626 ;Allocation info for local variables in function 'main'
                                    627 ;------------------------------------------------------------
                                    628 ;sloc0                     Allocated with name '_main_sloc0_1_0'
                                    629 ;sloc1                     Allocated with name '_main_sloc1_1_0'
                                    630 ;sloc2                     Allocated with name '_main_sloc2_1_0'
                                    631 ;buffer0                   Allocated with name '_main_buffer0_65536_51'
                                    632 ;buffer1                   Allocated with name '_main_buffer1_65536_51'
                                    633 ;newbuffers                Allocated with name '_main_newbuffers_65536_51'
                                    634 ;size0                     Allocated with name '_main_size0_65536_51'
                                    635 ;isFlag                    Allocated with name '_main_isFlag_65536_51'
                                    636 ;total_size                Allocated with name '_main_total_size_65536_51'
                                    637 ;character                 Allocated with name '_main_character_65536_51'
                                    638 ;buffer0ptr                Allocated with name '_main_buffer0ptr_65536_51'
                                    639 ;buffer0CurrentSize        Allocated with name '_main_buffer0CurrentSize_65536_51'
                                    640 ;newBuffersize             Allocated with name '_main_newBuffersize_65536_51'
                                    641 ;newbuffersizeint          Allocated with name '_main_newbuffersizeint_65536_51'
                                    642 ;newBufferscount           Allocated with name '_main_newBufferscount_65536_51'
                                    643 ;deleteBufferNumber        Allocated with name '_main_deleteBufferNumber_65536_51'
                                    644 ;deleteBufferNumberint     Allocated with name '_main_deleteBufferNumberint_65536_51'
                                    645 ;numOfCharactersReceived   Allocated with name '_main_numOfCharactersReceived_65536_51'
                                    646 ;i                         Allocated with name '_main_i_327680_71'
                                    647 ;i                         Allocated with name '_main_i_327680_74'
                                    648 ;i                         Allocated with name '_main_i_327680_78'
                                    649 ;i                         Allocated with name '_main_i_327680_82'
                                    650 ;i                         Allocated with name '_main_i_327680_85'
                                    651 ;------------------------------------------------------------
                                    652 ;	main.c:68: void main(void)
                                    653 ;	-----------------------------------------
                                    654 ;	 function main
                                    655 ;	-----------------------------------------
      00006F                        656 _main:
                                    657 ;	main.c:70: __xdata uint16_t* buffer0=NULL;                             /*initializing buffer0 and buffer1 pointers*/
      00006F 90 13 75         [24]  658 	mov	dptr,#_main_buffer0_65536_51
      000072 E4               [12]  659 	clr	a
      000073 F0               [24]  660 	movx	@dptr,a
      000074 A3               [24]  661 	inc	dptr
      000075 F0               [24]  662 	movx	@dptr,a
                                    663 ;	main.c:74: uint8_t isFlag=0;
      000076 90 13 C2         [24]  664 	mov	dptr,#_main_isFlag_65536_51
      000079 F0               [24]  665 	movx	@dptr,a
                                    666 ;	main.c:75: int total_size=0;
      00007A 90 13 C3         [24]  667 	mov	dptr,#_main_total_size_65536_51
      00007D F0               [24]  668 	movx	@dptr,a
      00007E A3               [24]  669 	inc	dptr
      00007F F0               [24]  670 	movx	@dptr,a
                                    671 ;	main.c:77: uint16_t buffer0ptr=0;                                      /*points to elements in buffer0*/
      000080 90 13 CA         [24]  672 	mov	dptr,#_main_buffer0ptr_65536_51
      000083 F0               [24]  673 	movx	@dptr,a
      000084 A3               [24]  674 	inc	dptr
      000085 F0               [24]  675 	movx	@dptr,a
                                    676 ;	main.c:78: uint16_t buffer0CurrentSize=0;
      000086 90 13 CC         [24]  677 	mov	dptr,#_main_buffer0CurrentSize_65536_51
      000089 F0               [24]  678 	movx	@dptr,a
      00008A A3               [24]  679 	inc	dptr
      00008B F0               [24]  680 	movx	@dptr,a
                                    681 ;	main.c:81: uint8_t newBufferscount=0;
      00008C 90 13 D8         [24]  682 	mov	dptr,#_main_newBufferscount_65536_51
      00008F F0               [24]  683 	movx	@dptr,a
                                    684 ;	main.c:84: uint16_t numOfCharactersReceived=0;                         /*holds the numbers of characters received*/
      000090 90 13 E3         [24]  685 	mov	dptr,#_main_numOfCharactersReceived_65536_51
      000093 F0               [24]  686 	movx	@dptr,a
      000094 A3               [24]  687 	inc	dptr
      000095 F0               [24]  688 	movx	@dptr,a
                                    689 ;	main.c:86: serial_init();                                              /*initializes serial communication*/
      000096 12 0B 0A         [24]  690 	lcall	_serial_init
                                    691 ;	main.c:88: while(1){
      000099                        692 00162$:
                                    693 ;	main.c:89: if (isFlag==0){
      000099 90 13 C2         [24]  694 	mov	dptr,#_main_isFlag_65536_51
      00009C E0               [24]  695 	movx	a,@dptr
      00009D 60 03            [24]  696 	jz	00326$
      00009F 02 02 5A         [24]  697 	ljmp	00159$
      0000A2                        698 00326$:
                                    699 ;	main.c:98: puts("Enter the size between 48-4800 to allocate buffers\n\r");
      0000A2 90 28 CE         [24]  700 	mov	dptr,#___str_53
      0000A5 75 F0 80         [24]  701 	mov	b,#0x80
      0000A8 12 16 43         [24]  702 	lcall	_puts
                                    703 ;	main.c:99: getstr(size0);
      0000AB 90 13 B3         [24]  704 	mov	dptr,#_main_size0_65536_51
      0000AE 75 F0 00         [24]  705 	mov	b,#0x00
      0000B1 12 0D 7A         [24]  706 	lcall	_getstr
                                    707 ;	main.c:100: DEBUGPORT(0x77);
      0000B4 75 82 77         [24]  708 	mov	dpl,#0x77
      0000B7 12 0A F7         [24]  709 	lcall	_dataout
                                    710 ;	main.c:101: total_size=atoi(size0);                             /*converts the received string size to int*/
      0000BA 90 13 B3         [24]  711 	mov	dptr,#_main_size0_65536_51
      0000BD 75 F0 00         [24]  712 	mov	b,#0x00
      0000C0 12 0F 4A         [24]  713 	lcall	_atoi
      0000C3 AE 82            [24]  714 	mov	r6,dpl
      0000C5 AF 83            [24]  715 	mov	r7,dph
      0000C7 90 13 C3         [24]  716 	mov	dptr,#_main_total_size_65536_51
      0000CA EE               [12]  717 	mov	a,r6
      0000CB F0               [24]  718 	movx	@dptr,a
      0000CC EF               [12]  719 	mov	a,r7
      0000CD A3               [24]  720 	inc	dptr
      0000CE F0               [24]  721 	movx	@dptr,a
                                    722 ;	main.c:102: printf_tiny("size entered= %d \n\r", total_size);
      0000CF C0 07            [24]  723 	push	ar7
      0000D1 C0 06            [24]  724 	push	ar6
      0000D3 C0 06            [24]  725 	push	ar6
      0000D5 C0 07            [24]  726 	push	ar7
      0000D7 74 1F            [12]  727 	mov	a,#___str_8
      0000D9 C0 E0            [24]  728 	push	acc
      0000DB 74 25            [12]  729 	mov	a,#(___str_8 >> 8)
      0000DD C0 E0            [24]  730 	push	acc
      0000DF 12 10 89         [24]  731 	lcall	_printf_tiny
      0000E2 E5 81            [12]  732 	mov	a,sp
      0000E4 24 FC            [12]  733 	add	a,#0xfc
      0000E6 F5 81            [12]  734 	mov	sp,a
      0000E8 D0 06            [24]  735 	pop	ar6
      0000EA D0 07            [24]  736 	pop	ar7
                                    737 ;	main.c:103: if (((total_size>47) && (total_size<4801)) && (total_size%16==0)){                  /*buffer size conditions*/
      0000EC C3               [12]  738 	clr	c
      0000ED 74 2F            [12]  739 	mov	a,#0x2f
      0000EF 9E               [12]  740 	subb	a,r6
      0000F0 74 80            [12]  741 	mov	a,#(0x00 ^ 0x80)
      0000F2 8F F0            [24]  742 	mov	b,r7
      0000F4 63 F0 80         [24]  743 	xrl	b,#0x80
      0000F7 95 F0            [12]  744 	subb	a,b
      0000F9 50 9E            [24]  745 	jnc	00162$
      0000FB C3               [12]  746 	clr	c
      0000FC EE               [12]  747 	mov	a,r6
      0000FD 94 C1            [12]  748 	subb	a,#0xc1
      0000FF EF               [12]  749 	mov	a,r7
      000100 64 80            [12]  750 	xrl	a,#0x80
      000102 94 92            [12]  751 	subb	a,#0x92
      000104 50 93            [24]  752 	jnc	00162$
      000106 90 14 20         [24]  753 	mov	dptr,#__modsint_PARM_2
      000109 74 10            [12]  754 	mov	a,#0x10
      00010B F0               [24]  755 	movx	@dptr,a
      00010C E4               [12]  756 	clr	a
      00010D A3               [24]  757 	inc	dptr
      00010E F0               [24]  758 	movx	@dptr,a
      00010F 8E 82            [24]  759 	mov	dpl,r6
      000111 8F 83            [24]  760 	mov	dph,r7
      000113 C0 07            [24]  761 	push	ar7
      000115 C0 06            [24]  762 	push	ar6
      000117 12 13 57         [24]  763 	lcall	__modsint
      00011A E5 82            [12]  764 	mov	a,dpl
      00011C 85 83 F0         [24]  765 	mov	b,dph
      00011F D0 06            [24]  766 	pop	ar6
      000121 D0 07            [24]  767 	pop	ar7
      000123 45 F0            [12]  768 	orl	a,b
      000125 60 03            [24]  769 	jz	00329$
      000127 02 00 99         [24]  770 	ljmp	00162$
      00012A                        771 00329$:
                                    772 ;	main.c:104: isFlag=1;
      00012A 90 13 C2         [24]  773 	mov	dptr,#_main_isFlag_65536_51
      00012D 74 01            [12]  774 	mov	a,#0x01
      00012F F0               [24]  775 	movx	@dptr,a
                                    776 ;	main.c:105: buffer0= (uint16_t *)(malloc(total_size));                          /*malloc the buffer0 and buffer1 pointers with required size*/
      000130 8E 82            [24]  777 	mov	dpl,r6
      000132 8F 83            [24]  778 	mov	dph,r7
      000134 C0 07            [24]  779 	push	ar7
      000136 C0 06            [24]  780 	push	ar6
      000138 12 11 CE         [24]  781 	lcall	_malloc
      00013B AC 82            [24]  782 	mov	r4,dpl
      00013D AD 83            [24]  783 	mov	r5,dph
      00013F D0 06            [24]  784 	pop	ar6
      000141 D0 07            [24]  785 	pop	ar7
      000143 90 13 75         [24]  786 	mov	dptr,#_main_buffer0_65536_51
      000146 EC               [12]  787 	mov	a,r4
      000147 F0               [24]  788 	movx	@dptr,a
      000148 ED               [12]  789 	mov	a,r5
      000149 A3               [24]  790 	inc	dptr
      00014A F0               [24]  791 	movx	@dptr,a
                                    792 ;	main.c:106: buffer1= (uint16_t *)(malloc(total_size));
      00014B 8E 82            [24]  793 	mov	dpl,r6
      00014D 8F 83            [24]  794 	mov	dph,r7
      00014F C0 07            [24]  795 	push	ar7
      000151 C0 06            [24]  796 	push	ar6
      000153 C0 05            [24]  797 	push	ar5
      000155 C0 04            [24]  798 	push	ar4
      000157 12 11 CE         [24]  799 	lcall	_malloc
      00015A AA 82            [24]  800 	mov	r2,dpl
      00015C AB 83            [24]  801 	mov	r3,dph
      00015E D0 04            [24]  802 	pop	ar4
      000160 D0 05            [24]  803 	pop	ar5
      000162 D0 06            [24]  804 	pop	ar6
      000164 D0 07            [24]  805 	pop	ar7
      000166 8A 08            [24]  806 	mov	_main_sloc0_1_0,r2
      000168 8B 09            [24]  807 	mov	(_main_sloc0_1_0 + 1),r3
                                    808 ;	main.c:107: if ((buffer0!=NULL) && (buffer1!=NULL)){
      00016A EC               [12]  809 	mov	a,r4
      00016B 4D               [12]  810 	orl	a,r5
      00016C 70 03            [24]  811 	jnz	00330$
      00016E 02 02 1C         [24]  812 	ljmp	00105$
      000171                        813 00330$:
      000171 E5 08            [12]  814 	mov	a,_main_sloc0_1_0
      000173 45 09            [12]  815 	orl	a,(_main_sloc0_1_0 + 1)
      000175 70 03            [24]  816 	jnz	00331$
      000177 02 02 1C         [24]  817 	ljmp	00105$
      00017A                        818 00331$:
                                    819 ;	main.c:108: heap[0].buffernumber=0;                                         /*hold the buffer information in heap array structure*/
      00017A 90 12 C1         [24]  820 	mov	dptr,#_heap
      00017D E4               [12]  821 	clr	a
      00017E F0               [24]  822 	movx	@dptr,a
                                    823 ;	main.c:109: heap[0].bufferStartaddress=buffer0;
      00017F 8C 00            [24]  824 	mov	ar0,r4
      000181 8D 01            [24]  825 	mov	ar1,r5
      000183 7B 00            [12]  826 	mov	r3,#0x00
      000185 90 12 C2         [24]  827 	mov	dptr,#(_heap + 0x0001)
      000188 E8               [12]  828 	mov	a,r0
      000189 F0               [24]  829 	movx	@dptr,a
      00018A E9               [12]  830 	mov	a,r1
      00018B A3               [24]  831 	inc	dptr
      00018C F0               [24]  832 	movx	@dptr,a
      00018D EB               [12]  833 	mov	a,r3
      00018E A3               [24]  834 	inc	dptr
      00018F F0               [24]  835 	movx	@dptr,a
                                    836 ;	main.c:110: heap[0].buffersize=total_size;
      000190 8E 0A            [24]  837 	mov	_main_sloc1_1_0,r6
      000192 8F 0B            [24]  838 	mov	(_main_sloc1_1_0 + 1),r7
      000194 90 12 C5         [24]  839 	mov	dptr,#(_heap + 0x0004)
      000197 E5 0A            [12]  840 	mov	a,_main_sloc1_1_0
      000199 F0               [24]  841 	movx	@dptr,a
      00019A E5 0B            [12]  842 	mov	a,(_main_sloc1_1_0 + 1)
      00019C A3               [24]  843 	inc	dptr
      00019D F0               [24]  844 	movx	@dptr,a
                                    845 ;	main.c:111: heap[1].buffernumber=1;
      00019E 90 12 C7         [24]  846 	mov	dptr,#(_heap + 0x0006)
      0001A1 74 01            [12]  847 	mov	a,#0x01
      0001A3 F0               [24]  848 	movx	@dptr,a
                                    849 ;	main.c:112: heap[1].bufferStartaddress=buffer1;
      0001A4 A8 08            [24]  850 	mov	r0,_main_sloc0_1_0
      0001A6 A9 09            [24]  851 	mov	r1,(_main_sloc0_1_0 + 1)
      0001A8 7B 00            [12]  852 	mov	r3,#0x00
      0001AA 90 12 C8         [24]  853 	mov	dptr,#(_heap + 0x0007)
      0001AD E8               [12]  854 	mov	a,r0
      0001AE F0               [24]  855 	movx	@dptr,a
      0001AF E9               [12]  856 	mov	a,r1
      0001B0 A3               [24]  857 	inc	dptr
      0001B1 F0               [24]  858 	movx	@dptr,a
      0001B2 EB               [12]  859 	mov	a,r3
      0001B3 A3               [24]  860 	inc	dptr
      0001B4 F0               [24]  861 	movx	@dptr,a
                                    862 ;	main.c:113: heap[1].buffersize=total_size;
      0001B5 90 12 CB         [24]  863 	mov	dptr,#(_heap + 0x000a)
      0001B8 E5 0A            [12]  864 	mov	a,_main_sloc1_1_0
      0001BA F0               [24]  865 	movx	@dptr,a
      0001BB E5 0B            [12]  866 	mov	a,(_main_sloc1_1_0 + 1)
      0001BD A3               [24]  867 	inc	dptr
      0001BE F0               [24]  868 	movx	@dptr,a
                                    869 ;	main.c:114: printf("Buffer0 at location %p has size %d\n\r", buffer0, total_size);
      0001BF 8C 02            [24]  870 	mov	ar2,r4
      0001C1 8D 03            [24]  871 	mov	ar3,r5
      0001C3 8B 01            [24]  872 	mov	ar1,r3
      0001C5 7B 00            [12]  873 	mov	r3,#0x00
      0001C7 C0 07            [24]  874 	push	ar7
      0001C9 C0 06            [24]  875 	push	ar6
      0001CB C0 06            [24]  876 	push	ar6
      0001CD C0 07            [24]  877 	push	ar7
      0001CF C0 02            [24]  878 	push	ar2
      0001D1 C0 01            [24]  879 	push	ar1
      0001D3 C0 03            [24]  880 	push	ar3
      0001D5 74 33            [12]  881 	mov	a,#___str_9
      0001D7 C0 E0            [24]  882 	push	acc
      0001D9 74 25            [12]  883 	mov	a,#(___str_9 >> 8)
      0001DB C0 E0            [24]  884 	push	acc
      0001DD 74 80            [12]  885 	mov	a,#0x80
      0001DF C0 E0            [24]  886 	push	acc
      0001E1 12 18 A1         [24]  887 	lcall	_printf
      0001E4 E5 81            [12]  888 	mov	a,sp
      0001E6 24 F8            [12]  889 	add	a,#0xf8
      0001E8 F5 81            [12]  890 	mov	sp,a
      0001EA D0 06            [24]  891 	pop	ar6
      0001EC D0 07            [24]  892 	pop	ar7
                                    893 ;	main.c:115: printf("Buffer1 at location %p has size %d\n\r", buffer1, total_size);
      0001EE AA 08            [24]  894 	mov	r2,_main_sloc0_1_0
      0001F0 A9 09            [24]  895 	mov	r1,(_main_sloc0_1_0 + 1)
      0001F2 7B 00            [12]  896 	mov	r3,#0x00
      0001F4 C0 06            [24]  897 	push	ar6
      0001F6 C0 07            [24]  898 	push	ar7
      0001F8 C0 02            [24]  899 	push	ar2
      0001FA C0 01            [24]  900 	push	ar1
      0001FC C0 03            [24]  901 	push	ar3
      0001FE 74 58            [12]  902 	mov	a,#___str_10
      000200 C0 E0            [24]  903 	push	acc
      000202 74 25            [12]  904 	mov	a,#(___str_10 >> 8)
      000204 C0 E0            [24]  905 	push	acc
      000206 74 80            [12]  906 	mov	a,#0x80
      000208 C0 E0            [24]  907 	push	acc
      00020A 12 18 A1         [24]  908 	lcall	_printf
      00020D E5 81            [12]  909 	mov	a,sp
      00020F 24 F8            [12]  910 	add	a,#0xf8
      000211 F5 81            [12]  911 	mov	sp,a
                                    912 ;	main.c:116: DEBUGPORT(0x55);                                                  /*virtual debug port*/
      000213 75 82 55         [24]  913 	mov	dpl,#0x55
      000216 12 0A F7         [24]  914 	lcall	_dataout
      000219 02 00 99         [24]  915 	ljmp	00162$
      00021C                        916 00105$:
                                    917 ;	main.c:120: if (buffer0==NULL || buffer1==NULL){                               /*if buffer is not initialized, free the memory*/
      00021C EC               [12]  918 	mov	a,r4
      00021D 4D               [12]  919 	orl	a,r5
      00021E 60 06            [24]  920 	jz	00101$
      000220 E5 08            [12]  921 	mov	a,_main_sloc0_1_0
      000222 45 09            [12]  922 	orl	a,(_main_sloc0_1_0 + 1)
      000224 70 28            [24]  923 	jnz	00102$
      000226                        924 00101$:
                                    925 ;	main.c:121: free(buffer0);
      000226 7F 00            [12]  926 	mov	r7,#0x00
      000228 8C 82            [24]  927 	mov	dpl,r4
      00022A 8D 83            [24]  928 	mov	dph,r5
      00022C 8F F0            [24]  929 	mov	b,r7
      00022E 12 0D F3         [24]  930 	lcall	_free
                                    931 ;	main.c:122: free(buffer1);
      000231 AE 08            [24]  932 	mov	r6,_main_sloc0_1_0
      000233 AF 09            [24]  933 	mov	r7,(_main_sloc0_1_0 + 1)
      000235 7D 00            [12]  934 	mov	r5,#0x00
      000237 8E 82            [24]  935 	mov	dpl,r6
      000239 8F 83            [24]  936 	mov	dph,r7
      00023B 8D F0            [24]  937 	mov	b,r5
      00023D 12 0D F3         [24]  938 	lcall	_free
                                    939 ;	main.c:123: isFlag=0;
      000240 90 13 C2         [24]  940 	mov	dptr,#_main_isFlag_65536_51
      000243 E4               [12]  941 	clr	a
      000244 F0               [24]  942 	movx	@dptr,a
                                    943 ;	main.c:124: puts("FAILING HERE");
      000245 90 25 7D         [24]  944 	mov	dptr,#___str_11
      000248 75 F0 80         [24]  945 	mov	b,#0x80
      00024B 12 16 43         [24]  946 	lcall	_puts
      00024E                        947 00102$:
                                    948 ;	main.c:126: puts("buffer0 & buffer1 not initialized\n\r");
      00024E 90 25 8A         [24]  949 	mov	dptr,#___str_12
      000251 75 F0 80         [24]  950 	mov	b,#0x80
      000254 12 16 43         [24]  951 	lcall	_puts
      000257 02 00 99         [24]  952 	ljmp	00162$
      00025A                        953 00159$:
                                    954 ;	main.c:131: puts("<<Enter command for operation>>\n\r");
      00025A 90 25 AE         [24]  955 	mov	dptr,#___str_13
      00025D 75 F0 80         [24]  956 	mov	b,#0x80
      000260 12 16 43         [24]  957 	lcall	_puts
                                    958 ;	main.c:132: getstr(character);
      000263 90 13 C5         [24]  959 	mov	dptr,#_main_character_65536_51
      000266 75 F0 00         [24]  960 	mov	b,#0x00
      000269 12 0D 7A         [24]  961 	lcall	_getstr
                                    962 ;	main.c:133: numOfCharactersReceived++;
      00026C 90 13 E3         [24]  963 	mov	dptr,#_main_numOfCharactersReceived_65536_51
      00026F E0               [24]  964 	movx	a,@dptr
      000270 24 01            [12]  965 	add	a,#0x01
      000272 F0               [24]  966 	movx	@dptr,a
      000273 A3               [24]  967 	inc	dptr
      000274 E0               [24]  968 	movx	a,@dptr
      000275 34 00            [12]  969 	addc	a,#0x00
      000277 F0               [24]  970 	movx	@dptr,a
                                    971 ;	main.c:134: if ((character[0] >= 'A') && (character[0] <= 'Z')){                               /*if storage characters are received*/
      000278 90 13 C5         [24]  972 	mov	dptr,#_main_character_65536_51
      00027B E0               [24]  973 	movx	a,@dptr
      00027C FF               [12]  974 	mov	r7,a
      00027D BF 41 00         [24]  975 	cjne	r7,#0x41,00334$
      000280                        976 00334$:
      000280 50 03            [24]  977 	jnc	00335$
      000282 02 03 19         [24]  978 	ljmp	00155$
      000285                        979 00335$:
      000285 EF               [12]  980 	mov	a,r7
      000286 24 A5            [12]  981 	add	a,#0xff - 0x5a
      000288 50 03            [24]  982 	jnc	00336$
      00028A 02 03 19         [24]  983 	ljmp	00155$
      00028D                        984 00336$:
                                    985 ;	main.c:135: puts("storage character entered\n\r");
      00028D 90 25 D0         [24]  986 	mov	dptr,#___str_14
      000290 75 F0 80         [24]  987 	mov	b,#0x80
      000293 12 16 43         [24]  988 	lcall	_puts
                                    989 ;	main.c:136: if (buffer0ptr<total_size){
      000296 90 13 CA         [24]  990 	mov	dptr,#_main_buffer0ptr_65536_51
      000299 E0               [24]  991 	movx	a,@dptr
      00029A FE               [12]  992 	mov	r6,a
      00029B A3               [24]  993 	inc	dptr
      00029C E0               [24]  994 	movx	a,@dptr
      00029D FF               [12]  995 	mov	r7,a
      00029E 90 13 C3         [24]  996 	mov	dptr,#_main_total_size_65536_51
      0002A1 E0               [24]  997 	movx	a,@dptr
      0002A2 FC               [12]  998 	mov	r4,a
      0002A3 A3               [24]  999 	inc	dptr
      0002A4 E0               [24] 1000 	movx	a,@dptr
      0002A5 FD               [12] 1001 	mov	r5,a
      0002A6 8E 02            [24] 1002 	mov	ar2,r6
      0002A8 8F 03            [24] 1003 	mov	ar3,r7
      0002AA C3               [12] 1004 	clr	c
      0002AB EA               [12] 1005 	mov	a,r2
      0002AC 9C               [12] 1006 	subb	a,r4
      0002AD EB               [12] 1007 	mov	a,r3
      0002AE 9D               [12] 1008 	subb	a,r5
      0002AF 50 3C            [24] 1009 	jnc	00113$
                                   1010 ;	main.c:137: buffer0[buffer0ptr]=character[0];                                           /*hold the storage character in buffer0*/
      0002B1 90 13 75         [24] 1011 	mov	dptr,#_main_buffer0_65536_51
      0002B4 E0               [24] 1012 	movx	a,@dptr
      0002B5 FC               [12] 1013 	mov	r4,a
      0002B6 A3               [24] 1014 	inc	dptr
      0002B7 E0               [24] 1015 	movx	a,@dptr
      0002B8 FD               [12] 1016 	mov	r5,a
      0002B9 EE               [12] 1017 	mov	a,r6
      0002BA 2E               [12] 1018 	add	a,r6
      0002BB FA               [12] 1019 	mov	r2,a
      0002BC EF               [12] 1020 	mov	a,r7
      0002BD 33               [12] 1021 	rlc	a
      0002BE FB               [12] 1022 	mov	r3,a
      0002BF EA               [12] 1023 	mov	a,r2
      0002C0 2C               [12] 1024 	add	a,r4
      0002C1 FC               [12] 1025 	mov	r4,a
      0002C2 EB               [12] 1026 	mov	a,r3
      0002C3 3D               [12] 1027 	addc	a,r5
      0002C4 FD               [12] 1028 	mov	r5,a
      0002C5 90 13 C5         [24] 1029 	mov	dptr,#_main_character_65536_51
      0002C8 E0               [24] 1030 	movx	a,@dptr
      0002C9 FB               [12] 1031 	mov	r3,a
      0002CA 7A 00            [12] 1032 	mov	r2,#0x00
      0002CC 8C 82            [24] 1033 	mov	dpl,r4
      0002CE 8D 83            [24] 1034 	mov	dph,r5
      0002D0 EB               [12] 1035 	mov	a,r3
      0002D1 F0               [24] 1036 	movx	@dptr,a
      0002D2 EA               [12] 1037 	mov	a,r2
      0002D3 A3               [24] 1038 	inc	dptr
      0002D4 F0               [24] 1039 	movx	@dptr,a
                                   1040 ;	main.c:138: buffer0ptr++;                                                               /*increment buffer0 pointer and current size*/
      0002D5 90 13 CA         [24] 1041 	mov	dptr,#_main_buffer0ptr_65536_51
      0002D8 04               [12] 1042 	inc	a
      0002D9 2E               [12] 1043 	add	a,r6
      0002DA F0               [24] 1044 	movx	@dptr,a
      0002DB E4               [12] 1045 	clr	a
      0002DC 3F               [12] 1046 	addc	a,r7
      0002DD A3               [24] 1047 	inc	dptr
      0002DE F0               [24] 1048 	movx	@dptr,a
                                   1049 ;	main.c:139: buffer0CurrentSize++;
      0002DF 90 13 CC         [24] 1050 	mov	dptr,#_main_buffer0CurrentSize_65536_51
      0002E2 E0               [24] 1051 	movx	a,@dptr
      0002E3 24 01            [12] 1052 	add	a,#0x01
      0002E5 F0               [24] 1053 	movx	@dptr,a
      0002E6 A3               [24] 1054 	inc	dptr
      0002E7 E0               [24] 1055 	movx	a,@dptr
      0002E8 34 00            [12] 1056 	addc	a,#0x00
      0002EA F0               [24] 1057 	movx	@dptr,a
      0002EB 80 09            [24] 1058 	sjmp	00114$
      0002ED                       1059 00113$:
                                   1060 ;	main.c:142: puts("no space in buffer0");                                                /*storage limit reached in buffer0*/
      0002ED 90 25 EC         [24] 1061 	mov	dptr,#___str_15
      0002F0 75 F0 80         [24] 1062 	mov	b,#0x80
      0002F3 12 16 43         [24] 1063 	lcall	_puts
      0002F6                       1064 00114$:
                                   1065 ;	main.c:144: printf_small("storage character received= %c \n\r", character[0]);
      0002F6 90 13 C5         [24] 1066 	mov	dptr,#_main_character_65536_51
      0002F9 E0               [24] 1067 	movx	a,@dptr
      0002FA FF               [12] 1068 	mov	r7,a
      0002FB 7E 00            [12] 1069 	mov	r6,#0x00
      0002FD C0 07            [24] 1070 	push	ar7
      0002FF C0 06            [24] 1071 	push	ar6
      000301 74 00            [12] 1072 	mov	a,#___str_16
      000303 C0 E0            [24] 1073 	push	acc
      000305 74 26            [12] 1074 	mov	a,#(___str_16 >> 8)
      000307 C0 E0            [24] 1075 	push	acc
      000309 74 80            [12] 1076 	mov	a,#0x80
      00030B C0 E0            [24] 1077 	push	acc
      00030D 12 14 6B         [24] 1078 	lcall	_printf_small
      000310 E5 81            [12] 1079 	mov	a,sp
      000312 24 FB            [12] 1080 	add	a,#0xfb
      000314 F5 81            [12] 1081 	mov	sp,a
      000316 02 00 99         [24] 1082 	ljmp	00162$
      000319                       1083 00155$:
                                   1084 ;	main.c:147: else if(character[0]=='+'){                                    /*condition to create new buffer*/
      000319 90 13 C5         [24] 1085 	mov	dptr,#_main_character_65536_51
      00031C E0               [24] 1086 	movx	a,@dptr
      00031D FF               [12] 1087 	mov	r7,a
      00031E BF 2B 02         [24] 1088 	cjne	r7,#0x2b,00338$
      000321 80 03            [24] 1089 	sjmp	00339$
      000323                       1090 00338$:
      000323 02 04 87         [24] 1091 	ljmp	00152$
      000326                       1092 00339$:
                                   1093 ;	main.c:149: puts("Enter no of bytes between 30 & 300\n\r");
      000326 90 2A 5D         [24] 1094 	mov	dptr,#___str_54
      000329 75 F0 80         [24] 1095 	mov	b,#0x80
      00032C 12 16 43         [24] 1096 	lcall	_puts
                                   1097 ;	main.c:150: getstr(newBuffersize);
      00032F 90 13 CE         [24] 1098 	mov	dptr,#_main_newBuffersize_65536_51
      000332 75 F0 00         [24] 1099 	mov	b,#0x00
      000335 12 0D 7A         [24] 1100 	lcall	_getstr
                                   1101 ;	main.c:151: newbuffersizeint=atoi(newBuffersize);                          /*converts the received buffer size to int*/
      000338 90 13 CE         [24] 1102 	mov	dptr,#_main_newBuffersize_65536_51
      00033B 75 F0 00         [24] 1103 	mov	b,#0x00
      00033E 12 0F 4A         [24] 1104 	lcall	_atoi
      000341 AD 82            [24] 1105 	mov	r5,dpl
      000343 AE 83            [24] 1106 	mov	r6,dph
                                   1107 ;	main.c:152: DEBUGPORT(44);                                                 /*virtual debug port*/
      000345 75 82 2C         [24] 1108 	mov	dpl,#0x2c
      000348 C0 06            [24] 1109 	push	ar6
      00034A C0 05            [24] 1110 	push	ar5
      00034C 12 0A F7         [24] 1111 	lcall	_dataout
      00034F D0 05            [24] 1112 	pop	ar5
      000351 D0 06            [24] 1113 	pop	ar6
                                   1114 ;	main.c:153: if (newbuffersizeint>29 && newbuffersizeint<301){
      000353 C3               [12] 1115 	clr	c
      000354 74 1D            [12] 1116 	mov	a,#0x1d
      000356 9D               [12] 1117 	subb	a,r5
      000357 74 80            [12] 1118 	mov	a,#(0x00 ^ 0x80)
      000359 8E F0            [24] 1119 	mov	b,r6
      00035B 63 F0 80         [24] 1120 	xrl	b,#0x80
      00035E 95 F0            [12] 1121 	subb	a,b
      000360 40 03            [24] 1122 	jc	00340$
      000362 02 04 7B         [24] 1123 	ljmp	00121$
      000365                       1124 00340$:
      000365 C3               [12] 1125 	clr	c
      000366 ED               [12] 1126 	mov	a,r5
      000367 94 2D            [12] 1127 	subb	a,#0x2d
      000369 EE               [12] 1128 	mov	a,r6
      00036A 64 80            [12] 1129 	xrl	a,#0x80
      00036C 94 81            [12] 1130 	subb	a,#0x81
      00036E 40 03            [24] 1131 	jc	00341$
      000370 02 04 7B         [24] 1132 	ljmp	00121$
      000373                       1133 00341$:
                                   1134 ;	main.c:154: if (newBufferscount<50){
      000373 90 13 D8         [24] 1135 	mov	dptr,#_main_newBufferscount_65536_51
      000376 E0               [24] 1136 	movx	a,@dptr
      000377 FC               [12] 1137 	mov	r4,a
      000378 BC 32 00         [24] 1138 	cjne	r4,#0x32,00342$
      00037B                       1139 00342$:
      00037B 40 03            [24] 1140 	jc	00343$
      00037D 02 04 6F         [24] 1141 	ljmp	00118$
      000380                       1142 00343$:
                                   1143 ;	main.c:155: newbuffers[newBufferscount]=malloc(newbuffersizeint);       /*malloc new buffers array with received size */
      000380 EC               [12] 1144 	mov	a,r4
      000381 75 F0 03         [24] 1145 	mov	b,#0x03
      000384 A4               [48] 1146 	mul	ab
      000385 24 77            [12] 1147 	add	a,#_main_newbuffers_65536_51
      000387 F5 0A            [12] 1148 	mov	_main_sloc1_1_0,a
      000389 74 13            [12] 1149 	mov	a,#(_main_newbuffers_65536_51 >> 8)
      00038B 35 F0            [12] 1150 	addc	a,b
      00038D F5 0B            [12] 1151 	mov	(_main_sloc1_1_0 + 1),a
      00038F 8D 82            [24] 1152 	mov	dpl,r5
      000391 8E 83            [24] 1153 	mov	dph,r6
      000393 C0 06            [24] 1154 	push	ar6
      000395 C0 05            [24] 1155 	push	ar5
      000397 C0 04            [24] 1156 	push	ar4
      000399 12 11 CE         [24] 1157 	lcall	_malloc
      00039C A8 82            [24] 1158 	mov	r0,dpl
      00039E A9 83            [24] 1159 	mov	r1,dph
      0003A0 D0 04            [24] 1160 	pop	ar4
      0003A2 D0 05            [24] 1161 	pop	ar5
      0003A4 D0 06            [24] 1162 	pop	ar6
      0003A6 7B 00            [12] 1163 	mov	r3,#0x00
      0003A8 85 0A 82         [24] 1164 	mov	dpl,_main_sloc1_1_0
      0003AB 85 0B 83         [24] 1165 	mov	dph,(_main_sloc1_1_0 + 1)
      0003AE E8               [12] 1166 	mov	a,r0
      0003AF F0               [24] 1167 	movx	@dptr,a
      0003B0 E9               [12] 1168 	mov	a,r1
      0003B1 A3               [24] 1169 	inc	dptr
      0003B2 F0               [24] 1170 	movx	@dptr,a
      0003B3 EB               [12] 1171 	mov	a,r3
      0003B4 A3               [24] 1172 	inc	dptr
      0003B5 F0               [24] 1173 	movx	@dptr,a
                                   1174 ;	main.c:156: if (newbuffers[newBufferscount]!=NULL){
      0003B6 E8               [12] 1175 	mov	a,r0
      0003B7 49               [12] 1176 	orl	a,r1
      0003B8 70 03            [24] 1177 	jnz	00344$
      0003BA 02 00 99         [24] 1178 	ljmp	00162$
      0003BD                       1179 00344$:
                                   1180 ;	main.c:157: printf("new buffer%d at location %p has size %d\n\r",(newBufferscount+2), newbuffers[newBufferscount], newbuffersizeint);
      0003BD 85 0A 82         [24] 1181 	mov	dpl,_main_sloc1_1_0
      0003C0 85 0B 83         [24] 1182 	mov	dph,(_main_sloc1_1_0 + 1)
      0003C3 E0               [24] 1183 	movx	a,@dptr
      0003C4 F5 0C            [12] 1184 	mov	_main_sloc2_1_0,a
      0003C6 A3               [24] 1185 	inc	dptr
      0003C7 E0               [24] 1186 	movx	a,@dptr
      0003C8 F5 0D            [12] 1187 	mov	(_main_sloc2_1_0 + 1),a
      0003CA A3               [24] 1188 	inc	dptr
      0003CB E0               [24] 1189 	movx	a,@dptr
      0003CC F5 0E            [12] 1190 	mov	(_main_sloc2_1_0 + 2),a
      0003CE 8C 00            [24] 1191 	mov	ar0,r4
      0003D0 7B 00            [12] 1192 	mov	r3,#0x00
      0003D2 74 02            [12] 1193 	mov	a,#0x02
      0003D4 28               [12] 1194 	add	a,r0
      0003D5 F8               [12] 1195 	mov	r0,a
      0003D6 E4               [12] 1196 	clr	a
      0003D7 3B               [12] 1197 	addc	a,r3
      0003D8 FB               [12] 1198 	mov	r3,a
      0003D9 C0 06            [24] 1199 	push	ar6
      0003DB C0 05            [24] 1200 	push	ar5
      0003DD C0 04            [24] 1201 	push	ar4
      0003DF C0 03            [24] 1202 	push	ar3
      0003E1 C0 00            [24] 1203 	push	ar0
      0003E3 C0 05            [24] 1204 	push	ar5
      0003E5 C0 06            [24] 1205 	push	ar6
      0003E7 C0 0C            [24] 1206 	push	_main_sloc2_1_0
      0003E9 C0 0D            [24] 1207 	push	(_main_sloc2_1_0 + 1)
      0003EB C0 0E            [24] 1208 	push	(_main_sloc2_1_0 + 2)
      0003ED C0 00            [24] 1209 	push	ar0
      0003EF C0 03            [24] 1210 	push	ar3
      0003F1 74 22            [12] 1211 	mov	a,#___str_19
      0003F3 C0 E0            [24] 1212 	push	acc
      0003F5 74 26            [12] 1213 	mov	a,#(___str_19 >> 8)
      0003F7 C0 E0            [24] 1214 	push	acc
      0003F9 74 80            [12] 1215 	mov	a,#0x80
      0003FB C0 E0            [24] 1216 	push	acc
      0003FD 12 18 A1         [24] 1217 	lcall	_printf
      000400 E5 81            [12] 1218 	mov	a,sp
      000402 24 F6            [12] 1219 	add	a,#0xf6
      000404 F5 81            [12] 1220 	mov	sp,a
      000406 D0 00            [24] 1221 	pop	ar0
      000408 D0 03            [24] 1222 	pop	ar3
                                   1223 ;	main.c:158: heap[newBufferscount+2].buffernumber=newBufferscount+2;
      00040A 90 14 1E         [24] 1224 	mov	dptr,#__mulint_PARM_2
      00040D E8               [12] 1225 	mov	a,r0
      00040E F0               [24] 1226 	movx	@dptr,a
      00040F EB               [12] 1227 	mov	a,r3
      000410 A3               [24] 1228 	inc	dptr
      000411 F0               [24] 1229 	movx	@dptr,a
      000412 90 00 06         [24] 1230 	mov	dptr,#0x0006
      000415 12 13 37         [24] 1231 	lcall	__mulint
      000418 AA 82            [24] 1232 	mov	r2,dpl
      00041A AB 83            [24] 1233 	mov	r3,dph
      00041C D0 04            [24] 1234 	pop	ar4
      00041E D0 05            [24] 1235 	pop	ar5
      000420 D0 06            [24] 1236 	pop	ar6
      000422 EA               [12] 1237 	mov	a,r2
      000423 24 C1            [12] 1238 	add	a,#_heap
      000425 F5 82            [12] 1239 	mov	dpl,a
      000427 EB               [12] 1240 	mov	a,r3
      000428 34 12            [12] 1241 	addc	a,#(_heap >> 8)
      00042A F5 83            [12] 1242 	mov	dph,a
      00042C 8C 01            [24] 1243 	mov	ar1,r4
      00042E 09               [12] 1244 	inc	r1
      00042F 09               [12] 1245 	inc	r1
      000430 E9               [12] 1246 	mov	a,r1
      000431 F0               [24] 1247 	movx	@dptr,a
                                   1248 ;	main.c:159: heap[newBufferscount+2].buffersize=newbuffersizeint;                        /*hold the buffer information in heap array structure*/
      000432 EA               [12] 1249 	mov	a,r2
      000433 24 C1            [12] 1250 	add	a,#_heap
      000435 FA               [12] 1251 	mov	r2,a
      000436 EB               [12] 1252 	mov	a,r3
      000437 34 12            [12] 1253 	addc	a,#(_heap >> 8)
      000439 FB               [12] 1254 	mov	r3,a
      00043A 8A 82            [24] 1255 	mov	dpl,r2
      00043C 8B 83            [24] 1256 	mov	dph,r3
      00043E A3               [24] 1257 	inc	dptr
      00043F A3               [24] 1258 	inc	dptr
      000440 A3               [24] 1259 	inc	dptr
      000441 A3               [24] 1260 	inc	dptr
      000442 ED               [12] 1261 	mov	a,r5
      000443 F0               [24] 1262 	movx	@dptr,a
      000444 EE               [12] 1263 	mov	a,r6
      000445 A3               [24] 1264 	inc	dptr
      000446 F0               [24] 1265 	movx	@dptr,a
                                   1266 ;	main.c:160: heap[newBufferscount+2].bufferStartaddress=newbuffers[newBufferscount];
      000447 0A               [12] 1267 	inc	r2
      000448 BA 00 01         [24] 1268 	cjne	r2,#0x00,00345$
      00044B 0B               [12] 1269 	inc	r3
      00044C                       1270 00345$:
      00044C 85 0A 82         [24] 1271 	mov	dpl,_main_sloc1_1_0
      00044F 85 0B 83         [24] 1272 	mov	dph,(_main_sloc1_1_0 + 1)
      000452 E0               [24] 1273 	movx	a,@dptr
      000453 F9               [12] 1274 	mov	r1,a
      000454 A3               [24] 1275 	inc	dptr
      000455 E0               [24] 1276 	movx	a,@dptr
      000456 FD               [12] 1277 	mov	r5,a
      000457 A3               [24] 1278 	inc	dptr
      000458 E0               [24] 1279 	movx	a,@dptr
      000459 FE               [12] 1280 	mov	r6,a
      00045A 8A 82            [24] 1281 	mov	dpl,r2
      00045C 8B 83            [24] 1282 	mov	dph,r3
      00045E E9               [12] 1283 	mov	a,r1
      00045F F0               [24] 1284 	movx	@dptr,a
      000460 ED               [12] 1285 	mov	a,r5
      000461 A3               [24] 1286 	inc	dptr
      000462 F0               [24] 1287 	movx	@dptr,a
      000463 EE               [12] 1288 	mov	a,r6
      000464 A3               [24] 1289 	inc	dptr
      000465 F0               [24] 1290 	movx	@dptr,a
                                   1291 ;	main.c:161: newBufferscount++;                                    /*increment buffers count*/
      000466 90 13 D8         [24] 1292 	mov	dptr,#_main_newBufferscount_65536_51
      000469 EC               [12] 1293 	mov	a,r4
      00046A 04               [12] 1294 	inc	a
      00046B F0               [24] 1295 	movx	@dptr,a
      00046C 02 00 99         [24] 1296 	ljmp	00162$
      00046F                       1297 00118$:
                                   1298 ;	main.c:165: puts("Allocation limit reached\n\r");
      00046F 90 26 4C         [24] 1299 	mov	dptr,#___str_20
      000472 75 F0 80         [24] 1300 	mov	b,#0x80
      000475 12 16 43         [24] 1301 	lcall	_puts
      000478 02 00 99         [24] 1302 	ljmp	00162$
      00047B                       1303 00121$:
                                   1304 ;	main.c:169: puts("Enter buffer size between 30 & 300\n\r");                         /*requests to enter appropriate size*/
      00047B 90 26 67         [24] 1305 	mov	dptr,#___str_21
      00047E 75 F0 80         [24] 1306 	mov	b,#0x80
      000481 12 16 43         [24] 1307 	lcall	_puts
      000484 02 00 99         [24] 1308 	ljmp	00162$
      000487                       1309 00152$:
                                   1310 ;	main.c:173: else if(character[0]=='-'){                                       /*condition to delete buffer*/
      000487 BF 2D 02         [24] 1311 	cjne	r7,#0x2d,00346$
      00048A 80 03            [24] 1312 	sjmp	00347$
      00048C                       1313 00346$:
      00048C 02 05 6A         [24] 1314 	ljmp	00149$
      00048F                       1315 00347$:
                                   1316 ;	main.c:175: puts("Enter the buffer number to be deleted \n\r");
      00048F 90 2A 97         [24] 1317 	mov	dptr,#___str_55
      000492 75 F0 80         [24] 1318 	mov	b,#0x80
      000495 12 16 43         [24] 1319 	lcall	_puts
                                   1320 ;	main.c:176: getstr(deleteBufferNumber);
      000498 90 13 D9         [24] 1321 	mov	dptr,#_main_deleteBufferNumber_65536_51
      00049B 75 F0 00         [24] 1322 	mov	b,#0x00
      00049E 12 0D 7A         [24] 1323 	lcall	_getstr
                                   1324 ;	main.c:177: deleteBufferNumberint=atoi(deleteBufferNumber);
      0004A1 90 13 D9         [24] 1325 	mov	dptr,#_main_deleteBufferNumber_65536_51
      0004A4 75 F0 00         [24] 1326 	mov	b,#0x00
      0004A7 12 0F 4A         [24] 1327 	lcall	_atoi
      0004AA AD 82            [24] 1328 	mov	r5,dpl
      0004AC AE 83            [24] 1329 	mov	r6,dph
                                   1330 ;	main.c:179: if(deleteBufferNumberint==0){
      0004AE ED               [12] 1331 	mov	a,r5
      0004AF 4E               [12] 1332 	orl	a,r6
      0004B0 70 11            [24] 1333 	jnz	00125$
                                   1334 ;	main.c:180: puts("Cannot delete buffer0 \n\r");
      0004B2 90 26 8C         [24] 1335 	mov	dptr,#___str_24
      0004B5 75 F0 80         [24] 1336 	mov	b,#0x80
      0004B8 C0 06            [24] 1337 	push	ar6
      0004BA C0 05            [24] 1338 	push	ar5
      0004BC 12 16 43         [24] 1339 	lcall	_puts
      0004BF D0 05            [24] 1340 	pop	ar5
      0004C1 D0 06            [24] 1341 	pop	ar6
      0004C3                       1342 00125$:
                                   1343 ;	main.c:183: free(heap[deleteBufferNumberint].bufferStartaddress);           /*free the deleted buffer start address*/
      0004C3 90 14 1E         [24] 1344 	mov	dptr,#__mulint_PARM_2
      0004C6 ED               [12] 1345 	mov	a,r5
      0004C7 F0               [24] 1346 	movx	@dptr,a
      0004C8 EE               [12] 1347 	mov	a,r6
      0004C9 A3               [24] 1348 	inc	dptr
      0004CA F0               [24] 1349 	movx	@dptr,a
      0004CB 90 00 06         [24] 1350 	mov	dptr,#0x0006
      0004CE C0 06            [24] 1351 	push	ar6
      0004D0 C0 05            [24] 1352 	push	ar5
      0004D2 12 13 37         [24] 1353 	lcall	__mulint
      0004D5 AB 82            [24] 1354 	mov	r3,dpl
      0004D7 AC 83            [24] 1355 	mov	r4,dph
      0004D9 EB               [12] 1356 	mov	a,r3
      0004DA 24 C1            [12] 1357 	add	a,#_heap
      0004DC FB               [12] 1358 	mov	r3,a
      0004DD EC               [12] 1359 	mov	a,r4
      0004DE 34 12            [12] 1360 	addc	a,#(_heap >> 8)
      0004E0 FC               [12] 1361 	mov	r4,a
      0004E1 74 01            [12] 1362 	mov	a,#0x01
      0004E3 2B               [12] 1363 	add	a,r3
      0004E4 F5 0C            [12] 1364 	mov	_main_sloc2_1_0,a
      0004E6 E4               [12] 1365 	clr	a
      0004E7 3C               [12] 1366 	addc	a,r4
      0004E8 F5 0D            [12] 1367 	mov	(_main_sloc2_1_0 + 1),a
      0004EA 85 0C 82         [24] 1368 	mov	dpl,_main_sloc2_1_0
      0004ED 85 0D 83         [24] 1369 	mov	dph,(_main_sloc2_1_0 + 1)
      0004F0 E0               [24] 1370 	movx	a,@dptr
      0004F1 F8               [12] 1371 	mov	r0,a
      0004F2 A3               [24] 1372 	inc	dptr
      0004F3 E0               [24] 1373 	movx	a,@dptr
      0004F4 F9               [12] 1374 	mov	r1,a
      0004F5 A3               [24] 1375 	inc	dptr
      0004F6 E0               [24] 1376 	movx	a,@dptr
      0004F7 FA               [12] 1377 	mov	r2,a
      0004F8 88 82            [24] 1378 	mov	dpl,r0
      0004FA 89 83            [24] 1379 	mov	dph,r1
      0004FC 8A F0            [24] 1380 	mov	b,r2
      0004FE C0 04            [24] 1381 	push	ar4
      000500 C0 03            [24] 1382 	push	ar3
      000502 12 0D F3         [24] 1383 	lcall	_free
      000505 D0 03            [24] 1384 	pop	ar3
      000507 D0 04            [24] 1385 	pop	ar4
                                   1386 ;	main.c:184: heap[deleteBufferNumberint].buffersize=0;                       /*clear out information held in heap*/
      000509 74 04            [12] 1387 	mov	a,#0x04
      00050B 2B               [12] 1388 	add	a,r3
      00050C F9               [12] 1389 	mov	r1,a
      00050D E4               [12] 1390 	clr	a
      00050E 3C               [12] 1391 	addc	a,r4
      00050F FA               [12] 1392 	mov	r2,a
      000510 89 82            [24] 1393 	mov	dpl,r1
      000512 8A 83            [24] 1394 	mov	dph,r2
      000514 E4               [12] 1395 	clr	a
      000515 F0               [24] 1396 	movx	@dptr,a
      000516 A3               [24] 1397 	inc	dptr
      000517 F0               [24] 1398 	movx	@dptr,a
                                   1399 ;	main.c:185: heap[deleteBufferNumberint].buffernumber=0;
      000518 8B 82            [24] 1400 	mov	dpl,r3
      00051A 8C 83            [24] 1401 	mov	dph,r4
      00051C F0               [24] 1402 	movx	@dptr,a
                                   1403 ;	main.c:186: heap[deleteBufferNumberint].bufferStartaddress=NULL;
      00051D 85 0C 82         [24] 1404 	mov	dpl,_main_sloc2_1_0
      000520 85 0D 83         [24] 1405 	mov	dph,(_main_sloc2_1_0 + 1)
      000523 F0               [24] 1406 	movx	@dptr,a
      000524 A3               [24] 1407 	inc	dptr
      000525 F0               [24] 1408 	movx	@dptr,a
      000526 A3               [24] 1409 	inc	dptr
      000527 F0               [24] 1410 	movx	@dptr,a
                                   1411 ;	main.c:187: printf("Size of deleted Buffer %d", heap[deleteBufferNumberint].buffersize);
      000528 89 82            [24] 1412 	mov	dpl,r1
      00052A 8A 83            [24] 1413 	mov	dph,r2
      00052C E0               [24] 1414 	movx	a,@dptr
      00052D F9               [12] 1415 	mov	r1,a
      00052E A3               [24] 1416 	inc	dptr
      00052F E0               [24] 1417 	movx	a,@dptr
      000530 FA               [12] 1418 	mov	r2,a
      000531 C0 01            [24] 1419 	push	ar1
      000533 C0 02            [24] 1420 	push	ar2
      000535 74 A5            [12] 1421 	mov	a,#___str_25
      000537 C0 E0            [24] 1422 	push	acc
      000539 74 26            [12] 1423 	mov	a,#(___str_25 >> 8)
      00053B C0 E0            [24] 1424 	push	acc
      00053D 74 80            [12] 1425 	mov	a,#0x80
      00053F C0 E0            [24] 1426 	push	acc
      000541 12 18 A1         [24] 1427 	lcall	_printf
      000544 E5 81            [12] 1428 	mov	a,sp
      000546 24 FB            [12] 1429 	add	a,#0xfb
      000548 F5 81            [12] 1430 	mov	sp,a
      00054A D0 05            [24] 1431 	pop	ar5
      00054C D0 06            [24] 1432 	pop	ar6
                                   1433 ;	main.c:188: printf("Deleted the buffer %d \n\r", deleteBufferNumberint);
      00054E C0 05            [24] 1434 	push	ar5
      000550 C0 06            [24] 1435 	push	ar6
      000552 74 BF            [12] 1436 	mov	a,#___str_26
      000554 C0 E0            [24] 1437 	push	acc
      000556 74 26            [12] 1438 	mov	a,#(___str_26 >> 8)
      000558 C0 E0            [24] 1439 	push	acc
      00055A 74 80            [12] 1440 	mov	a,#0x80
      00055C C0 E0            [24] 1441 	push	acc
      00055E 12 18 A1         [24] 1442 	lcall	_printf
      000561 E5 81            [12] 1443 	mov	a,sp
      000563 24 FB            [12] 1444 	add	a,#0xfb
      000565 F5 81            [12] 1445 	mov	sp,a
      000567 02 00 99         [24] 1446 	ljmp	00162$
      00056A                       1447 00149$:
                                   1448 ;	main.c:191: else if(character[0]=='?'){                                            /*requests to buffer information*/
      00056A BF 3F 02         [24] 1449 	cjne	r7,#0x3f,00349$
      00056D 80 03            [24] 1450 	sjmp	00350$
      00056F                       1451 00349$:
      00056F 02 09 6C         [24] 1452 	ljmp	00146$
      000572                       1453 00350$:
                                   1454 ;	main.c:192: puts("? Symbol received \n\r");
      000572 90 26 D8         [24] 1455 	mov	dptr,#___str_27
      000575 75 F0 80         [24] 1456 	mov	b,#0x80
      000578 12 16 43         [24] 1457 	lcall	_puts
                                   1458 ;	main.c:193: printf("Total number of characters received since last ?= %d \n\r", numOfCharactersReceived);
      00057B 90 13 E3         [24] 1459 	mov	dptr,#_main_numOfCharactersReceived_65536_51
      00057E E0               [24] 1460 	movx	a,@dptr
      00057F C0 E0            [24] 1461 	push	acc
      000581 A3               [24] 1462 	inc	dptr
      000582 E0               [24] 1463 	movx	a,@dptr
      000583 C0 E0            [24] 1464 	push	acc
      000585 74 ED            [12] 1465 	mov	a,#___str_28
      000587 C0 E0            [24] 1466 	push	acc
      000589 74 26            [12] 1467 	mov	a,#(___str_28 >> 8)
      00058B C0 E0            [24] 1468 	push	acc
      00058D 74 80            [12] 1469 	mov	a,#0x80
      00058F C0 E0            [24] 1470 	push	acc
      000591 12 18 A1         [24] 1471 	lcall	_printf
      000594 E5 81            [12] 1472 	mov	a,sp
      000596 24 FB            [12] 1473 	add	a,#0xfb
      000598 F5 81            [12] 1474 	mov	sp,a
                                   1475 ;	main.c:194: printf("--------------------Buffer0 details------------------------\n\r");
      00059A 74 25            [12] 1476 	mov	a,#___str_29
      00059C C0 E0            [24] 1477 	push	acc
      00059E 74 27            [12] 1478 	mov	a,#(___str_29 >> 8)
      0005A0 C0 E0            [24] 1479 	push	acc
      0005A2 74 80            [12] 1480 	mov	a,#0x80
      0005A4 C0 E0            [24] 1481 	push	acc
      0005A6 12 18 A1         [24] 1482 	lcall	_printf
      0005A9 15 81            [12] 1483 	dec	sp
      0005AB 15 81            [12] 1484 	dec	sp
      0005AD 15 81            [12] 1485 	dec	sp
                                   1486 ;	main.c:195: printf("Buffer number= %d \n\r", heap[0].buffernumber);                                     /*prints buffer0 information*/
      0005AF 90 12 C1         [24] 1487 	mov	dptr,#_heap
      0005B2 E0               [24] 1488 	movx	a,@dptr
      0005B3 FE               [12] 1489 	mov	r6,a
      0005B4 7D 00            [12] 1490 	mov	r5,#0x00
      0005B6 C0 06            [24] 1491 	push	ar6
      0005B8 C0 05            [24] 1492 	push	ar5
      0005BA 74 63            [12] 1493 	mov	a,#___str_30
      0005BC C0 E0            [24] 1494 	push	acc
      0005BE 74 27            [12] 1495 	mov	a,#(___str_30 >> 8)
      0005C0 C0 E0            [24] 1496 	push	acc
      0005C2 74 80            [12] 1497 	mov	a,#0x80
      0005C4 C0 E0            [24] 1498 	push	acc
      0005C6 12 18 A1         [24] 1499 	lcall	_printf
      0005C9 E5 81            [12] 1500 	mov	a,sp
      0005CB 24 FB            [12] 1501 	add	a,#0xfb
      0005CD F5 81            [12] 1502 	mov	sp,a
                                   1503 ;	main.c:196: printf("Buffer start address= %p \n\r", heap[0].bufferStartaddress);
      0005CF 90 12 C2         [24] 1504 	mov	dptr,#(_heap + 0x0001)
      0005D2 E0               [24] 1505 	movx	a,@dptr
      0005D3 FC               [12] 1506 	mov	r4,a
      0005D4 A3               [24] 1507 	inc	dptr
      0005D5 E0               [24] 1508 	movx	a,@dptr
      0005D6 FD               [12] 1509 	mov	r5,a
      0005D7 A3               [24] 1510 	inc	dptr
      0005D8 E0               [24] 1511 	movx	a,@dptr
      0005D9 FE               [12] 1512 	mov	r6,a
      0005DA C0 04            [24] 1513 	push	ar4
      0005DC C0 05            [24] 1514 	push	ar5
      0005DE C0 06            [24] 1515 	push	ar6
      0005E0 74 78            [12] 1516 	mov	a,#___str_31
      0005E2 C0 E0            [24] 1517 	push	acc
      0005E4 74 27            [12] 1518 	mov	a,#(___str_31 >> 8)
      0005E6 C0 E0            [24] 1519 	push	acc
      0005E8 74 80            [12] 1520 	mov	a,#0x80
      0005EA C0 E0            [24] 1521 	push	acc
      0005EC 12 18 A1         [24] 1522 	lcall	_printf
      0005EF E5 81            [12] 1523 	mov	a,sp
      0005F1 24 FA            [12] 1524 	add	a,#0xfa
      0005F3 F5 81            [12] 1525 	mov	sp,a
                                   1526 ;	main.c:197: printf("Buffer end address= %p \n\r", heap[0].bufferStartaddress+heap[0].buffersize/2);
      0005F5 90 12 C2         [24] 1527 	mov	dptr,#(_heap + 0x0001)
      0005F8 E0               [24] 1528 	movx	a,@dptr
      0005F9 FC               [12] 1529 	mov	r4,a
      0005FA A3               [24] 1530 	inc	dptr
      0005FB E0               [24] 1531 	movx	a,@dptr
      0005FC FD               [12] 1532 	mov	r5,a
      0005FD A3               [24] 1533 	inc	dptr
      0005FE E0               [24] 1534 	movx	a,@dptr
      0005FF FE               [12] 1535 	mov	r6,a
      000600 90 12 C5         [24] 1536 	mov	dptr,#(_heap + 0x0004)
      000603 E0               [24] 1537 	movx	a,@dptr
      000604 FA               [12] 1538 	mov	r2,a
      000605 A3               [24] 1539 	inc	dptr
      000606 E0               [24] 1540 	movx	a,@dptr
      000607 C3               [12] 1541 	clr	c
      000608 13               [12] 1542 	rrc	a
      000609 CA               [12] 1543 	xch	a,r2
      00060A 13               [12] 1544 	rrc	a
      00060B CA               [12] 1545 	xch	a,r2
      00060C FB               [12] 1546 	mov	r3,a
      00060D EA               [12] 1547 	mov	a,r2
      00060E 2A               [12] 1548 	add	a,r2
      00060F FA               [12] 1549 	mov	r2,a
      000610 EB               [12] 1550 	mov	a,r3
      000611 33               [12] 1551 	rlc	a
      000612 FB               [12] 1552 	mov	r3,a
      000613 EA               [12] 1553 	mov	a,r2
      000614 2C               [12] 1554 	add	a,r4
      000615 FC               [12] 1555 	mov	r4,a
      000616 EB               [12] 1556 	mov	a,r3
      000617 3D               [12] 1557 	addc	a,r5
      000618 FD               [12] 1558 	mov	r5,a
      000619 C0 04            [24] 1559 	push	ar4
      00061B C0 05            [24] 1560 	push	ar5
      00061D C0 06            [24] 1561 	push	ar6
      00061F 74 94            [12] 1562 	mov	a,#___str_32
      000621 C0 E0            [24] 1563 	push	acc
      000623 74 27            [12] 1564 	mov	a,#(___str_32 >> 8)
      000625 C0 E0            [24] 1565 	push	acc
      000627 74 80            [12] 1566 	mov	a,#0x80
      000629 C0 E0            [24] 1567 	push	acc
      00062B 12 18 A1         [24] 1568 	lcall	_printf
      00062E E5 81            [12] 1569 	mov	a,sp
      000630 24 FA            [12] 1570 	add	a,#0xfa
      000632 F5 81            [12] 1571 	mov	sp,a
                                   1572 ;	main.c:198: printf("Buffer size= %d \n\r", heap[0].buffersize);
      000634 90 12 C5         [24] 1573 	mov	dptr,#(_heap + 0x0004)
      000637 E0               [24] 1574 	movx	a,@dptr
      000638 FD               [12] 1575 	mov	r5,a
      000639 A3               [24] 1576 	inc	dptr
      00063A E0               [24] 1577 	movx	a,@dptr
      00063B FE               [12] 1578 	mov	r6,a
      00063C C0 05            [24] 1579 	push	ar5
      00063E C0 06            [24] 1580 	push	ar6
      000640 74 AE            [12] 1581 	mov	a,#___str_33
      000642 C0 E0            [24] 1582 	push	acc
      000644 74 27            [12] 1583 	mov	a,#(___str_33 >> 8)
      000646 C0 E0            [24] 1584 	push	acc
      000648 74 80            [12] 1585 	mov	a,#0x80
      00064A C0 E0            [24] 1586 	push	acc
      00064C 12 18 A1         [24] 1587 	lcall	_printf
      00064F E5 81            [12] 1588 	mov	a,sp
      000651 24 FB            [12] 1589 	add	a,#0xfb
      000653 F5 81            [12] 1590 	mov	sp,a
                                   1591 ;	main.c:199: printf("Number of storage characters in buffer0= %d \n\r", buffer0CurrentSize);
      000655 90 13 CC         [24] 1592 	mov	dptr,#_main_buffer0CurrentSize_65536_51
      000658 E0               [24] 1593 	movx	a,@dptr
      000659 FD               [12] 1594 	mov	r5,a
      00065A A3               [24] 1595 	inc	dptr
      00065B E0               [24] 1596 	movx	a,@dptr
      00065C FE               [12] 1597 	mov	r6,a
      00065D C0 06            [24] 1598 	push	ar6
      00065F C0 05            [24] 1599 	push	ar5
      000661 C0 05            [24] 1600 	push	ar5
      000663 C0 06            [24] 1601 	push	ar6
      000665 74 C1            [12] 1602 	mov	a,#___str_34
      000667 C0 E0            [24] 1603 	push	acc
      000669 74 27            [12] 1604 	mov	a,#(___str_34 >> 8)
      00066B C0 E0            [24] 1605 	push	acc
      00066D 74 80            [12] 1606 	mov	a,#0x80
      00066F C0 E0            [24] 1607 	push	acc
      000671 12 18 A1         [24] 1608 	lcall	_printf
      000674 E5 81            [12] 1609 	mov	a,sp
      000676 24 FB            [12] 1610 	add	a,#0xfb
      000678 F5 81            [12] 1611 	mov	sp,a
      00067A D0 05            [24] 1612 	pop	ar5
      00067C D0 06            [24] 1613 	pop	ar6
                                   1614 ;	main.c:200: printf("Amount of free space in buffer0= %d \n\r", (heap[0].buffersize-buffer0CurrentSize));
      00067E 90 12 C5         [24] 1615 	mov	dptr,#(_heap + 0x0004)
      000681 E0               [24] 1616 	movx	a,@dptr
      000682 FB               [12] 1617 	mov	r3,a
      000683 A3               [24] 1618 	inc	dptr
      000684 E0               [24] 1619 	movx	a,@dptr
      000685 FC               [12] 1620 	mov	r4,a
      000686 EB               [12] 1621 	mov	a,r3
      000687 C3               [12] 1622 	clr	c
      000688 9D               [12] 1623 	subb	a,r5
      000689 FD               [12] 1624 	mov	r5,a
      00068A EC               [12] 1625 	mov	a,r4
      00068B 9E               [12] 1626 	subb	a,r6
      00068C FE               [12] 1627 	mov	r6,a
      00068D C0 05            [24] 1628 	push	ar5
      00068F C0 06            [24] 1629 	push	ar6
      000691 74 F0            [12] 1630 	mov	a,#___str_35
      000693 C0 E0            [24] 1631 	push	acc
      000695 74 27            [12] 1632 	mov	a,#(___str_35 >> 8)
      000697 C0 E0            [24] 1633 	push	acc
      000699 74 80            [12] 1634 	mov	a,#0x80
      00069B C0 E0            [24] 1635 	push	acc
      00069D 12 18 A1         [24] 1636 	lcall	_printf
      0006A0 E5 81            [12] 1637 	mov	a,sp
      0006A2 24 FB            [12] 1638 	add	a,#0xfb
      0006A4 F5 81            [12] 1639 	mov	sp,a
                                   1640 ;	main.c:203: for (int i=1; i<30; i++){
      0006A6 75 0C 01         [24] 1641 	mov	_main_sloc2_1_0,#0x01
      0006A9 75 0D 00         [24] 1642 	mov	(_main_sloc2_1_0 + 1),#0x00
      0006AC                       1643 00165$:
      0006AC C3               [12] 1644 	clr	c
      0006AD E5 0C            [12] 1645 	mov	a,_main_sloc2_1_0
      0006AF 94 1E            [12] 1646 	subb	a,#0x1e
      0006B1 E5 0D            [12] 1647 	mov	a,(_main_sloc2_1_0 + 1)
      0006B3 64 80            [12] 1648 	xrl	a,#0x80
      0006B5 94 80            [12] 1649 	subb	a,#0x80
      0006B7 40 03            [24] 1650 	jc	00351$
      0006B9 02 08 02         [24] 1651 	ljmp	00128$
      0006BC                       1652 00351$:
                                   1653 ;	main.c:204: if(heap[i].buffersize!=0){
      0006BC 90 14 1E         [24] 1654 	mov	dptr,#__mulint_PARM_2
      0006BF E5 0C            [12] 1655 	mov	a,_main_sloc2_1_0
      0006C1 F0               [24] 1656 	movx	@dptr,a
      0006C2 E5 0D            [12] 1657 	mov	a,(_main_sloc2_1_0 + 1)
      0006C4 A3               [24] 1658 	inc	dptr
      0006C5 F0               [24] 1659 	movx	@dptr,a
      0006C6 90 00 06         [24] 1660 	mov	dptr,#0x0006
      0006C9 12 13 37         [24] 1661 	lcall	__mulint
      0006CC AB 82            [24] 1662 	mov	r3,dpl
      0006CE AC 83            [24] 1663 	mov	r4,dph
      0006D0 EB               [12] 1664 	mov	a,r3
      0006D1 24 C1            [12] 1665 	add	a,#_heap
      0006D3 FB               [12] 1666 	mov	r3,a
      0006D4 EC               [12] 1667 	mov	a,r4
      0006D5 34 12            [12] 1668 	addc	a,#(_heap >> 8)
      0006D7 FC               [12] 1669 	mov	r4,a
      0006D8 74 04            [12] 1670 	mov	a,#0x04
      0006DA 2B               [12] 1671 	add	a,r3
      0006DB F9               [12] 1672 	mov	r1,a
      0006DC E4               [12] 1673 	clr	a
      0006DD 3C               [12] 1674 	addc	a,r4
      0006DE FA               [12] 1675 	mov	r2,a
      0006DF 89 82            [24] 1676 	mov	dpl,r1
      0006E1 8A 83            [24] 1677 	mov	dph,r2
      0006E3 E0               [24] 1678 	movx	a,@dptr
      0006E4 F8               [12] 1679 	mov	r0,a
      0006E5 A3               [24] 1680 	inc	dptr
      0006E6 E0               [24] 1681 	movx	a,@dptr
      0006E7 FE               [12] 1682 	mov	r6,a
      0006E8 48               [12] 1683 	orl	a,r0
      0006E9 70 03            [24] 1684 	jnz	00352$
      0006EB 02 07 F7         [24] 1685 	ljmp	00166$
      0006EE                       1686 00352$:
                                   1687 ;	main.c:205: printf("----------------------Buffer %d details ------------------------\n\r", heap[i].buffernumber);
      0006EE 8B 82            [24] 1688 	mov	dpl,r3
      0006F0 8C 83            [24] 1689 	mov	dph,r4
      0006F2 E0               [24] 1690 	movx	a,@dptr
      0006F3 FE               [12] 1691 	mov	r6,a
      0006F4 7D 00            [12] 1692 	mov	r5,#0x00
      0006F6 C0 04            [24] 1693 	push	ar4
      0006F8 C0 03            [24] 1694 	push	ar3
      0006FA C0 02            [24] 1695 	push	ar2
      0006FC C0 01            [24] 1696 	push	ar1
      0006FE C0 06            [24] 1697 	push	ar6
      000700 C0 05            [24] 1698 	push	ar5
      000702 74 17            [12] 1699 	mov	a,#___str_36
      000704 C0 E0            [24] 1700 	push	acc
      000706 74 28            [12] 1701 	mov	a,#(___str_36 >> 8)
      000708 C0 E0            [24] 1702 	push	acc
      00070A 74 80            [12] 1703 	mov	a,#0x80
      00070C C0 E0            [24] 1704 	push	acc
      00070E 12 18 A1         [24] 1705 	lcall	_printf
      000711 E5 81            [12] 1706 	mov	a,sp
      000713 24 FB            [12] 1707 	add	a,#0xfb
      000715 F5 81            [12] 1708 	mov	sp,a
      000717 D0 01            [24] 1709 	pop	ar1
      000719 D0 02            [24] 1710 	pop	ar2
      00071B D0 03            [24] 1711 	pop	ar3
      00071D D0 04            [24] 1712 	pop	ar4
                                   1713 ;	main.c:206: printf("Buffer number= %d \n\r", heap[i].buffernumber);                                     /*prints next buffers information*/
      00071F 8B 82            [24] 1714 	mov	dpl,r3
      000721 8C 83            [24] 1715 	mov	dph,r4
      000723 E0               [24] 1716 	movx	a,@dptr
      000724 FE               [12] 1717 	mov	r6,a
      000725 7D 00            [12] 1718 	mov	r5,#0x00
      000727 C0 04            [24] 1719 	push	ar4
      000729 C0 03            [24] 1720 	push	ar3
      00072B C0 02            [24] 1721 	push	ar2
      00072D C0 01            [24] 1722 	push	ar1
      00072F C0 06            [24] 1723 	push	ar6
      000731 C0 05            [24] 1724 	push	ar5
      000733 74 63            [12] 1725 	mov	a,#___str_30
      000735 C0 E0            [24] 1726 	push	acc
      000737 74 27            [12] 1727 	mov	a,#(___str_30 >> 8)
      000739 C0 E0            [24] 1728 	push	acc
      00073B 74 80            [12] 1729 	mov	a,#0x80
      00073D C0 E0            [24] 1730 	push	acc
      00073F 12 18 A1         [24] 1731 	lcall	_printf
      000742 E5 81            [12] 1732 	mov	a,sp
      000744 24 FB            [12] 1733 	add	a,#0xfb
      000746 F5 81            [12] 1734 	mov	sp,a
      000748 D0 01            [24] 1735 	pop	ar1
      00074A D0 02            [24] 1736 	pop	ar2
      00074C D0 03            [24] 1737 	pop	ar3
      00074E D0 04            [24] 1738 	pop	ar4
                                   1739 ;	main.c:207: printf("Buffer start address= %p \n\r", heap[i].bufferStartaddress);
      000750 0B               [12] 1740 	inc	r3
      000751 BB 00 01         [24] 1741 	cjne	r3,#0x00,00353$
      000754 0C               [12] 1742 	inc	r4
      000755                       1743 00353$:
      000755 8B 82            [24] 1744 	mov	dpl,r3
      000757 8C 83            [24] 1745 	mov	dph,r4
      000759 E0               [24] 1746 	movx	a,@dptr
      00075A F8               [12] 1747 	mov	r0,a
      00075B A3               [24] 1748 	inc	dptr
      00075C E0               [24] 1749 	movx	a,@dptr
      00075D FD               [12] 1750 	mov	r5,a
      00075E A3               [24] 1751 	inc	dptr
      00075F E0               [24] 1752 	movx	a,@dptr
      000760 FE               [12] 1753 	mov	r6,a
      000761 C0 04            [24] 1754 	push	ar4
      000763 C0 03            [24] 1755 	push	ar3
      000765 C0 02            [24] 1756 	push	ar2
      000767 C0 01            [24] 1757 	push	ar1
      000769 C0 00            [24] 1758 	push	ar0
      00076B C0 05            [24] 1759 	push	ar5
      00076D C0 06            [24] 1760 	push	ar6
      00076F 74 78            [12] 1761 	mov	a,#___str_31
      000771 C0 E0            [24] 1762 	push	acc
      000773 74 27            [12] 1763 	mov	a,#(___str_31 >> 8)
      000775 C0 E0            [24] 1764 	push	acc
      000777 74 80            [12] 1765 	mov	a,#0x80
      000779 C0 E0            [24] 1766 	push	acc
      00077B 12 18 A1         [24] 1767 	lcall	_printf
      00077E E5 81            [12] 1768 	mov	a,sp
      000780 24 FA            [12] 1769 	add	a,#0xfa
      000782 F5 81            [12] 1770 	mov	sp,a
      000784 D0 01            [24] 1771 	pop	ar1
      000786 D0 02            [24] 1772 	pop	ar2
                                   1773 ;	main.c:208: printf("Buffer size= %d \n\r", heap[i].buffersize);
      000788 89 82            [24] 1774 	mov	dpl,r1
      00078A 8A 83            [24] 1775 	mov	dph,r2
      00078C E0               [24] 1776 	movx	a,@dptr
      00078D FD               [12] 1777 	mov	r5,a
      00078E A3               [24] 1778 	inc	dptr
      00078F E0               [24] 1779 	movx	a,@dptr
      000790 FE               [12] 1780 	mov	r6,a
      000791 C0 02            [24] 1781 	push	ar2
      000793 C0 01            [24] 1782 	push	ar1
      000795 C0 05            [24] 1783 	push	ar5
      000797 C0 06            [24] 1784 	push	ar6
      000799 74 AE            [12] 1785 	mov	a,#___str_33
      00079B C0 E0            [24] 1786 	push	acc
      00079D 74 27            [12] 1787 	mov	a,#(___str_33 >> 8)
      00079F C0 E0            [24] 1788 	push	acc
      0007A1 74 80            [12] 1789 	mov	a,#0x80
      0007A3 C0 E0            [24] 1790 	push	acc
      0007A5 12 18 A1         [24] 1791 	lcall	_printf
      0007A8 E5 81            [12] 1792 	mov	a,sp
      0007AA 24 FB            [12] 1793 	add	a,#0xfb
      0007AC F5 81            [12] 1794 	mov	sp,a
      0007AE D0 01            [24] 1795 	pop	ar1
      0007B0 D0 02            [24] 1796 	pop	ar2
      0007B2 D0 03            [24] 1797 	pop	ar3
      0007B4 D0 04            [24] 1798 	pop	ar4
                                   1799 ;	main.c:209: printf("Buffer end address= %p \n\r", heap[i].bufferStartaddress+heap[i].buffersize/2);
      0007B6 8B 82            [24] 1800 	mov	dpl,r3
      0007B8 8C 83            [24] 1801 	mov	dph,r4
      0007BA E0               [24] 1802 	movx	a,@dptr
      0007BB FB               [12] 1803 	mov	r3,a
      0007BC A3               [24] 1804 	inc	dptr
      0007BD E0               [24] 1805 	movx	a,@dptr
      0007BE FC               [12] 1806 	mov	r4,a
      0007BF A3               [24] 1807 	inc	dptr
      0007C0 E0               [24] 1808 	movx	a,@dptr
      0007C1 FE               [12] 1809 	mov	r6,a
      0007C2 89 82            [24] 1810 	mov	dpl,r1
      0007C4 8A 83            [24] 1811 	mov	dph,r2
      0007C6 E0               [24] 1812 	movx	a,@dptr
      0007C7 F9               [12] 1813 	mov	r1,a
      0007C8 A3               [24] 1814 	inc	dptr
      0007C9 E0               [24] 1815 	movx	a,@dptr
      0007CA C3               [12] 1816 	clr	c
      0007CB 13               [12] 1817 	rrc	a
      0007CC C9               [12] 1818 	xch	a,r1
      0007CD 13               [12] 1819 	rrc	a
      0007CE C9               [12] 1820 	xch	a,r1
      0007CF FA               [12] 1821 	mov	r2,a
      0007D0 E9               [12] 1822 	mov	a,r1
      0007D1 29               [12] 1823 	add	a,r1
      0007D2 F9               [12] 1824 	mov	r1,a
      0007D3 EA               [12] 1825 	mov	a,r2
      0007D4 33               [12] 1826 	rlc	a
      0007D5 FA               [12] 1827 	mov	r2,a
      0007D6 E9               [12] 1828 	mov	a,r1
      0007D7 2B               [12] 1829 	add	a,r3
      0007D8 FB               [12] 1830 	mov	r3,a
      0007D9 EA               [12] 1831 	mov	a,r2
      0007DA 3C               [12] 1832 	addc	a,r4
      0007DB FC               [12] 1833 	mov	r4,a
      0007DC C0 03            [24] 1834 	push	ar3
      0007DE C0 04            [24] 1835 	push	ar4
      0007E0 C0 06            [24] 1836 	push	ar6
      0007E2 74 94            [12] 1837 	mov	a,#___str_32
      0007E4 C0 E0            [24] 1838 	push	acc
      0007E6 74 27            [12] 1839 	mov	a,#(___str_32 >> 8)
      0007E8 C0 E0            [24] 1840 	push	acc
      0007EA 74 80            [12] 1841 	mov	a,#0x80
      0007EC C0 E0            [24] 1842 	push	acc
      0007EE 12 18 A1         [24] 1843 	lcall	_printf
      0007F1 E5 81            [12] 1844 	mov	a,sp
      0007F3 24 FA            [12] 1845 	add	a,#0xfa
      0007F5 F5 81            [12] 1846 	mov	sp,a
      0007F7                       1847 00166$:
                                   1848 ;	main.c:203: for (int i=1; i<30; i++){
      0007F7 05 0C            [12] 1849 	inc	_main_sloc2_1_0
      0007F9 E4               [12] 1850 	clr	a
      0007FA B5 0C 02         [24] 1851 	cjne	a,_main_sloc2_1_0,00354$
      0007FD 05 0D            [12] 1852 	inc	(_main_sloc2_1_0 + 1)
      0007FF                       1853 00354$:
      0007FF 02 06 AC         [24] 1854 	ljmp	00165$
      000802                       1855 00128$:
                                   1856 ;	main.c:212: puts("**********Storage characters at Buffer0:**********\r");
      000802 90 28 5A         [24] 1857 	mov	dptr,#___str_37
      000805 75 F0 80         [24] 1858 	mov	b,#0x80
      000808 12 16 43         [24] 1859 	lcall	_puts
                                   1860 ;	main.c:213: for (int i=0; i< buffer0CurrentSize; i++){                                  /*prints storage characters in buffer0*/
      00080B 90 13 CC         [24] 1861 	mov	dptr,#_main_buffer0CurrentSize_65536_51
      00080E E0               [24] 1862 	movx	a,@dptr
      00080F FD               [12] 1863 	mov	r5,a
      000810 A3               [24] 1864 	inc	dptr
      000811 E0               [24] 1865 	movx	a,@dptr
      000812 FE               [12] 1866 	mov	r6,a
      000813 7B 00            [12] 1867 	mov	r3,#0x00
      000815 7C 00            [12] 1868 	mov	r4,#0x00
      000817                       1869 00168$:
      000817 8B 01            [24] 1870 	mov	ar1,r3
      000819 8C 02            [24] 1871 	mov	ar2,r4
      00081B C3               [12] 1872 	clr	c
      00081C E9               [12] 1873 	mov	a,r1
      00081D 9D               [12] 1874 	subb	a,r5
      00081E EA               [12] 1875 	mov	a,r2
      00081F 9E               [12] 1876 	subb	a,r6
      000820 40 03            [24] 1877 	jc	00355$
      000822 02 09 0A         [24] 1878 	ljmp	00133$
      000825                       1879 00355$:
                                   1880 ;	main.c:214: if(i%15==0 && i!=0){                                                    /*prints 32 ASCII characters per line*/
      000825 90 14 20         [24] 1881 	mov	dptr,#__modsint_PARM_2
      000828 74 0F            [12] 1882 	mov	a,#0x0f
      00082A F0               [24] 1883 	movx	@dptr,a
      00082B E4               [12] 1884 	clr	a
      00082C A3               [24] 1885 	inc	dptr
      00082D F0               [24] 1886 	movx	@dptr,a
      00082E 8B 82            [24] 1887 	mov	dpl,r3
      000830 8C 83            [24] 1888 	mov	dph,r4
      000832 C0 06            [24] 1889 	push	ar6
      000834 C0 05            [24] 1890 	push	ar5
      000836 C0 04            [24] 1891 	push	ar4
      000838 C0 03            [24] 1892 	push	ar3
      00083A 12 13 57         [24] 1893 	lcall	__modsint
      00083D E5 82            [12] 1894 	mov	a,dpl
      00083F 85 83 F0         [24] 1895 	mov	b,dph
      000842 D0 03            [24] 1896 	pop	ar3
      000844 D0 04            [24] 1897 	pop	ar4
      000846 D0 05            [24] 1898 	pop	ar5
      000848 D0 06            [24] 1899 	pop	ar6
      00084A 45 F0            [12] 1900 	orl	a,b
      00084C 70 5D            [24] 1901 	jnz	00130$
      00084E EB               [12] 1902 	mov	a,r3
      00084F 4C               [12] 1903 	orl	a,r4
      000850 60 59            [24] 1904 	jz	00130$
                                   1905 ;	main.c:215: printf("%c\n\r", heap[0].bufferStartaddress[i]);
      000852 C0 05            [24] 1906 	push	ar5
      000854 C0 06            [24] 1907 	push	ar6
      000856 90 12 C2         [24] 1908 	mov	dptr,#(_heap + 0x0001)
      000859 E0               [24] 1909 	movx	a,@dptr
      00085A F8               [12] 1910 	mov	r0,a
      00085B A3               [24] 1911 	inc	dptr
      00085C E0               [24] 1912 	movx	a,@dptr
      00085D F9               [12] 1913 	mov	r1,a
      00085E A3               [24] 1914 	inc	dptr
      00085F E0               [24] 1915 	movx	a,@dptr
      000860 FA               [12] 1916 	mov	r2,a
      000861 EB               [12] 1917 	mov	a,r3
      000862 2B               [12] 1918 	add	a,r3
      000863 FD               [12] 1919 	mov	r5,a
      000864 EC               [12] 1920 	mov	a,r4
      000865 33               [12] 1921 	rlc	a
      000866 FE               [12] 1922 	mov	r6,a
      000867 ED               [12] 1923 	mov	a,r5
      000868 28               [12] 1924 	add	a,r0
      000869 F8               [12] 1925 	mov	r0,a
      00086A EE               [12] 1926 	mov	a,r6
      00086B 39               [12] 1927 	addc	a,r1
      00086C F9               [12] 1928 	mov	r1,a
      00086D 88 82            [24] 1929 	mov	dpl,r0
      00086F 89 83            [24] 1930 	mov	dph,r1
      000871 8A F0            [24] 1931 	mov	b,r2
      000873 12 22 CD         [24] 1932 	lcall	__gptrget
      000876 F8               [12] 1933 	mov	r0,a
      000877 A3               [24] 1934 	inc	dptr
      000878 12 22 CD         [24] 1935 	lcall	__gptrget
      00087B F9               [12] 1936 	mov	r1,a
      00087C C0 06            [24] 1937 	push	ar6
      00087E C0 05            [24] 1938 	push	ar5
      000880 C0 04            [24] 1939 	push	ar4
      000882 C0 03            [24] 1940 	push	ar3
      000884 C0 00            [24] 1941 	push	ar0
      000886 C0 01            [24] 1942 	push	ar1
      000888 74 8E            [12] 1943 	mov	a,#___str_38
      00088A C0 E0            [24] 1944 	push	acc
      00088C 74 28            [12] 1945 	mov	a,#(___str_38 >> 8)
      00088E C0 E0            [24] 1946 	push	acc
      000890 74 80            [12] 1947 	mov	a,#0x80
      000892 C0 E0            [24] 1948 	push	acc
      000894 12 18 A1         [24] 1949 	lcall	_printf
      000897 E5 81            [12] 1950 	mov	a,sp
      000899 24 FB            [12] 1951 	add	a,#0xfb
      00089B F5 81            [12] 1952 	mov	sp,a
      00089D D0 03            [24] 1953 	pop	ar3
      00089F D0 04            [24] 1954 	pop	ar4
      0008A1 D0 05            [24] 1955 	pop	ar5
      0008A3 D0 06            [24] 1956 	pop	ar6
      0008A5 D0 06            [24] 1957 	pop	ar6
      0008A7 D0 05            [24] 1958 	pop	ar5
      0008A9 80 57            [24] 1959 	sjmp	00169$
      0008AB                       1960 00130$:
                                   1961 ;	main.c:218: printf("%c ", heap[0].bufferStartaddress[i]);
      0008AB C0 05            [24] 1962 	push	ar5
      0008AD C0 06            [24] 1963 	push	ar6
      0008AF 90 12 C2         [24] 1964 	mov	dptr,#(_heap + 0x0001)
      0008B2 E0               [24] 1965 	movx	a,@dptr
      0008B3 F8               [12] 1966 	mov	r0,a
      0008B4 A3               [24] 1967 	inc	dptr
      0008B5 E0               [24] 1968 	movx	a,@dptr
      0008B6 F9               [12] 1969 	mov	r1,a
      0008B7 A3               [24] 1970 	inc	dptr
      0008B8 E0               [24] 1971 	movx	a,@dptr
      0008B9 FA               [12] 1972 	mov	r2,a
      0008BA EB               [12] 1973 	mov	a,r3
      0008BB 2B               [12] 1974 	add	a,r3
      0008BC FD               [12] 1975 	mov	r5,a
      0008BD EC               [12] 1976 	mov	a,r4
      0008BE 33               [12] 1977 	rlc	a
      0008BF FE               [12] 1978 	mov	r6,a
      0008C0 ED               [12] 1979 	mov	a,r5
      0008C1 28               [12] 1980 	add	a,r0
      0008C2 F8               [12] 1981 	mov	r0,a
      0008C3 EE               [12] 1982 	mov	a,r6
      0008C4 39               [12] 1983 	addc	a,r1
      0008C5 F9               [12] 1984 	mov	r1,a
      0008C6 88 82            [24] 1985 	mov	dpl,r0
      0008C8 89 83            [24] 1986 	mov	dph,r1
      0008CA 8A F0            [24] 1987 	mov	b,r2
      0008CC 12 22 CD         [24] 1988 	lcall	__gptrget
      0008CF F8               [12] 1989 	mov	r0,a
      0008D0 A3               [24] 1990 	inc	dptr
      0008D1 12 22 CD         [24] 1991 	lcall	__gptrget
      0008D4 F9               [12] 1992 	mov	r1,a
      0008D5 C0 06            [24] 1993 	push	ar6
      0008D7 C0 05            [24] 1994 	push	ar5
      0008D9 C0 04            [24] 1995 	push	ar4
      0008DB C0 03            [24] 1996 	push	ar3
      0008DD C0 00            [24] 1997 	push	ar0
      0008DF C0 01            [24] 1998 	push	ar1
      0008E1 74 93            [12] 1999 	mov	a,#___str_39
      0008E3 C0 E0            [24] 2000 	push	acc
      0008E5 74 28            [12] 2001 	mov	a,#(___str_39 >> 8)
      0008E7 C0 E0            [24] 2002 	push	acc
      0008E9 74 80            [12] 2003 	mov	a,#0x80
      0008EB C0 E0            [24] 2004 	push	acc
      0008ED 12 18 A1         [24] 2005 	lcall	_printf
      0008F0 E5 81            [12] 2006 	mov	a,sp
      0008F2 24 FB            [12] 2007 	add	a,#0xfb
      0008F4 F5 81            [12] 2008 	mov	sp,a
      0008F6 D0 03            [24] 2009 	pop	ar3
      0008F8 D0 04            [24] 2010 	pop	ar4
      0008FA D0 05            [24] 2011 	pop	ar5
      0008FC D0 06            [24] 2012 	pop	ar6
                                   2013 ;	main.c:259: printf("Command character= %c \n\r", character[0]);
      0008FE D0 06            [24] 2014 	pop	ar6
      000900 D0 05            [24] 2015 	pop	ar5
                                   2016 ;	main.c:218: printf("%c ", heap[0].bufferStartaddress[i]);
      000902                       2017 00169$:
                                   2018 ;	main.c:213: for (int i=0; i< buffer0CurrentSize; i++){                                  /*prints storage characters in buffer0*/
      000902 0B               [12] 2019 	inc	r3
      000903 BB 00 01         [24] 2020 	cjne	r3,#0x00,00358$
      000906 0C               [12] 2021 	inc	r4
      000907                       2022 00358$:
      000907 02 08 17         [24] 2023 	ljmp	00168$
      00090A                       2024 00133$:
                                   2025 ;	main.c:221: puts("\n\r");
      00090A 90 28 97         [24] 2026 	mov	dptr,#___str_40
      00090D 75 F0 80         [24] 2027 	mov	b,#0x80
      000910 12 16 43         [24] 2028 	lcall	_puts
                                   2029 ;	main.c:222: for (int i=0; i< heap[0].buffersize; i++){
      000913 7D 00            [12] 2030 	mov	r5,#0x00
      000915 7E 00            [12] 2031 	mov	r6,#0x00
      000917                       2032 00171$:
      000917 90 12 C5         [24] 2033 	mov	dptr,#(_heap + 0x0004)
      00091A E0               [24] 2034 	movx	a,@dptr
      00091B FB               [12] 2035 	mov	r3,a
      00091C A3               [24] 2036 	inc	dptr
      00091D E0               [24] 2037 	movx	a,@dptr
      00091E FC               [12] 2038 	mov	r4,a
      00091F 8D 01            [24] 2039 	mov	ar1,r5
      000921 8E 02            [24] 2040 	mov	ar2,r6
      000923 C3               [12] 2041 	clr	c
      000924 E9               [12] 2042 	mov	a,r1
      000925 9B               [12] 2043 	subb	a,r3
      000926 EA               [12] 2044 	mov	a,r2
      000927 9C               [12] 2045 	subb	a,r4
      000928 50 2C            [24] 2046 	jnc	00134$
                                   2047 ;	main.c:223: heap[0].bufferStartaddress[i]=0;                            /*clears out buffer0*/
      00092A 90 12 C2         [24] 2048 	mov	dptr,#(_heap + 0x0001)
      00092D E0               [24] 2049 	movx	a,@dptr
      00092E FA               [12] 2050 	mov	r2,a
      00092F A3               [24] 2051 	inc	dptr
      000930 E0               [24] 2052 	movx	a,@dptr
      000931 FB               [12] 2053 	mov	r3,a
      000932 A3               [24] 2054 	inc	dptr
      000933 E0               [24] 2055 	movx	a,@dptr
      000934 FC               [12] 2056 	mov	r4,a
      000935 ED               [12] 2057 	mov	a,r5
      000936 2D               [12] 2058 	add	a,r5
      000937 F8               [12] 2059 	mov	r0,a
      000938 EE               [12] 2060 	mov	a,r6
      000939 33               [12] 2061 	rlc	a
      00093A F9               [12] 2062 	mov	r1,a
      00093B E8               [12] 2063 	mov	a,r0
      00093C 2A               [12] 2064 	add	a,r2
      00093D FA               [12] 2065 	mov	r2,a
      00093E E9               [12] 2066 	mov	a,r1
      00093F 3B               [12] 2067 	addc	a,r3
      000940 FB               [12] 2068 	mov	r3,a
      000941 8A 82            [24] 2069 	mov	dpl,r2
      000943 8B 83            [24] 2070 	mov	dph,r3
      000945 8C F0            [24] 2071 	mov	b,r4
      000947 E4               [12] 2072 	clr	a
      000948 12 10 6E         [24] 2073 	lcall	__gptrput
      00094B A3               [24] 2074 	inc	dptr
      00094C 12 10 6E         [24] 2075 	lcall	__gptrput
                                   2076 ;	main.c:222: for (int i=0; i< heap[0].buffersize; i++){
      00094F 0D               [12] 2077 	inc	r5
      000950 BD 00 C4         [24] 2078 	cjne	r5,#0x00,00171$
      000953 0E               [12] 2079 	inc	r6
      000954 80 C1            [24] 2080 	sjmp	00171$
      000956                       2081 00134$:
                                   2082 ;	main.c:225: buffer0ptr=0;                                                   /*initializes buffer0 to start*/
      000956 90 13 CA         [24] 2083 	mov	dptr,#_main_buffer0ptr_65536_51
      000959 E4               [12] 2084 	clr	a
      00095A F0               [24] 2085 	movx	@dptr,a
      00095B A3               [24] 2086 	inc	dptr
      00095C F0               [24] 2087 	movx	@dptr,a
                                   2088 ;	main.c:226: buffer0CurrentSize=0;
      00095D 90 13 CC         [24] 2089 	mov	dptr,#_main_buffer0CurrentSize_65536_51
      000960 F0               [24] 2090 	movx	@dptr,a
      000961 A3               [24] 2091 	inc	dptr
      000962 F0               [24] 2092 	movx	@dptr,a
                                   2093 ;	main.c:227: numOfCharactersReceived=0;
      000963 90 13 E3         [24] 2094 	mov	dptr,#_main_numOfCharactersReceived_65536_51
      000966 F0               [24] 2095 	movx	@dptr,a
      000967 A3               [24] 2096 	inc	dptr
      000968 F0               [24] 2097 	movx	@dptr,a
      000969 02 00 99         [24] 2098 	ljmp	00162$
      00096C                       2099 00146$:
                                   2100 ;	main.c:229: else if (character[0]=='=') {                                      /*request to print hexadecimal values of storage characters in buffer0*/
      00096C BF 3D 47         [24] 2101 	cjne	r7,#0x3d,00143$
                                   2102 ;	main.c:231: puts("Hexadecimal values of storage characters at Buffer0 \n\r");
      00096F 90 2A D5         [24] 2103 	mov	dptr,#___str_56
      000972 75 F0 80         [24] 2104 	mov	b,#0x80
      000975 12 16 43         [24] 2105 	lcall	_puts
                                   2106 ;	main.c:232: hexDump(buffer0, buffer0CurrentSize*2, 32);
      000978 90 13 75         [24] 2107 	mov	dptr,#_main_buffer0_65536_51
      00097B E0               [24] 2108 	movx	a,@dptr
      00097C FD               [12] 2109 	mov	r5,a
      00097D A3               [24] 2110 	inc	dptr
      00097E E0               [24] 2111 	movx	a,@dptr
      00097F FE               [12] 2112 	mov	r6,a
      000980 7C 00            [12] 2113 	mov	r4,#0x00
      000982 90 13 CC         [24] 2114 	mov	dptr,#_main_buffer0CurrentSize_65536_51
      000985 E0               [24] 2115 	movx	a,@dptr
      000986 FA               [12] 2116 	mov	r2,a
      000987 A3               [24] 2117 	inc	dptr
      000988 E0               [24] 2118 	movx	a,@dptr
      000989 FB               [12] 2119 	mov	r3,a
      00098A EA               [12] 2120 	mov	a,r2
      00098B 2A               [12] 2121 	add	a,r2
      00098C FA               [12] 2122 	mov	r2,a
      00098D EB               [12] 2123 	mov	a,r3
      00098E 33               [12] 2124 	rlc	a
      00098F FB               [12] 2125 	mov	r3,a
      000990 90 13 E6         [24] 2126 	mov	dptr,#_hexDump_PARM_2
      000993 EA               [12] 2127 	mov	a,r2
      000994 F0               [24] 2128 	movx	@dptr,a
      000995 EB               [12] 2129 	mov	a,r3
      000996 A3               [24] 2130 	inc	dptr
      000997 F0               [24] 2131 	movx	@dptr,a
      000998 90 13 E8         [24] 2132 	mov	dptr,#_hexDump_PARM_3
      00099B 74 20            [12] 2133 	mov	a,#0x20
      00099D F0               [24] 2134 	movx	@dptr,a
      00099E E4               [12] 2135 	clr	a
      00099F A3               [24] 2136 	inc	dptr
      0009A0 F0               [24] 2137 	movx	@dptr,a
      0009A1 8D 82            [24] 2138 	mov	dpl,r5
      0009A3 8E 83            [24] 2139 	mov	dph,r6
      0009A5 8C F0            [24] 2140 	mov	b,r4
      0009A7 12 0B 18         [24] 2141 	lcall	_hexDump
                                   2142 ;	main.c:233: puts("\n\r");
      0009AA 90 28 97         [24] 2143 	mov	dptr,#___str_40
      0009AD 75 F0 80         [24] 2144 	mov	b,#0x80
      0009B0 12 16 43         [24] 2145 	lcall	_puts
      0009B3 02 00 99         [24] 2146 	ljmp	00162$
      0009B6                       2147 00143$:
                                   2148 ;	main.c:235: else if (character[0]=='@'){                                       /*request to free all buffers*/
      0009B6 BF 40 02         [24] 2149 	cjne	r7,#0x40,00363$
      0009B9 80 03            [24] 2150 	sjmp	00364$
      0009BB                       2151 00363$:
      0009BB 02 0A CB         [24] 2152 	ljmp	00140$
      0009BE                       2153 00364$:
                                   2154 ;	main.c:237: puts("Freeing all buffers \n\r");
      0009BE 90 2B 21         [24] 2155 	mov	dptr,#___str_57
      0009C1 75 F0 80         [24] 2156 	mov	b,#0x80
      0009C4 12 16 43         [24] 2157 	lcall	_puts
                                   2158 ;	main.c:239: for(int i=0; i<30; i++){
      0009C7 7E 00            [12] 2159 	mov	r6,#0x00
      0009C9 7F 00            [12] 2160 	mov	r7,#0x00
      0009CB                       2161 00174$:
      0009CB C3               [12] 2162 	clr	c
      0009CC EE               [12] 2163 	mov	a,r6
      0009CD 94 1E            [12] 2164 	subb	a,#0x1e
      0009CF EF               [12] 2165 	mov	a,r7
      0009D0 64 80            [12] 2166 	xrl	a,#0x80
      0009D2 94 80            [12] 2167 	subb	a,#0x80
      0009D4 40 03            [24] 2168 	jc	00365$
      0009D6 02 0A 68         [24] 2169 	ljmp	00137$
      0009D9                       2170 00365$:
                                   2171 ;	main.c:240: if(heap[i].bufferStartaddress!=NULL){
      0009D9 90 14 1E         [24] 2172 	mov	dptr,#__mulint_PARM_2
      0009DC EE               [12] 2173 	mov	a,r6
      0009DD F0               [24] 2174 	movx	@dptr,a
      0009DE EF               [12] 2175 	mov	a,r7
      0009DF A3               [24] 2176 	inc	dptr
      0009E0 F0               [24] 2177 	movx	@dptr,a
      0009E1 90 00 06         [24] 2178 	mov	dptr,#0x0006
      0009E4 C0 07            [24] 2179 	push	ar7
      0009E6 C0 06            [24] 2180 	push	ar6
      0009E8 12 13 37         [24] 2181 	lcall	__mulint
      0009EB AC 82            [24] 2182 	mov	r4,dpl
      0009ED AD 83            [24] 2183 	mov	r5,dph
      0009EF D0 06            [24] 2184 	pop	ar6
      0009F1 D0 07            [24] 2185 	pop	ar7
      0009F3 EC               [12] 2186 	mov	a,r4
      0009F4 24 C1            [12] 2187 	add	a,#_heap
      0009F6 FC               [12] 2188 	mov	r4,a
      0009F7 ED               [12] 2189 	mov	a,r5
      0009F8 34 12            [12] 2190 	addc	a,#(_heap >> 8)
      0009FA FD               [12] 2191 	mov	r5,a
      0009FB 74 01            [12] 2192 	mov	a,#0x01
      0009FD 2C               [12] 2193 	add	a,r4
      0009FE FA               [12] 2194 	mov	r2,a
      0009FF E4               [12] 2195 	clr	a
      000A00 3D               [12] 2196 	addc	a,r5
      000A01 FB               [12] 2197 	mov	r3,a
      000A02 8A 82            [24] 2198 	mov	dpl,r2
      000A04 8B 83            [24] 2199 	mov	dph,r3
      000A06 E0               [24] 2200 	movx	a,@dptr
      000A07 F5 0C            [12] 2201 	mov	_main_sloc2_1_0,a
      000A09 A3               [24] 2202 	inc	dptr
      000A0A E0               [24] 2203 	movx	a,@dptr
      000A0B F5 0D            [12] 2204 	mov	(_main_sloc2_1_0 + 1),a
      000A0D A3               [24] 2205 	inc	dptr
      000A0E E0               [24] 2206 	movx	a,@dptr
      000A0F F5 0E            [12] 2207 	mov	(_main_sloc2_1_0 + 2),a
      000A11 E5 0C            [12] 2208 	mov	a,_main_sloc2_1_0
      000A13 45 0D            [12] 2209 	orl	a,(_main_sloc2_1_0 + 1)
      000A15 60 49            [24] 2210 	jz	00175$
                                   2211 ;	main.c:241: free(heap[i].bufferStartaddress);                       /*free all buffers start addresses*/
      000A17 C0 06            [24] 2212 	push	ar6
      000A19 C0 07            [24] 2213 	push	ar7
      000A1B A8 0C            [24] 2214 	mov	r0,_main_sloc2_1_0
      000A1D A9 0D            [24] 2215 	mov	r1,(_main_sloc2_1_0 + 1)
      000A1F AF 0E            [24] 2216 	mov	r7,(_main_sloc2_1_0 + 2)
      000A21 88 82            [24] 2217 	mov	dpl,r0
      000A23 89 83            [24] 2218 	mov	dph,r1
      000A25 8F F0            [24] 2219 	mov	b,r7
      000A27 C0 07            [24] 2220 	push	ar7
      000A29 C0 06            [24] 2221 	push	ar6
      000A2B C0 05            [24] 2222 	push	ar5
      000A2D C0 04            [24] 2223 	push	ar4
      000A2F C0 03            [24] 2224 	push	ar3
      000A31 C0 02            [24] 2225 	push	ar2
      000A33 12 0D F3         [24] 2226 	lcall	_free
      000A36 D0 02            [24] 2227 	pop	ar2
      000A38 D0 03            [24] 2228 	pop	ar3
      000A3A D0 04            [24] 2229 	pop	ar4
      000A3C D0 05            [24] 2230 	pop	ar5
      000A3E D0 06            [24] 2231 	pop	ar6
      000A40 D0 07            [24] 2232 	pop	ar7
                                   2233 ;	main.c:242: heap[i].buffernumber=0;                                 /*clearing out buffer information on heap*/
      000A42 8C 82            [24] 2234 	mov	dpl,r4
      000A44 8D 83            [24] 2235 	mov	dph,r5
      000A46 E4               [12] 2236 	clr	a
      000A47 F0               [24] 2237 	movx	@dptr,a
                                   2238 ;	main.c:243: heap[i].buffersize=0;
      000A48 8C 82            [24] 2239 	mov	dpl,r4
      000A4A 8D 83            [24] 2240 	mov	dph,r5
      000A4C A3               [24] 2241 	inc	dptr
      000A4D A3               [24] 2242 	inc	dptr
      000A4E A3               [24] 2243 	inc	dptr
      000A4F A3               [24] 2244 	inc	dptr
      000A50 F0               [24] 2245 	movx	@dptr,a
      000A51 A3               [24] 2246 	inc	dptr
      000A52 F0               [24] 2247 	movx	@dptr,a
                                   2248 ;	main.c:244: heap[i].bufferStartaddress=NULL;
      000A53 8A 82            [24] 2249 	mov	dpl,r2
      000A55 8B 83            [24] 2250 	mov	dph,r3
      000A57 F0               [24] 2251 	movx	@dptr,a
      000A58 A3               [24] 2252 	inc	dptr
      000A59 F0               [24] 2253 	movx	@dptr,a
      000A5A A3               [24] 2254 	inc	dptr
      000A5B F0               [24] 2255 	movx	@dptr,a
                                   2256 ;	main.c:259: printf("Command character= %c \n\r", character[0]);
      000A5C D0 07            [24] 2257 	pop	ar7
      000A5E D0 06            [24] 2258 	pop	ar6
                                   2259 ;	main.c:244: heap[i].bufferStartaddress=NULL;
      000A60                       2260 00175$:
                                   2261 ;	main.c:239: for(int i=0; i<30; i++){
      000A60 0E               [12] 2262 	inc	r6
      000A61 BE 00 01         [24] 2263 	cjne	r6,#0x00,00367$
      000A64 0F               [12] 2264 	inc	r7
      000A65                       2265 00367$:
      000A65 02 09 CB         [24] 2266 	ljmp	00174$
      000A68                       2267 00137$:
                                   2268 ;	main.c:248: for (int i=0; i<buffer0CurrentSize; i++){
      000A68 90 13 CC         [24] 2269 	mov	dptr,#_main_buffer0CurrentSize_65536_51
      000A6B E0               [24] 2270 	movx	a,@dptr
      000A6C FE               [12] 2271 	mov	r6,a
      000A6D A3               [24] 2272 	inc	dptr
      000A6E E0               [24] 2273 	movx	a,@dptr
      000A6F FF               [12] 2274 	mov	r7,a
      000A70 7C 00            [12] 2275 	mov	r4,#0x00
      000A72 7D 00            [12] 2276 	mov	r5,#0x00
      000A74                       2277 00177$:
      000A74 8C 02            [24] 2278 	mov	ar2,r4
      000A76 8D 03            [24] 2279 	mov	ar3,r5
      000A78 C3               [12] 2280 	clr	c
      000A79 EA               [12] 2281 	mov	a,r2
      000A7A 9E               [12] 2282 	subb	a,r6
      000A7B EB               [12] 2283 	mov	a,r3
      000A7C 9F               [12] 2284 	subb	a,r7
      000A7D 50 34            [24] 2285 	jnc	00138$
                                   2286 ;	main.c:249: heap[0].bufferStartaddress[i]=0;                            /*clearing out storage characters in buffer0*/
      000A7F C0 06            [24] 2287 	push	ar6
      000A81 C0 07            [24] 2288 	push	ar7
      000A83 90 12 C2         [24] 2289 	mov	dptr,#(_heap + 0x0001)
      000A86 E0               [24] 2290 	movx	a,@dptr
      000A87 F9               [12] 2291 	mov	r1,a
      000A88 A3               [24] 2292 	inc	dptr
      000A89 E0               [24] 2293 	movx	a,@dptr
      000A8A FA               [12] 2294 	mov	r2,a
      000A8B A3               [24] 2295 	inc	dptr
      000A8C E0               [24] 2296 	movx	a,@dptr
      000A8D FB               [12] 2297 	mov	r3,a
      000A8E EC               [12] 2298 	mov	a,r4
      000A8F 2C               [12] 2299 	add	a,r4
      000A90 F8               [12] 2300 	mov	r0,a
      000A91 ED               [12] 2301 	mov	a,r5
      000A92 33               [12] 2302 	rlc	a
      000A93 FF               [12] 2303 	mov	r7,a
      000A94 E8               [12] 2304 	mov	a,r0
      000A95 29               [12] 2305 	add	a,r1
      000A96 F9               [12] 2306 	mov	r1,a
      000A97 EF               [12] 2307 	mov	a,r7
      000A98 3A               [12] 2308 	addc	a,r2
      000A99 FA               [12] 2309 	mov	r2,a
      000A9A 89 82            [24] 2310 	mov	dpl,r1
      000A9C 8A 83            [24] 2311 	mov	dph,r2
      000A9E 8B F0            [24] 2312 	mov	b,r3
      000AA0 E4               [12] 2313 	clr	a
      000AA1 12 10 6E         [24] 2314 	lcall	__gptrput
      000AA4 A3               [24] 2315 	inc	dptr
      000AA5 12 10 6E         [24] 2316 	lcall	__gptrput
                                   2317 ;	main.c:248: for (int i=0; i<buffer0CurrentSize; i++){
      000AA8 0C               [12] 2318 	inc	r4
      000AA9 BC 00 01         [24] 2319 	cjne	r4,#0x00,00369$
      000AAC 0D               [12] 2320 	inc	r5
      000AAD                       2321 00369$:
      000AAD D0 07            [24] 2322 	pop	ar7
      000AAF D0 06            [24] 2323 	pop	ar6
      000AB1 80 C1            [24] 2324 	sjmp	00177$
      000AB3                       2325 00138$:
                                   2326 ;	main.c:251: buffer0CurrentSize=0;
      000AB3 90 13 CC         [24] 2327 	mov	dptr,#_main_buffer0CurrentSize_65536_51
      000AB6 E4               [12] 2328 	clr	a
      000AB7 F0               [24] 2329 	movx	@dptr,a
      000AB8 A3               [24] 2330 	inc	dptr
      000AB9 F0               [24] 2331 	movx	@dptr,a
                                   2332 ;	main.c:252: buffer0ptr=0;
      000ABA 90 13 CA         [24] 2333 	mov	dptr,#_main_buffer0ptr_65536_51
      000ABD F0               [24] 2334 	movx	@dptr,a
      000ABE A3               [24] 2335 	inc	dptr
      000ABF F0               [24] 2336 	movx	@dptr,a
                                   2337 ;	main.c:253: newBufferscount=0;
      000AC0 90 13 D8         [24] 2338 	mov	dptr,#_main_newBufferscount_65536_51
      000AC3 F0               [24] 2339 	movx	@dptr,a
                                   2340 ;	main.c:254: isFlag=0;                                                       /*starts the program again*/
      000AC4 90 13 C2         [24] 2341 	mov	dptr,#_main_isFlag_65536_51
      000AC7 F0               [24] 2342 	movx	@dptr,a
      000AC8 02 00 99         [24] 2343 	ljmp	00162$
      000ACB                       2344 00140$:
                                   2345 ;	main.c:258: puts("Command symbol received \n\r");                           /*echoes any other characters received*/
      000ACB 90 28 9A         [24] 2346 	mov	dptr,#___str_45
      000ACE 75 F0 80         [24] 2347 	mov	b,#0x80
      000AD1 12 16 43         [24] 2348 	lcall	_puts
                                   2349 ;	main.c:259: printf("Command character= %c \n\r", character[0]);
      000AD4 90 13 C5         [24] 2350 	mov	dptr,#_main_character_65536_51
      000AD7 E0               [24] 2351 	movx	a,@dptr
      000AD8 FF               [12] 2352 	mov	r7,a
      000AD9 7E 00            [12] 2353 	mov	r6,#0x00
      000ADB C0 07            [24] 2354 	push	ar7
      000ADD C0 06            [24] 2355 	push	ar6
      000ADF 74 B5            [12] 2356 	mov	a,#___str_46
      000AE1 C0 E0            [24] 2357 	push	acc
      000AE3 74 28            [12] 2358 	mov	a,#(___str_46 >> 8)
      000AE5 C0 E0            [24] 2359 	push	acc
      000AE7 74 80            [12] 2360 	mov	a,#0x80
      000AE9 C0 E0            [24] 2361 	push	acc
      000AEB 12 18 A1         [24] 2362 	lcall	_printf
      000AEE E5 81            [12] 2363 	mov	a,sp
      000AF0 24 FB            [12] 2364 	add	a,#0xfb
      000AF2 F5 81            [12] 2365 	mov	sp,a
                                   2366 ;	main.c:263: }
      000AF4 02 00 99         [24] 2367 	ljmp	00162$
                                   2368 ;------------------------------------------------------------
                                   2369 ;Allocation info for local variables in function 'dataout'
                                   2370 ;------------------------------------------------------------
                                   2371 ;v                         Allocated with name '_dataout_v_65536_88'
                                   2372 ;ptr                       Allocated with name '_dataout_ptr_65536_89'
                                   2373 ;------------------------------------------------------------
                                   2374 ;	main.c:265: void dataout(uint8_t v){
                                   2375 ;	-----------------------------------------
                                   2376 ;	 function dataout
                                   2377 ;	-----------------------------------------
      000AF7                       2378 _dataout:
      000AF7 E5 82            [12] 2379 	mov	a,dpl
      000AF9 90 13 E5         [24] 2380 	mov	dptr,#_dataout_v_65536_88
      000AFC F0               [24] 2381 	movx	@dptr,a
                                   2382 ;	main.c:267: *ptr=v;
      000AFD E0               [24] 2383 	movx	a,@dptr
      000AFE FF               [12] 2384 	mov	r7,a
      000AFF 7E 00            [12] 2385 	mov	r6,#0x00
      000B01 90 7F F0         [24] 2386 	mov	dptr,#0x7ff0
      000B04 EF               [12] 2387 	mov	a,r7
      000B05 F0               [24] 2388 	movx	@dptr,a
      000B06 EE               [12] 2389 	mov	a,r6
      000B07 A3               [24] 2390 	inc	dptr
      000B08 F0               [24] 2391 	movx	@dptr,a
                                   2392 ;	main.c:269: }
      000B09 22               [24] 2393 	ret
                                   2394 ;------------------------------------------------------------
                                   2395 ;Allocation info for local variables in function 'serial_init'
                                   2396 ;------------------------------------------------------------
                                   2397 ;	main.c:271: void serial_init(void){
                                   2398 ;	-----------------------------------------
                                   2399 ;	 function serial_init
                                   2400 ;	-----------------------------------------
      000B0A                       2401 _serial_init:
                                   2402 ;	main.c:272: TMOD=0x20;
      000B0A 75 89 20         [24] 2403 	mov	_TMOD,#0x20
                                   2404 ;	main.c:273: TH1=0xFD;
      000B0D 75 8D FD         [24] 2405 	mov	_TH1,#0xfd
                                   2406 ;	main.c:274: SCON=0x50;
      000B10 75 98 50         [24] 2407 	mov	_SCON,#0x50
                                   2408 ;	main.c:275: TR1=1;
                                   2409 ;	assignBit
      000B13 D2 8E            [12] 2410 	setb	_TR1
                                   2411 ;	main.c:276: TI=1;
                                   2412 ;	assignBit
      000B15 D2 99            [12] 2413 	setb	_TI
                                   2414 ;	main.c:277: }
      000B17 22               [24] 2415 	ret
                                   2416 ;------------------------------------------------------------
                                   2417 ;Allocation info for local variables in function 'hexDump'
                                   2418 ;------------------------------------------------------------
                                   2419 ;sloc0                     Allocated with name '_hexDump_sloc0_1_0'
                                   2420 ;len                       Allocated with name '_hexDump_PARM_2'
                                   2421 ;perLine                   Allocated with name '_hexDump_PARM_3'
                                   2422 ;addr                      Allocated with name '_hexDump_addr_65536_92'
                                   2423 ;i                         Allocated with name '_hexDump_i_65536_93'
                                   2424 ;buff                      Allocated with name '_hexDump_buff_65536_93'
                                   2425 ;pc                        Allocated with name '_hexDump_pc_65536_93'
                                   2426 ;------------------------------------------------------------
                                   2427 ;	main.c:279: void hexDump (const void * addr, const int len, int perLine) {
                                   2428 ;	-----------------------------------------
                                   2429 ;	 function hexDump
                                   2430 ;	-----------------------------------------
      000B18                       2431 _hexDump:
      000B18 AF F0            [24] 2432 	mov	r7,b
      000B1A AE 83            [24] 2433 	mov	r6,dph
      000B1C E5 82            [12] 2434 	mov	a,dpl
      000B1E 90 13 EA         [24] 2435 	mov	dptr,#_hexDump_addr_65536_92
      000B21 F0               [24] 2436 	movx	@dptr,a
      000B22 EE               [12] 2437 	mov	a,r6
      000B23 A3               [24] 2438 	inc	dptr
      000B24 F0               [24] 2439 	movx	@dptr,a
      000B25 EF               [12] 2440 	mov	a,r7
      000B26 A3               [24] 2441 	inc	dptr
      000B27 F0               [24] 2442 	movx	@dptr,a
                                   2443 ;	main.c:282: const unsigned char * pc = (const unsigned char *)addr;
      000B28 90 13 EA         [24] 2444 	mov	dptr,#_hexDump_addr_65536_92
      000B2B E0               [24] 2445 	movx	a,@dptr
      000B2C FD               [12] 2446 	mov	r5,a
      000B2D A3               [24] 2447 	inc	dptr
      000B2E E0               [24] 2448 	movx	a,@dptr
      000B2F FE               [12] 2449 	mov	r6,a
      000B30 A3               [24] 2450 	inc	dptr
      000B31 E0               [24] 2451 	movx	a,@dptr
      000B32 FF               [12] 2452 	mov	r7,a
                                   2453 ;	main.c:284: for (i = 0; i < len; i+=2) {
      000B33 90 13 E8         [24] 2454 	mov	dptr,#_hexDump_PARM_3
      000B36 E0               [24] 2455 	movx	a,@dptr
      000B37 FB               [12] 2456 	mov	r3,a
      000B38 A3               [24] 2457 	inc	dptr
      000B39 E0               [24] 2458 	movx	a,@dptr
      000B3A FC               [12] 2459 	mov	r4,a
      000B3B 90 13 E6         [24] 2460 	mov	dptr,#_hexDump_PARM_2
      000B3E E0               [24] 2461 	movx	a,@dptr
      000B3F F9               [12] 2462 	mov	r1,a
      000B40 A3               [24] 2463 	inc	dptr
      000B41 E0               [24] 2464 	movx	a,@dptr
      000B42 FA               [12] 2465 	mov	r2,a
      000B43 E4               [12] 2466 	clr	a
      000B44 F5 0F            [12] 2467 	mov	_hexDump_sloc0_1_0,a
      000B46 F5 10            [12] 2468 	mov	(_hexDump_sloc0_1_0 + 1),a
      000B48                       2469 00110$:
      000B48 C3               [12] 2470 	clr	c
      000B49 E5 0F            [12] 2471 	mov	a,_hexDump_sloc0_1_0
      000B4B 99               [12] 2472 	subb	a,r1
      000B4C E5 10            [12] 2473 	mov	a,(_hexDump_sloc0_1_0 + 1)
      000B4E 64 80            [12] 2474 	xrl	a,#0x80
      000B50 8A F0            [24] 2475 	mov	b,r2
      000B52 63 F0 80         [24] 2476 	xrl	b,#0x80
      000B55 95 F0            [12] 2477 	subb	a,b
      000B57 40 03            [24] 2478 	jc	00140$
      000B59 02 0C 6A         [24] 2479 	ljmp	00119$
      000B5C                       2480 00140$:
                                   2481 ;	main.c:285: if ((i % perLine) == 0) {
      000B5C 90 14 20         [24] 2482 	mov	dptr,#__modsint_PARM_2
      000B5F EB               [12] 2483 	mov	a,r3
      000B60 F0               [24] 2484 	movx	@dptr,a
      000B61 EC               [12] 2485 	mov	a,r4
      000B62 A3               [24] 2486 	inc	dptr
      000B63 F0               [24] 2487 	movx	@dptr,a
      000B64 85 0F 82         [24] 2488 	mov	dpl,_hexDump_sloc0_1_0
      000B67 85 10 83         [24] 2489 	mov	dph,(_hexDump_sloc0_1_0 + 1)
      000B6A C0 07            [24] 2490 	push	ar7
      000B6C C0 06            [24] 2491 	push	ar6
      000B6E C0 05            [24] 2492 	push	ar5
      000B70 C0 04            [24] 2493 	push	ar4
      000B72 C0 03            [24] 2494 	push	ar3
      000B74 C0 02            [24] 2495 	push	ar2
      000B76 C0 01            [24] 2496 	push	ar1
      000B78 12 13 57         [24] 2497 	lcall	__modsint
      000B7B E5 82            [12] 2498 	mov	a,dpl
      000B7D 85 83 F0         [24] 2499 	mov	b,dph
      000B80 D0 01            [24] 2500 	pop	ar1
      000B82 D0 02            [24] 2501 	pop	ar2
      000B84 D0 03            [24] 2502 	pop	ar3
      000B86 D0 04            [24] 2503 	pop	ar4
      000B88 D0 05            [24] 2504 	pop	ar5
      000B8A D0 06            [24] 2505 	pop	ar6
      000B8C D0 07            [24] 2506 	pop	ar7
      000B8E 45 F0            [12] 2507 	orl	a,b
      000B90 70 77            [24] 2508 	jnz	00104$
                                   2509 ;	main.c:286: if (i != 0) printf ("  %s\n\r", buff);
      000B92 E5 0F            [12] 2510 	mov	a,_hexDump_sloc0_1_0
      000B94 45 10            [12] 2511 	orl	a,(_hexDump_sloc0_1_0 + 1)
      000B96 60 3C            [24] 2512 	jz	00102$
      000B98 C0 07            [24] 2513 	push	ar7
      000B9A C0 06            [24] 2514 	push	ar6
      000B9C C0 05            [24] 2515 	push	ar5
      000B9E C0 04            [24] 2516 	push	ar4
      000BA0 C0 03            [24] 2517 	push	ar3
      000BA2 C0 02            [24] 2518 	push	ar2
      000BA4 C0 01            [24] 2519 	push	ar1
      000BA6 74 ED            [12] 2520 	mov	a,#_hexDump_buff_65536_93
      000BA8 C0 E0            [24] 2521 	push	acc
      000BAA 74 13            [12] 2522 	mov	a,#(_hexDump_buff_65536_93 >> 8)
      000BAC C0 E0            [24] 2523 	push	acc
      000BAE E4               [12] 2524 	clr	a
      000BAF C0 E0            [24] 2525 	push	acc
      000BB1 74 4D            [12] 2526 	mov	a,#___str_58
      000BB3 C0 E0            [24] 2527 	push	acc
      000BB5 74 2B            [12] 2528 	mov	a,#(___str_58 >> 8)
      000BB7 C0 E0            [24] 2529 	push	acc
      000BB9 74 80            [12] 2530 	mov	a,#0x80
      000BBB C0 E0            [24] 2531 	push	acc
      000BBD 12 18 A1         [24] 2532 	lcall	_printf
      000BC0 E5 81            [12] 2533 	mov	a,sp
      000BC2 24 FA            [12] 2534 	add	a,#0xfa
      000BC4 F5 81            [12] 2535 	mov	sp,a
      000BC6 D0 01            [24] 2536 	pop	ar1
      000BC8 D0 02            [24] 2537 	pop	ar2
      000BCA D0 03            [24] 2538 	pop	ar3
      000BCC D0 04            [24] 2539 	pop	ar4
      000BCE D0 05            [24] 2540 	pop	ar5
      000BD0 D0 06            [24] 2541 	pop	ar6
      000BD2 D0 07            [24] 2542 	pop	ar7
      000BD4                       2543 00102$:
                                   2544 ;	main.c:287: printf ("  %04x ", i);
      000BD4 C0 07            [24] 2545 	push	ar7
      000BD6 C0 06            [24] 2546 	push	ar6
      000BD8 C0 05            [24] 2547 	push	ar5
      000BDA C0 04            [24] 2548 	push	ar4
      000BDC C0 03            [24] 2549 	push	ar3
      000BDE C0 02            [24] 2550 	push	ar2
      000BE0 C0 01            [24] 2551 	push	ar1
      000BE2 C0 0F            [24] 2552 	push	_hexDump_sloc0_1_0
      000BE4 C0 10            [24] 2553 	push	(_hexDump_sloc0_1_0 + 1)
      000BE6 74 54            [12] 2554 	mov	a,#___str_59
      000BE8 C0 E0            [24] 2555 	push	acc
      000BEA 74 2B            [12] 2556 	mov	a,#(___str_59 >> 8)
      000BEC C0 E0            [24] 2557 	push	acc
      000BEE 74 80            [12] 2558 	mov	a,#0x80
      000BF0 C0 E0            [24] 2559 	push	acc
      000BF2 12 18 A1         [24] 2560 	lcall	_printf
      000BF5 E5 81            [12] 2561 	mov	a,sp
      000BF7 24 FB            [12] 2562 	add	a,#0xfb
      000BF9 F5 81            [12] 2563 	mov	sp,a
      000BFB D0 01            [24] 2564 	pop	ar1
      000BFD D0 02            [24] 2565 	pop	ar2
      000BFF D0 03            [24] 2566 	pop	ar3
      000C01 D0 04            [24] 2567 	pop	ar4
      000C03 D0 05            [24] 2568 	pop	ar5
      000C05 D0 06            [24] 2569 	pop	ar6
      000C07 D0 07            [24] 2570 	pop	ar7
      000C09                       2571 00104$:
                                   2572 ;	main.c:289: printf (" %02x", pc[i]);
      000C09 C0 01            [24] 2573 	push	ar1
      000C0B C0 02            [24] 2574 	push	ar2
      000C0D E5 0F            [12] 2575 	mov	a,_hexDump_sloc0_1_0
      000C0F 2D               [12] 2576 	add	a,r5
      000C10 F8               [12] 2577 	mov	r0,a
      000C11 E5 10            [12] 2578 	mov	a,(_hexDump_sloc0_1_0 + 1)
      000C13 3E               [12] 2579 	addc	a,r6
      000C14 F9               [12] 2580 	mov	r1,a
      000C15 8F 02            [24] 2581 	mov	ar2,r7
      000C17 88 82            [24] 2582 	mov	dpl,r0
      000C19 89 83            [24] 2583 	mov	dph,r1
      000C1B 8A F0            [24] 2584 	mov	b,r2
      000C1D 12 22 CD         [24] 2585 	lcall	__gptrget
      000C20 F8               [12] 2586 	mov	r0,a
      000C21 7A 00            [12] 2587 	mov	r2,#0x00
      000C23 C0 07            [24] 2588 	push	ar7
      000C25 C0 06            [24] 2589 	push	ar6
      000C27 C0 05            [24] 2590 	push	ar5
      000C29 C0 04            [24] 2591 	push	ar4
      000C2B C0 03            [24] 2592 	push	ar3
      000C2D C0 02            [24] 2593 	push	ar2
      000C2F C0 01            [24] 2594 	push	ar1
      000C31 C0 00            [24] 2595 	push	ar0
      000C33 C0 02            [24] 2596 	push	ar2
      000C35 74 5C            [12] 2597 	mov	a,#___str_60
      000C37 C0 E0            [24] 2598 	push	acc
      000C39 74 2B            [12] 2599 	mov	a,#(___str_60 >> 8)
      000C3B C0 E0            [24] 2600 	push	acc
      000C3D 74 80            [12] 2601 	mov	a,#0x80
      000C3F C0 E0            [24] 2602 	push	acc
      000C41 12 18 A1         [24] 2603 	lcall	_printf
      000C44 E5 81            [12] 2604 	mov	a,sp
      000C46 24 FB            [12] 2605 	add	a,#0xfb
      000C48 F5 81            [12] 2606 	mov	sp,a
      000C4A D0 01            [24] 2607 	pop	ar1
      000C4C D0 02            [24] 2608 	pop	ar2
      000C4E D0 03            [24] 2609 	pop	ar3
      000C50 D0 04            [24] 2610 	pop	ar4
      000C52 D0 05            [24] 2611 	pop	ar5
      000C54 D0 06            [24] 2612 	pop	ar6
      000C56 D0 07            [24] 2613 	pop	ar7
                                   2614 ;	main.c:284: for (i = 0; i < len; i+=2) {
      000C58 74 02            [12] 2615 	mov	a,#0x02
      000C5A 25 0F            [12] 2616 	add	a,_hexDump_sloc0_1_0
      000C5C F5 0F            [12] 2617 	mov	_hexDump_sloc0_1_0,a
      000C5E E4               [12] 2618 	clr	a
      000C5F 35 10            [12] 2619 	addc	a,(_hexDump_sloc0_1_0 + 1)
      000C61 F5 10            [12] 2620 	mov	(_hexDump_sloc0_1_0 + 1),a
      000C63 D0 02            [24] 2621 	pop	ar2
      000C65 D0 01            [24] 2622 	pop	ar1
      000C67 02 0B 48         [24] 2623 	ljmp	00110$
                                   2624 ;	main.c:291: while ((i % perLine) != 0) {
      000C6A                       2625 00119$:
      000C6A 8B 06            [24] 2626 	mov	ar6,r3
      000C6C 8C 07            [24] 2627 	mov	ar7,r4
      000C6E AC 0F            [24] 2628 	mov	r4,_hexDump_sloc0_1_0
      000C70 AD 10            [24] 2629 	mov	r5,(_hexDump_sloc0_1_0 + 1)
      000C72                       2630 00106$:
      000C72 90 14 20         [24] 2631 	mov	dptr,#__modsint_PARM_2
      000C75 EE               [12] 2632 	mov	a,r6
      000C76 F0               [24] 2633 	movx	@dptr,a
      000C77 EF               [12] 2634 	mov	a,r7
      000C78 A3               [24] 2635 	inc	dptr
      000C79 F0               [24] 2636 	movx	@dptr,a
      000C7A 8C 82            [24] 2637 	mov	dpl,r4
      000C7C 8D 83            [24] 2638 	mov	dph,r5
      000C7E C0 07            [24] 2639 	push	ar7
      000C80 C0 06            [24] 2640 	push	ar6
      000C82 C0 05            [24] 2641 	push	ar5
      000C84 C0 04            [24] 2642 	push	ar4
      000C86 12 13 57         [24] 2643 	lcall	__modsint
      000C89 E5 82            [12] 2644 	mov	a,dpl
      000C8B 85 83 F0         [24] 2645 	mov	b,dph
      000C8E D0 04            [24] 2646 	pop	ar4
      000C90 D0 05            [24] 2647 	pop	ar5
      000C92 D0 06            [24] 2648 	pop	ar6
      000C94 D0 07            [24] 2649 	pop	ar7
      000C96 45 F0            [12] 2650 	orl	a,b
      000C98 60 2C            [24] 2651 	jz	00112$
                                   2652 ;	main.c:292: printf ("   ");
      000C9A C0 07            [24] 2653 	push	ar7
      000C9C C0 06            [24] 2654 	push	ar6
      000C9E C0 05            [24] 2655 	push	ar5
      000CA0 C0 04            [24] 2656 	push	ar4
      000CA2 74 62            [12] 2657 	mov	a,#___str_61
      000CA4 C0 E0            [24] 2658 	push	acc
      000CA6 74 2B            [12] 2659 	mov	a,#(___str_61 >> 8)
      000CA8 C0 E0            [24] 2660 	push	acc
      000CAA 74 80            [12] 2661 	mov	a,#0x80
      000CAC C0 E0            [24] 2662 	push	acc
      000CAE 12 18 A1         [24] 2663 	lcall	_printf
      000CB1 15 81            [12] 2664 	dec	sp
      000CB3 15 81            [12] 2665 	dec	sp
      000CB5 15 81            [12] 2666 	dec	sp
      000CB7 D0 04            [24] 2667 	pop	ar4
      000CB9 D0 05            [24] 2668 	pop	ar5
      000CBB D0 06            [24] 2669 	pop	ar6
      000CBD D0 07            [24] 2670 	pop	ar7
                                   2671 ;	main.c:293: i++;
      000CBF 0C               [12] 2672 	inc	r4
      000CC0 BC 00 AF         [24] 2673 	cjne	r4,#0x00,00106$
      000CC3 0D               [12] 2674 	inc	r5
      000CC4 80 AC            [24] 2675 	sjmp	00106$
      000CC6                       2676 00112$:
                                   2677 ;	main.c:296: }
      000CC6 22               [24] 2678 	ret
                                   2679 ;------------------------------------------------------------
                                   2680 ;Allocation info for local variables in function 'putchar'
                                   2681 ;------------------------------------------------------------
                                   2682 ;c                         Allocated with name '_putchar_c_65536_98'
                                   2683 ;------------------------------------------------------------
                                   2684 ;	main.c:299: int putchar (int c)
                                   2685 ;	-----------------------------------------
                                   2686 ;	 function putchar
                                   2687 ;	-----------------------------------------
      000CC7                       2688 _putchar:
      000CC7 AF 83            [24] 2689 	mov	r7,dph
      000CC9 E5 82            [12] 2690 	mov	a,dpl
      000CCB 90 13 FE         [24] 2691 	mov	dptr,#_putchar_c_65536_98
      000CCE F0               [24] 2692 	movx	@dptr,a
      000CCF EF               [12] 2693 	mov	a,r7
      000CD0 A3               [24] 2694 	inc	dptr
      000CD1 F0               [24] 2695 	movx	@dptr,a
                                   2696 ;	main.c:301: while (!TI);
      000CD2                       2697 00101$:
      000CD2 30 99 FD         [24] 2698 	jnb	_TI,00101$
                                   2699 ;	main.c:302: while (TI == 0);
      000CD5                       2700 00104$:
      000CD5 30 99 FD         [24] 2701 	jnb	_TI,00104$
                                   2702 ;	main.c:303: while ((SCON & 0x02) == 0);
      000CD8                       2703 00107$:
      000CD8 E5 98            [12] 2704 	mov	a,_SCON
      000CDA 30 E1 FB         [24] 2705 	jnb	acc.1,00107$
                                   2706 ;	main.c:305: SBUF = c;           // load serial port with transmit value
      000CDD 90 13 FE         [24] 2707 	mov	dptr,#_putchar_c_65536_98
      000CE0 E0               [24] 2708 	movx	a,@dptr
      000CE1 FE               [12] 2709 	mov	r6,a
      000CE2 A3               [24] 2710 	inc	dptr
      000CE3 E0               [24] 2711 	movx	a,@dptr
      000CE4 FF               [12] 2712 	mov	r7,a
      000CE5 8E 99            [24] 2713 	mov	_SBUF,r6
                                   2714 ;	main.c:306: TI = 0;             // clear TI flag
                                   2715 ;	assignBit
      000CE7 C2 99            [12] 2716 	clr	_TI
                                   2717 ;	main.c:308: return c;
      000CE9 8E 82            [24] 2718 	mov	dpl,r6
      000CEB 8F 83            [24] 2719 	mov	dph,r7
                                   2720 ;	main.c:309: }
      000CED 22               [24] 2721 	ret
                                   2722 ;------------------------------------------------------------
                                   2723 ;Allocation info for local variables in function 'getchar'
                                   2724 ;------------------------------------------------------------
                                   2725 ;	main.c:311: int getchar (void)
                                   2726 ;	-----------------------------------------
                                   2727 ;	 function getchar
                                   2728 ;	-----------------------------------------
      000CEE                       2729 _getchar:
                                   2730 ;	main.c:313: while (!RI);
      000CEE                       2731 00101$:
      000CEE 30 98 FD         [24] 2732 	jnb	_RI,00101$
                                   2733 ;	main.c:314: while ((SCON & 0x01) == 0);
      000CF1                       2734 00104$:
      000CF1 E5 98            [12] 2735 	mov	a,_SCON
      000CF3 30 E0 FB         [24] 2736 	jnb	acc.0,00104$
                                   2737 ;	main.c:315: while (RI == 0);
      000CF6                       2738 00107$:
                                   2739 ;	main.c:317: RI = 0;                         // clear RI flag
                                   2740 ;	assignBit
      000CF6 10 98 02         [24] 2741 	jbc	_RI,00130$
      000CF9 80 FB            [24] 2742 	sjmp	00107$
      000CFB                       2743 00130$:
                                   2744 ;	main.c:318: return SBUF;                    // return character from SBUF
      000CFB AE 99            [24] 2745 	mov	r6,_SBUF
      000CFD 7F 00            [12] 2746 	mov	r7,#0x00
      000CFF 8E 82            [24] 2747 	mov	dpl,r6
      000D01 8F 83            [24] 2748 	mov	dph,r7
                                   2749 ;	main.c:319: }
      000D03 22               [24] 2750 	ret
                                   2751 ;------------------------------------------------------------
                                   2752 ;Allocation info for local variables in function 'putstr'
                                   2753 ;------------------------------------------------------------
                                   2754 ;s                         Allocated with name '_putstr_s_65536_102'
                                   2755 ;i                         Allocated with name '_putstr_i_65536_103'
                                   2756 ;------------------------------------------------------------
                                   2757 ;	main.c:321: int putstr (char *s)
                                   2758 ;	-----------------------------------------
                                   2759 ;	 function putstr
                                   2760 ;	-----------------------------------------
      000D04                       2761 _putstr:
      000D04 AF F0            [24] 2762 	mov	r7,b
      000D06 AE 83            [24] 2763 	mov	r6,dph
      000D08 E5 82            [12] 2764 	mov	a,dpl
      000D0A 90 14 00         [24] 2765 	mov	dptr,#_putstr_s_65536_102
      000D0D F0               [24] 2766 	movx	@dptr,a
      000D0E EE               [12] 2767 	mov	a,r6
      000D0F A3               [24] 2768 	inc	dptr
      000D10 F0               [24] 2769 	movx	@dptr,a
      000D11 EF               [12] 2770 	mov	a,r7
      000D12 A3               [24] 2771 	inc	dptr
      000D13 F0               [24] 2772 	movx	@dptr,a
                                   2773 ;	main.c:324: while (*s){            // output characters until NULL found
      000D14 90 14 00         [24] 2774 	mov	dptr,#_putstr_s_65536_102
      000D17 E0               [24] 2775 	movx	a,@dptr
      000D18 FD               [12] 2776 	mov	r5,a
      000D19 A3               [24] 2777 	inc	dptr
      000D1A E0               [24] 2778 	movx	a,@dptr
      000D1B FE               [12] 2779 	mov	r6,a
      000D1C A3               [24] 2780 	inc	dptr
      000D1D E0               [24] 2781 	movx	a,@dptr
      000D1E FF               [12] 2782 	mov	r7,a
      000D1F 7B 00            [12] 2783 	mov	r3,#0x00
      000D21 7C 00            [12] 2784 	mov	r4,#0x00
      000D23                       2785 00101$:
      000D23 8D 82            [24] 2786 	mov	dpl,r5
      000D25 8E 83            [24] 2787 	mov	dph,r6
      000D27 8F F0            [24] 2788 	mov	b,r7
      000D29 12 22 CD         [24] 2789 	lcall	__gptrget
      000D2C FA               [12] 2790 	mov	r2,a
      000D2D 60 36            [24] 2791 	jz	00108$
                                   2792 ;	main.c:325: putchar(*s++);
      000D2F 0D               [12] 2793 	inc	r5
      000D30 BD 00 01         [24] 2794 	cjne	r5,#0x00,00116$
      000D33 0E               [12] 2795 	inc	r6
      000D34                       2796 00116$:
      000D34 90 14 00         [24] 2797 	mov	dptr,#_putstr_s_65536_102
      000D37 ED               [12] 2798 	mov	a,r5
      000D38 F0               [24] 2799 	movx	@dptr,a
      000D39 EE               [12] 2800 	mov	a,r6
      000D3A A3               [24] 2801 	inc	dptr
      000D3B F0               [24] 2802 	movx	@dptr,a
      000D3C EF               [12] 2803 	mov	a,r7
      000D3D A3               [24] 2804 	inc	dptr
      000D3E F0               [24] 2805 	movx	@dptr,a
      000D3F 8A 01            [24] 2806 	mov	ar1,r2
      000D41 7A 00            [12] 2807 	mov	r2,#0x00
      000D43 89 82            [24] 2808 	mov	dpl,r1
      000D45 8A 83            [24] 2809 	mov	dph,r2
      000D47 C0 07            [24] 2810 	push	ar7
      000D49 C0 06            [24] 2811 	push	ar6
      000D4B C0 05            [24] 2812 	push	ar5
      000D4D C0 04            [24] 2813 	push	ar4
      000D4F C0 03            [24] 2814 	push	ar3
      000D51 12 0C C7         [24] 2815 	lcall	_putchar
      000D54 D0 03            [24] 2816 	pop	ar3
      000D56 D0 04            [24] 2817 	pop	ar4
      000D58 D0 05            [24] 2818 	pop	ar5
      000D5A D0 06            [24] 2819 	pop	ar6
      000D5C D0 07            [24] 2820 	pop	ar7
                                   2821 ;	main.c:326: i++;
      000D5E 0B               [12] 2822 	inc	r3
      000D5F BB 00 C1         [24] 2823 	cjne	r3,#0x00,00101$
      000D62 0C               [12] 2824 	inc	r4
      000D63 80 BE            [24] 2825 	sjmp	00101$
      000D65                       2826 00108$:
      000D65 90 14 00         [24] 2827 	mov	dptr,#_putstr_s_65536_102
      000D68 ED               [12] 2828 	mov	a,r5
      000D69 F0               [24] 2829 	movx	@dptr,a
      000D6A EE               [12] 2830 	mov	a,r6
      000D6B A3               [24] 2831 	inc	dptr
      000D6C F0               [24] 2832 	movx	@dptr,a
      000D6D EF               [12] 2833 	mov	a,r7
      000D6E A3               [24] 2834 	inc	dptr
      000D6F F0               [24] 2835 	movx	@dptr,a
                                   2836 ;	main.c:328: return i+1;
      000D70 0B               [12] 2837 	inc	r3
      000D71 BB 00 01         [24] 2838 	cjne	r3,#0x00,00118$
      000D74 0C               [12] 2839 	inc	r4
      000D75                       2840 00118$:
      000D75 8B 82            [24] 2841 	mov	dpl,r3
      000D77 8C 83            [24] 2842 	mov	dph,r4
                                   2843 ;	main.c:329: }
      000D79 22               [24] 2844 	ret
                                   2845 ;------------------------------------------------------------
                                   2846 ;Allocation info for local variables in function 'getstr'
                                   2847 ;------------------------------------------------------------
                                   2848 ;a                         Allocated with name '_getstr_a_65536_105'
                                   2849 ;i                         Allocated with name '_getstr_i_65536_106'
                                   2850 ;------------------------------------------------------------
                                   2851 ;	main.c:331: int getstr(char *a)
                                   2852 ;	-----------------------------------------
                                   2853 ;	 function getstr
                                   2854 ;	-----------------------------------------
      000D7A                       2855 _getstr:
      000D7A AF F0            [24] 2856 	mov	r7,b
      000D7C AE 83            [24] 2857 	mov	r6,dph
      000D7E E5 82            [12] 2858 	mov	a,dpl
      000D80 90 14 03         [24] 2859 	mov	dptr,#_getstr_a_65536_105
      000D83 F0               [24] 2860 	movx	@dptr,a
      000D84 EE               [12] 2861 	mov	a,r6
      000D85 A3               [24] 2862 	inc	dptr
      000D86 F0               [24] 2863 	movx	@dptr,a
      000D87 EF               [12] 2864 	mov	a,r7
      000D88 A3               [24] 2865 	inc	dptr
      000D89 F0               [24] 2866 	movx	@dptr,a
                                   2867 ;	main.c:335: do{
      000D8A 7E 00            [12] 2868 	mov	r6,#0x00
      000D8C 7F 00            [12] 2869 	mov	r7,#0x00
      000D8E 90 14 03         [24] 2870 	mov	dptr,#_getstr_a_65536_105
      000D91 E0               [24] 2871 	movx	a,@dptr
      000D92 FB               [12] 2872 	mov	r3,a
      000D93 A3               [24] 2873 	inc	dptr
      000D94 E0               [24] 2874 	movx	a,@dptr
      000D95 FC               [12] 2875 	mov	r4,a
      000D96 A3               [24] 2876 	inc	dptr
      000D97 E0               [24] 2877 	movx	a,@dptr
      000D98 FD               [12] 2878 	mov	r5,a
      000D99                       2879 00101$:
                                   2880 ;	main.c:336: *a = getchar();
      000D99 C0 07            [24] 2881 	push	ar7
      000D9B C0 06            [24] 2882 	push	ar6
      000D9D C0 05            [24] 2883 	push	ar5
      000D9F C0 04            [24] 2884 	push	ar4
      000DA1 C0 03            [24] 2885 	push	ar3
      000DA3 12 0C EE         [24] 2886 	lcall	_getchar
      000DA6 A9 82            [24] 2887 	mov	r1,dpl
      000DA8 D0 03            [24] 2888 	pop	ar3
      000DAA D0 04            [24] 2889 	pop	ar4
      000DAC D0 05            [24] 2890 	pop	ar5
      000DAE D0 06            [24] 2891 	pop	ar6
      000DB0 D0 07            [24] 2892 	pop	ar7
      000DB2 8B 82            [24] 2893 	mov	dpl,r3
      000DB4 8C 83            [24] 2894 	mov	dph,r4
      000DB6 8D F0            [24] 2895 	mov	b,r5
      000DB8 E9               [12] 2896 	mov	a,r1
      000DB9 12 10 6E         [24] 2897 	lcall	__gptrput
      000DBC A3               [24] 2898 	inc	dptr
      000DBD AB 82            [24] 2899 	mov	r3,dpl
      000DBF AC 83            [24] 2900 	mov	r4,dph
                                   2901 ;	main.c:337: i++;
      000DC1 0E               [12] 2902 	inc	r6
      000DC2 BE 00 01         [24] 2903 	cjne	r6,#0x00,00115$
      000DC5 0F               [12] 2904 	inc	r7
      000DC6                       2905 00115$:
                                   2906 ;	main.c:338: }while(*a++ != '\r');
      000DC6 90 14 03         [24] 2907 	mov	dptr,#_getstr_a_65536_105
      000DC9 EB               [12] 2908 	mov	a,r3
      000DCA F0               [24] 2909 	movx	@dptr,a
      000DCB EC               [12] 2910 	mov	a,r4
      000DCC A3               [24] 2911 	inc	dptr
      000DCD F0               [24] 2912 	movx	@dptr,a
      000DCE ED               [12] 2913 	mov	a,r5
      000DCF A3               [24] 2914 	inc	dptr
      000DD0 F0               [24] 2915 	movx	@dptr,a
      000DD1 B9 0D C5         [24] 2916 	cjne	r1,#0x0d,00101$
                                   2917 ;	main.c:340: *a = '\0';
      000DD4 90 14 03         [24] 2918 	mov	dptr,#_getstr_a_65536_105
      000DD7 EB               [12] 2919 	mov	a,r3
      000DD8 F0               [24] 2920 	movx	@dptr,a
      000DD9 EC               [12] 2921 	mov	a,r4
      000DDA A3               [24] 2922 	inc	dptr
      000DDB F0               [24] 2923 	movx	@dptr,a
      000DDC ED               [12] 2924 	mov	a,r5
      000DDD A3               [24] 2925 	inc	dptr
      000DDE F0               [24] 2926 	movx	@dptr,a
      000DDF 8B 82            [24] 2927 	mov	dpl,r3
      000DE1 8C 83            [24] 2928 	mov	dph,r4
      000DE3 8D F0            [24] 2929 	mov	b,r5
      000DE5 E4               [12] 2930 	clr	a
      000DE6 12 10 6E         [24] 2931 	lcall	__gptrput
                                   2932 ;	main.c:341: return i+1;
      000DE9 0E               [12] 2933 	inc	r6
      000DEA BE 00 01         [24] 2934 	cjne	r6,#0x00,00118$
      000DED 0F               [12] 2935 	inc	r7
      000DEE                       2936 00118$:
      000DEE 8E 82            [24] 2937 	mov	dpl,r6
      000DF0 8F 83            [24] 2938 	mov	dph,r7
                                   2939 ;	main.c:342: }
      000DF2 22               [24] 2940 	ret
                                   2941 	.area CSEG    (CODE)
                                   2942 	.area CONST   (CODE)
      00251D                       2943 ___sdcc_heap_size:
      00251D C0 12                 2944 	.byte #0xc0, #0x12	; 4800
                                   2945 	.area CONST   (CODE)
      00251F                       2946 ___str_8:
      00251F 73 69 7A 65 20 65 6E  2947 	.ascii "size entered= %d "
             74 65 72 65 64 3D 20
             25 64 20
      002530 0A                    2948 	.db 0x0a
      002531 0D                    2949 	.db 0x0d
      002532 00                    2950 	.db 0x00
                                   2951 	.area CSEG    (CODE)
                                   2952 	.area CONST   (CODE)
      002533                       2953 ___str_9:
      002533 42 75 66 66 65 72 30  2954 	.ascii "Buffer0 at location %p has size %d"
             20 61 74 20 6C 6F 63
             61 74 69 6F 6E 20 25
             70 20 68 61 73 20 73
             69 7A 65 20 25 64
      002555 0A                    2955 	.db 0x0a
      002556 0D                    2956 	.db 0x0d
      002557 00                    2957 	.db 0x00
                                   2958 	.area CSEG    (CODE)
                                   2959 	.area CONST   (CODE)
      002558                       2960 ___str_10:
      002558 42 75 66 66 65 72 31  2961 	.ascii "Buffer1 at location %p has size %d"
             20 61 74 20 6C 6F 63
             61 74 69 6F 6E 20 25
             70 20 68 61 73 20 73
             69 7A 65 20 25 64
      00257A 0A                    2962 	.db 0x0a
      00257B 0D                    2963 	.db 0x0d
      00257C 00                    2964 	.db 0x00
                                   2965 	.area CSEG    (CODE)
                                   2966 	.area CONST   (CODE)
      00257D                       2967 ___str_11:
      00257D 46 41 49 4C 49 4E 47  2968 	.ascii "FAILING HERE"
             20 48 45 52 45
      002589 00                    2969 	.db 0x00
                                   2970 	.area CSEG    (CODE)
                                   2971 	.area CONST   (CODE)
      00258A                       2972 ___str_12:
      00258A 62 75 66 66 65 72 30  2973 	.ascii "buffer0 & buffer1 not initialized"
             20 26 20 62 75 66 66
             65 72 31 20 6E 6F 74
             20 69 6E 69 74 69 61
             6C 69 7A 65 64
      0025AB 0A                    2974 	.db 0x0a
      0025AC 0D                    2975 	.db 0x0d
      0025AD 00                    2976 	.db 0x00
                                   2977 	.area CSEG    (CODE)
                                   2978 	.area CONST   (CODE)
      0025AE                       2979 ___str_13:
      0025AE 3C 3C 45 6E 74 65 72  2980 	.ascii "<<Enter command for operation>>"
             20 63 6F 6D 6D 61 6E
             64 20 66 6F 72 20 6F
             70 65 72 61 74 69 6F
             6E 3E 3E
      0025CD 0A                    2981 	.db 0x0a
      0025CE 0D                    2982 	.db 0x0d
      0025CF 00                    2983 	.db 0x00
                                   2984 	.area CSEG    (CODE)
                                   2985 	.area CONST   (CODE)
      0025D0                       2986 ___str_14:
      0025D0 73 74 6F 72 61 67 65  2987 	.ascii "storage character entered"
             20 63 68 61 72 61 63
             74 65 72 20 65 6E 74
             65 72 65 64
      0025E9 0A                    2988 	.db 0x0a
      0025EA 0D                    2989 	.db 0x0d
      0025EB 00                    2990 	.db 0x00
                                   2991 	.area CSEG    (CODE)
                                   2992 	.area CONST   (CODE)
      0025EC                       2993 ___str_15:
      0025EC 6E 6F 20 73 70 61 63  2994 	.ascii "no space in buffer0"
             65 20 69 6E 20 62 75
             66 66 65 72 30
      0025FF 00                    2995 	.db 0x00
                                   2996 	.area CSEG    (CODE)
                                   2997 	.area CONST   (CODE)
      002600                       2998 ___str_16:
      002600 73 74 6F 72 61 67 65  2999 	.ascii "storage character received= %c "
             20 63 68 61 72 61 63
             74 65 72 20 72 65 63
             65 69 76 65 64 3D 20
             25 63 20
      00261F 0A                    3000 	.db 0x0a
      002620 0D                    3001 	.db 0x0d
      002621 00                    3002 	.db 0x00
                                   3003 	.area CSEG    (CODE)
                                   3004 	.area CONST   (CODE)
      002622                       3005 ___str_19:
      002622 6E 65 77 20 62 75 66  3006 	.ascii "new buffer%d at location %p has size %d"
             66 65 72 25 64 20 61
             74 20 6C 6F 63 61 74
             69 6F 6E 20 25 70 20
             68 61 73 20 73 69 7A
             65 20 25 64
      002649 0A                    3007 	.db 0x0a
      00264A 0D                    3008 	.db 0x0d
      00264B 00                    3009 	.db 0x00
                                   3010 	.area CSEG    (CODE)
                                   3011 	.area CONST   (CODE)
      00264C                       3012 ___str_20:
      00264C 41 6C 6C 6F 63 61 74  3013 	.ascii "Allocation limit reached"
             69 6F 6E 20 6C 69 6D
             69 74 20 72 65 61 63
             68 65 64
      002664 0A                    3014 	.db 0x0a
      002665 0D                    3015 	.db 0x0d
      002666 00                    3016 	.db 0x00
                                   3017 	.area CSEG    (CODE)
                                   3018 	.area CONST   (CODE)
      002667                       3019 ___str_21:
      002667 45 6E 74 65 72 20 62  3020 	.ascii "Enter buffer size between 30 & 300"
             75 66 66 65 72 20 73
             69 7A 65 20 62 65 74
             77 65 65 6E 20 33 30
             20 26 20 33 30 30
      002689 0A                    3021 	.db 0x0a
      00268A 0D                    3022 	.db 0x0d
      00268B 00                    3023 	.db 0x00
                                   3024 	.area CSEG    (CODE)
                                   3025 	.area CONST   (CODE)
      00268C                       3026 ___str_24:
      00268C 43 61 6E 6E 6F 74 20  3027 	.ascii "Cannot delete buffer0 "
             64 65 6C 65 74 65 20
             62 75 66 66 65 72 30
             20
      0026A2 0A                    3028 	.db 0x0a
      0026A3 0D                    3029 	.db 0x0d
      0026A4 00                    3030 	.db 0x00
                                   3031 	.area CSEG    (CODE)
                                   3032 	.area CONST   (CODE)
      0026A5                       3033 ___str_25:
      0026A5 53 69 7A 65 20 6F 66  3034 	.ascii "Size of deleted Buffer %d"
             20 64 65 6C 65 74 65
             64 20 42 75 66 66 65
             72 20 25 64
      0026BE 00                    3035 	.db 0x00
                                   3036 	.area CSEG    (CODE)
                                   3037 	.area CONST   (CODE)
      0026BF                       3038 ___str_26:
      0026BF 44 65 6C 65 74 65 64  3039 	.ascii "Deleted the buffer %d "
             20 74 68 65 20 62 75
             66 66 65 72 20 25 64
             20
      0026D5 0A                    3040 	.db 0x0a
      0026D6 0D                    3041 	.db 0x0d
      0026D7 00                    3042 	.db 0x00
                                   3043 	.area CSEG    (CODE)
                                   3044 	.area CONST   (CODE)
      0026D8                       3045 ___str_27:
      0026D8 3F 20 53 79 6D 62 6F  3046 	.ascii "? Symbol received "
             6C 20 72 65 63 65 69
             76 65 64 20
      0026EA 0A                    3047 	.db 0x0a
      0026EB 0D                    3048 	.db 0x0d
      0026EC 00                    3049 	.db 0x00
                                   3050 	.area CSEG    (CODE)
                                   3051 	.area CONST   (CODE)
      0026ED                       3052 ___str_28:
      0026ED 54 6F 74 61 6C 20 6E  3053 	.ascii "Total number of characters received since last ?= %d "
             75 6D 62 65 72 20 6F
             66 20 63 68 61 72 61
             63 74 65 72 73 20 72
             65 63 65 69 76 65 64
             20 73 69 6E 63 65 20
             6C 61 73 74 20 3F 3D
             20 25 64 20
      002722 0A                    3054 	.db 0x0a
      002723 0D                    3055 	.db 0x0d
      002724 00                    3056 	.db 0x00
                                   3057 	.area CSEG    (CODE)
                                   3058 	.area CONST   (CODE)
      002725                       3059 ___str_29:
      002725 2D 2D 2D 2D 2D 2D 2D  3060 	.ascii "--------------------Buffer0 details------------------------"
             2D 2D 2D 2D 2D 2D 2D
             2D 2D 2D 2D 2D 2D 42
             75 66 66 65 72 30 20
             64 65 74 61 69 6C 73
             2D 2D 2D 2D 2D 2D 2D
             2D 2D 2D 2D 2D 2D 2D
             2D 2D 2D 2D 2D 2D 2D
             2D 2D 2D
      002760 0A                    3061 	.db 0x0a
      002761 0D                    3062 	.db 0x0d
      002762 00                    3063 	.db 0x00
                                   3064 	.area CSEG    (CODE)
                                   3065 	.area CONST   (CODE)
      002763                       3066 ___str_30:
      002763 42 75 66 66 65 72 20  3067 	.ascii "Buffer number= %d "
             6E 75 6D 62 65 72 3D
             20 25 64 20
      002775 0A                    3068 	.db 0x0a
      002776 0D                    3069 	.db 0x0d
      002777 00                    3070 	.db 0x00
                                   3071 	.area CSEG    (CODE)
                                   3072 	.area CONST   (CODE)
      002778                       3073 ___str_31:
      002778 42 75 66 66 65 72 20  3074 	.ascii "Buffer start address= %p "
             73 74 61 72 74 20 61
             64 64 72 65 73 73 3D
             20 25 70 20
      002791 0A                    3075 	.db 0x0a
      002792 0D                    3076 	.db 0x0d
      002793 00                    3077 	.db 0x00
                                   3078 	.area CSEG    (CODE)
                                   3079 	.area CONST   (CODE)
      002794                       3080 ___str_32:
      002794 42 75 66 66 65 72 20  3081 	.ascii "Buffer end address= %p "
             65 6E 64 20 61 64 64
             72 65 73 73 3D 20 25
             70 20
      0027AB 0A                    3082 	.db 0x0a
      0027AC 0D                    3083 	.db 0x0d
      0027AD 00                    3084 	.db 0x00
                                   3085 	.area CSEG    (CODE)
                                   3086 	.area CONST   (CODE)
      0027AE                       3087 ___str_33:
      0027AE 42 75 66 66 65 72 20  3088 	.ascii "Buffer size= %d "
             73 69 7A 65 3D 20 25
             64 20
      0027BE 0A                    3089 	.db 0x0a
      0027BF 0D                    3090 	.db 0x0d
      0027C0 00                    3091 	.db 0x00
                                   3092 	.area CSEG    (CODE)
                                   3093 	.area CONST   (CODE)
      0027C1                       3094 ___str_34:
      0027C1 4E 75 6D 62 65 72 20  3095 	.ascii "Number of storage characters in buffer0= %d "
             6F 66 20 73 74 6F 72
             61 67 65 20 63 68 61
             72 61 63 74 65 72 73
             20 69 6E 20 62 75 66
             66 65 72 30 3D 20 25
             64 20
      0027ED 0A                    3096 	.db 0x0a
      0027EE 0D                    3097 	.db 0x0d
      0027EF 00                    3098 	.db 0x00
                                   3099 	.area CSEG    (CODE)
                                   3100 	.area CONST   (CODE)
      0027F0                       3101 ___str_35:
      0027F0 41 6D 6F 75 6E 74 20  3102 	.ascii "Amount of free space in buffer0= %d "
             6F 66 20 66 72 65 65
             20 73 70 61 63 65 20
             69 6E 20 62 75 66 66
             65 72 30 3D 20 25 64
             20
      002814 0A                    3103 	.db 0x0a
      002815 0D                    3104 	.db 0x0d
      002816 00                    3105 	.db 0x00
                                   3106 	.area CSEG    (CODE)
                                   3107 	.area CONST   (CODE)
      002817                       3108 ___str_36:
      002817 2D 2D 2D 2D 2D 2D 2D  3109 	.ascii "----------------------Buffer %d details --------------------"
             2D 2D 2D 2D 2D 2D 2D
             2D 2D 2D 2D 2D 2D 2D
             2D 42 75 66 66 65 72
             20 25 64 20 64 65 74
             61 69 6C 73 20 2D 2D
             2D 2D 2D 2D 2D 2D 2D
             2D 2D 2D 2D 2D 2D 2D
             2D 2D 2D 2D
      002853 2D 2D 2D 2D           3110 	.ascii "----"
      002857 0A                    3111 	.db 0x0a
      002858 0D                    3112 	.db 0x0d
      002859 00                    3113 	.db 0x00
                                   3114 	.area CSEG    (CODE)
                                   3115 	.area CONST   (CODE)
      00285A                       3116 ___str_37:
      00285A 2A 2A 2A 2A 2A 2A 2A  3117 	.ascii "**********Storage characters at Buffer0:**********"
             2A 2A 2A 53 74 6F 72
             61 67 65 20 63 68 61
             72 61 63 74 65 72 73
             20 61 74 20 42 75 66
             66 65 72 30 3A 2A 2A
             2A 2A 2A 2A 2A 2A 2A
             2A
      00288C 0D                    3118 	.db 0x0d
      00288D 00                    3119 	.db 0x00
                                   3120 	.area CSEG    (CODE)
                                   3121 	.area CONST   (CODE)
      00288E                       3122 ___str_38:
      00288E 25 63                 3123 	.ascii "%c"
      002890 0A                    3124 	.db 0x0a
      002891 0D                    3125 	.db 0x0d
      002892 00                    3126 	.db 0x00
                                   3127 	.area CSEG    (CODE)
                                   3128 	.area CONST   (CODE)
      002893                       3129 ___str_39:
      002893 25 63 20              3130 	.ascii "%c "
      002896 00                    3131 	.db 0x00
                                   3132 	.area CSEG    (CODE)
                                   3133 	.area CONST   (CODE)
      002897                       3134 ___str_40:
      002897 0A                    3135 	.db 0x0a
      002898 0D                    3136 	.db 0x0d
      002899 00                    3137 	.db 0x00
                                   3138 	.area CSEG    (CODE)
                                   3139 	.area CONST   (CODE)
      00289A                       3140 ___str_45:
      00289A 43 6F 6D 6D 61 6E 64  3141 	.ascii "Command symbol received "
             20 73 79 6D 62 6F 6C
             20 72 65 63 65 69 76
             65 64 20
      0028B2 0A                    3142 	.db 0x0a
      0028B3 0D                    3143 	.db 0x0d
      0028B4 00                    3144 	.db 0x00
                                   3145 	.area CSEG    (CODE)
                                   3146 	.area CONST   (CODE)
      0028B5                       3147 ___str_46:
      0028B5 43 6F 6D 6D 61 6E 64  3148 	.ascii "Command character= %c "
             20 63 68 61 72 61 63
             74 65 72 3D 20 25 63
             20
      0028CB 0A                    3149 	.db 0x0a
      0028CC 0D                    3150 	.db 0x0d
      0028CD 00                    3151 	.db 0x00
                                   3152 	.area CSEG    (CODE)
                                   3153 	.area CONST   (CODE)
      0028CE                       3154 ___str_53:
      0028CE 43 6F 6D 6D 61 6E 64  3155 	.ascii "Command characters to do the following actions"
             20 63 68 61 72 61 63
             74 65 72 73 20 74 6F
             20 64 6F 20 74 68 65
             20 66 6F 6C 6C 6F 77
             69 6E 67 20 61 63 74
             69 6F 6E 73
      0028FC 0D                    3156 	.db 0x0d
      0028FD 0A                    3157 	.db 0x0a
      0028FE 55 70 70 65 72 20 63  3158 	.ascii "Upper cases letter are storage characters and are stored in "
             61 73 65 73 20 6C 65
             74 74 65 72 20 61 72
             65 20 73 74 6F 72 61
             67 65 20 63 68 61 72
             61 63 74 65 72 73 20
             61 6E 64 20 61 72 65
             20 73 74 6F 72 65 64
             20 69 6E 20
      00293A 62 75 66 66 65 72 30  3159 	.ascii "buffer0"
      002941 0D                    3160 	.db 0x0d
      002942 0A                    3161 	.db 0x0a
      002943 54 68 65 20 27 2B 27  3162 	.ascii "The '+' character adds a new buffer"
             20 63 68 61 72 61 63
             74 65 72 20 61 64 64
             73 20 61 20 6E 65 77
             20 62 75 66 66 65 72
      002966 0D                    3163 	.db 0x0d
      002967 0A                    3164 	.db 0x0a
      002968 54 68 65 20 27 2D 27  3165 	.ascii "The '-' character deletes the entered buffer"
             20 63 68 61 72 61 63
             74 65 72 20 64 65 6C
             65 74 65 73 20 74 68
             65 20 65 6E 74 65 72
             65 64 20 62 75 66 66
             65 72
      002994 0D                    3166 	.db 0x0d
      002995 0A                    3167 	.db 0x0a
      002996 54 68 65 20 27 3F 27  3168 	.ascii "The '?' character gives details of all buffers"
             20 63 68 61 72 61 63
             74 65 72 20 67 69 76
             65 73 20 64 65 74 61
             69 6C 73 20 6F 66 20
             61 6C 6C 20 62 75 66
             66 65 72 73
      0029C4 0D                    3169 	.db 0x0d
      0029C5 0A                    3170 	.db 0x0a
      0029C6 54 68 65 20 27 3D 27  3171 	.ascii "The '=' character gives hex values of characters in buffer0"
             20 63 68 61 72 61 63
             74 65 72 20 67 69 76
             65 73 20 68 65 78 20
             76 61 6C 75 65 73 20
             6F 66 20 63 68 61 72
             61 63 74 65 72 73 20
             69 6E 20 62 75 66 66
             65 72 30
      002A01 0D                    3172 	.db 0x0d
      002A02 0A                    3173 	.db 0x0a
      002A03 54 68 65 20 27 40 27  3174 	.ascii "The '@' character frees all buffers"
             20 63 68 61 72 61 63
             74 65 72 20 66 72 65
             65 73 20 61 6C 6C 20
             62 75 66 66 65 72 73
      002A26 0D                    3175 	.db 0x0d
      002A27 0A                    3176 	.db 0x0a
      002A28 45 6E 74 65 72 20 74  3177 	.ascii "Enter the size between 48-4800 to allocate buffers"
             68 65 20 73 69 7A 65
             20 62 65 74 77 65 65
             6E 20 34 38 2D 34 38
             30 30 20 74 6F 20 61
             6C 6C 6F 63 61 74 65
             20 62 75 66 66 65 72
             73
      002A5A 0A                    3178 	.db 0x0a
      002A5B 0D                    3179 	.db 0x0d
      002A5C 00                    3180 	.db 0x00
                                   3181 	.area CSEG    (CODE)
                                   3182 	.area CONST   (CODE)
      002A5D                       3183 ___str_54:
      002A5D 2B 20 53 79 6D 62 6F  3184 	.ascii "+ Symbol received "
             6C 20 72 65 63 65 69
             76 65 64 20
      002A6F 0A                    3185 	.db 0x0a
      002A70 0D                    3186 	.db 0x0d
      002A71 0A                    3187 	.db 0x0a
      002A72 45 6E 74 65 72 20 6E  3188 	.ascii "Enter no of bytes between 30 & 300"
             6F 20 6F 66 20 62 79
             74 65 73 20 62 65 74
             77 65 65 6E 20 33 30
             20 26 20 33 30 30
      002A94 0A                    3189 	.db 0x0a
      002A95 0D                    3190 	.db 0x0d
      002A96 00                    3191 	.db 0x00
                                   3192 	.area CSEG    (CODE)
                                   3193 	.area CONST   (CODE)
      002A97                       3194 ___str_55:
      002A97 2D 20 53 79 6D 62 6F  3195 	.ascii "- Symbol received "
             6C 20 72 65 63 65 69
             76 65 64 20
      002AA9 0A                    3196 	.db 0x0a
      002AAA 0D                    3197 	.db 0x0d
      002AAB 0A                    3198 	.db 0x0a
      002AAC 45 6E 74 65 72 20 74  3199 	.ascii "Enter the buffer number to be deleted "
             68 65 20 62 75 66 66
             65 72 20 6E 75 6D 62
             65 72 20 74 6F 20 62
             65 20 64 65 6C 65 74
             65 64 20
      002AD2 0A                    3200 	.db 0x0a
      002AD3 0D                    3201 	.db 0x0d
      002AD4 00                    3202 	.db 0x00
                                   3203 	.area CSEG    (CODE)
                                   3204 	.area CONST   (CODE)
      002AD5                       3205 ___str_56:
      002AD5 3D 20 53 79 6D 62 6F  3206 	.ascii "= Symbol received "
             6C 20 72 65 63 65 69
             76 65 64 20
      002AE7 0A                    3207 	.db 0x0a
      002AE8 0D                    3208 	.db 0x0d
      002AE9 0A                    3209 	.db 0x0a
      002AEA 48 65 78 61 64 65 63  3210 	.ascii "Hexadecimal values of storage characters at Buffer0 "
             69 6D 61 6C 20 76 61
             6C 75 65 73 20 6F 66
             20 73 74 6F 72 61 67
             65 20 63 68 61 72 61
             63 74 65 72 73 20 61
             74 20 42 75 66 66 65
             72 30 20
      002B1E 0A                    3211 	.db 0x0a
      002B1F 0D                    3212 	.db 0x0d
      002B20 00                    3213 	.db 0x00
                                   3214 	.area CSEG    (CODE)
                                   3215 	.area CONST   (CODE)
      002B21                       3216 ___str_57:
      002B21 40 20 53 79 6D 62 6F  3217 	.ascii "@ Symbol received "
             6C 20 72 65 63 65 69
             76 65 64 20
      002B33 0A                    3218 	.db 0x0a
      002B34 0D                    3219 	.db 0x0d
      002B35 0A                    3220 	.db 0x0a
      002B36 46 72 65 65 69 6E 67  3221 	.ascii "Freeing all buffers "
             20 61 6C 6C 20 62 75
             66 66 65 72 73 20
      002B4A 0A                    3222 	.db 0x0a
      002B4B 0D                    3223 	.db 0x0d
      002B4C 00                    3224 	.db 0x00
                                   3225 	.area CSEG    (CODE)
                                   3226 	.area CONST   (CODE)
      002B4D                       3227 ___str_58:
      002B4D 20 20 25 73           3228 	.ascii "  %s"
      002B51 0A                    3229 	.db 0x0a
      002B52 0D                    3230 	.db 0x0d
      002B53 00                    3231 	.db 0x00
                                   3232 	.area CSEG    (CODE)
                                   3233 	.area CONST   (CODE)
      002B54                       3234 ___str_59:
      002B54 20 20 25 30 34 78 20  3235 	.ascii "  %04x "
      002B5B 00                    3236 	.db 0x00
                                   3237 	.area CSEG    (CODE)
                                   3238 	.area CONST   (CODE)
      002B5C                       3239 ___str_60:
      002B5C 20 25 30 32 78        3240 	.ascii " %02x"
      002B61 00                    3241 	.db 0x00
                                   3242 	.area CSEG    (CODE)
                                   3243 	.area CONST   (CODE)
      002B62                       3244 ___str_61:
      002B62 20 20 20              3245 	.ascii "   "
      002B65 00                    3246 	.db 0x00
                                   3247 	.area CSEG    (CODE)
                                   3248 	.area XINIT   (CODE)
                                   3249 	.area CABS    (ABS,CODE)
