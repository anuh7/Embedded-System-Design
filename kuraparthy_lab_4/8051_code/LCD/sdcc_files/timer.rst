                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module timer
                                      6 	.optsdcc -mmcs51 --model-large
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _lcdgotoaddress
                                     12 	.globl _lcdputch_timer
                                     13 	.globl _TF1
                                     14 	.globl _TR1
                                     15 	.globl _TF0
                                     16 	.globl _TR0
                                     17 	.globl _IE1
                                     18 	.globl _IT1
                                     19 	.globl _IE0
                                     20 	.globl _IT0
                                     21 	.globl _SM0
                                     22 	.globl _SM1
                                     23 	.globl _SM2
                                     24 	.globl _REN
                                     25 	.globl _TB8
                                     26 	.globl _RB8
                                     27 	.globl _TI
                                     28 	.globl _RI
                                     29 	.globl _CY
                                     30 	.globl _AC
                                     31 	.globl _F0
                                     32 	.globl _RS1
                                     33 	.globl _RS0
                                     34 	.globl _OV
                                     35 	.globl _F1
                                     36 	.globl _P
                                     37 	.globl _RD
                                     38 	.globl _WR
                                     39 	.globl _T1
                                     40 	.globl _T0
                                     41 	.globl _INT1
                                     42 	.globl _INT0
                                     43 	.globl _TXD0
                                     44 	.globl _TXD
                                     45 	.globl _RXD0
                                     46 	.globl _RXD
                                     47 	.globl _P3_7
                                     48 	.globl _P3_6
                                     49 	.globl _P3_5
                                     50 	.globl _P3_4
                                     51 	.globl _P3_3
                                     52 	.globl _P3_2
                                     53 	.globl _P3_1
                                     54 	.globl _P3_0
                                     55 	.globl _P2_7
                                     56 	.globl _P2_6
                                     57 	.globl _P2_5
                                     58 	.globl _P2_4
                                     59 	.globl _P2_3
                                     60 	.globl _P2_2
                                     61 	.globl _P2_1
                                     62 	.globl _P2_0
                                     63 	.globl _P1_7
                                     64 	.globl _P1_6
                                     65 	.globl _P1_5
                                     66 	.globl _P1_4
                                     67 	.globl _P1_3
                                     68 	.globl _P1_2
                                     69 	.globl _P1_1
                                     70 	.globl _P1_0
                                     71 	.globl _P0_7
                                     72 	.globl _P0_6
                                     73 	.globl _P0_5
                                     74 	.globl _P0_4
                                     75 	.globl _P0_3
                                     76 	.globl _P0_2
                                     77 	.globl _P0_1
                                     78 	.globl _P0_0
                                     79 	.globl _PS
                                     80 	.globl _PT1
                                     81 	.globl _PX1
                                     82 	.globl _PT0
                                     83 	.globl _PX0
                                     84 	.globl _EA
                                     85 	.globl _ES
                                     86 	.globl _ET1
                                     87 	.globl _EX1
                                     88 	.globl _ET0
                                     89 	.globl _EX0
                                     90 	.globl _BREG_F7
                                     91 	.globl _BREG_F6
                                     92 	.globl _BREG_F5
                                     93 	.globl _BREG_F4
                                     94 	.globl _BREG_F3
                                     95 	.globl _BREG_F2
                                     96 	.globl _BREG_F1
                                     97 	.globl _BREG_F0
                                     98 	.globl _P5_7
                                     99 	.globl _P5_6
                                    100 	.globl _P5_5
                                    101 	.globl _P5_4
                                    102 	.globl _P5_3
                                    103 	.globl _P5_2
                                    104 	.globl _P5_1
                                    105 	.globl _P5_0
                                    106 	.globl _P4_7
                                    107 	.globl _P4_6
                                    108 	.globl _P4_5
                                    109 	.globl _P4_4
                                    110 	.globl _P4_3
                                    111 	.globl _P4_2
                                    112 	.globl _P4_1
                                    113 	.globl _P4_0
                                    114 	.globl _PX0L
                                    115 	.globl _PT0L
                                    116 	.globl _PX1L
                                    117 	.globl _PT1L
                                    118 	.globl _PSL
                                    119 	.globl _PT2L
                                    120 	.globl _PPCL
                                    121 	.globl _EC
                                    122 	.globl _CCF0
                                    123 	.globl _CCF1
                                    124 	.globl _CCF2
                                    125 	.globl _CCF3
                                    126 	.globl _CCF4
                                    127 	.globl _CR
                                    128 	.globl _CF
                                    129 	.globl _TF2
                                    130 	.globl _EXF2
                                    131 	.globl _RCLK
                                    132 	.globl _TCLK
                                    133 	.globl _EXEN2
                                    134 	.globl _TR2
                                    135 	.globl _C_T2
                                    136 	.globl _CP_RL2
                                    137 	.globl _T2CON_7
                                    138 	.globl _T2CON_6
                                    139 	.globl _T2CON_5
                                    140 	.globl _T2CON_4
                                    141 	.globl _T2CON_3
                                    142 	.globl _T2CON_2
                                    143 	.globl _T2CON_1
                                    144 	.globl _T2CON_0
                                    145 	.globl _PT2
                                    146 	.globl _ET2
                                    147 	.globl _TMOD
                                    148 	.globl _TL1
                                    149 	.globl _TL0
                                    150 	.globl _TH1
                                    151 	.globl _TH0
                                    152 	.globl _TCON
                                    153 	.globl _SP
                                    154 	.globl _SCON
                                    155 	.globl _SBUF0
                                    156 	.globl _SBUF
                                    157 	.globl _PSW
                                    158 	.globl _PCON
                                    159 	.globl _P3
                                    160 	.globl _P2
                                    161 	.globl _P1
                                    162 	.globl _P0
                                    163 	.globl _IP
                                    164 	.globl _IE
                                    165 	.globl _DP0L
                                    166 	.globl _DPL
                                    167 	.globl _DP0H
                                    168 	.globl _DPH
                                    169 	.globl _B
                                    170 	.globl _ACC
                                    171 	.globl _EECON
                                    172 	.globl _KBF
                                    173 	.globl _KBE
                                    174 	.globl _KBLS
                                    175 	.globl _BRL
                                    176 	.globl _BDRCON
                                    177 	.globl _T2MOD
                                    178 	.globl _SPDAT
                                    179 	.globl _SPSTA
                                    180 	.globl _SPCON
                                    181 	.globl _SADEN
                                    182 	.globl _SADDR
                                    183 	.globl _WDTPRG
                                    184 	.globl _WDTRST
                                    185 	.globl _P5
                                    186 	.globl _P4
                                    187 	.globl _IPH1
                                    188 	.globl _IPL1
                                    189 	.globl _IPH0
                                    190 	.globl _IPL0
                                    191 	.globl _IEN1
                                    192 	.globl _IEN0
                                    193 	.globl _CMOD
                                    194 	.globl _CL
                                    195 	.globl _CH
                                    196 	.globl _CCON
                                    197 	.globl _CCAPM4
                                    198 	.globl _CCAPM3
                                    199 	.globl _CCAPM2
                                    200 	.globl _CCAPM1
                                    201 	.globl _CCAPM0
                                    202 	.globl _CCAP4L
                                    203 	.globl _CCAP3L
                                    204 	.globl _CCAP2L
                                    205 	.globl _CCAP1L
                                    206 	.globl _CCAP0L
                                    207 	.globl _CCAP4H
                                    208 	.globl _CCAP3H
                                    209 	.globl _CCAP2H
                                    210 	.globl _CCAP1H
                                    211 	.globl _CCAP0H
                                    212 	.globl _CKCON1
                                    213 	.globl _CKCON0
                                    214 	.globl _CKRL
                                    215 	.globl _AUXR1
                                    216 	.globl _AUXR
                                    217 	.globl _TH2
                                    218 	.globl _TL2
                                    219 	.globl _RCAP2H
                                    220 	.globl _RCAP2L
                                    221 	.globl _T2CON
                                    222 	.globl _minCounter
                                    223 	.globl _secCounter
                                    224 	.globl _ms100counter
                                    225 	.globl _msCounter
                                    226 	.globl _tostring_PARM_2
                                    227 	.globl _sminCounter
                                    228 	.globl _ssecCounter
                                    229 	.globl _sms100counter
                                    230 	.globl _updateTimeCounters
                                    231 	.globl _tostring
                                    232 	.globl _display_clock
                                    233 	.globl _resetClock
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
                                    466 ; indirectly addressable internal ram data
                                    467 ;--------------------------------------------------------
                                    468 	.area ISEG    (DATA)
                                    469 ;--------------------------------------------------------
                                    470 ; absolute internal ram data
                                    471 ;--------------------------------------------------------
                                    472 	.area IABS    (ABS,DATA)
                                    473 	.area IABS    (ABS,DATA)
                                    474 ;--------------------------------------------------------
                                    475 ; bit data
                                    476 ;--------------------------------------------------------
                                    477 	.area BSEG    (BIT)
                                    478 ;--------------------------------------------------------
                                    479 ; paged external ram data
                                    480 ;--------------------------------------------------------
                                    481 	.area PSEG    (PAG,XDATA)
                                    482 ;--------------------------------------------------------
                                    483 ; external ram data
                                    484 ;--------------------------------------------------------
                                    485 	.area XSEG    (XDATA)
      00005F                        486 _sms100counter::
      00005F                        487 	.ds 5
      000064                        488 _ssecCounter::
      000064                        489 	.ds 5
      000069                        490 _sminCounter::
      000069                        491 	.ds 5
      00006E                        492 _tostring_PARM_2:
      00006E                        493 	.ds 2
      000070                        494 _tostring_str_65536_110:
      000070                        495 	.ds 3
                                    496 ;--------------------------------------------------------
                                    497 ; absolute external ram data
                                    498 ;--------------------------------------------------------
                                    499 	.area XABS    (ABS,XDATA)
                                    500 ;--------------------------------------------------------
                                    501 ; external initialized ram data
                                    502 ;--------------------------------------------------------
                                    503 	.area XISEG   (XDATA)
      0000FE                        504 _msCounter::
      0000FE                        505 	.ds 2
      000100                        506 _ms100counter::
      000100                        507 	.ds 1
      000101                        508 _secCounter::
      000101                        509 	.ds 2
      000103                        510 _minCounter::
      000103                        511 	.ds 2
                                    512 	.area HOME    (CODE)
                                    513 	.area GSINIT0 (CODE)
                                    514 	.area GSINIT1 (CODE)
                                    515 	.area GSINIT2 (CODE)
                                    516 	.area GSINIT3 (CODE)
                                    517 	.area GSINIT4 (CODE)
                                    518 	.area GSINIT5 (CODE)
                                    519 	.area GSINIT  (CODE)
                                    520 	.area GSFINAL (CODE)
                                    521 	.area CSEG    (CODE)
                                    522 ;--------------------------------------------------------
                                    523 ; global & static initialisations
                                    524 ;--------------------------------------------------------
                                    525 	.area HOME    (CODE)
                                    526 	.area GSINIT  (CODE)
                                    527 	.area GSFINAL (CODE)
                                    528 	.area GSINIT  (CODE)
                                    529 ;--------------------------------------------------------
                                    530 ; Home
                                    531 ;--------------------------------------------------------
                                    532 	.area HOME    (CODE)
                                    533 	.area HOME    (CODE)
                                    534 ;--------------------------------------------------------
                                    535 ; code
                                    536 ;--------------------------------------------------------
                                    537 	.area CSEG    (CODE)
                                    538 ;------------------------------------------------------------
                                    539 ;Allocation info for local variables in function 'updateTimeCounters'
                                    540 ;------------------------------------------------------------
                                    541 ;	timer.c:38: void updateTimeCounters(void)
                                    542 ;	-----------------------------------------
                                    543 ;	 function updateTimeCounters
                                    544 ;	-----------------------------------------
      000915                        545 _updateTimeCounters:
                           000007   546 	ar7 = 0x07
                           000006   547 	ar6 = 0x06
                           000005   548 	ar5 = 0x05
                           000004   549 	ar4 = 0x04
                           000003   550 	ar3 = 0x03
                           000002   551 	ar2 = 0x02
                           000001   552 	ar1 = 0x01
                           000000   553 	ar0 = 0x00
                                    554 ;	timer.c:40: msCounter = msCounter + 20;         //interrupt is called every 10ms
      000915 90 00 FE         [24]  555 	mov	dptr,#_msCounter
      000918 E0               [24]  556 	movx	a,@dptr
      000919 FE               [12]  557 	mov	r6,a
      00091A A3               [24]  558 	inc	dptr
      00091B E0               [24]  559 	movx	a,@dptr
      00091C FF               [12]  560 	mov	r7,a
      00091D 90 00 FE         [24]  561 	mov	dptr,#_msCounter
      000920 74 14            [12]  562 	mov	a,#0x14
      000922 2E               [12]  563 	add	a,r6
      000923 F0               [24]  564 	movx	@dptr,a
      000924 E4               [12]  565 	clr	a
      000925 3F               [12]  566 	addc	a,r7
      000926 A3               [24]  567 	inc	dptr
      000927 F0               [24]  568 	movx	@dptr,a
                                    569 ;	timer.c:42: if (msCounter>=100)
      000928 90 00 FE         [24]  570 	mov	dptr,#_msCounter
      00092B E0               [24]  571 	movx	a,@dptr
      00092C FE               [12]  572 	mov	r6,a
      00092D A3               [24]  573 	inc	dptr
      00092E E0               [24]  574 	movx	a,@dptr
      00092F FF               [12]  575 	mov	r7,a
      000930 C3               [12]  576 	clr	c
      000931 EE               [12]  577 	mov	a,r6
      000932 94 64            [12]  578 	subb	a,#0x64
      000934 EF               [12]  579 	mov	a,r7
      000935 94 00            [12]  580 	subb	a,#0x00
      000937 40 0E            [24]  581 	jc	00102$
                                    582 ;	timer.c:44: ms100counter++;
      000939 90 01 00         [24]  583 	mov	dptr,#_ms100counter
      00093C E0               [24]  584 	movx	a,@dptr
      00093D 24 01            [12]  585 	add	a,#0x01
      00093F F0               [24]  586 	movx	@dptr,a
                                    587 ;	timer.c:45: msCounter=0;
      000940 90 00 FE         [24]  588 	mov	dptr,#_msCounter
      000943 E4               [12]  589 	clr	a
      000944 F0               [24]  590 	movx	@dptr,a
      000945 A3               [24]  591 	inc	dptr
      000946 F0               [24]  592 	movx	@dptr,a
      000947                        593 00102$:
                                    594 ;	timer.c:48: if (ms100counter>=10)
      000947 90 01 00         [24]  595 	mov	dptr,#_ms100counter
      00094A E0               [24]  596 	movx	a,@dptr
      00094B FF               [12]  597 	mov	r7,a
      00094C BF 0A 00         [24]  598 	cjne	r7,#0x0a,00122$
      00094F                        599 00122$:
      00094F 40 11            [24]  600 	jc	00104$
                                    601 ;	timer.c:50: secCounter++;
      000951 90 01 01         [24]  602 	mov	dptr,#_secCounter
      000954 E0               [24]  603 	movx	a,@dptr
      000955 24 01            [12]  604 	add	a,#0x01
      000957 F0               [24]  605 	movx	@dptr,a
      000958 A3               [24]  606 	inc	dptr
      000959 E0               [24]  607 	movx	a,@dptr
      00095A 34 00            [12]  608 	addc	a,#0x00
      00095C F0               [24]  609 	movx	@dptr,a
                                    610 ;	timer.c:51: ms100counter=0;
      00095D 90 01 00         [24]  611 	mov	dptr,#_ms100counter
      000960 E4               [12]  612 	clr	a
      000961 F0               [24]  613 	movx	@dptr,a
      000962                        614 00104$:
                                    615 ;	timer.c:54: if (secCounter==60)
      000962 90 01 01         [24]  616 	mov	dptr,#_secCounter
      000965 E0               [24]  617 	movx	a,@dptr
      000966 FE               [12]  618 	mov	r6,a
      000967 A3               [24]  619 	inc	dptr
      000968 E0               [24]  620 	movx	a,@dptr
      000969 FF               [12]  621 	mov	r7,a
      00096A BE 3C 16         [24]  622 	cjne	r6,#0x3c,00107$
      00096D BF 00 13         [24]  623 	cjne	r7,#0x00,00107$
                                    624 ;	timer.c:56: minCounter++;
      000970 90 01 03         [24]  625 	mov	dptr,#_minCounter
      000973 E0               [24]  626 	movx	a,@dptr
      000974 24 01            [12]  627 	add	a,#0x01
      000976 F0               [24]  628 	movx	@dptr,a
      000977 A3               [24]  629 	inc	dptr
      000978 E0               [24]  630 	movx	a,@dptr
      000979 34 00            [12]  631 	addc	a,#0x00
      00097B F0               [24]  632 	movx	@dptr,a
                                    633 ;	timer.c:57: secCounter=0;
      00097C 90 01 01         [24]  634 	mov	dptr,#_secCounter
      00097F E4               [12]  635 	clr	a
      000980 F0               [24]  636 	movx	@dptr,a
      000981 A3               [24]  637 	inc	dptr
      000982 F0               [24]  638 	movx	@dptr,a
      000983                        639 00107$:
                                    640 ;	timer.c:59: }
      000983 22               [24]  641 	ret
                                    642 ;------------------------------------------------------------
                                    643 ;Allocation info for local variables in function 'tostring'
                                    644 ;------------------------------------------------------------
                                    645 ;num                       Allocated with name '_tostring_PARM_2'
                                    646 ;str                       Allocated with name '_tostring_str_65536_110'
                                    647 ;rem                       Allocated with name '_tostring_rem_65536_111'
                                    648 ;len                       Allocated with name '_tostring_len_65536_111'
                                    649 ;------------------------------------------------------------
                                    650 ;	timer.c:61: void tostring(char str[], int num)          //Attribution: https://www.sanfoundry.com/c-program-integer-to-string-vice-versa/
                                    651 ;	-----------------------------------------
                                    652 ;	 function tostring
                                    653 ;	-----------------------------------------
      000984                        654 _tostring:
      000984 AF F0            [24]  655 	mov	r7,b
      000986 AE 83            [24]  656 	mov	r6,dph
      000988 E5 82            [12]  657 	mov	a,dpl
      00098A 90 00 70         [24]  658 	mov	dptr,#_tostring_str_65536_110
      00098D F0               [24]  659 	movx	@dptr,a
      00098E EE               [12]  660 	mov	a,r6
      00098F A3               [24]  661 	inc	dptr
      000990 F0               [24]  662 	movx	@dptr,a
      000991 EF               [12]  663 	mov	a,r7
      000992 A3               [24]  664 	inc	dptr
      000993 F0               [24]  665 	movx	@dptr,a
                                    666 ;	timer.c:65: rem = num % 10;
      000994 90 00 6E         [24]  667 	mov	dptr,#_tostring_PARM_2
      000997 E0               [24]  668 	movx	a,@dptr
      000998 FE               [12]  669 	mov	r6,a
      000999 A3               [24]  670 	inc	dptr
      00099A E0               [24]  671 	movx	a,@dptr
      00099B FF               [12]  672 	mov	r7,a
      00099C 90 00 A2         [24]  673 	mov	dptr,#__modsint_PARM_2
      00099F 74 0A            [12]  674 	mov	a,#0x0a
      0009A1 F0               [24]  675 	movx	@dptr,a
      0009A2 E4               [12]  676 	clr	a
      0009A3 A3               [24]  677 	inc	dptr
      0009A4 F0               [24]  678 	movx	@dptr,a
                                    679 ;	timer.c:66: str[1] = rem + '0';
      0009A5 8E 82            [24]  680 	mov	dpl,r6
      0009A7 8F 83            [24]  681 	mov	dph,r7
      0009A9 12 12 C4         [24]  682 	lcall	__modsint
      0009AC AE 82            [24]  683 	mov	r6,dpl
      0009AE 90 00 70         [24]  684 	mov	dptr,#_tostring_str_65536_110
      0009B1 E0               [24]  685 	movx	a,@dptr
      0009B2 FB               [12]  686 	mov	r3,a
      0009B3 A3               [24]  687 	inc	dptr
      0009B4 E0               [24]  688 	movx	a,@dptr
      0009B5 FC               [12]  689 	mov	r4,a
      0009B6 A3               [24]  690 	inc	dptr
      0009B7 E0               [24]  691 	movx	a,@dptr
      0009B8 FD               [12]  692 	mov	r5,a
      0009B9 74 01            [12]  693 	mov	a,#0x01
      0009BB 2B               [12]  694 	add	a,r3
      0009BC F8               [12]  695 	mov	r0,a
      0009BD E4               [12]  696 	clr	a
      0009BE 3C               [12]  697 	addc	a,r4
      0009BF F9               [12]  698 	mov	r1,a
      0009C0 8D 02            [24]  699 	mov	ar2,r5
      0009C2 74 30            [12]  700 	mov	a,#0x30
      0009C4 2E               [12]  701 	add	a,r6
      0009C5 88 82            [24]  702 	mov	dpl,r0
      0009C7 89 83            [24]  703 	mov	dph,r1
      0009C9 8A F0            [24]  704 	mov	b,r2
      0009CB 12 0E 60         [24]  705 	lcall	__gptrput
                                    706 ;	timer.c:67: str[len] = '\0';
      0009CE 8B 82            [24]  707 	mov	dpl,r3
      0009D0 8C 83            [24]  708 	mov	dph,r4
      0009D2 8D F0            [24]  709 	mov	b,r5
      0009D4 E4               [12]  710 	clr	a
                                    711 ;	timer.c:68: }
      0009D5 02 0E 60         [24]  712 	ljmp	__gptrput
                                    713 ;------------------------------------------------------------
                                    714 ;Allocation info for local variables in function 'display_clock'
                                    715 ;------------------------------------------------------------
                                    716 ;	timer.c:70: void display_clock(void)
                                    717 ;	-----------------------------------------
                                    718 ;	 function display_clock
                                    719 ;	-----------------------------------------
      0009D8                        720 _display_clock:
                                    721 ;	timer.c:72: tostring(sms100counter, ms100counter);      //convert int to char to print using lcdputch
      0009D8 90 01 00         [24]  722 	mov	dptr,#_ms100counter
      0009DB E0               [24]  723 	movx	a,@dptr
      0009DC 90 00 6E         [24]  724 	mov	dptr,#_tostring_PARM_2
      0009DF F0               [24]  725 	movx	@dptr,a
      0009E0 E4               [12]  726 	clr	a
      0009E1 A3               [24]  727 	inc	dptr
      0009E2 F0               [24]  728 	movx	@dptr,a
      0009E3 90 00 5F         [24]  729 	mov	dptr,#_sms100counter
      0009E6 75 F0 00         [24]  730 	mov	b,#0x00
      0009E9 12 09 84         [24]  731 	lcall	_tostring
                                    732 ;	timer.c:73: lcdgotoaddress(95);                         //last location of LCD
      0009EC 75 82 5F         [24]  733 	mov	dpl,#0x5f
      0009EF 12 02 3C         [24]  734 	lcall	_lcdgotoaddress
                                    735 ;	timer.c:74: lcdputch_timer(sms100counter[1]);
      0009F2 90 00 60         [24]  736 	mov	dptr,#(_sms100counter + 0x0001)
      0009F5 E0               [24]  737 	movx	a,@dptr
      0009F6 F5 82            [12]  738 	mov	dpl,a
      0009F8 12 01 A1         [24]  739 	lcall	_lcdputch_timer
                                    740 ;	timer.c:75: lcdgotoaddress(94);
      0009FB 75 82 5E         [24]  741 	mov	dpl,#0x5e
      0009FE 12 02 3C         [24]  742 	lcall	_lcdgotoaddress
                                    743 ;	timer.c:76: lcdputch_timer('.');
      000A01 75 82 2E         [24]  744 	mov	dpl,#0x2e
      000A04 12 01 A1         [24]  745 	lcall	_lcdputch_timer
                                    746 ;	timer.c:78: if (secCounter <=9 )
      000A07 90 01 01         [24]  747 	mov	dptr,#_secCounter
      000A0A E0               [24]  748 	movx	a,@dptr
      000A0B FE               [12]  749 	mov	r6,a
      000A0C A3               [24]  750 	inc	dptr
      000A0D E0               [24]  751 	movx	a,@dptr
      000A0E FF               [12]  752 	mov	r7,a
      000A0F C3               [12]  753 	clr	c
      000A10 74 09            [12]  754 	mov	a,#0x09
      000A12 9E               [12]  755 	subb	a,r6
      000A13 E4               [12]  756 	clr	a
      000A14 9F               [12]  757 	subb	a,r7
      000A15 40 37            [24]  758 	jc	00102$
                                    759 ;	timer.c:80: lcdgotoaddress(93);
      000A17 75 82 5D         [24]  760 	mov	dpl,#0x5d
      000A1A 12 02 3C         [24]  761 	lcall	_lcdgotoaddress
                                    762 ;	timer.c:81: tostring(ssecCounter, secCounter);           //units digits of seconds
      000A1D 90 01 01         [24]  763 	mov	dptr,#_secCounter
      000A20 E0               [24]  764 	movx	a,@dptr
      000A21 FE               [12]  765 	mov	r6,a
      000A22 A3               [24]  766 	inc	dptr
      000A23 E0               [24]  767 	movx	a,@dptr
      000A24 FF               [12]  768 	mov	r7,a
      000A25 90 00 6E         [24]  769 	mov	dptr,#_tostring_PARM_2
      000A28 EE               [12]  770 	mov	a,r6
      000A29 F0               [24]  771 	movx	@dptr,a
      000A2A EF               [12]  772 	mov	a,r7
      000A2B A3               [24]  773 	inc	dptr
      000A2C F0               [24]  774 	movx	@dptr,a
      000A2D 90 00 64         [24]  775 	mov	dptr,#_ssecCounter
      000A30 75 F0 00         [24]  776 	mov	b,#0x00
      000A33 12 09 84         [24]  777 	lcall	_tostring
                                    778 ;	timer.c:82: lcdputch_timer(ssecCounter[1]);
      000A36 90 00 65         [24]  779 	mov	dptr,#(_ssecCounter + 0x0001)
      000A39 E0               [24]  780 	movx	a,@dptr
      000A3A F5 82            [12]  781 	mov	dpl,a
      000A3C 12 01 A1         [24]  782 	lcall	_lcdputch_timer
                                    783 ;	timer.c:83: lcdgotoaddress(92);
      000A3F 75 82 5C         [24]  784 	mov	dpl,#0x5c
      000A42 12 02 3C         [24]  785 	lcall	_lcdgotoaddress
                                    786 ;	timer.c:84: lcdputch_timer('0');                                  //tens digit of seconds
      000A45 75 82 30         [24]  787 	mov	dpl,#0x30
      000A48 12 01 A1         [24]  788 	lcall	_lcdputch_timer
      000A4B 02 0A C6         [24]  789 	ljmp	00103$
      000A4E                        790 00102$:
                                    791 ;	timer.c:88: lcdgotoaddress(93);
      000A4E 75 82 5D         [24]  792 	mov	dpl,#0x5d
      000A51 12 02 3C         [24]  793 	lcall	_lcdgotoaddress
                                    794 ;	timer.c:89: tostring(ssecCounter, secCounter%10);          //units digits of seconds
      000A54 90 01 01         [24]  795 	mov	dptr,#_secCounter
      000A57 E0               [24]  796 	movx	a,@dptr
      000A58 FE               [12]  797 	mov	r6,a
      000A59 A3               [24]  798 	inc	dptr
      000A5A E0               [24]  799 	movx	a,@dptr
      000A5B FF               [12]  800 	mov	r7,a
      000A5C 90 00 A6         [24]  801 	mov	dptr,#__moduint_PARM_2
      000A5F 74 0A            [12]  802 	mov	a,#0x0a
      000A61 F0               [24]  803 	movx	@dptr,a
      000A62 E4               [12]  804 	clr	a
      000A63 A3               [24]  805 	inc	dptr
      000A64 F0               [24]  806 	movx	@dptr,a
      000A65 8E 82            [24]  807 	mov	dpl,r6
      000A67 8F 83            [24]  808 	mov	dph,r7
      000A69 12 13 2C         [24]  809 	lcall	__moduint
      000A6C AE 82            [24]  810 	mov	r6,dpl
      000A6E AF 83            [24]  811 	mov	r7,dph
      000A70 90 00 6E         [24]  812 	mov	dptr,#_tostring_PARM_2
      000A73 EE               [12]  813 	mov	a,r6
      000A74 F0               [24]  814 	movx	@dptr,a
      000A75 EF               [12]  815 	mov	a,r7
      000A76 A3               [24]  816 	inc	dptr
      000A77 F0               [24]  817 	movx	@dptr,a
      000A78 90 00 64         [24]  818 	mov	dptr,#_ssecCounter
      000A7B 75 F0 00         [24]  819 	mov	b,#0x00
      000A7E 12 09 84         [24]  820 	lcall	_tostring
                                    821 ;	timer.c:90: lcdputch_timer(ssecCounter[1]);
      000A81 90 00 65         [24]  822 	mov	dptr,#(_ssecCounter + 0x0001)
      000A84 E0               [24]  823 	movx	a,@dptr
      000A85 F5 82            [12]  824 	mov	dpl,a
      000A87 12 01 A1         [24]  825 	lcall	_lcdputch_timer
                                    826 ;	timer.c:91: lcdgotoaddress(92);
      000A8A 75 82 5C         [24]  827 	mov	dpl,#0x5c
      000A8D 12 02 3C         [24]  828 	lcall	_lcdgotoaddress
                                    829 ;	timer.c:92: tostring(ssecCounter, secCounter/10);          //tens digit of seconds
      000A90 90 01 01         [24]  830 	mov	dptr,#_secCounter
      000A93 E0               [24]  831 	movx	a,@dptr
      000A94 FE               [12]  832 	mov	r6,a
      000A95 A3               [24]  833 	inc	dptr
      000A96 E0               [24]  834 	movx	a,@dptr
      000A97 FF               [12]  835 	mov	r7,a
      000A98 90 00 73         [24]  836 	mov	dptr,#__divuint_PARM_2
      000A9B 74 0A            [12]  837 	mov	a,#0x0a
      000A9D F0               [24]  838 	movx	@dptr,a
      000A9E E4               [12]  839 	clr	a
      000A9F A3               [24]  840 	inc	dptr
      000AA0 F0               [24]  841 	movx	@dptr,a
      000AA1 8E 82            [24]  842 	mov	dpl,r6
      000AA3 8F 83            [24]  843 	mov	dph,r7
      000AA5 12 0B A6         [24]  844 	lcall	__divuint
      000AA8 AE 82            [24]  845 	mov	r6,dpl
      000AAA AF 83            [24]  846 	mov	r7,dph
      000AAC 90 00 6E         [24]  847 	mov	dptr,#_tostring_PARM_2
      000AAF EE               [12]  848 	mov	a,r6
      000AB0 F0               [24]  849 	movx	@dptr,a
      000AB1 EF               [12]  850 	mov	a,r7
      000AB2 A3               [24]  851 	inc	dptr
      000AB3 F0               [24]  852 	movx	@dptr,a
      000AB4 90 00 64         [24]  853 	mov	dptr,#_ssecCounter
      000AB7 75 F0 00         [24]  854 	mov	b,#0x00
      000ABA 12 09 84         [24]  855 	lcall	_tostring
                                    856 ;	timer.c:93: lcdputch_timer(ssecCounter[1]);
      000ABD 90 00 65         [24]  857 	mov	dptr,#(_ssecCounter + 0x0001)
      000AC0 E0               [24]  858 	movx	a,@dptr
      000AC1 F5 82            [12]  859 	mov	dpl,a
      000AC3 12 01 A1         [24]  860 	lcall	_lcdputch_timer
      000AC6                        861 00103$:
                                    862 ;	timer.c:96: lcdgotoaddress(91);
      000AC6 75 82 5B         [24]  863 	mov	dpl,#0x5b
      000AC9 12 02 3C         [24]  864 	lcall	_lcdgotoaddress
                                    865 ;	timer.c:97: lcdputch_timer(':');
      000ACC 75 82 3A         [24]  866 	mov	dpl,#0x3a
      000ACF 12 01 A1         [24]  867 	lcall	_lcdputch_timer
                                    868 ;	timer.c:99: if (minCounter <=9 )
      000AD2 90 01 03         [24]  869 	mov	dptr,#_minCounter
      000AD5 E0               [24]  870 	movx	a,@dptr
      000AD6 FE               [12]  871 	mov	r6,a
      000AD7 A3               [24]  872 	inc	dptr
      000AD8 E0               [24]  873 	movx	a,@dptr
      000AD9 FF               [12]  874 	mov	r7,a
      000ADA C3               [12]  875 	clr	c
      000ADB 74 09            [12]  876 	mov	a,#0x09
      000ADD 9E               [12]  877 	subb	a,r6
      000ADE E4               [12]  878 	clr	a
      000ADF 9F               [12]  879 	subb	a,r7
      000AE0 40 34            [24]  880 	jc	00105$
                                    881 ;	timer.c:101: lcdgotoaddress(90);
      000AE2 75 82 5A         [24]  882 	mov	dpl,#0x5a
      000AE5 12 02 3C         [24]  883 	lcall	_lcdgotoaddress
                                    884 ;	timer.c:102: tostring(sminCounter, minCounter);
      000AE8 90 01 03         [24]  885 	mov	dptr,#_minCounter
      000AEB E0               [24]  886 	movx	a,@dptr
      000AEC FE               [12]  887 	mov	r6,a
      000AED A3               [24]  888 	inc	dptr
      000AEE E0               [24]  889 	movx	a,@dptr
      000AEF FF               [12]  890 	mov	r7,a
      000AF0 90 00 6E         [24]  891 	mov	dptr,#_tostring_PARM_2
      000AF3 EE               [12]  892 	mov	a,r6
      000AF4 F0               [24]  893 	movx	@dptr,a
      000AF5 EF               [12]  894 	mov	a,r7
      000AF6 A3               [24]  895 	inc	dptr
      000AF7 F0               [24]  896 	movx	@dptr,a
      000AF8 90 00 69         [24]  897 	mov	dptr,#_sminCounter
      000AFB 75 F0 00         [24]  898 	mov	b,#0x00
      000AFE 12 09 84         [24]  899 	lcall	_tostring
                                    900 ;	timer.c:103: lcdputch_timer(sminCounter[1]);
      000B01 90 00 6A         [24]  901 	mov	dptr,#(_sminCounter + 0x0001)
      000B04 E0               [24]  902 	movx	a,@dptr
      000B05 F5 82            [12]  903 	mov	dpl,a
      000B07 12 01 A1         [24]  904 	lcall	_lcdputch_timer
                                    905 ;	timer.c:104: lcdgotoaddress(89);
      000B0A 75 82 59         [24]  906 	mov	dpl,#0x59
      000B0D 12 02 3C         [24]  907 	lcall	_lcdgotoaddress
                                    908 ;	timer.c:105: lcdputch_timer('0');
      000B10 75 82 30         [24]  909 	mov	dpl,#0x30
      000B13 02 01 A1         [24]  910 	ljmp	_lcdputch_timer
      000B16                        911 00105$:
                                    912 ;	timer.c:109: lcdgotoaddress(90);
      000B16 75 82 5A         [24]  913 	mov	dpl,#0x5a
      000B19 12 02 3C         [24]  914 	lcall	_lcdgotoaddress
                                    915 ;	timer.c:110: tostring(sminCounter, minCounter%10);
      000B1C 90 01 03         [24]  916 	mov	dptr,#_minCounter
      000B1F E0               [24]  917 	movx	a,@dptr
      000B20 FE               [12]  918 	mov	r6,a
      000B21 A3               [24]  919 	inc	dptr
      000B22 E0               [24]  920 	movx	a,@dptr
      000B23 FF               [12]  921 	mov	r7,a
      000B24 90 00 A6         [24]  922 	mov	dptr,#__moduint_PARM_2
      000B27 74 0A            [12]  923 	mov	a,#0x0a
      000B29 F0               [24]  924 	movx	@dptr,a
      000B2A E4               [12]  925 	clr	a
      000B2B A3               [24]  926 	inc	dptr
      000B2C F0               [24]  927 	movx	@dptr,a
      000B2D 8E 82            [24]  928 	mov	dpl,r6
      000B2F 8F 83            [24]  929 	mov	dph,r7
      000B31 12 13 2C         [24]  930 	lcall	__moduint
      000B34 AE 82            [24]  931 	mov	r6,dpl
      000B36 AF 83            [24]  932 	mov	r7,dph
      000B38 90 00 6E         [24]  933 	mov	dptr,#_tostring_PARM_2
      000B3B EE               [12]  934 	mov	a,r6
      000B3C F0               [24]  935 	movx	@dptr,a
      000B3D EF               [12]  936 	mov	a,r7
      000B3E A3               [24]  937 	inc	dptr
      000B3F F0               [24]  938 	movx	@dptr,a
      000B40 90 00 69         [24]  939 	mov	dptr,#_sminCounter
      000B43 75 F0 00         [24]  940 	mov	b,#0x00
      000B46 12 09 84         [24]  941 	lcall	_tostring
                                    942 ;	timer.c:111: lcdputch_timer(sminCounter[1]);
      000B49 90 00 6A         [24]  943 	mov	dptr,#(_sminCounter + 0x0001)
      000B4C E0               [24]  944 	movx	a,@dptr
      000B4D F5 82            [12]  945 	mov	dpl,a
      000B4F 12 01 A1         [24]  946 	lcall	_lcdputch_timer
                                    947 ;	timer.c:112: lcdgotoaddress(89);
      000B52 75 82 59         [24]  948 	mov	dpl,#0x59
      000B55 12 02 3C         [24]  949 	lcall	_lcdgotoaddress
                                    950 ;	timer.c:113: tostring(sminCounter, minCounter/10);
      000B58 90 01 03         [24]  951 	mov	dptr,#_minCounter
      000B5B E0               [24]  952 	movx	a,@dptr
      000B5C FE               [12]  953 	mov	r6,a
      000B5D A3               [24]  954 	inc	dptr
      000B5E E0               [24]  955 	movx	a,@dptr
      000B5F FF               [12]  956 	mov	r7,a
      000B60 90 00 73         [24]  957 	mov	dptr,#__divuint_PARM_2
      000B63 74 0A            [12]  958 	mov	a,#0x0a
      000B65 F0               [24]  959 	movx	@dptr,a
      000B66 E4               [12]  960 	clr	a
      000B67 A3               [24]  961 	inc	dptr
      000B68 F0               [24]  962 	movx	@dptr,a
      000B69 8E 82            [24]  963 	mov	dpl,r6
      000B6B 8F 83            [24]  964 	mov	dph,r7
      000B6D 12 0B A6         [24]  965 	lcall	__divuint
      000B70 AE 82            [24]  966 	mov	r6,dpl
      000B72 AF 83            [24]  967 	mov	r7,dph
      000B74 90 00 6E         [24]  968 	mov	dptr,#_tostring_PARM_2
      000B77 EE               [12]  969 	mov	a,r6
      000B78 F0               [24]  970 	movx	@dptr,a
      000B79 EF               [12]  971 	mov	a,r7
      000B7A A3               [24]  972 	inc	dptr
      000B7B F0               [24]  973 	movx	@dptr,a
      000B7C 90 00 69         [24]  974 	mov	dptr,#_sminCounter
      000B7F 75 F0 00         [24]  975 	mov	b,#0x00
      000B82 12 09 84         [24]  976 	lcall	_tostring
                                    977 ;	timer.c:114: lcdputch_timer(sminCounter[1]);
      000B85 90 00 6A         [24]  978 	mov	dptr,#(_sminCounter + 0x0001)
      000B88 E0               [24]  979 	movx	a,@dptr
      000B89 F5 82            [12]  980 	mov	dpl,a
                                    981 ;	timer.c:116: }
      000B8B 02 01 A1         [24]  982 	ljmp	_lcdputch_timer
                                    983 ;------------------------------------------------------------
                                    984 ;Allocation info for local variables in function 'resetClock'
                                    985 ;------------------------------------------------------------
                                    986 ;	timer.c:118: void resetClock(void)
                                    987 ;	-----------------------------------------
                                    988 ;	 function resetClock
                                    989 ;	-----------------------------------------
      000B8E                        990 _resetClock:
                                    991 ;	timer.c:120: msCounter   = 0;            //clear all counters
      000B8E 90 00 FE         [24]  992 	mov	dptr,#_msCounter
      000B91 E4               [12]  993 	clr	a
      000B92 F0               [24]  994 	movx	@dptr,a
      000B93 A3               [24]  995 	inc	dptr
      000B94 F0               [24]  996 	movx	@dptr,a
                                    997 ;	timer.c:121: ms100counter = 0;
      000B95 90 01 00         [24]  998 	mov	dptr,#_ms100counter
      000B98 F0               [24]  999 	movx	@dptr,a
                                   1000 ;	timer.c:122: secCounter  = 0;
      000B99 90 01 01         [24] 1001 	mov	dptr,#_secCounter
      000B9C F0               [24] 1002 	movx	@dptr,a
      000B9D A3               [24] 1003 	inc	dptr
      000B9E F0               [24] 1004 	movx	@dptr,a
                                   1005 ;	timer.c:123: minCounter  = 0;
      000B9F 90 01 03         [24] 1006 	mov	dptr,#_minCounter
      000BA2 F0               [24] 1007 	movx	@dptr,a
      000BA3 A3               [24] 1008 	inc	dptr
      000BA4 F0               [24] 1009 	movx	@dptr,a
                                   1010 ;	timer.c:124: }
      000BA5 22               [24] 1011 	ret
                                   1012 	.area CSEG    (CODE)
                                   1013 	.area CONST   (CODE)
                                   1014 	.area XINIT   (CODE)
      00232B                       1015 __xinit__msCounter:
      00232B 00 00                 1016 	.byte #0x00, #0x00	; 0
      00232D                       1017 __xinit__ms100counter:
      00232D 00                    1018 	.db #0x00	; 0
      00232E                       1019 __xinit__secCounter:
      00232E 00 00                 1020 	.byte #0x00, #0x00	; 0
      002330                       1021 __xinit__minCounter:
      002330 00 00                 1022 	.byte #0x00, #0x00	; 0
                                   1023 	.area CABS    (ABS,CODE)
