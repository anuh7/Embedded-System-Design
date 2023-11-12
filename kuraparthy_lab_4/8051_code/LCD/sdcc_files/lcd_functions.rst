                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module lcd_functions
                                      6 	.optsdcc -mmcs51 --model-large
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _printf
                                     12 	.globl _TF1
                                     13 	.globl _TR1
                                     14 	.globl _TF0
                                     15 	.globl _TR0
                                     16 	.globl _IE1
                                     17 	.globl _IT1
                                     18 	.globl _IE0
                                     19 	.globl _IT0
                                     20 	.globl _SM0
                                     21 	.globl _SM1
                                     22 	.globl _SM2
                                     23 	.globl _REN
                                     24 	.globl _TB8
                                     25 	.globl _RB8
                                     26 	.globl _TI
                                     27 	.globl _RI
                                     28 	.globl _CY
                                     29 	.globl _AC
                                     30 	.globl _F0
                                     31 	.globl _RS1
                                     32 	.globl _RS0
                                     33 	.globl _OV
                                     34 	.globl _F1
                                     35 	.globl _P
                                     36 	.globl _RD
                                     37 	.globl _WR
                                     38 	.globl _T1
                                     39 	.globl _T0
                                     40 	.globl _INT1
                                     41 	.globl _INT0
                                     42 	.globl _TXD0
                                     43 	.globl _TXD
                                     44 	.globl _RXD0
                                     45 	.globl _RXD
                                     46 	.globl _P3_7
                                     47 	.globl _P3_6
                                     48 	.globl _P3_5
                                     49 	.globl _P3_4
                                     50 	.globl _P3_3
                                     51 	.globl _P3_2
                                     52 	.globl _P3_1
                                     53 	.globl _P3_0
                                     54 	.globl _P2_7
                                     55 	.globl _P2_6
                                     56 	.globl _P2_5
                                     57 	.globl _P2_4
                                     58 	.globl _P2_3
                                     59 	.globl _P2_2
                                     60 	.globl _P2_1
                                     61 	.globl _P2_0
                                     62 	.globl _P1_7
                                     63 	.globl _P1_6
                                     64 	.globl _P1_5
                                     65 	.globl _P1_4
                                     66 	.globl _P1_3
                                     67 	.globl _P1_2
                                     68 	.globl _P1_1
                                     69 	.globl _P1_0
                                     70 	.globl _P0_7
                                     71 	.globl _P0_6
                                     72 	.globl _P0_5
                                     73 	.globl _P0_4
                                     74 	.globl _P0_3
                                     75 	.globl _P0_2
                                     76 	.globl _P0_1
                                     77 	.globl _P0_0
                                     78 	.globl _PS
                                     79 	.globl _PT1
                                     80 	.globl _PX1
                                     81 	.globl _PT0
                                     82 	.globl _PX0
                                     83 	.globl _EA
                                     84 	.globl _ES
                                     85 	.globl _ET1
                                     86 	.globl _EX1
                                     87 	.globl _ET0
                                     88 	.globl _EX0
                                     89 	.globl _BREG_F7
                                     90 	.globl _BREG_F6
                                     91 	.globl _BREG_F5
                                     92 	.globl _BREG_F4
                                     93 	.globl _BREG_F3
                                     94 	.globl _BREG_F2
                                     95 	.globl _BREG_F1
                                     96 	.globl _BREG_F0
                                     97 	.globl _P5_7
                                     98 	.globl _P5_6
                                     99 	.globl _P5_5
                                    100 	.globl _P5_4
                                    101 	.globl _P5_3
                                    102 	.globl _P5_2
                                    103 	.globl _P5_1
                                    104 	.globl _P5_0
                                    105 	.globl _P4_7
                                    106 	.globl _P4_6
                                    107 	.globl _P4_5
                                    108 	.globl _P4_4
                                    109 	.globl _P4_3
                                    110 	.globl _P4_2
                                    111 	.globl _P4_1
                                    112 	.globl _P4_0
                                    113 	.globl _PX0L
                                    114 	.globl _PT0L
                                    115 	.globl _PX1L
                                    116 	.globl _PT1L
                                    117 	.globl _PSL
                                    118 	.globl _PT2L
                                    119 	.globl _PPCL
                                    120 	.globl _EC
                                    121 	.globl _CCF0
                                    122 	.globl _CCF1
                                    123 	.globl _CCF2
                                    124 	.globl _CCF3
                                    125 	.globl _CCF4
                                    126 	.globl _CR
                                    127 	.globl _CF
                                    128 	.globl _TF2
                                    129 	.globl _EXF2
                                    130 	.globl _RCLK
                                    131 	.globl _TCLK
                                    132 	.globl _EXEN2
                                    133 	.globl _TR2
                                    134 	.globl _C_T2
                                    135 	.globl _CP_RL2
                                    136 	.globl _T2CON_7
                                    137 	.globl _T2CON_6
                                    138 	.globl _T2CON_5
                                    139 	.globl _T2CON_4
                                    140 	.globl _T2CON_3
                                    141 	.globl _T2CON_2
                                    142 	.globl _T2CON_1
                                    143 	.globl _T2CON_0
                                    144 	.globl _PT2
                                    145 	.globl _ET2
                                    146 	.globl _TMOD
                                    147 	.globl _TL1
                                    148 	.globl _TL0
                                    149 	.globl _TH1
                                    150 	.globl _TH0
                                    151 	.globl _TCON
                                    152 	.globl _SP
                                    153 	.globl _SCON
                                    154 	.globl _SBUF0
                                    155 	.globl _SBUF
                                    156 	.globl _PSW
                                    157 	.globl _PCON
                                    158 	.globl _P3
                                    159 	.globl _P2
                                    160 	.globl _P1
                                    161 	.globl _P0
                                    162 	.globl _IP
                                    163 	.globl _IE
                                    164 	.globl _DP0L
                                    165 	.globl _DPL
                                    166 	.globl _DP0H
                                    167 	.globl _DPH
                                    168 	.globl _B
                                    169 	.globl _ACC
                                    170 	.globl _EECON
                                    171 	.globl _KBF
                                    172 	.globl _KBE
                                    173 	.globl _KBLS
                                    174 	.globl _BRL
                                    175 	.globl _BDRCON
                                    176 	.globl _T2MOD
                                    177 	.globl _SPDAT
                                    178 	.globl _SPSTA
                                    179 	.globl _SPCON
                                    180 	.globl _SADEN
                                    181 	.globl _SADDR
                                    182 	.globl _WDTPRG
                                    183 	.globl _WDTRST
                                    184 	.globl _P5
                                    185 	.globl _P4
                                    186 	.globl _IPH1
                                    187 	.globl _IPL1
                                    188 	.globl _IPH0
                                    189 	.globl _IPL0
                                    190 	.globl _IEN1
                                    191 	.globl _IEN0
                                    192 	.globl _CMOD
                                    193 	.globl _CL
                                    194 	.globl _CH
                                    195 	.globl _CCON
                                    196 	.globl _CCAPM4
                                    197 	.globl _CCAPM3
                                    198 	.globl _CCAPM2
                                    199 	.globl _CCAPM1
                                    200 	.globl _CCAPM0
                                    201 	.globl _CCAP4L
                                    202 	.globl _CCAP3L
                                    203 	.globl _CCAP2L
                                    204 	.globl _CCAP1L
                                    205 	.globl _CCAP0L
                                    206 	.globl _CCAP4H
                                    207 	.globl _CCAP3H
                                    208 	.globl _CCAP2H
                                    209 	.globl _CCAP1H
                                    210 	.globl _CCAP0H
                                    211 	.globl _CKCON1
                                    212 	.globl _CKCON0
                                    213 	.globl _CKRL
                                    214 	.globl _AUXR1
                                    215 	.globl _AUXR
                                    216 	.globl _TH2
                                    217 	.globl _TL2
                                    218 	.globl _RCAP2H
                                    219 	.globl _RCAP2L
                                    220 	.globl _T2CON
                                    221 	.globl _busy_flag
                                    222 	.globl _CursorPtr
                                    223 	.globl _ptr
                                    224 	.globl _lcdgotoxy_PARM_2
                                    225 	.globl _delay
                                    226 	.globl _lcdbusywait
                                    227 	.globl _lcd_cmd
                                    228 	.globl _lcd_init
                                    229 	.globl _lcdputch_timer
                                    230 	.globl _lcdputch
                                    231 	.globl _lcdgotoaddress
                                    232 	.globl _lcdputstr
                                    233 	.globl _lcdclear
                                    234 	.globl _lcdgotoxy
                                    235 	.globl _current_position
                                    236 	.globl _lcdgetch
                                    237 	.globl _hexdump
                                    238 ;--------------------------------------------------------
                                    239 ; special function registers
                                    240 ;--------------------------------------------------------
                                    241 	.area RSEG    (ABS,DATA)
      000000                        242 	.org 0x0000
                           0000C8   243 _T2CON	=	0x00c8
                           0000CA   244 _RCAP2L	=	0x00ca
                           0000CB   245 _RCAP2H	=	0x00cb
                           0000CC   246 _TL2	=	0x00cc
                           0000CD   247 _TH2	=	0x00cd
                           00008E   248 _AUXR	=	0x008e
                           0000A2   249 _AUXR1	=	0x00a2
                           000097   250 _CKRL	=	0x0097
                           00008F   251 _CKCON0	=	0x008f
                           0000AF   252 _CKCON1	=	0x00af
                           0000FA   253 _CCAP0H	=	0x00fa
                           0000FB   254 _CCAP1H	=	0x00fb
                           0000FC   255 _CCAP2H	=	0x00fc
                           0000FD   256 _CCAP3H	=	0x00fd
                           0000FE   257 _CCAP4H	=	0x00fe
                           0000EA   258 _CCAP0L	=	0x00ea
                           0000EB   259 _CCAP1L	=	0x00eb
                           0000EC   260 _CCAP2L	=	0x00ec
                           0000ED   261 _CCAP3L	=	0x00ed
                           0000EE   262 _CCAP4L	=	0x00ee
                           0000DA   263 _CCAPM0	=	0x00da
                           0000DB   264 _CCAPM1	=	0x00db
                           0000DC   265 _CCAPM2	=	0x00dc
                           0000DD   266 _CCAPM3	=	0x00dd
                           0000DE   267 _CCAPM4	=	0x00de
                           0000D8   268 _CCON	=	0x00d8
                           0000F9   269 _CH	=	0x00f9
                           0000E9   270 _CL	=	0x00e9
                           0000D9   271 _CMOD	=	0x00d9
                           0000A8   272 _IEN0	=	0x00a8
                           0000B1   273 _IEN1	=	0x00b1
                           0000B8   274 _IPL0	=	0x00b8
                           0000B7   275 _IPH0	=	0x00b7
                           0000B2   276 _IPL1	=	0x00b2
                           0000B3   277 _IPH1	=	0x00b3
                           0000C0   278 _P4	=	0x00c0
                           0000E8   279 _P5	=	0x00e8
                           0000A6   280 _WDTRST	=	0x00a6
                           0000A7   281 _WDTPRG	=	0x00a7
                           0000A9   282 _SADDR	=	0x00a9
                           0000B9   283 _SADEN	=	0x00b9
                           0000C3   284 _SPCON	=	0x00c3
                           0000C4   285 _SPSTA	=	0x00c4
                           0000C5   286 _SPDAT	=	0x00c5
                           0000C9   287 _T2MOD	=	0x00c9
                           00009B   288 _BDRCON	=	0x009b
                           00009A   289 _BRL	=	0x009a
                           00009C   290 _KBLS	=	0x009c
                           00009D   291 _KBE	=	0x009d
                           00009E   292 _KBF	=	0x009e
                           0000D2   293 _EECON	=	0x00d2
                           0000E0   294 _ACC	=	0x00e0
                           0000F0   295 _B	=	0x00f0
                           000083   296 _DPH	=	0x0083
                           000083   297 _DP0H	=	0x0083
                           000082   298 _DPL	=	0x0082
                           000082   299 _DP0L	=	0x0082
                           0000A8   300 _IE	=	0x00a8
                           0000B8   301 _IP	=	0x00b8
                           000080   302 _P0	=	0x0080
                           000090   303 _P1	=	0x0090
                           0000A0   304 _P2	=	0x00a0
                           0000B0   305 _P3	=	0x00b0
                           000087   306 _PCON	=	0x0087
                           0000D0   307 _PSW	=	0x00d0
                           000099   308 _SBUF	=	0x0099
                           000099   309 _SBUF0	=	0x0099
                           000098   310 _SCON	=	0x0098
                           000081   311 _SP	=	0x0081
                           000088   312 _TCON	=	0x0088
                           00008C   313 _TH0	=	0x008c
                           00008D   314 _TH1	=	0x008d
                           00008A   315 _TL0	=	0x008a
                           00008B   316 _TL1	=	0x008b
                           000089   317 _TMOD	=	0x0089
                                    318 ;--------------------------------------------------------
                                    319 ; special function bits
                                    320 ;--------------------------------------------------------
                                    321 	.area RSEG    (ABS,DATA)
      000000                        322 	.org 0x0000
                           0000AD   323 _ET2	=	0x00ad
                           0000BD   324 _PT2	=	0x00bd
                           0000C8   325 _T2CON_0	=	0x00c8
                           0000C9   326 _T2CON_1	=	0x00c9
                           0000CA   327 _T2CON_2	=	0x00ca
                           0000CB   328 _T2CON_3	=	0x00cb
                           0000CC   329 _T2CON_4	=	0x00cc
                           0000CD   330 _T2CON_5	=	0x00cd
                           0000CE   331 _T2CON_6	=	0x00ce
                           0000CF   332 _T2CON_7	=	0x00cf
                           0000C8   333 _CP_RL2	=	0x00c8
                           0000C9   334 _C_T2	=	0x00c9
                           0000CA   335 _TR2	=	0x00ca
                           0000CB   336 _EXEN2	=	0x00cb
                           0000CC   337 _TCLK	=	0x00cc
                           0000CD   338 _RCLK	=	0x00cd
                           0000CE   339 _EXF2	=	0x00ce
                           0000CF   340 _TF2	=	0x00cf
                           0000DF   341 _CF	=	0x00df
                           0000DE   342 _CR	=	0x00de
                           0000DC   343 _CCF4	=	0x00dc
                           0000DB   344 _CCF3	=	0x00db
                           0000DA   345 _CCF2	=	0x00da
                           0000D9   346 _CCF1	=	0x00d9
                           0000D8   347 _CCF0	=	0x00d8
                           0000AE   348 _EC	=	0x00ae
                           0000BE   349 _PPCL	=	0x00be
                           0000BD   350 _PT2L	=	0x00bd
                           0000BC   351 _PSL	=	0x00bc
                           0000BB   352 _PT1L	=	0x00bb
                           0000BA   353 _PX1L	=	0x00ba
                           0000B9   354 _PT0L	=	0x00b9
                           0000B8   355 _PX0L	=	0x00b8
                           0000C0   356 _P4_0	=	0x00c0
                           0000C1   357 _P4_1	=	0x00c1
                           0000C2   358 _P4_2	=	0x00c2
                           0000C3   359 _P4_3	=	0x00c3
                           0000C4   360 _P4_4	=	0x00c4
                           0000C5   361 _P4_5	=	0x00c5
                           0000C6   362 _P4_6	=	0x00c6
                           0000C7   363 _P4_7	=	0x00c7
                           0000E8   364 _P5_0	=	0x00e8
                           0000E9   365 _P5_1	=	0x00e9
                           0000EA   366 _P5_2	=	0x00ea
                           0000EB   367 _P5_3	=	0x00eb
                           0000EC   368 _P5_4	=	0x00ec
                           0000ED   369 _P5_5	=	0x00ed
                           0000EE   370 _P5_6	=	0x00ee
                           0000EF   371 _P5_7	=	0x00ef
                           0000F0   372 _BREG_F0	=	0x00f0
                           0000F1   373 _BREG_F1	=	0x00f1
                           0000F2   374 _BREG_F2	=	0x00f2
                           0000F3   375 _BREG_F3	=	0x00f3
                           0000F4   376 _BREG_F4	=	0x00f4
                           0000F5   377 _BREG_F5	=	0x00f5
                           0000F6   378 _BREG_F6	=	0x00f6
                           0000F7   379 _BREG_F7	=	0x00f7
                           0000A8   380 _EX0	=	0x00a8
                           0000A9   381 _ET0	=	0x00a9
                           0000AA   382 _EX1	=	0x00aa
                           0000AB   383 _ET1	=	0x00ab
                           0000AC   384 _ES	=	0x00ac
                           0000AF   385 _EA	=	0x00af
                           0000B8   386 _PX0	=	0x00b8
                           0000B9   387 _PT0	=	0x00b9
                           0000BA   388 _PX1	=	0x00ba
                           0000BB   389 _PT1	=	0x00bb
                           0000BC   390 _PS	=	0x00bc
                           000080   391 _P0_0	=	0x0080
                           000081   392 _P0_1	=	0x0081
                           000082   393 _P0_2	=	0x0082
                           000083   394 _P0_3	=	0x0083
                           000084   395 _P0_4	=	0x0084
                           000085   396 _P0_5	=	0x0085
                           000086   397 _P0_6	=	0x0086
                           000087   398 _P0_7	=	0x0087
                           000090   399 _P1_0	=	0x0090
                           000091   400 _P1_1	=	0x0091
                           000092   401 _P1_2	=	0x0092
                           000093   402 _P1_3	=	0x0093
                           000094   403 _P1_4	=	0x0094
                           000095   404 _P1_5	=	0x0095
                           000096   405 _P1_6	=	0x0096
                           000097   406 _P1_7	=	0x0097
                           0000A0   407 _P2_0	=	0x00a0
                           0000A1   408 _P2_1	=	0x00a1
                           0000A2   409 _P2_2	=	0x00a2
                           0000A3   410 _P2_3	=	0x00a3
                           0000A4   411 _P2_4	=	0x00a4
                           0000A5   412 _P2_5	=	0x00a5
                           0000A6   413 _P2_6	=	0x00a6
                           0000A7   414 _P2_7	=	0x00a7
                           0000B0   415 _P3_0	=	0x00b0
                           0000B1   416 _P3_1	=	0x00b1
                           0000B2   417 _P3_2	=	0x00b2
                           0000B3   418 _P3_3	=	0x00b3
                           0000B4   419 _P3_4	=	0x00b4
                           0000B5   420 _P3_5	=	0x00b5
                           0000B6   421 _P3_6	=	0x00b6
                           0000B7   422 _P3_7	=	0x00b7
                           0000B0   423 _RXD	=	0x00b0
                           0000B0   424 _RXD0	=	0x00b0
                           0000B1   425 _TXD	=	0x00b1
                           0000B1   426 _TXD0	=	0x00b1
                           0000B2   427 _INT0	=	0x00b2
                           0000B3   428 _INT1	=	0x00b3
                           0000B4   429 _T0	=	0x00b4
                           0000B5   430 _T1	=	0x00b5
                           0000B6   431 _WR	=	0x00b6
                           0000B7   432 _RD	=	0x00b7
                           0000D0   433 _P	=	0x00d0
                           0000D1   434 _F1	=	0x00d1
                           0000D2   435 _OV	=	0x00d2
                           0000D3   436 _RS0	=	0x00d3
                           0000D4   437 _RS1	=	0x00d4
                           0000D5   438 _F0	=	0x00d5
                           0000D6   439 _AC	=	0x00d6
                           0000D7   440 _CY	=	0x00d7
                           000098   441 _RI	=	0x0098
                           000099   442 _TI	=	0x0099
                           00009A   443 _RB8	=	0x009a
                           00009B   444 _TB8	=	0x009b
                           00009C   445 _REN	=	0x009c
                           00009D   446 _SM2	=	0x009d
                           00009E   447 _SM1	=	0x009e
                           00009F   448 _SM0	=	0x009f
                           000088   449 _IT0	=	0x0088
                           000089   450 _IE0	=	0x0089
                           00008A   451 _IT1	=	0x008a
                           00008B   452 _IE1	=	0x008b
                           00008C   453 _TR0	=	0x008c
                           00008D   454 _TF0	=	0x008d
                           00008E   455 _TR1	=	0x008e
                           00008F   456 _TF1	=	0x008f
                                    457 ;--------------------------------------------------------
                                    458 ; overlayable register banks
                                    459 ;--------------------------------------------------------
                                    460 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        461 	.ds 8
                                    462 ;--------------------------------------------------------
                                    463 ; internal ram data
                                    464 ;--------------------------------------------------------
                                    465 	.area DSEG    (DATA)
                                    466 ;--------------------------------------------------------
                                    467 ; overlayable items in internal ram
                                    468 ;--------------------------------------------------------
                                    469 ;--------------------------------------------------------
                                    470 ; indirectly addressable internal ram data
                                    471 ;--------------------------------------------------------
                                    472 	.area ISEG    (DATA)
                                    473 ;--------------------------------------------------------
                                    474 ; absolute internal ram data
                                    475 ;--------------------------------------------------------
                                    476 	.area IABS    (ABS,DATA)
                                    477 	.area IABS    (ABS,DATA)
                                    478 ;--------------------------------------------------------
                                    479 ; bit data
                                    480 ;--------------------------------------------------------
                                    481 	.area BSEG    (BIT)
                                    482 ;--------------------------------------------------------
                                    483 ; paged external ram data
                                    484 ;--------------------------------------------------------
                                    485 	.area PSEG    (PAG,XDATA)
                                    486 ;--------------------------------------------------------
                                    487 ; external ram data
                                    488 ;--------------------------------------------------------
                                    489 	.area XSEG    (XDATA)
      000001                        490 _delay_d_65536_105:
      000001                        491 	.ds 2
      000003                        492 _lcd_cmd_command_65536_108:
      000003                        493 	.ds 1
      000004                        494 _lcdputch_timer_cc_65536_111:
      000004                        495 	.ds 1
      000005                        496 _lcdputch_cc_65536_113:
      000005                        497 	.ds 1
      000006                        498 _lcdgotoaddress_addr_65536_120:
      000006                        499 	.ds 1
      000007                        500 _lcdputstr_ss_65536_122:
      000007                        501 	.ds 3
      00000A                        502 _lcdgotoxy_PARM_2:
      00000A                        503 	.ds 1
      00000B                        504 _lcdgotoxy_row_65536_126:
      00000B                        505 	.ds 1
      00000C                        506 _lcdgotoxy_xyaddress_65536_127:
      00000C                        507 	.ds 1
      00000D                        508 _hexdump_size_65536_135:
      00000D                        509 	.ds 2
      00000F                        510 _hexdump_address_65536_135:
      00000F                        511 	.ds 2
                                    512 ;--------------------------------------------------------
                                    513 ; absolute external ram data
                                    514 ;--------------------------------------------------------
                                    515 	.area XABS    (ABS,XDATA)
                                    516 ;--------------------------------------------------------
                                    517 ; external initialized ram data
                                    518 ;--------------------------------------------------------
                                    519 	.area XISEG   (XDATA)
      0000F5                        520 _ptr::
      0000F5                        521 	.ds 3
      0000F8                        522 _CursorPtr::
      0000F8                        523 	.ds 1
      0000F9                        524 _busy_flag::
      0000F9                        525 	.ds 3
                                    526 	.area HOME    (CODE)
                                    527 	.area GSINIT0 (CODE)
                                    528 	.area GSINIT1 (CODE)
                                    529 	.area GSINIT2 (CODE)
                                    530 	.area GSINIT3 (CODE)
                                    531 	.area GSINIT4 (CODE)
                                    532 	.area GSINIT5 (CODE)
                                    533 	.area GSINIT  (CODE)
                                    534 	.area GSFINAL (CODE)
                                    535 	.area CSEG    (CODE)
                                    536 ;--------------------------------------------------------
                                    537 ; global & static initialisations
                                    538 ;--------------------------------------------------------
                                    539 	.area HOME    (CODE)
                                    540 	.area GSINIT  (CODE)
                                    541 	.area GSFINAL (CODE)
                                    542 	.area GSINIT  (CODE)
                                    543 ;--------------------------------------------------------
                                    544 ; Home
                                    545 ;--------------------------------------------------------
                                    546 	.area HOME    (CODE)
                                    547 	.area HOME    (CODE)
                                    548 ;--------------------------------------------------------
                                    549 ; code
                                    550 ;--------------------------------------------------------
                                    551 	.area CSEG    (CODE)
                                    552 ;------------------------------------------------------------
                                    553 ;Allocation info for local variables in function 'delay'
                                    554 ;------------------------------------------------------------
                                    555 ;d                         Allocated with name '_delay_d_65536_105'
                                    556 ;------------------------------------------------------------
                                    557 ;	lcd_functions.c:51: void delay(unsigned int d)
                                    558 ;	-----------------------------------------
                                    559 ;	 function delay
                                    560 ;	-----------------------------------------
      0000C3                        561 _delay:
                           000007   562 	ar7 = 0x07
                           000006   563 	ar6 = 0x06
                           000005   564 	ar5 = 0x05
                           000004   565 	ar4 = 0x04
                           000003   566 	ar3 = 0x03
                           000002   567 	ar2 = 0x02
                           000001   568 	ar1 = 0x01
                           000000   569 	ar0 = 0x00
      0000C3 AF 83            [24]  570 	mov	r7,dph
      0000C5 E5 82            [12]  571 	mov	a,dpl
      0000C7 90 00 01         [24]  572 	mov	dptr,#_delay_d_65536_105
      0000CA F0               [24]  573 	movx	@dptr,a
      0000CB EF               [12]  574 	mov	a,r7
      0000CC A3               [24]  575 	inc	dptr
      0000CD F0               [24]  576 	movx	@dptr,a
                                    577 ;	lcd_functions.c:53: while(d--);
      0000CE 90 00 01         [24]  578 	mov	dptr,#_delay_d_65536_105
      0000D1 E0               [24]  579 	movx	a,@dptr
      0000D2 FE               [12]  580 	mov	r6,a
      0000D3 A3               [24]  581 	inc	dptr
      0000D4 E0               [24]  582 	movx	a,@dptr
      0000D5 FF               [12]  583 	mov	r7,a
      0000D6                        584 00101$:
      0000D6 8E 04            [24]  585 	mov	ar4,r6
      0000D8 8F 05            [24]  586 	mov	ar5,r7
      0000DA 1E               [12]  587 	dec	r6
      0000DB BE FF 01         [24]  588 	cjne	r6,#0xff,00114$
      0000DE 1F               [12]  589 	dec	r7
      0000DF                        590 00114$:
      0000DF 90 00 01         [24]  591 	mov	dptr,#_delay_d_65536_105
      0000E2 EE               [12]  592 	mov	a,r6
      0000E3 F0               [24]  593 	movx	@dptr,a
      0000E4 EF               [12]  594 	mov	a,r7
      0000E5 A3               [24]  595 	inc	dptr
      0000E6 F0               [24]  596 	movx	@dptr,a
      0000E7 EC               [12]  597 	mov	a,r4
      0000E8 4D               [12]  598 	orl	a,r5
      0000E9 70 EB            [24]  599 	jnz	00101$
      0000EB 90 00 01         [24]  600 	mov	dptr,#_delay_d_65536_105
      0000EE EE               [12]  601 	mov	a,r6
      0000EF F0               [24]  602 	movx	@dptr,a
      0000F0 EF               [12]  603 	mov	a,r7
      0000F1 A3               [24]  604 	inc	dptr
      0000F2 F0               [24]  605 	movx	@dptr,a
                                    606 ;	lcd_functions.c:54: }
      0000F3 22               [24]  607 	ret
                                    608 ;------------------------------------------------------------
                                    609 ;Allocation info for local variables in function 'lcdbusywait'
                                    610 ;------------------------------------------------------------
                                    611 ;	lcd_functions.c:56: void lcdbusywait()
                                    612 ;	-----------------------------------------
                                    613 ;	 function lcdbusywait
                                    614 ;	-----------------------------------------
      0000F4                        615 _lcdbusywait:
                                    616 ;	lcd_functions.c:58: Rs = 0;                             //condition for busy polling
                                    617 ;	assignBit
      0000F4 C2 95            [12]  618 	clr	_P1_5
                                    619 ;	lcd_functions.c:59: Rw = 1;
                                    620 ;	assignBit
      0000F6 D2 96            [12]  621 	setb	_P1_6
                                    622 ;	lcd_functions.c:60: while(((*busy_flag)& 0x80)==0x80);      //wait till BF flag is not set
      0000F8                        623 00101$:
      0000F8 90 00 F9         [24]  624 	mov	dptr,#_busy_flag
      0000FB E0               [24]  625 	movx	a,@dptr
      0000FC FD               [12]  626 	mov	r5,a
      0000FD A3               [24]  627 	inc	dptr
      0000FE E0               [24]  628 	movx	a,@dptr
      0000FF FE               [12]  629 	mov	r6,a
      000100 A3               [24]  630 	inc	dptr
      000101 E0               [24]  631 	movx	a,@dptr
      000102 FF               [12]  632 	mov	r7,a
      000103 8D 82            [24]  633 	mov	dpl,r5
      000105 8E 83            [24]  634 	mov	dph,r6
      000107 8F F0            [24]  635 	mov	b,r7
      000109 12 1F 88         [24]  636 	lcall	__gptrget
      00010C FD               [12]  637 	mov	r5,a
      00010D A3               [24]  638 	inc	dptr
      00010E 12 1F 88         [24]  639 	lcall	__gptrget
      000111 53 05 80         [24]  640 	anl	ar5,#0x80
      000114 7E 00            [12]  641 	mov	r6,#0x00
      000116 BD 80 05         [24]  642 	cjne	r5,#0x80,00110$
      000119 BE 00 02         [24]  643 	cjne	r6,#0x00,00110$
      00011C 80 DA            [24]  644 	sjmp	00101$
      00011E                        645 00110$:
                                    646 ;	lcd_functions.c:61: }
      00011E 22               [24]  647 	ret
                                    648 ;------------------------------------------------------------
                                    649 ;Allocation info for local variables in function 'lcd_cmd'
                                    650 ;------------------------------------------------------------
                                    651 ;command                   Allocated with name '_lcd_cmd_command_65536_108'
                                    652 ;------------------------------------------------------------
                                    653 ;	lcd_functions.c:63: void lcd_cmd(unsigned char command)
                                    654 ;	-----------------------------------------
                                    655 ;	 function lcd_cmd
                                    656 ;	-----------------------------------------
      00011F                        657 _lcd_cmd:
      00011F E5 82            [12]  658 	mov	a,dpl
      000121 90 00 03         [24]  659 	mov	dptr,#_lcd_cmd_command_65536_108
      000124 F0               [24]  660 	movx	@dptr,a
                                    661 ;	lcd_functions.c:65: *ptr=command;
      000125 90 00 F5         [24]  662 	mov	dptr,#_ptr
      000128 E0               [24]  663 	movx	a,@dptr
      000129 FD               [12]  664 	mov	r5,a
      00012A A3               [24]  665 	inc	dptr
      00012B E0               [24]  666 	movx	a,@dptr
      00012C FE               [12]  667 	mov	r6,a
      00012D A3               [24]  668 	inc	dptr
      00012E E0               [24]  669 	movx	a,@dptr
      00012F FF               [12]  670 	mov	r7,a
      000130 90 00 03         [24]  671 	mov	dptr,#_lcd_cmd_command_65536_108
      000133 E0               [24]  672 	movx	a,@dptr
      000134 FC               [12]  673 	mov	r4,a
      000135 7B 00            [12]  674 	mov	r3,#0x00
      000137 8D 82            [24]  675 	mov	dpl,r5
      000139 8E 83            [24]  676 	mov	dph,r6
      00013B 8F F0            [24]  677 	mov	b,r7
      00013D EC               [12]  678 	mov	a,r4
      00013E 12 0E 60         [24]  679 	lcall	__gptrput
      000141 A3               [24]  680 	inc	dptr
      000142 EB               [12]  681 	mov	a,r3
                                    682 ;	lcd_functions.c:66: }
      000143 02 0E 60         [24]  683 	ljmp	__gptrput
                                    684 ;------------------------------------------------------------
                                    685 ;Allocation info for local variables in function 'lcd_init'
                                    686 ;------------------------------------------------------------
                                    687 ;	lcd_functions.c:68: void lcd_init()
                                    688 ;	-----------------------------------------
                                    689 ;	 function lcd_init
                                    690 ;	-----------------------------------------
      000146                        691 _lcd_init:
                                    692 ;	lcd_functions.c:70: Rs=0;
                                    693 ;	assignBit
      000146 C2 95            [12]  694 	clr	_P1_5
                                    695 ;	lcd_functions.c:71: Rw=0;
                                    696 ;	assignBit
      000148 C2 96            [12]  697 	clr	_P1_6
                                    698 ;	lcd_functions.c:73: lcd_cmd(0x30);      //unlock command
      00014A 75 82 30         [24]  699 	mov	dpl,#0x30
      00014D 12 01 1F         [24]  700 	lcall	_lcd_cmd
                                    701 ;	lcd_functions.c:74: delay(10000);
      000150 90 27 10         [24]  702 	mov	dptr,#0x2710
      000153 12 00 C3         [24]  703 	lcall	_delay
                                    704 ;	lcd_functions.c:75: lcd_cmd(0x30);      //unlock command
      000156 75 82 30         [24]  705 	mov	dpl,#0x30
      000159 12 01 1F         [24]  706 	lcall	_lcd_cmd
                                    707 ;	lcd_functions.c:76: delay(10000);
      00015C 90 27 10         [24]  708 	mov	dptr,#0x2710
      00015F 12 00 C3         [24]  709 	lcall	_delay
                                    710 ;	lcd_functions.c:77: lcd_cmd(0x30);      //unlock command
      000162 75 82 30         [24]  711 	mov	dpl,#0x30
      000165 12 01 1F         [24]  712 	lcall	_lcd_cmd
                                    713 ;	lcd_functions.c:78: delay(10000);
      000168 90 27 10         [24]  714 	mov	dptr,#0x2710
      00016B 12 00 C3         [24]  715 	lcall	_delay
                                    716 ;	lcd_functions.c:79: lcd_cmd(0x38);      //function set command
      00016E 75 82 38         [24]  717 	mov	dpl,#0x38
      000171 12 01 1F         [24]  718 	lcall	_lcd_cmd
                                    719 ;	lcd_functions.c:80: delay(100);
      000174 90 00 64         [24]  720 	mov	dptr,#0x0064
      000177 12 00 C3         [24]  721 	lcall	_delay
                                    722 ;	lcd_functions.c:81: lcd_cmd(0x0f);      //turn display on
      00017A 75 82 0F         [24]  723 	mov	dpl,#0x0f
      00017D 12 01 1F         [24]  724 	lcall	_lcd_cmd
                                    725 ;	lcd_functions.c:82: delay(100);
      000180 90 00 64         [24]  726 	mov	dptr,#0x0064
      000183 12 00 C3         [24]  727 	lcall	_delay
                                    728 ;	lcd_functions.c:83: lcd_cmd(0x06);      //entry mode set command
      000186 75 82 06         [24]  729 	mov	dpl,#0x06
      000189 12 01 1F         [24]  730 	lcall	_lcd_cmd
                                    731 ;	lcd_functions.c:84: delay(100);
      00018C 90 00 64         [24]  732 	mov	dptr,#0x0064
      00018F 12 00 C3         [24]  733 	lcall	_delay
                                    734 ;	lcd_functions.c:85: lcd_cmd(0x01);      //clear screen and send the cursor home
      000192 75 82 01         [24]  735 	mov	dpl,#0x01
      000195 12 01 1F         [24]  736 	lcall	_lcd_cmd
                                    737 ;	lcd_functions.c:86: delay(100);
      000198 90 00 64         [24]  738 	mov	dptr,#0x0064
      00019B 12 00 C3         [24]  739 	lcall	_delay
                                    740 ;	lcd_functions.c:87: lcdbusywait();      //poll for BF=0
                                    741 ;	lcd_functions.c:88: }
      00019E 02 00 F4         [24]  742 	ljmp	_lcdbusywait
                                    743 ;------------------------------------------------------------
                                    744 ;Allocation info for local variables in function 'lcdputch_timer'
                                    745 ;------------------------------------------------------------
                                    746 ;cc                        Allocated with name '_lcdputch_timer_cc_65536_111'
                                    747 ;------------------------------------------------------------
                                    748 ;	lcd_functions.c:90: void lcdputch_timer(unsigned char cc)
                                    749 ;	-----------------------------------------
                                    750 ;	 function lcdputch_timer
                                    751 ;	-----------------------------------------
      0001A1                        752 _lcdputch_timer:
      0001A1 E5 82            [12]  753 	mov	a,dpl
      0001A3 90 00 04         [24]  754 	mov	dptr,#_lcdputch_timer_cc_65536_111
      0001A6 F0               [24]  755 	movx	@dptr,a
                                    756 ;	lcd_functions.c:92: lcdbusywait();
      0001A7 12 00 F4         [24]  757 	lcall	_lcdbusywait
                                    758 ;	lcd_functions.c:93: Rs=1;               //write command
                                    759 ;	assignBit
      0001AA D2 95            [12]  760 	setb	_P1_5
                                    761 ;	lcd_functions.c:94: Rw=0;
                                    762 ;	assignBit
      0001AC C2 96            [12]  763 	clr	_P1_6
                                    764 ;	lcd_functions.c:95: *ptr=cc;            //write character at current pointer
      0001AE 90 00 F5         [24]  765 	mov	dptr,#_ptr
      0001B1 E0               [24]  766 	movx	a,@dptr
      0001B2 FD               [12]  767 	mov	r5,a
      0001B3 A3               [24]  768 	inc	dptr
      0001B4 E0               [24]  769 	movx	a,@dptr
      0001B5 FE               [12]  770 	mov	r6,a
      0001B6 A3               [24]  771 	inc	dptr
      0001B7 E0               [24]  772 	movx	a,@dptr
      0001B8 FF               [12]  773 	mov	r7,a
      0001B9 90 00 04         [24]  774 	mov	dptr,#_lcdputch_timer_cc_65536_111
      0001BC E0               [24]  775 	movx	a,@dptr
      0001BD FC               [12]  776 	mov	r4,a
      0001BE 7B 00            [12]  777 	mov	r3,#0x00
      0001C0 8D 82            [24]  778 	mov	dpl,r5
      0001C2 8E 83            [24]  779 	mov	dph,r6
      0001C4 8F F0            [24]  780 	mov	b,r7
      0001C6 EC               [12]  781 	mov	a,r4
      0001C7 12 0E 60         [24]  782 	lcall	__gptrput
      0001CA A3               [24]  783 	inc	dptr
      0001CB EB               [12]  784 	mov	a,r3
                                    785 ;	lcd_functions.c:96: }
      0001CC 02 0E 60         [24]  786 	ljmp	__gptrput
                                    787 ;------------------------------------------------------------
                                    788 ;Allocation info for local variables in function 'lcdputch'
                                    789 ;------------------------------------------------------------
                                    790 ;cc                        Allocated with name '_lcdputch_cc_65536_113'
                                    791 ;------------------------------------------------------------
                                    792 ;	lcd_functions.c:98: void lcdputch(unsigned char cc)
                                    793 ;	-----------------------------------------
                                    794 ;	 function lcdputch
                                    795 ;	-----------------------------------------
      0001CF                        796 _lcdputch:
      0001CF E5 82            [12]  797 	mov	a,dpl
      0001D1 90 00 05         [24]  798 	mov	dptr,#_lcdputch_cc_65536_113
      0001D4 F0               [24]  799 	movx	@dptr,a
                                    800 ;	lcd_functions.c:100: lcdbusywait();
      0001D5 12 00 F4         [24]  801 	lcall	_lcdbusywait
                                    802 ;	lcd_functions.c:101: Rs=1;               //write command
                                    803 ;	assignBit
      0001D8 D2 95            [12]  804 	setb	_P1_5
                                    805 ;	lcd_functions.c:102: Rw=0;
                                    806 ;	assignBit
      0001DA C2 96            [12]  807 	clr	_P1_6
                                    808 ;	lcd_functions.c:103: *ptr=cc;            //write character at current pointer
      0001DC 90 00 F5         [24]  809 	mov	dptr,#_ptr
      0001DF E0               [24]  810 	movx	a,@dptr
      0001E0 FD               [12]  811 	mov	r5,a
      0001E1 A3               [24]  812 	inc	dptr
      0001E2 E0               [24]  813 	movx	a,@dptr
      0001E3 FE               [12]  814 	mov	r6,a
      0001E4 A3               [24]  815 	inc	dptr
      0001E5 E0               [24]  816 	movx	a,@dptr
      0001E6 FF               [12]  817 	mov	r7,a
      0001E7 90 00 05         [24]  818 	mov	dptr,#_lcdputch_cc_65536_113
      0001EA E0               [24]  819 	movx	a,@dptr
      0001EB FC               [12]  820 	mov	r4,a
      0001EC 7B 00            [12]  821 	mov	r3,#0x00
      0001EE 8D 82            [24]  822 	mov	dpl,r5
      0001F0 8E 83            [24]  823 	mov	dph,r6
      0001F2 8F F0            [24]  824 	mov	b,r7
      0001F4 EC               [12]  825 	mov	a,r4
      0001F5 12 0E 60         [24]  826 	lcall	__gptrput
      0001F8 A3               [24]  827 	inc	dptr
      0001F9 EB               [12]  828 	mov	a,r3
      0001FA 12 0E 60         [24]  829 	lcall	__gptrput
                                    830 ;	lcd_functions.c:105: if (CursorPtr==ROW1_END){           //wrap cursor to next row
      0001FD 90 00 F8         [24]  831 	mov	dptr,#_CursorPtr
      000200 E0               [24]  832 	movx	a,@dptr
      000201 FF               [12]  833 	mov	r7,a
      000202 BF 0F 08         [24]  834 	cjne	r7,#0x0f,00111$
                                    835 ;	lcd_functions.c:106: CursorPtr=ROW2_START;
      000205 90 00 F8         [24]  836 	mov	dptr,#_CursorPtr
      000208 74 40            [12]  837 	mov	a,#0x40
      00020A F0               [24]  838 	movx	@dptr,a
      00020B 80 26            [24]  839 	sjmp	00112$
      00020D                        840 00111$:
                                    841 ;	lcd_functions.c:108: else if (CursorPtr==ROW2_END){
      00020D BF 4F 08         [24]  842 	cjne	r7,#0x4f,00108$
                                    843 ;	lcd_functions.c:109: CursorPtr=ROW3_START;
      000210 90 00 F8         [24]  844 	mov	dptr,#_CursorPtr
      000213 74 10            [12]  845 	mov	a,#0x10
      000215 F0               [24]  846 	movx	@dptr,a
      000216 80 1B            [24]  847 	sjmp	00112$
      000218                        848 00108$:
                                    849 ;	lcd_functions.c:111: else if (CursorPtr==ROW3_END){
      000218 BF 1F 08         [24]  850 	cjne	r7,#0x1f,00105$
                                    851 ;	lcd_functions.c:112: CursorPtr=ROW4_START;
      00021B 90 00 F8         [24]  852 	mov	dptr,#_CursorPtr
      00021E 74 50            [12]  853 	mov	a,#0x50
      000220 F0               [24]  854 	movx	@dptr,a
      000221 80 10            [24]  855 	sjmp	00112$
      000223                        856 00105$:
                                    857 ;	lcd_functions.c:114: else if (CursorPtr==ROW4_CLOCK){
      000223 BF 58 07         [24]  858 	cjne	r7,#0x58,00102$
                                    859 ;	lcd_functions.c:115: CursorPtr=ROW1_START;
      000226 90 00 F8         [24]  860 	mov	dptr,#_CursorPtr
      000229 E4               [12]  861 	clr	a
      00022A F0               [24]  862 	movx	@dptr,a
      00022B 80 06            [24]  863 	sjmp	00112$
      00022D                        864 00102$:
                                    865 ;	lcd_functions.c:118: CursorPtr++;
      00022D 90 00 F8         [24]  866 	mov	dptr,#_CursorPtr
      000230 EF               [12]  867 	mov	a,r7
      000231 04               [12]  868 	inc	a
      000232 F0               [24]  869 	movx	@dptr,a
      000233                        870 00112$:
                                    871 ;	lcd_functions.c:121: lcdgotoaddress(CursorPtr);      //send cursor to address
      000233 90 00 F8         [24]  872 	mov	dptr,#_CursorPtr
      000236 E0               [24]  873 	movx	a,@dptr
      000237 F5 82            [12]  874 	mov	dpl,a
                                    875 ;	lcd_functions.c:122: }
      000239 02 02 3C         [24]  876 	ljmp	_lcdgotoaddress
                                    877 ;------------------------------------------------------------
                                    878 ;Allocation info for local variables in function 'lcdgotoaddress'
                                    879 ;------------------------------------------------------------
                                    880 ;addr                      Allocated with name '_lcdgotoaddress_addr_65536_120'
                                    881 ;------------------------------------------------------------
                                    882 ;	lcd_functions.c:124: void lcdgotoaddress(unsigned char addr)
                                    883 ;	-----------------------------------------
                                    884 ;	 function lcdgotoaddress
                                    885 ;	-----------------------------------------
      00023C                        886 _lcdgotoaddress:
      00023C E5 82            [12]  887 	mov	a,dpl
      00023E 90 00 06         [24]  888 	mov	dptr,#_lcdgotoaddress_addr_65536_120
      000241 F0               [24]  889 	movx	@dptr,a
                                    890 ;	lcd_functions.c:126: lcdbusywait();
      000242 12 00 F4         [24]  891 	lcall	_lcdbusywait
                                    892 ;	lcd_functions.c:127: Rs=0;
                                    893 ;	assignBit
      000245 C2 95            [12]  894 	clr	_P1_5
                                    895 ;	lcd_functions.c:128: Rw=0;
                                    896 ;	assignBit
      000247 C2 96            [12]  897 	clr	_P1_6
                                    898 ;	lcd_functions.c:129: lcd_cmd(addr | 0x80);
      000249 90 00 06         [24]  899 	mov	dptr,#_lcdgotoaddress_addr_65536_120
      00024C E0               [24]  900 	movx	a,@dptr
      00024D 44 80            [12]  901 	orl	a,#0x80
      00024F F5 82            [12]  902 	mov	dpl,a
                                    903 ;	lcd_functions.c:130: }
      000251 02 01 1F         [24]  904 	ljmp	_lcd_cmd
                                    905 ;------------------------------------------------------------
                                    906 ;Allocation info for local variables in function 'lcdputstr'
                                    907 ;------------------------------------------------------------
                                    908 ;ss                        Allocated with name '_lcdputstr_ss_65536_122'
                                    909 ;------------------------------------------------------------
                                    910 ;	lcd_functions.c:132: void lcdputstr(char *ss)
                                    911 ;	-----------------------------------------
                                    912 ;	 function lcdputstr
                                    913 ;	-----------------------------------------
      000254                        914 _lcdputstr:
      000254 AF F0            [24]  915 	mov	r7,b
      000256 AE 83            [24]  916 	mov	r6,dph
      000258 E5 82            [12]  917 	mov	a,dpl
      00025A 90 00 07         [24]  918 	mov	dptr,#_lcdputstr_ss_65536_122
      00025D F0               [24]  919 	movx	@dptr,a
      00025E EE               [12]  920 	mov	a,r6
      00025F A3               [24]  921 	inc	dptr
      000260 F0               [24]  922 	movx	@dptr,a
      000261 EF               [12]  923 	mov	a,r7
      000262 A3               [24]  924 	inc	dptr
      000263 F0               [24]  925 	movx	@dptr,a
                                    926 ;	lcd_functions.c:134: while (*ss!='\0'){          //till null character is reached
      000264 90 00 07         [24]  927 	mov	dptr,#_lcdputstr_ss_65536_122
      000267 E0               [24]  928 	movx	a,@dptr
      000268 FD               [12]  929 	mov	r5,a
      000269 A3               [24]  930 	inc	dptr
      00026A E0               [24]  931 	movx	a,@dptr
      00026B FE               [12]  932 	mov	r6,a
      00026C A3               [24]  933 	inc	dptr
      00026D E0               [24]  934 	movx	a,@dptr
      00026E FF               [12]  935 	mov	r7,a
      00026F                        936 00101$:
      00026F 8D 82            [24]  937 	mov	dpl,r5
      000271 8E 83            [24]  938 	mov	dph,r6
      000273 8F F0            [24]  939 	mov	b,r7
      000275 12 1F 88         [24]  940 	lcall	__gptrget
      000278 FC               [12]  941 	mov	r4,a
      000279 60 23            [24]  942 	jz	00108$
                                    943 ;	lcd_functions.c:135: lcdputch(*ss);
      00027B 8C 82            [24]  944 	mov	dpl,r4
      00027D C0 07            [24]  945 	push	ar7
      00027F C0 06            [24]  946 	push	ar6
      000281 C0 05            [24]  947 	push	ar5
      000283 12 01 CF         [24]  948 	lcall	_lcdputch
      000286 D0 05            [24]  949 	pop	ar5
      000288 D0 06            [24]  950 	pop	ar6
      00028A D0 07            [24]  951 	pop	ar7
                                    952 ;	lcd_functions.c:136: ss++;                   //increment pointer
      00028C 0D               [12]  953 	inc	r5
      00028D BD 00 01         [24]  954 	cjne	r5,#0x00,00116$
      000290 0E               [12]  955 	inc	r6
      000291                        956 00116$:
      000291 90 00 07         [24]  957 	mov	dptr,#_lcdputstr_ss_65536_122
      000294 ED               [12]  958 	mov	a,r5
      000295 F0               [24]  959 	movx	@dptr,a
      000296 EE               [12]  960 	mov	a,r6
      000297 A3               [24]  961 	inc	dptr
      000298 F0               [24]  962 	movx	@dptr,a
      000299 EF               [12]  963 	mov	a,r7
      00029A A3               [24]  964 	inc	dptr
      00029B F0               [24]  965 	movx	@dptr,a
      00029C 80 D1            [24]  966 	sjmp	00101$
      00029E                        967 00108$:
      00029E 90 00 07         [24]  968 	mov	dptr,#_lcdputstr_ss_65536_122
      0002A1 ED               [12]  969 	mov	a,r5
      0002A2 F0               [24]  970 	movx	@dptr,a
      0002A3 EE               [12]  971 	mov	a,r6
      0002A4 A3               [24]  972 	inc	dptr
      0002A5 F0               [24]  973 	movx	@dptr,a
      0002A6 EF               [12]  974 	mov	a,r7
      0002A7 A3               [24]  975 	inc	dptr
      0002A8 F0               [24]  976 	movx	@dptr,a
                                    977 ;	lcd_functions.c:138: }
      0002A9 22               [24]  978 	ret
                                    979 ;------------------------------------------------------------
                                    980 ;Allocation info for local variables in function 'lcdclear'
                                    981 ;------------------------------------------------------------
                                    982 ;	lcd_functions.c:140: void lcdclear()
                                    983 ;	-----------------------------------------
                                    984 ;	 function lcdclear
                                    985 ;	-----------------------------------------
      0002AA                        986 _lcdclear:
                                    987 ;	lcd_functions.c:142: lcdbusywait();              //busy polling
      0002AA 12 00 F4         [24]  988 	lcall	_lcdbusywait
                                    989 ;	lcd_functions.c:143: Rs=0;                       //command conditions
                                    990 ;	assignBit
      0002AD C2 95            [12]  991 	clr	_P1_5
                                    992 ;	lcd_functions.c:144: Rw=0;
                                    993 ;	assignBit
      0002AF C2 96            [12]  994 	clr	_P1_6
                                    995 ;	lcd_functions.c:145: lcd_cmd(0x01);              //command to clear screen
      0002B1 75 82 01         [24]  996 	mov	dpl,#0x01
      0002B4 12 01 1F         [24]  997 	lcall	_lcd_cmd
                                    998 ;	lcd_functions.c:146: CursorPtr=0x00;             //send cursor to starting
      0002B7 90 00 F8         [24]  999 	mov	dptr,#_CursorPtr
      0002BA E4               [12] 1000 	clr	a
      0002BB F0               [24] 1001 	movx	@dptr,a
                                   1002 ;	lcd_functions.c:147: lcdgotoaddress(CursorPtr);
      0002BC 75 82 00         [24] 1003 	mov	dpl,#0x00
                                   1004 ;	lcd_functions.c:148: }
      0002BF 02 02 3C         [24] 1005 	ljmp	_lcdgotoaddress
                                   1006 ;------------------------------------------------------------
                                   1007 ;Allocation info for local variables in function 'lcdgotoxy'
                                   1008 ;------------------------------------------------------------
                                   1009 ;column                    Allocated with name '_lcdgotoxy_PARM_2'
                                   1010 ;row                       Allocated with name '_lcdgotoxy_row_65536_126'
                                   1011 ;xyaddress                 Allocated with name '_lcdgotoxy_xyaddress_65536_127'
                                   1012 ;------------------------------------------------------------
                                   1013 ;	lcd_functions.c:150: void lcdgotoxy(uint8_t row, uint8_t column)
                                   1014 ;	-----------------------------------------
                                   1015 ;	 function lcdgotoxy
                                   1016 ;	-----------------------------------------
      0002C2                       1017 _lcdgotoxy:
      0002C2 E5 82            [12] 1018 	mov	a,dpl
      0002C4 90 00 0B         [24] 1019 	mov	dptr,#_lcdgotoxy_row_65536_126
      0002C7 F0               [24] 1020 	movx	@dptr,a
                                   1021 ;	lcd_functions.c:152: uint8_t xyaddress=0;
      0002C8 90 00 0C         [24] 1022 	mov	dptr,#_lcdgotoxy_xyaddress_65536_127
      0002CB E4               [12] 1023 	clr	a
      0002CC F0               [24] 1024 	movx	@dptr,a
                                   1025 ;	lcd_functions.c:153: switch(row)
      0002CD 90 00 0B         [24] 1026 	mov	dptr,#_lcdgotoxy_row_65536_126
      0002D0 E0               [24] 1027 	movx	a,@dptr
      0002D1 FF               [12] 1028 	mov	r7,a
      0002D2 BF 01 02         [24] 1029 	cjne	r7,#0x01,00131$
      0002D5 80 0F            [24] 1030 	sjmp	00101$
      0002D7                       1031 00131$:
      0002D7 BF 02 02         [24] 1032 	cjne	r7,#0x02,00132$
      0002DA 80 14            [24] 1033 	sjmp	00102$
      0002DC                       1034 00132$:
      0002DC BF 03 02         [24] 1035 	cjne	r7,#0x03,00133$
      0002DF 80 1D            [24] 1036 	sjmp	00103$
      0002E1                       1037 00133$:
                                   1038 ;	lcd_functions.c:155: case 1: xyaddress= ROW1_START + column;     //address=row_address+column_number
      0002E1 BF 04 50         [24] 1039 	cjne	r7,#0x04,00108$
      0002E4 80 26            [24] 1040 	sjmp	00104$
      0002E6                       1041 00101$:
      0002E6 90 00 0A         [24] 1042 	mov	dptr,#_lcdgotoxy_PARM_2
      0002E9 E0               [24] 1043 	movx	a,@dptr
      0002EA 90 00 0C         [24] 1044 	mov	dptr,#_lcdgotoxy_xyaddress_65536_127
      0002ED F0               [24] 1045 	movx	@dptr,a
                                   1046 ;	lcd_functions.c:156: break;
                                   1047 ;	lcd_functions.c:157: case 2: xyaddress= ROW2_START + column;
      0002EE 80 44            [24] 1048 	sjmp	00108$
      0002F0                       1049 00102$:
      0002F0 90 00 0A         [24] 1050 	mov	dptr,#_lcdgotoxy_PARM_2
      0002F3 E0               [24] 1051 	movx	a,@dptr
      0002F4 FF               [12] 1052 	mov	r7,a
      0002F5 90 00 0C         [24] 1053 	mov	dptr,#_lcdgotoxy_xyaddress_65536_127
      0002F8 74 40            [12] 1054 	mov	a,#0x40
      0002FA 2F               [12] 1055 	add	a,r7
      0002FB F0               [24] 1056 	movx	@dptr,a
                                   1057 ;	lcd_functions.c:158: break;
                                   1058 ;	lcd_functions.c:159: case 3: xyaddress= ROW3_START + column;     //change to array
      0002FC 80 36            [24] 1059 	sjmp	00108$
      0002FE                       1060 00103$:
      0002FE 90 00 0A         [24] 1061 	mov	dptr,#_lcdgotoxy_PARM_2
      000301 E0               [24] 1062 	movx	a,@dptr
      000302 FF               [12] 1063 	mov	r7,a
      000303 90 00 0C         [24] 1064 	mov	dptr,#_lcdgotoxy_xyaddress_65536_127
      000306 74 10            [12] 1065 	mov	a,#0x10
      000308 2F               [12] 1066 	add	a,r7
      000309 F0               [24] 1067 	movx	@dptr,a
                                   1068 ;	lcd_functions.c:160: break;
                                   1069 ;	lcd_functions.c:161: case 4:
      00030A 80 28            [24] 1070 	sjmp	00108$
      00030C                       1071 00104$:
                                   1072 ;	lcd_functions.c:162: if (column<9)
      00030C 90 00 0A         [24] 1073 	mov	dptr,#_lcdgotoxy_PARM_2
      00030F E0               [24] 1074 	movx	a,@dptr
      000310 FF               [12] 1075 	mov	r7,a
      000311 BF 09 00         [24] 1076 	cjne	r7,#0x09,00135$
      000314                       1077 00135$:
      000314 50 09            [24] 1078 	jnc	00106$
                                   1079 ;	lcd_functions.c:164: xyaddress= ROW4_START + column;
      000316 90 00 0C         [24] 1080 	mov	dptr,#_lcdgotoxy_xyaddress_65536_127
      000319 74 50            [12] 1081 	mov	a,#0x50
      00031B 2F               [12] 1082 	add	a,r7
      00031C F0               [24] 1083 	movx	@dptr,a
                                   1084 ;	lcd_functions.c:165: break;
      00031D 80 15            [24] 1085 	sjmp	00108$
      00031F                       1086 00106$:
                                   1087 ;	lcd_functions.c:170: printf("enter valid column /n/r");
      00031F 74 14            [12] 1088 	mov	a,#___str_0
      000321 C0 E0            [24] 1089 	push	acc
      000323 74 20            [12] 1090 	mov	a,#(___str_0 >> 8)
      000325 C0 E0            [24] 1091 	push	acc
      000327 74 80            [12] 1092 	mov	a,#0x80
      000329 C0 E0            [24] 1093 	push	acc
      00032B 12 15 3C         [24] 1094 	lcall	_printf
      00032E 15 81            [12] 1095 	dec	sp
      000330 15 81            [12] 1096 	dec	sp
      000332 15 81            [12] 1097 	dec	sp
                                   1098 ;	lcd_functions.c:174: }
      000334                       1099 00108$:
                                   1100 ;	lcd_functions.c:175: lcdgotoaddress(xyaddress);                        //send cursor to address
      000334 90 00 0C         [24] 1101 	mov	dptr,#_lcdgotoxy_xyaddress_65536_127
      000337 E0               [24] 1102 	movx	a,@dptr
      000338 F5 82            [12] 1103 	mov	dpl,a
                                   1104 ;	lcd_functions.c:176: }
      00033A 02 02 3C         [24] 1105 	ljmp	_lcdgotoaddress
                                   1106 ;------------------------------------------------------------
                                   1107 ;Allocation info for local variables in function 'current_position'
                                   1108 ;------------------------------------------------------------
                                   1109 ;	lcd_functions.c:178: uint8_t current_position()
                                   1110 ;	-----------------------------------------
                                   1111 ;	 function current_position
                                   1112 ;	-----------------------------------------
      00033D                       1113 _current_position:
                                   1114 ;	lcd_functions.c:180: Rs=0;
                                   1115 ;	assignBit
      00033D C2 95            [12] 1116 	clr	_P1_5
                                   1117 ;	lcd_functions.c:181: Rw=1;
                                   1118 ;	assignBit
      00033F D2 96            [12] 1119 	setb	_P1_6
                                   1120 ;	lcd_functions.c:182: return (*ptr & 0x7F);
      000341 90 00 F5         [24] 1121 	mov	dptr,#_ptr
      000344 E0               [24] 1122 	movx	a,@dptr
      000345 FD               [12] 1123 	mov	r5,a
      000346 A3               [24] 1124 	inc	dptr
      000347 E0               [24] 1125 	movx	a,@dptr
      000348 FE               [12] 1126 	mov	r6,a
      000349 A3               [24] 1127 	inc	dptr
      00034A E0               [24] 1128 	movx	a,@dptr
      00034B FF               [12] 1129 	mov	r7,a
      00034C 8D 82            [24] 1130 	mov	dpl,r5
      00034E 8E 83            [24] 1131 	mov	dph,r6
      000350 8F F0            [24] 1132 	mov	b,r7
      000352 12 1F 88         [24] 1133 	lcall	__gptrget
      000355 FD               [12] 1134 	mov	r5,a
      000356 53 05 7F         [24] 1135 	anl	ar5,#0x7f
      000359 8D 82            [24] 1136 	mov	dpl,r5
                                   1137 ;	lcd_functions.c:183: }
      00035B 22               [24] 1138 	ret
                                   1139 ;------------------------------------------------------------
                                   1140 ;Allocation info for local variables in function 'lcdgetch'
                                   1141 ;------------------------------------------------------------
                                   1142 ;	lcd_functions.c:186: int lcdgetch(void)
                                   1143 ;	-----------------------------------------
                                   1144 ;	 function lcdgetch
                                   1145 ;	-----------------------------------------
      00035C                       1146 _lcdgetch:
                                   1147 ;	lcd_functions.c:188: lcdbusywait();
      00035C 12 00 F4         [24] 1148 	lcall	_lcdbusywait
                                   1149 ;	lcd_functions.c:189: Rs = 1;
                                   1150 ;	assignBit
      00035F D2 95            [12] 1151 	setb	_P1_5
                                   1152 ;	lcd_functions.c:190: Rw = 1;
                                   1153 ;	assignBit
      000361 D2 96            [12] 1154 	setb	_P1_6
                                   1155 ;	lcd_functions.c:192: return (*ptr & 0x7F);
      000363 90 00 F5         [24] 1156 	mov	dptr,#_ptr
      000366 E0               [24] 1157 	movx	a,@dptr
      000367 FD               [12] 1158 	mov	r5,a
      000368 A3               [24] 1159 	inc	dptr
      000369 E0               [24] 1160 	movx	a,@dptr
      00036A FE               [12] 1161 	mov	r6,a
      00036B A3               [24] 1162 	inc	dptr
      00036C E0               [24] 1163 	movx	a,@dptr
      00036D FF               [12] 1164 	mov	r7,a
      00036E 8D 82            [24] 1165 	mov	dpl,r5
      000370 8E 83            [24] 1166 	mov	dph,r6
      000372 8F F0            [24] 1167 	mov	b,r7
      000374 12 1F 88         [24] 1168 	lcall	__gptrget
      000377 FD               [12] 1169 	mov	r5,a
      000378 A3               [24] 1170 	inc	dptr
      000379 12 1F 88         [24] 1171 	lcall	__gptrget
      00037C 53 05 7F         [24] 1172 	anl	ar5,#0x7f
      00037F 7E 00            [12] 1173 	mov	r6,#0x00
      000381 8D 82            [24] 1174 	mov	dpl,r5
      000383 8E 83            [24] 1175 	mov	dph,r6
                                   1176 ;	lcd_functions.c:193: }
      000385 22               [24] 1177 	ret
                                   1178 ;------------------------------------------------------------
                                   1179 ;Allocation info for local variables in function 'hexdump'
                                   1180 ;------------------------------------------------------------
                                   1181 ;size                      Allocated with name '_hexdump_size_65536_135'
                                   1182 ;address                   Allocated with name '_hexdump_address_65536_135'
                                   1183 ;i                         Allocated with name '_hexdump_i_196608_137'
                                   1184 ;------------------------------------------------------------
                                   1185 ;	lcd_functions.c:196: void hexdump(void)
                                   1186 ;	-----------------------------------------
                                   1187 ;	 function hexdump
                                   1188 ;	-----------------------------------------
      000386                       1189 _hexdump:
                                   1190 ;	lcd_functions.c:198: int size= ROW4_END - ROW1_START;
      000386 90 00 0D         [24] 1191 	mov	dptr,#_hexdump_size_65536_135
      000389 74 5F            [12] 1192 	mov	a,#0x5f
      00038B F0               [24] 1193 	movx	@dptr,a
      00038C E4               [12] 1194 	clr	a
      00038D A3               [24] 1195 	inc	dptr
      00038E F0               [24] 1196 	movx	@dptr,a
                                   1197 ;	lcd_functions.c:199: int address=ROW1_START;
      00038F 90 00 0F         [24] 1198 	mov	dptr,#_hexdump_address_65536_135
      000392 F0               [24] 1199 	movx	@dptr,a
      000393 A3               [24] 1200 	inc	dptr
      000394 F0               [24] 1201 	movx	@dptr,a
                                   1202 ;	lcd_functions.c:200: while (size)
      000395                       1203 00104$:
      000395 90 00 0D         [24] 1204 	mov	dptr,#_hexdump_size_65536_135
      000398 E0               [24] 1205 	movx	a,@dptr
      000399 FE               [12] 1206 	mov	r6,a
      00039A A3               [24] 1207 	inc	dptr
      00039B E0               [24] 1208 	movx	a,@dptr
      00039C FF               [12] 1209 	mov	r7,a
      00039D 90 00 0D         [24] 1210 	mov	dptr,#_hexdump_size_65536_135
      0003A0 E0               [24] 1211 	movx	a,@dptr
      0003A1 F5 F0            [12] 1212 	mov	b,a
      0003A3 A3               [24] 1213 	inc	dptr
      0003A4 E0               [24] 1214 	movx	a,@dptr
      0003A5 45 F0            [12] 1215 	orl	a,b
      0003A7 70 01            [24] 1216 	jnz	00133$
      0003A9 22               [24] 1217 	ret
      0003AA                       1218 00133$:
                                   1219 ;	lcd_functions.c:202: printf("%.3x: ", address);
      0003AA 90 00 0F         [24] 1220 	mov	dptr,#_hexdump_address_65536_135
      0003AD E0               [24] 1221 	movx	a,@dptr
      0003AE FC               [12] 1222 	mov	r4,a
      0003AF A3               [24] 1223 	inc	dptr
      0003B0 E0               [24] 1224 	movx	a,@dptr
      0003B1 FD               [12] 1225 	mov	r5,a
      0003B2 C0 07            [24] 1226 	push	ar7
      0003B4 C0 06            [24] 1227 	push	ar6
      0003B6 C0 05            [24] 1228 	push	ar5
      0003B8 C0 04            [24] 1229 	push	ar4
      0003BA C0 04            [24] 1230 	push	ar4
      0003BC C0 05            [24] 1231 	push	ar5
      0003BE 74 2C            [12] 1232 	mov	a,#___str_1
      0003C0 C0 E0            [24] 1233 	push	acc
      0003C2 74 20            [12] 1234 	mov	a,#(___str_1 >> 8)
      0003C4 C0 E0            [24] 1235 	push	acc
      0003C6 74 80            [12] 1236 	mov	a,#0x80
      0003C8 C0 E0            [24] 1237 	push	acc
      0003CA 12 15 3C         [24] 1238 	lcall	_printf
      0003CD E5 81            [12] 1239 	mov	a,sp
      0003CF 24 FB            [12] 1240 	add	a,#0xfb
      0003D1 F5 81            [12] 1241 	mov	sp,a
      0003D3 D0 04            [24] 1242 	pop	ar4
      0003D5 D0 05            [24] 1243 	pop	ar5
      0003D7 D0 06            [24] 1244 	pop	ar6
      0003D9 D0 07            [24] 1245 	pop	ar7
                                   1246 ;	lcd_functions.c:203: for (int i=0; i<16; i++)
      0003DB 7A 00            [12] 1247 	mov	r2,#0x00
      0003DD 7B 00            [12] 1248 	mov	r3,#0x00
      0003DF                       1249 00108$:
      0003DF C3               [12] 1250 	clr	c
      0003E0 EA               [12] 1251 	mov	a,r2
      0003E1 94 10            [12] 1252 	subb	a,#0x10
      0003E3 EB               [12] 1253 	mov	a,r3
      0003E4 64 80            [12] 1254 	xrl	a,#0x80
      0003E6 94 80            [12] 1255 	subb	a,#0x80
      0003E8 50 54            [24] 1256 	jnc	00117$
                                   1257 ;	lcd_functions.c:205: lcdgotoaddress(address);
      0003EA 8C 01            [24] 1258 	mov	ar1,r4
      0003EC 89 82            [24] 1259 	mov	dpl,r1
      0003EE C0 07            [24] 1260 	push	ar7
      0003F0 C0 06            [24] 1261 	push	ar6
      0003F2 C0 05            [24] 1262 	push	ar5
      0003F4 C0 04            [24] 1263 	push	ar4
      0003F6 C0 03            [24] 1264 	push	ar3
      0003F8 C0 02            [24] 1265 	push	ar2
      0003FA 12 02 3C         [24] 1266 	lcall	_lcdgotoaddress
                                   1267 ;	lcd_functions.c:206: printf("%.2x ", lcdgetch());
      0003FD 12 03 5C         [24] 1268 	lcall	_lcdgetch
      000400 A8 82            [24] 1269 	mov	r0,dpl
      000402 A9 83            [24] 1270 	mov	r1,dph
      000404 C0 00            [24] 1271 	push	ar0
      000406 C0 01            [24] 1272 	push	ar1
      000408 74 33            [12] 1273 	mov	a,#___str_2
      00040A C0 E0            [24] 1274 	push	acc
      00040C 74 20            [12] 1275 	mov	a,#(___str_2 >> 8)
      00040E C0 E0            [24] 1276 	push	acc
      000410 74 80            [12] 1277 	mov	a,#0x80
      000412 C0 E0            [24] 1278 	push	acc
      000414 12 15 3C         [24] 1279 	lcall	_printf
      000417 E5 81            [12] 1280 	mov	a,sp
      000419 24 FB            [12] 1281 	add	a,#0xfb
      00041B F5 81            [12] 1282 	mov	sp,a
      00041D D0 02            [24] 1283 	pop	ar2
      00041F D0 03            [24] 1284 	pop	ar3
      000421 D0 04            [24] 1285 	pop	ar4
      000423 D0 05            [24] 1286 	pop	ar5
      000425 D0 06            [24] 1287 	pop	ar6
      000427 D0 07            [24] 1288 	pop	ar7
                                   1289 ;	lcd_functions.c:207: address++;
      000429 0C               [12] 1290 	inc	r4
      00042A BC 00 01         [24] 1291 	cjne	r4,#0x00,00135$
      00042D 0D               [12] 1292 	inc	r5
      00042E                       1293 00135$:
                                   1294 ;	lcd_functions.c:208: size--;
      00042E 1E               [12] 1295 	dec	r6
      00042F BE FF 01         [24] 1296 	cjne	r6,#0xff,00136$
      000432 1F               [12] 1297 	dec	r7
      000433                       1298 00136$:
                                   1299 ;	lcd_functions.c:209: if (size==0)
      000433 EE               [12] 1300 	mov	a,r6
      000434 4F               [12] 1301 	orl	a,r7
      000435 60 07            [24] 1302 	jz	00117$
                                   1303 ;	lcd_functions.c:203: for (int i=0; i<16; i++)
      000437 0A               [12] 1304 	inc	r2
      000438 BA 00 A4         [24] 1305 	cjne	r2,#0x00,00108$
      00043B 0B               [12] 1306 	inc	r3
      00043C 80 A1            [24] 1307 	sjmp	00108$
      00043E                       1308 00117$:
      00043E 90 00 0F         [24] 1309 	mov	dptr,#_hexdump_address_65536_135
      000441 EC               [12] 1310 	mov	a,r4
      000442 F0               [24] 1311 	movx	@dptr,a
      000443 ED               [12] 1312 	mov	a,r5
      000444 A3               [24] 1313 	inc	dptr
      000445 F0               [24] 1314 	movx	@dptr,a
      000446 90 00 0D         [24] 1315 	mov	dptr,#_hexdump_size_65536_135
      000449 EE               [12] 1316 	mov	a,r6
      00044A F0               [24] 1317 	movx	@dptr,a
      00044B EF               [12] 1318 	mov	a,r7
      00044C A3               [24] 1319 	inc	dptr
      00044D F0               [24] 1320 	movx	@dptr,a
                                   1321 ;	lcd_functions.c:212: printf("\n\r");
      00044E 74 39            [12] 1322 	mov	a,#___str_3
      000450 C0 E0            [24] 1323 	push	acc
      000452 74 20            [12] 1324 	mov	a,#(___str_3 >> 8)
      000454 C0 E0            [24] 1325 	push	acc
      000456 74 80            [12] 1326 	mov	a,#0x80
      000458 C0 E0            [24] 1327 	push	acc
      00045A 12 15 3C         [24] 1328 	lcall	_printf
      00045D 15 81            [12] 1329 	dec	sp
      00045F 15 81            [12] 1330 	dec	sp
      000461 15 81            [12] 1331 	dec	sp
                                   1332 ;	lcd_functions.c:214: }
      000463 02 03 95         [24] 1333 	ljmp	00104$
                                   1334 	.area CSEG    (CODE)
                                   1335 	.area CONST   (CODE)
                                   1336 	.area CONST   (CODE)
      002014                       1337 ___str_0:
      002014 65 6E 74 65 72 20 76  1338 	.ascii "enter valid column /n/r"
             61 6C 69 64 20 63 6F
             6C 75 6D 6E 20 2F 6E
             2F 72
      00202B 00                    1339 	.db 0x00
                                   1340 	.area CSEG    (CODE)
                                   1341 	.area CONST   (CODE)
      00202C                       1342 ___str_1:
      00202C 25 2E 33 78 3A 20     1343 	.ascii "%.3x: "
      002032 00                    1344 	.db 0x00
                                   1345 	.area CSEG    (CODE)
                                   1346 	.area CONST   (CODE)
      002033                       1347 ___str_2:
      002033 25 2E 32 78 20        1348 	.ascii "%.2x "
      002038 00                    1349 	.db 0x00
                                   1350 	.area CSEG    (CODE)
                                   1351 	.area CONST   (CODE)
      002039                       1352 ___str_3:
      002039 0A                    1353 	.db 0x0a
      00203A 0D                    1354 	.db 0x0d
      00203B 00                    1355 	.db 0x00
                                   1356 	.area CSEG    (CODE)
                                   1357 	.area XINIT   (CODE)
      002322                       1358 __xinit__ptr:
                                   1359 ; generic printIvalPtr
      002322 00 80 00              1360 	.byte #0x00,#0x80,#0x00
      002325                       1361 __xinit__CursorPtr:
      002325 00                    1362 	.db #0x00	; 0
      002326                       1363 __xinit__busy_flag:
      002326 F5 00 00              1364 	.byte _ptr, (_ptr >> 8),#0x00
                                   1365 	.area CABS    (ABS,CODE)
