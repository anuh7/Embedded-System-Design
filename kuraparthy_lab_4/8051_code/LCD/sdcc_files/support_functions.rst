                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module support_functions
                                      6 	.optsdcc -mmcs51 --model-large
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _TF1
                                     12 	.globl _TR1
                                     13 	.globl _TF0
                                     14 	.globl _TR0
                                     15 	.globl _IE1
                                     16 	.globl _IT1
                                     17 	.globl _IE0
                                     18 	.globl _IT0
                                     19 	.globl _SM0
                                     20 	.globl _SM1
                                     21 	.globl _SM2
                                     22 	.globl _REN
                                     23 	.globl _TB8
                                     24 	.globl _RB8
                                     25 	.globl _TI
                                     26 	.globl _RI
                                     27 	.globl _CY
                                     28 	.globl _AC
                                     29 	.globl _F0
                                     30 	.globl _RS1
                                     31 	.globl _RS0
                                     32 	.globl _OV
                                     33 	.globl _F1
                                     34 	.globl _P
                                     35 	.globl _RD
                                     36 	.globl _WR
                                     37 	.globl _T1
                                     38 	.globl _T0
                                     39 	.globl _INT1
                                     40 	.globl _INT0
                                     41 	.globl _TXD0
                                     42 	.globl _TXD
                                     43 	.globl _RXD0
                                     44 	.globl _RXD
                                     45 	.globl _P3_7
                                     46 	.globl _P3_6
                                     47 	.globl _P3_5
                                     48 	.globl _P3_4
                                     49 	.globl _P3_3
                                     50 	.globl _P3_2
                                     51 	.globl _P3_1
                                     52 	.globl _P3_0
                                     53 	.globl _P2_7
                                     54 	.globl _P2_6
                                     55 	.globl _P2_5
                                     56 	.globl _P2_4
                                     57 	.globl _P2_3
                                     58 	.globl _P2_2
                                     59 	.globl _P2_1
                                     60 	.globl _P2_0
                                     61 	.globl _P1_7
                                     62 	.globl _P1_6
                                     63 	.globl _P1_5
                                     64 	.globl _P1_4
                                     65 	.globl _P1_3
                                     66 	.globl _P1_2
                                     67 	.globl _P1_1
                                     68 	.globl _P1_0
                                     69 	.globl _P0_7
                                     70 	.globl _P0_6
                                     71 	.globl _P0_5
                                     72 	.globl _P0_4
                                     73 	.globl _P0_3
                                     74 	.globl _P0_2
                                     75 	.globl _P0_1
                                     76 	.globl _P0_0
                                     77 	.globl _PS
                                     78 	.globl _PT1
                                     79 	.globl _PX1
                                     80 	.globl _PT0
                                     81 	.globl _PX0
                                     82 	.globl _EA
                                     83 	.globl _ES
                                     84 	.globl _ET1
                                     85 	.globl _EX1
                                     86 	.globl _ET0
                                     87 	.globl _EX0
                                     88 	.globl _BREG_F7
                                     89 	.globl _BREG_F6
                                     90 	.globl _BREG_F5
                                     91 	.globl _BREG_F4
                                     92 	.globl _BREG_F3
                                     93 	.globl _BREG_F2
                                     94 	.globl _BREG_F1
                                     95 	.globl _BREG_F0
                                     96 	.globl _P5_7
                                     97 	.globl _P5_6
                                     98 	.globl _P5_5
                                     99 	.globl _P5_4
                                    100 	.globl _P5_3
                                    101 	.globl _P5_2
                                    102 	.globl _P5_1
                                    103 	.globl _P5_0
                                    104 	.globl _P4_7
                                    105 	.globl _P4_6
                                    106 	.globl _P4_5
                                    107 	.globl _P4_4
                                    108 	.globl _P4_3
                                    109 	.globl _P4_2
                                    110 	.globl _P4_1
                                    111 	.globl _P4_0
                                    112 	.globl _PX0L
                                    113 	.globl _PT0L
                                    114 	.globl _PX1L
                                    115 	.globl _PT1L
                                    116 	.globl _PSL
                                    117 	.globl _PT2L
                                    118 	.globl _PPCL
                                    119 	.globl _EC
                                    120 	.globl _CCF0
                                    121 	.globl _CCF1
                                    122 	.globl _CCF2
                                    123 	.globl _CCF3
                                    124 	.globl _CCF4
                                    125 	.globl _CR
                                    126 	.globl _CF
                                    127 	.globl _TF2
                                    128 	.globl _EXF2
                                    129 	.globl _RCLK
                                    130 	.globl _TCLK
                                    131 	.globl _EXEN2
                                    132 	.globl _TR2
                                    133 	.globl _C_T2
                                    134 	.globl _CP_RL2
                                    135 	.globl _T2CON_7
                                    136 	.globl _T2CON_6
                                    137 	.globl _T2CON_5
                                    138 	.globl _T2CON_4
                                    139 	.globl _T2CON_3
                                    140 	.globl _T2CON_2
                                    141 	.globl _T2CON_1
                                    142 	.globl _T2CON_0
                                    143 	.globl _PT2
                                    144 	.globl _ET2
                                    145 	.globl _TMOD
                                    146 	.globl _TL1
                                    147 	.globl _TL0
                                    148 	.globl _TH1
                                    149 	.globl _TH0
                                    150 	.globl _TCON
                                    151 	.globl _SP
                                    152 	.globl _SCON
                                    153 	.globl _SBUF0
                                    154 	.globl _SBUF
                                    155 	.globl _PSW
                                    156 	.globl _PCON
                                    157 	.globl _P3
                                    158 	.globl _P2
                                    159 	.globl _P1
                                    160 	.globl _P0
                                    161 	.globl _IP
                                    162 	.globl _IE
                                    163 	.globl _DP0L
                                    164 	.globl _DPL
                                    165 	.globl _DP0H
                                    166 	.globl _DPH
                                    167 	.globl _B
                                    168 	.globl _ACC
                                    169 	.globl _EECON
                                    170 	.globl _KBF
                                    171 	.globl _KBE
                                    172 	.globl _KBLS
                                    173 	.globl _BRL
                                    174 	.globl _BDRCON
                                    175 	.globl _T2MOD
                                    176 	.globl _SPDAT
                                    177 	.globl _SPSTA
                                    178 	.globl _SPCON
                                    179 	.globl _SADEN
                                    180 	.globl _SADDR
                                    181 	.globl _WDTPRG
                                    182 	.globl _WDTRST
                                    183 	.globl _P5
                                    184 	.globl _P4
                                    185 	.globl _IPH1
                                    186 	.globl _IPL1
                                    187 	.globl _IPH0
                                    188 	.globl _IPL0
                                    189 	.globl _IEN1
                                    190 	.globl _IEN0
                                    191 	.globl _CMOD
                                    192 	.globl _CL
                                    193 	.globl _CH
                                    194 	.globl _CCON
                                    195 	.globl _CCAPM4
                                    196 	.globl _CCAPM3
                                    197 	.globl _CCAPM2
                                    198 	.globl _CCAPM1
                                    199 	.globl _CCAPM0
                                    200 	.globl _CCAP4L
                                    201 	.globl _CCAP3L
                                    202 	.globl _CCAP2L
                                    203 	.globl _CCAP1L
                                    204 	.globl _CCAP0L
                                    205 	.globl _CCAP4H
                                    206 	.globl _CCAP3H
                                    207 	.globl _CCAP2H
                                    208 	.globl _CCAP1H
                                    209 	.globl _CCAP0H
                                    210 	.globl _CKCON1
                                    211 	.globl _CKCON0
                                    212 	.globl _CKRL
                                    213 	.globl _AUXR1
                                    214 	.globl _AUXR
                                    215 	.globl _TH2
                                    216 	.globl _TL2
                                    217 	.globl _RCAP2H
                                    218 	.globl _RCAP2L
                                    219 	.globl _T2CON
                                    220 	.globl _serial_init
                                    221 	.globl _putchar
                                    222 	.globl _getchar
                                    223 	.globl _putstr
                                    224 	.globl _getstr
                                    225 ;--------------------------------------------------------
                                    226 ; special function registers
                                    227 ;--------------------------------------------------------
                                    228 	.area RSEG    (ABS,DATA)
      000000                        229 	.org 0x0000
                           0000C8   230 _T2CON	=	0x00c8
                           0000CA   231 _RCAP2L	=	0x00ca
                           0000CB   232 _RCAP2H	=	0x00cb
                           0000CC   233 _TL2	=	0x00cc
                           0000CD   234 _TH2	=	0x00cd
                           00008E   235 _AUXR	=	0x008e
                           0000A2   236 _AUXR1	=	0x00a2
                           000097   237 _CKRL	=	0x0097
                           00008F   238 _CKCON0	=	0x008f
                           0000AF   239 _CKCON1	=	0x00af
                           0000FA   240 _CCAP0H	=	0x00fa
                           0000FB   241 _CCAP1H	=	0x00fb
                           0000FC   242 _CCAP2H	=	0x00fc
                           0000FD   243 _CCAP3H	=	0x00fd
                           0000FE   244 _CCAP4H	=	0x00fe
                           0000EA   245 _CCAP0L	=	0x00ea
                           0000EB   246 _CCAP1L	=	0x00eb
                           0000EC   247 _CCAP2L	=	0x00ec
                           0000ED   248 _CCAP3L	=	0x00ed
                           0000EE   249 _CCAP4L	=	0x00ee
                           0000DA   250 _CCAPM0	=	0x00da
                           0000DB   251 _CCAPM1	=	0x00db
                           0000DC   252 _CCAPM2	=	0x00dc
                           0000DD   253 _CCAPM3	=	0x00dd
                           0000DE   254 _CCAPM4	=	0x00de
                           0000D8   255 _CCON	=	0x00d8
                           0000F9   256 _CH	=	0x00f9
                           0000E9   257 _CL	=	0x00e9
                           0000D9   258 _CMOD	=	0x00d9
                           0000A8   259 _IEN0	=	0x00a8
                           0000B1   260 _IEN1	=	0x00b1
                           0000B8   261 _IPL0	=	0x00b8
                           0000B7   262 _IPH0	=	0x00b7
                           0000B2   263 _IPL1	=	0x00b2
                           0000B3   264 _IPH1	=	0x00b3
                           0000C0   265 _P4	=	0x00c0
                           0000E8   266 _P5	=	0x00e8
                           0000A6   267 _WDTRST	=	0x00a6
                           0000A7   268 _WDTPRG	=	0x00a7
                           0000A9   269 _SADDR	=	0x00a9
                           0000B9   270 _SADEN	=	0x00b9
                           0000C3   271 _SPCON	=	0x00c3
                           0000C4   272 _SPSTA	=	0x00c4
                           0000C5   273 _SPDAT	=	0x00c5
                           0000C9   274 _T2MOD	=	0x00c9
                           00009B   275 _BDRCON	=	0x009b
                           00009A   276 _BRL	=	0x009a
                           00009C   277 _KBLS	=	0x009c
                           00009D   278 _KBE	=	0x009d
                           00009E   279 _KBF	=	0x009e
                           0000D2   280 _EECON	=	0x00d2
                           0000E0   281 _ACC	=	0x00e0
                           0000F0   282 _B	=	0x00f0
                           000083   283 _DPH	=	0x0083
                           000083   284 _DP0H	=	0x0083
                           000082   285 _DPL	=	0x0082
                           000082   286 _DP0L	=	0x0082
                           0000A8   287 _IE	=	0x00a8
                           0000B8   288 _IP	=	0x00b8
                           000080   289 _P0	=	0x0080
                           000090   290 _P1	=	0x0090
                           0000A0   291 _P2	=	0x00a0
                           0000B0   292 _P3	=	0x00b0
                           000087   293 _PCON	=	0x0087
                           0000D0   294 _PSW	=	0x00d0
                           000099   295 _SBUF	=	0x0099
                           000099   296 _SBUF0	=	0x0099
                           000098   297 _SCON	=	0x0098
                           000081   298 _SP	=	0x0081
                           000088   299 _TCON	=	0x0088
                           00008C   300 _TH0	=	0x008c
                           00008D   301 _TH1	=	0x008d
                           00008A   302 _TL0	=	0x008a
                           00008B   303 _TL1	=	0x008b
                           000089   304 _TMOD	=	0x0089
                                    305 ;--------------------------------------------------------
                                    306 ; special function bits
                                    307 ;--------------------------------------------------------
                                    308 	.area RSEG    (ABS,DATA)
      000000                        309 	.org 0x0000
                           0000AD   310 _ET2	=	0x00ad
                           0000BD   311 _PT2	=	0x00bd
                           0000C8   312 _T2CON_0	=	0x00c8
                           0000C9   313 _T2CON_1	=	0x00c9
                           0000CA   314 _T2CON_2	=	0x00ca
                           0000CB   315 _T2CON_3	=	0x00cb
                           0000CC   316 _T2CON_4	=	0x00cc
                           0000CD   317 _T2CON_5	=	0x00cd
                           0000CE   318 _T2CON_6	=	0x00ce
                           0000CF   319 _T2CON_7	=	0x00cf
                           0000C8   320 _CP_RL2	=	0x00c8
                           0000C9   321 _C_T2	=	0x00c9
                           0000CA   322 _TR2	=	0x00ca
                           0000CB   323 _EXEN2	=	0x00cb
                           0000CC   324 _TCLK	=	0x00cc
                           0000CD   325 _RCLK	=	0x00cd
                           0000CE   326 _EXF2	=	0x00ce
                           0000CF   327 _TF2	=	0x00cf
                           0000DF   328 _CF	=	0x00df
                           0000DE   329 _CR	=	0x00de
                           0000DC   330 _CCF4	=	0x00dc
                           0000DB   331 _CCF3	=	0x00db
                           0000DA   332 _CCF2	=	0x00da
                           0000D9   333 _CCF1	=	0x00d9
                           0000D8   334 _CCF0	=	0x00d8
                           0000AE   335 _EC	=	0x00ae
                           0000BE   336 _PPCL	=	0x00be
                           0000BD   337 _PT2L	=	0x00bd
                           0000BC   338 _PSL	=	0x00bc
                           0000BB   339 _PT1L	=	0x00bb
                           0000BA   340 _PX1L	=	0x00ba
                           0000B9   341 _PT0L	=	0x00b9
                           0000B8   342 _PX0L	=	0x00b8
                           0000C0   343 _P4_0	=	0x00c0
                           0000C1   344 _P4_1	=	0x00c1
                           0000C2   345 _P4_2	=	0x00c2
                           0000C3   346 _P4_3	=	0x00c3
                           0000C4   347 _P4_4	=	0x00c4
                           0000C5   348 _P4_5	=	0x00c5
                           0000C6   349 _P4_6	=	0x00c6
                           0000C7   350 _P4_7	=	0x00c7
                           0000E8   351 _P5_0	=	0x00e8
                           0000E9   352 _P5_1	=	0x00e9
                           0000EA   353 _P5_2	=	0x00ea
                           0000EB   354 _P5_3	=	0x00eb
                           0000EC   355 _P5_4	=	0x00ec
                           0000ED   356 _P5_5	=	0x00ed
                           0000EE   357 _P5_6	=	0x00ee
                           0000EF   358 _P5_7	=	0x00ef
                           0000F0   359 _BREG_F0	=	0x00f0
                           0000F1   360 _BREG_F1	=	0x00f1
                           0000F2   361 _BREG_F2	=	0x00f2
                           0000F3   362 _BREG_F3	=	0x00f3
                           0000F4   363 _BREG_F4	=	0x00f4
                           0000F5   364 _BREG_F5	=	0x00f5
                           0000F6   365 _BREG_F6	=	0x00f6
                           0000F7   366 _BREG_F7	=	0x00f7
                           0000A8   367 _EX0	=	0x00a8
                           0000A9   368 _ET0	=	0x00a9
                           0000AA   369 _EX1	=	0x00aa
                           0000AB   370 _ET1	=	0x00ab
                           0000AC   371 _ES	=	0x00ac
                           0000AF   372 _EA	=	0x00af
                           0000B8   373 _PX0	=	0x00b8
                           0000B9   374 _PT0	=	0x00b9
                           0000BA   375 _PX1	=	0x00ba
                           0000BB   376 _PT1	=	0x00bb
                           0000BC   377 _PS	=	0x00bc
                           000080   378 _P0_0	=	0x0080
                           000081   379 _P0_1	=	0x0081
                           000082   380 _P0_2	=	0x0082
                           000083   381 _P0_3	=	0x0083
                           000084   382 _P0_4	=	0x0084
                           000085   383 _P0_5	=	0x0085
                           000086   384 _P0_6	=	0x0086
                           000087   385 _P0_7	=	0x0087
                           000090   386 _P1_0	=	0x0090
                           000091   387 _P1_1	=	0x0091
                           000092   388 _P1_2	=	0x0092
                           000093   389 _P1_3	=	0x0093
                           000094   390 _P1_4	=	0x0094
                           000095   391 _P1_5	=	0x0095
                           000096   392 _P1_6	=	0x0096
                           000097   393 _P1_7	=	0x0097
                           0000A0   394 _P2_0	=	0x00a0
                           0000A1   395 _P2_1	=	0x00a1
                           0000A2   396 _P2_2	=	0x00a2
                           0000A3   397 _P2_3	=	0x00a3
                           0000A4   398 _P2_4	=	0x00a4
                           0000A5   399 _P2_5	=	0x00a5
                           0000A6   400 _P2_6	=	0x00a6
                           0000A7   401 _P2_7	=	0x00a7
                           0000B0   402 _P3_0	=	0x00b0
                           0000B1   403 _P3_1	=	0x00b1
                           0000B2   404 _P3_2	=	0x00b2
                           0000B3   405 _P3_3	=	0x00b3
                           0000B4   406 _P3_4	=	0x00b4
                           0000B5   407 _P3_5	=	0x00b5
                           0000B6   408 _P3_6	=	0x00b6
                           0000B7   409 _P3_7	=	0x00b7
                           0000B0   410 _RXD	=	0x00b0
                           0000B0   411 _RXD0	=	0x00b0
                           0000B1   412 _TXD	=	0x00b1
                           0000B1   413 _TXD0	=	0x00b1
                           0000B2   414 _INT0	=	0x00b2
                           0000B3   415 _INT1	=	0x00b3
                           0000B4   416 _T0	=	0x00b4
                           0000B5   417 _T1	=	0x00b5
                           0000B6   418 _WR	=	0x00b6
                           0000B7   419 _RD	=	0x00b7
                           0000D0   420 _P	=	0x00d0
                           0000D1   421 _F1	=	0x00d1
                           0000D2   422 _OV	=	0x00d2
                           0000D3   423 _RS0	=	0x00d3
                           0000D4   424 _RS1	=	0x00d4
                           0000D5   425 _F0	=	0x00d5
                           0000D6   426 _AC	=	0x00d6
                           0000D7   427 _CY	=	0x00d7
                           000098   428 _RI	=	0x0098
                           000099   429 _TI	=	0x0099
                           00009A   430 _RB8	=	0x009a
                           00009B   431 _TB8	=	0x009b
                           00009C   432 _REN	=	0x009c
                           00009D   433 _SM2	=	0x009d
                           00009E   434 _SM1	=	0x009e
                           00009F   435 _SM0	=	0x009f
                           000088   436 _IT0	=	0x0088
                           000089   437 _IE0	=	0x0089
                           00008A   438 _IT1	=	0x008a
                           00008B   439 _IE1	=	0x008b
                           00008C   440 _TR0	=	0x008c
                           00008D   441 _TF0	=	0x008d
                           00008E   442 _TR1	=	0x008e
                           00008F   443 _TF1	=	0x008f
                                    444 ;--------------------------------------------------------
                                    445 ; overlayable register banks
                                    446 ;--------------------------------------------------------
                                    447 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        448 	.ds 8
                                    449 ;--------------------------------------------------------
                                    450 ; internal ram data
                                    451 ;--------------------------------------------------------
                                    452 	.area DSEG    (DATA)
                                    453 ;--------------------------------------------------------
                                    454 ; overlayable items in internal ram
                                    455 ;--------------------------------------------------------
                                    456 ;--------------------------------------------------------
                                    457 ; indirectly addressable internal ram data
                                    458 ;--------------------------------------------------------
                                    459 	.area ISEG    (DATA)
                                    460 ;--------------------------------------------------------
                                    461 ; absolute internal ram data
                                    462 ;--------------------------------------------------------
                                    463 	.area IABS    (ABS,DATA)
                                    464 	.area IABS    (ABS,DATA)
                                    465 ;--------------------------------------------------------
                                    466 ; bit data
                                    467 ;--------------------------------------------------------
                                    468 	.area BSEG    (BIT)
                                    469 ;--------------------------------------------------------
                                    470 ; paged external ram data
                                    471 ;--------------------------------------------------------
                                    472 	.area PSEG    (PAG,XDATA)
                                    473 ;--------------------------------------------------------
                                    474 ; external ram data
                                    475 ;--------------------------------------------------------
                                    476 	.area XSEG    (XDATA)
      000057                        477 _putchar_c_65536_49:
      000057                        478 	.ds 2
      000059                        479 _putstr_s_65536_53:
      000059                        480 	.ds 3
      00005C                        481 _getstr_a_65536_56:
      00005C                        482 	.ds 3
                                    483 ;--------------------------------------------------------
                                    484 ; absolute external ram data
                                    485 ;--------------------------------------------------------
                                    486 	.area XABS    (ABS,XDATA)
                                    487 ;--------------------------------------------------------
                                    488 ; external initialized ram data
                                    489 ;--------------------------------------------------------
                                    490 	.area XISEG   (XDATA)
                                    491 	.area HOME    (CODE)
                                    492 	.area GSINIT0 (CODE)
                                    493 	.area GSINIT1 (CODE)
                                    494 	.area GSINIT2 (CODE)
                                    495 	.area GSINIT3 (CODE)
                                    496 	.area GSINIT4 (CODE)
                                    497 	.area GSINIT5 (CODE)
                                    498 	.area GSINIT  (CODE)
                                    499 	.area GSFINAL (CODE)
                                    500 	.area CSEG    (CODE)
                                    501 ;--------------------------------------------------------
                                    502 ; global & static initialisations
                                    503 ;--------------------------------------------------------
                                    504 	.area HOME    (CODE)
                                    505 	.area GSINIT  (CODE)
                                    506 	.area GSFINAL (CODE)
                                    507 	.area GSINIT  (CODE)
                                    508 ;--------------------------------------------------------
                                    509 ; Home
                                    510 ;--------------------------------------------------------
                                    511 	.area HOME    (CODE)
                                    512 	.area HOME    (CODE)
                                    513 ;--------------------------------------------------------
                                    514 ; code
                                    515 ;--------------------------------------------------------
                                    516 	.area CSEG    (CODE)
                                    517 ;------------------------------------------------------------
                                    518 ;Allocation info for local variables in function 'serial_init'
                                    519 ;------------------------------------------------------------
                                    520 ;	support_functions.c:27: void serial_init(void){
                                    521 ;	-----------------------------------------
                                    522 ;	 function serial_init
                                    523 ;	-----------------------------------------
      0007DB                        524 _serial_init:
                           000007   525 	ar7 = 0x07
                           000006   526 	ar6 = 0x06
                           000005   527 	ar5 = 0x05
                           000004   528 	ar4 = 0x04
                           000003   529 	ar3 = 0x03
                           000002   530 	ar2 = 0x02
                           000001   531 	ar1 = 0x01
                           000000   532 	ar0 = 0x00
                                    533 ;	support_functions.c:28: TMOD=0x20;
      0007DB 75 89 20         [24]  534 	mov	_TMOD,#0x20
                                    535 ;	support_functions.c:29: TH1=0xFD;
      0007DE 75 8D FD         [24]  536 	mov	_TH1,#0xfd
                                    537 ;	support_functions.c:30: SCON=0x50;
      0007E1 75 98 50         [24]  538 	mov	_SCON,#0x50
                                    539 ;	support_functions.c:31: TR1=1;
                                    540 ;	assignBit
      0007E4 D2 8E            [12]  541 	setb	_TR1
                                    542 ;	support_functions.c:32: TI=1;
                                    543 ;	assignBit
      0007E6 D2 99            [12]  544 	setb	_TI
                                    545 ;	support_functions.c:33: }
      0007E8 22               [24]  546 	ret
                                    547 ;------------------------------------------------------------
                                    548 ;Allocation info for local variables in function 'putchar'
                                    549 ;------------------------------------------------------------
                                    550 ;c                         Allocated with name '_putchar_c_65536_49'
                                    551 ;------------------------------------------------------------
                                    552 ;	support_functions.c:35: int putchar (int c)
                                    553 ;	-----------------------------------------
                                    554 ;	 function putchar
                                    555 ;	-----------------------------------------
      0007E9                        556 _putchar:
      0007E9 AF 83            [24]  557 	mov	r7,dph
      0007EB E5 82            [12]  558 	mov	a,dpl
      0007ED 90 00 57         [24]  559 	mov	dptr,#_putchar_c_65536_49
      0007F0 F0               [24]  560 	movx	@dptr,a
      0007F1 EF               [12]  561 	mov	a,r7
      0007F2 A3               [24]  562 	inc	dptr
      0007F3 F0               [24]  563 	movx	@dptr,a
                                    564 ;	support_functions.c:37: while (!TI);
      0007F4                        565 00101$:
      0007F4 30 99 FD         [24]  566 	jnb	_TI,00101$
                                    567 ;	support_functions.c:38: while (TI == 0);
      0007F7                        568 00104$:
      0007F7 30 99 FD         [24]  569 	jnb	_TI,00104$
                                    570 ;	support_functions.c:39: while ((SCON & 0x02) == 0);
      0007FA                        571 00107$:
      0007FA E5 98            [12]  572 	mov	a,_SCON
      0007FC 30 E1 FB         [24]  573 	jnb	acc.1,00107$
                                    574 ;	support_functions.c:41: SBUF = c;           // load serial port with transmit value
      0007FF 90 00 57         [24]  575 	mov	dptr,#_putchar_c_65536_49
      000802 E0               [24]  576 	movx	a,@dptr
      000803 FE               [12]  577 	mov	r6,a
      000804 A3               [24]  578 	inc	dptr
      000805 E0               [24]  579 	movx	a,@dptr
      000806 FF               [12]  580 	mov	r7,a
      000807 8E 99            [24]  581 	mov	_SBUF,r6
                                    582 ;	support_functions.c:42: TI = 0;             // clear TI flag
                                    583 ;	assignBit
      000809 C2 99            [12]  584 	clr	_TI
                                    585 ;	support_functions.c:44: return c;
      00080B 8E 82            [24]  586 	mov	dpl,r6
      00080D 8F 83            [24]  587 	mov	dph,r7
                                    588 ;	support_functions.c:45: }
      00080F 22               [24]  589 	ret
                                    590 ;------------------------------------------------------------
                                    591 ;Allocation info for local variables in function 'getchar'
                                    592 ;------------------------------------------------------------
                                    593 ;	support_functions.c:47: int getchar (void)
                                    594 ;	-----------------------------------------
                                    595 ;	 function getchar
                                    596 ;	-----------------------------------------
      000810                        597 _getchar:
                                    598 ;	support_functions.c:49: while (!RI);
      000810                        599 00101$:
      000810 30 98 FD         [24]  600 	jnb	_RI,00101$
                                    601 ;	support_functions.c:50: while ((SCON & 0x01) == 0);
      000813                        602 00104$:
      000813 E5 98            [12]  603 	mov	a,_SCON
      000815 30 E0 FB         [24]  604 	jnb	acc.0,00104$
                                    605 ;	support_functions.c:51: while (RI == 0);
      000818                        606 00107$:
                                    607 ;	support_functions.c:53: RI = 0;                         // clear RI flag
                                    608 ;	assignBit
      000818 10 98 02         [24]  609 	jbc	_RI,00130$
      00081B 80 FB            [24]  610 	sjmp	00107$
      00081D                        611 00130$:
                                    612 ;	support_functions.c:54: return SBUF;                    // return character from SBUF
      00081D AE 99            [24]  613 	mov	r6,_SBUF
      00081F 7F 00            [12]  614 	mov	r7,#0x00
      000821 8E 82            [24]  615 	mov	dpl,r6
      000823 8F 83            [24]  616 	mov	dph,r7
                                    617 ;	support_functions.c:55: }
      000825 22               [24]  618 	ret
                                    619 ;------------------------------------------------------------
                                    620 ;Allocation info for local variables in function 'putstr'
                                    621 ;------------------------------------------------------------
                                    622 ;s                         Allocated with name '_putstr_s_65536_53'
                                    623 ;i                         Allocated with name '_putstr_i_65536_54'
                                    624 ;------------------------------------------------------------
                                    625 ;	support_functions.c:57: int putstr (char *s)
                                    626 ;	-----------------------------------------
                                    627 ;	 function putstr
                                    628 ;	-----------------------------------------
      000826                        629 _putstr:
      000826 AF F0            [24]  630 	mov	r7,b
      000828 AE 83            [24]  631 	mov	r6,dph
      00082A E5 82            [12]  632 	mov	a,dpl
      00082C 90 00 59         [24]  633 	mov	dptr,#_putstr_s_65536_53
      00082F F0               [24]  634 	movx	@dptr,a
      000830 EE               [12]  635 	mov	a,r6
      000831 A3               [24]  636 	inc	dptr
      000832 F0               [24]  637 	movx	@dptr,a
      000833 EF               [12]  638 	mov	a,r7
      000834 A3               [24]  639 	inc	dptr
      000835 F0               [24]  640 	movx	@dptr,a
                                    641 ;	support_functions.c:60: while (*s){            // output characters until NULL found
      000836 90 00 59         [24]  642 	mov	dptr,#_putstr_s_65536_53
      000839 E0               [24]  643 	movx	a,@dptr
      00083A FD               [12]  644 	mov	r5,a
      00083B A3               [24]  645 	inc	dptr
      00083C E0               [24]  646 	movx	a,@dptr
      00083D FE               [12]  647 	mov	r6,a
      00083E A3               [24]  648 	inc	dptr
      00083F E0               [24]  649 	movx	a,@dptr
      000840 FF               [12]  650 	mov	r7,a
      000841 7B 00            [12]  651 	mov	r3,#0x00
      000843 7C 00            [12]  652 	mov	r4,#0x00
      000845                        653 00101$:
      000845 8D 82            [24]  654 	mov	dpl,r5
      000847 8E 83            [24]  655 	mov	dph,r6
      000849 8F F0            [24]  656 	mov	b,r7
      00084B 12 1F 88         [24]  657 	lcall	__gptrget
      00084E FA               [12]  658 	mov	r2,a
      00084F 60 36            [24]  659 	jz	00108$
                                    660 ;	support_functions.c:61: putchar(*s++);
      000851 0D               [12]  661 	inc	r5
      000852 BD 00 01         [24]  662 	cjne	r5,#0x00,00116$
      000855 0E               [12]  663 	inc	r6
      000856                        664 00116$:
      000856 90 00 59         [24]  665 	mov	dptr,#_putstr_s_65536_53
      000859 ED               [12]  666 	mov	a,r5
      00085A F0               [24]  667 	movx	@dptr,a
      00085B EE               [12]  668 	mov	a,r6
      00085C A3               [24]  669 	inc	dptr
      00085D F0               [24]  670 	movx	@dptr,a
      00085E EF               [12]  671 	mov	a,r7
      00085F A3               [24]  672 	inc	dptr
      000860 F0               [24]  673 	movx	@dptr,a
      000861 8A 01            [24]  674 	mov	ar1,r2
      000863 7A 00            [12]  675 	mov	r2,#0x00
      000865 89 82            [24]  676 	mov	dpl,r1
      000867 8A 83            [24]  677 	mov	dph,r2
      000869 C0 07            [24]  678 	push	ar7
      00086B C0 06            [24]  679 	push	ar6
      00086D C0 05            [24]  680 	push	ar5
      00086F C0 04            [24]  681 	push	ar4
      000871 C0 03            [24]  682 	push	ar3
      000873 12 07 E9         [24]  683 	lcall	_putchar
      000876 D0 03            [24]  684 	pop	ar3
      000878 D0 04            [24]  685 	pop	ar4
      00087A D0 05            [24]  686 	pop	ar5
      00087C D0 06            [24]  687 	pop	ar6
      00087E D0 07            [24]  688 	pop	ar7
                                    689 ;	support_functions.c:62: i++;
      000880 0B               [12]  690 	inc	r3
      000881 BB 00 C1         [24]  691 	cjne	r3,#0x00,00101$
      000884 0C               [12]  692 	inc	r4
      000885 80 BE            [24]  693 	sjmp	00101$
      000887                        694 00108$:
      000887 90 00 59         [24]  695 	mov	dptr,#_putstr_s_65536_53
      00088A ED               [12]  696 	mov	a,r5
      00088B F0               [24]  697 	movx	@dptr,a
      00088C EE               [12]  698 	mov	a,r6
      00088D A3               [24]  699 	inc	dptr
      00088E F0               [24]  700 	movx	@dptr,a
      00088F EF               [12]  701 	mov	a,r7
      000890 A3               [24]  702 	inc	dptr
      000891 F0               [24]  703 	movx	@dptr,a
                                    704 ;	support_functions.c:64: return i+1;
      000892 0B               [12]  705 	inc	r3
      000893 BB 00 01         [24]  706 	cjne	r3,#0x00,00118$
      000896 0C               [12]  707 	inc	r4
      000897                        708 00118$:
      000897 8B 82            [24]  709 	mov	dpl,r3
      000899 8C 83            [24]  710 	mov	dph,r4
                                    711 ;	support_functions.c:65: }
      00089B 22               [24]  712 	ret
                                    713 ;------------------------------------------------------------
                                    714 ;Allocation info for local variables in function 'getstr'
                                    715 ;------------------------------------------------------------
                                    716 ;a                         Allocated with name '_getstr_a_65536_56'
                                    717 ;i                         Allocated with name '_getstr_i_65536_57'
                                    718 ;------------------------------------------------------------
                                    719 ;	support_functions.c:67: int getstr(char *a)
                                    720 ;	-----------------------------------------
                                    721 ;	 function getstr
                                    722 ;	-----------------------------------------
      00089C                        723 _getstr:
      00089C AF F0            [24]  724 	mov	r7,b
      00089E AE 83            [24]  725 	mov	r6,dph
      0008A0 E5 82            [12]  726 	mov	a,dpl
      0008A2 90 00 5C         [24]  727 	mov	dptr,#_getstr_a_65536_56
      0008A5 F0               [24]  728 	movx	@dptr,a
      0008A6 EE               [12]  729 	mov	a,r6
      0008A7 A3               [24]  730 	inc	dptr
      0008A8 F0               [24]  731 	movx	@dptr,a
      0008A9 EF               [12]  732 	mov	a,r7
      0008AA A3               [24]  733 	inc	dptr
      0008AB F0               [24]  734 	movx	@dptr,a
                                    735 ;	support_functions.c:71: do{
      0008AC 7E 00            [12]  736 	mov	r6,#0x00
      0008AE 7F 00            [12]  737 	mov	r7,#0x00
      0008B0 90 00 5C         [24]  738 	mov	dptr,#_getstr_a_65536_56
      0008B3 E0               [24]  739 	movx	a,@dptr
      0008B4 FB               [12]  740 	mov	r3,a
      0008B5 A3               [24]  741 	inc	dptr
      0008B6 E0               [24]  742 	movx	a,@dptr
      0008B7 FC               [12]  743 	mov	r4,a
      0008B8 A3               [24]  744 	inc	dptr
      0008B9 E0               [24]  745 	movx	a,@dptr
      0008BA FD               [12]  746 	mov	r5,a
      0008BB                        747 00101$:
                                    748 ;	support_functions.c:72: *a = getchar();     //get characters till enter is found
      0008BB C0 07            [24]  749 	push	ar7
      0008BD C0 06            [24]  750 	push	ar6
      0008BF C0 05            [24]  751 	push	ar5
      0008C1 C0 04            [24]  752 	push	ar4
      0008C3 C0 03            [24]  753 	push	ar3
      0008C5 12 08 10         [24]  754 	lcall	_getchar
      0008C8 A9 82            [24]  755 	mov	r1,dpl
      0008CA D0 03            [24]  756 	pop	ar3
      0008CC D0 04            [24]  757 	pop	ar4
      0008CE D0 05            [24]  758 	pop	ar5
      0008D0 D0 06            [24]  759 	pop	ar6
      0008D2 D0 07            [24]  760 	pop	ar7
      0008D4 8B 82            [24]  761 	mov	dpl,r3
      0008D6 8C 83            [24]  762 	mov	dph,r4
      0008D8 8D F0            [24]  763 	mov	b,r5
      0008DA E9               [12]  764 	mov	a,r1
      0008DB 12 0E 60         [24]  765 	lcall	__gptrput
      0008DE A3               [24]  766 	inc	dptr
      0008DF AB 82            [24]  767 	mov	r3,dpl
      0008E1 AC 83            [24]  768 	mov	r4,dph
                                    769 ;	support_functions.c:73: i++;
      0008E3 0E               [12]  770 	inc	r6
      0008E4 BE 00 01         [24]  771 	cjne	r6,#0x00,00115$
      0008E7 0F               [12]  772 	inc	r7
      0008E8                        773 00115$:
                                    774 ;	support_functions.c:74: }while(*a++ != '\r');
      0008E8 90 00 5C         [24]  775 	mov	dptr,#_getstr_a_65536_56
      0008EB EB               [12]  776 	mov	a,r3
      0008EC F0               [24]  777 	movx	@dptr,a
      0008ED EC               [12]  778 	mov	a,r4
      0008EE A3               [24]  779 	inc	dptr
      0008EF F0               [24]  780 	movx	@dptr,a
      0008F0 ED               [12]  781 	mov	a,r5
      0008F1 A3               [24]  782 	inc	dptr
      0008F2 F0               [24]  783 	movx	@dptr,a
      0008F3 B9 0D C5         [24]  784 	cjne	r1,#0x0d,00101$
                                    785 ;	support_functions.c:76: *a = '\0';          //append null character to string
      0008F6 90 00 5C         [24]  786 	mov	dptr,#_getstr_a_65536_56
      0008F9 EB               [12]  787 	mov	a,r3
      0008FA F0               [24]  788 	movx	@dptr,a
      0008FB EC               [12]  789 	mov	a,r4
      0008FC A3               [24]  790 	inc	dptr
      0008FD F0               [24]  791 	movx	@dptr,a
      0008FE ED               [12]  792 	mov	a,r5
      0008FF A3               [24]  793 	inc	dptr
      000900 F0               [24]  794 	movx	@dptr,a
      000901 8B 82            [24]  795 	mov	dpl,r3
      000903 8C 83            [24]  796 	mov	dph,r4
      000905 8D F0            [24]  797 	mov	b,r5
      000907 E4               [12]  798 	clr	a
      000908 12 0E 60         [24]  799 	lcall	__gptrput
                                    800 ;	support_functions.c:77: return i+1;
      00090B 0E               [12]  801 	inc	r6
      00090C BE 00 01         [24]  802 	cjne	r6,#0x00,00118$
      00090F 0F               [12]  803 	inc	r7
      000910                        804 00118$:
      000910 8E 82            [24]  805 	mov	dpl,r6
      000912 8F 83            [24]  806 	mov	dph,r7
                                    807 ;	support_functions.c:78: }
      000914 22               [24]  808 	ret
                                    809 	.area CSEG    (CODE)
                                    810 	.area CONST   (CODE)
                                    811 	.area XINIT   (CODE)
                                    812 	.area CABS    (ABS,CODE)
