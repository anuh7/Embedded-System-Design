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
                                    224 	.globl _LCD_build_PARM_2
                                    225 	.globl _LCD_build_main_PARM_2
                                    226 	.globl _delay
                                    227 	.globl _lcdbusywait
                                    228 	.globl _lcd_cmd
                                    229 	.globl _lcd_init
                                    230 	.globl _lcdgotoaddress_cgram
                                    231 	.globl _lcdputch_cgram
                                    232 	.globl _hexdump_cgram
                                    233 	.globl _lcdgetch_cgram
                                    234 	.globl _LCD_build_main
                                    235 	.globl _LCD_build
                                    236 	.globl _lcdclear
                                    237 	.globl _lcdgotoaddress
                                    238 	.globl _lcdputch
                                    239 	.globl _serial_init
                                    240 	.globl _putchar
                                    241 	.globl _getchar
                                    242 	.globl _putstr
                                    243 	.globl _getstr
                                    244 ;--------------------------------------------------------
                                    245 ; special function registers
                                    246 ;--------------------------------------------------------
                                    247 	.area RSEG    (ABS,DATA)
      000000                        248 	.org 0x0000
                           0000C8   249 _T2CON	=	0x00c8
                           0000CA   250 _RCAP2L	=	0x00ca
                           0000CB   251 _RCAP2H	=	0x00cb
                           0000CC   252 _TL2	=	0x00cc
                           0000CD   253 _TH2	=	0x00cd
                           00008E   254 _AUXR	=	0x008e
                           0000A2   255 _AUXR1	=	0x00a2
                           000097   256 _CKRL	=	0x0097
                           00008F   257 _CKCON0	=	0x008f
                           0000AF   258 _CKCON1	=	0x00af
                           0000FA   259 _CCAP0H	=	0x00fa
                           0000FB   260 _CCAP1H	=	0x00fb
                           0000FC   261 _CCAP2H	=	0x00fc
                           0000FD   262 _CCAP3H	=	0x00fd
                           0000FE   263 _CCAP4H	=	0x00fe
                           0000EA   264 _CCAP0L	=	0x00ea
                           0000EB   265 _CCAP1L	=	0x00eb
                           0000EC   266 _CCAP2L	=	0x00ec
                           0000ED   267 _CCAP3L	=	0x00ed
                           0000EE   268 _CCAP4L	=	0x00ee
                           0000DA   269 _CCAPM0	=	0x00da
                           0000DB   270 _CCAPM1	=	0x00db
                           0000DC   271 _CCAPM2	=	0x00dc
                           0000DD   272 _CCAPM3	=	0x00dd
                           0000DE   273 _CCAPM4	=	0x00de
                           0000D8   274 _CCON	=	0x00d8
                           0000F9   275 _CH	=	0x00f9
                           0000E9   276 _CL	=	0x00e9
                           0000D9   277 _CMOD	=	0x00d9
                           0000A8   278 _IEN0	=	0x00a8
                           0000B1   279 _IEN1	=	0x00b1
                           0000B8   280 _IPL0	=	0x00b8
                           0000B7   281 _IPH0	=	0x00b7
                           0000B2   282 _IPL1	=	0x00b2
                           0000B3   283 _IPH1	=	0x00b3
                           0000C0   284 _P4	=	0x00c0
                           0000E8   285 _P5	=	0x00e8
                           0000A6   286 _WDTRST	=	0x00a6
                           0000A7   287 _WDTPRG	=	0x00a7
                           0000A9   288 _SADDR	=	0x00a9
                           0000B9   289 _SADEN	=	0x00b9
                           0000C3   290 _SPCON	=	0x00c3
                           0000C4   291 _SPSTA	=	0x00c4
                           0000C5   292 _SPDAT	=	0x00c5
                           0000C9   293 _T2MOD	=	0x00c9
                           00009B   294 _BDRCON	=	0x009b
                           00009A   295 _BRL	=	0x009a
                           00009C   296 _KBLS	=	0x009c
                           00009D   297 _KBE	=	0x009d
                           00009E   298 _KBF	=	0x009e
                           0000D2   299 _EECON	=	0x00d2
                           0000E0   300 _ACC	=	0x00e0
                           0000F0   301 _B	=	0x00f0
                           000083   302 _DPH	=	0x0083
                           000083   303 _DP0H	=	0x0083
                           000082   304 _DPL	=	0x0082
                           000082   305 _DP0L	=	0x0082
                           0000A8   306 _IE	=	0x00a8
                           0000B8   307 _IP	=	0x00b8
                           000080   308 _P0	=	0x0080
                           000090   309 _P1	=	0x0090
                           0000A0   310 _P2	=	0x00a0
                           0000B0   311 _P3	=	0x00b0
                           000087   312 _PCON	=	0x0087
                           0000D0   313 _PSW	=	0x00d0
                           000099   314 _SBUF	=	0x0099
                           000099   315 _SBUF0	=	0x0099
                           000098   316 _SCON	=	0x0098
                           000081   317 _SP	=	0x0081
                           000088   318 _TCON	=	0x0088
                           00008C   319 _TH0	=	0x008c
                           00008D   320 _TH1	=	0x008d
                           00008A   321 _TL0	=	0x008a
                           00008B   322 _TL1	=	0x008b
                           000089   323 _TMOD	=	0x0089
                                    324 ;--------------------------------------------------------
                                    325 ; special function bits
                                    326 ;--------------------------------------------------------
                                    327 	.area RSEG    (ABS,DATA)
      000000                        328 	.org 0x0000
                           0000AD   329 _ET2	=	0x00ad
                           0000BD   330 _PT2	=	0x00bd
                           0000C8   331 _T2CON_0	=	0x00c8
                           0000C9   332 _T2CON_1	=	0x00c9
                           0000CA   333 _T2CON_2	=	0x00ca
                           0000CB   334 _T2CON_3	=	0x00cb
                           0000CC   335 _T2CON_4	=	0x00cc
                           0000CD   336 _T2CON_5	=	0x00cd
                           0000CE   337 _T2CON_6	=	0x00ce
                           0000CF   338 _T2CON_7	=	0x00cf
                           0000C8   339 _CP_RL2	=	0x00c8
                           0000C9   340 _C_T2	=	0x00c9
                           0000CA   341 _TR2	=	0x00ca
                           0000CB   342 _EXEN2	=	0x00cb
                           0000CC   343 _TCLK	=	0x00cc
                           0000CD   344 _RCLK	=	0x00cd
                           0000CE   345 _EXF2	=	0x00ce
                           0000CF   346 _TF2	=	0x00cf
                           0000DF   347 _CF	=	0x00df
                           0000DE   348 _CR	=	0x00de
                           0000DC   349 _CCF4	=	0x00dc
                           0000DB   350 _CCF3	=	0x00db
                           0000DA   351 _CCF2	=	0x00da
                           0000D9   352 _CCF1	=	0x00d9
                           0000D8   353 _CCF0	=	0x00d8
                           0000AE   354 _EC	=	0x00ae
                           0000BE   355 _PPCL	=	0x00be
                           0000BD   356 _PT2L	=	0x00bd
                           0000BC   357 _PSL	=	0x00bc
                           0000BB   358 _PT1L	=	0x00bb
                           0000BA   359 _PX1L	=	0x00ba
                           0000B9   360 _PT0L	=	0x00b9
                           0000B8   361 _PX0L	=	0x00b8
                           0000C0   362 _P4_0	=	0x00c0
                           0000C1   363 _P4_1	=	0x00c1
                           0000C2   364 _P4_2	=	0x00c2
                           0000C3   365 _P4_3	=	0x00c3
                           0000C4   366 _P4_4	=	0x00c4
                           0000C5   367 _P4_5	=	0x00c5
                           0000C6   368 _P4_6	=	0x00c6
                           0000C7   369 _P4_7	=	0x00c7
                           0000E8   370 _P5_0	=	0x00e8
                           0000E9   371 _P5_1	=	0x00e9
                           0000EA   372 _P5_2	=	0x00ea
                           0000EB   373 _P5_3	=	0x00eb
                           0000EC   374 _P5_4	=	0x00ec
                           0000ED   375 _P5_5	=	0x00ed
                           0000EE   376 _P5_6	=	0x00ee
                           0000EF   377 _P5_7	=	0x00ef
                           0000F0   378 _BREG_F0	=	0x00f0
                           0000F1   379 _BREG_F1	=	0x00f1
                           0000F2   380 _BREG_F2	=	0x00f2
                           0000F3   381 _BREG_F3	=	0x00f3
                           0000F4   382 _BREG_F4	=	0x00f4
                           0000F5   383 _BREG_F5	=	0x00f5
                           0000F6   384 _BREG_F6	=	0x00f6
                           0000F7   385 _BREG_F7	=	0x00f7
                           0000A8   386 _EX0	=	0x00a8
                           0000A9   387 _ET0	=	0x00a9
                           0000AA   388 _EX1	=	0x00aa
                           0000AB   389 _ET1	=	0x00ab
                           0000AC   390 _ES	=	0x00ac
                           0000AF   391 _EA	=	0x00af
                           0000B8   392 _PX0	=	0x00b8
                           0000B9   393 _PT0	=	0x00b9
                           0000BA   394 _PX1	=	0x00ba
                           0000BB   395 _PT1	=	0x00bb
                           0000BC   396 _PS	=	0x00bc
                           000080   397 _P0_0	=	0x0080
                           000081   398 _P0_1	=	0x0081
                           000082   399 _P0_2	=	0x0082
                           000083   400 _P0_3	=	0x0083
                           000084   401 _P0_4	=	0x0084
                           000085   402 _P0_5	=	0x0085
                           000086   403 _P0_6	=	0x0086
                           000087   404 _P0_7	=	0x0087
                           000090   405 _P1_0	=	0x0090
                           000091   406 _P1_1	=	0x0091
                           000092   407 _P1_2	=	0x0092
                           000093   408 _P1_3	=	0x0093
                           000094   409 _P1_4	=	0x0094
                           000095   410 _P1_5	=	0x0095
                           000096   411 _P1_6	=	0x0096
                           000097   412 _P1_7	=	0x0097
                           0000A0   413 _P2_0	=	0x00a0
                           0000A1   414 _P2_1	=	0x00a1
                           0000A2   415 _P2_2	=	0x00a2
                           0000A3   416 _P2_3	=	0x00a3
                           0000A4   417 _P2_4	=	0x00a4
                           0000A5   418 _P2_5	=	0x00a5
                           0000A6   419 _P2_6	=	0x00a6
                           0000A7   420 _P2_7	=	0x00a7
                           0000B0   421 _P3_0	=	0x00b0
                           0000B1   422 _P3_1	=	0x00b1
                           0000B2   423 _P3_2	=	0x00b2
                           0000B3   424 _P3_3	=	0x00b3
                           0000B4   425 _P3_4	=	0x00b4
                           0000B5   426 _P3_5	=	0x00b5
                           0000B6   427 _P3_6	=	0x00b6
                           0000B7   428 _P3_7	=	0x00b7
                           0000B0   429 _RXD	=	0x00b0
                           0000B0   430 _RXD0	=	0x00b0
                           0000B1   431 _TXD	=	0x00b1
                           0000B1   432 _TXD0	=	0x00b1
                           0000B2   433 _INT0	=	0x00b2
                           0000B3   434 _INT1	=	0x00b3
                           0000B4   435 _T0	=	0x00b4
                           0000B5   436 _T1	=	0x00b5
                           0000B6   437 _WR	=	0x00b6
                           0000B7   438 _RD	=	0x00b7
                           0000D0   439 _P	=	0x00d0
                           0000D1   440 _F1	=	0x00d1
                           0000D2   441 _OV	=	0x00d2
                           0000D3   442 _RS0	=	0x00d3
                           0000D4   443 _RS1	=	0x00d4
                           0000D5   444 _F0	=	0x00d5
                           0000D6   445 _AC	=	0x00d6
                           0000D7   446 _CY	=	0x00d7
                           000098   447 _RI	=	0x0098
                           000099   448 _TI	=	0x0099
                           00009A   449 _RB8	=	0x009a
                           00009B   450 _TB8	=	0x009b
                           00009C   451 _REN	=	0x009c
                           00009D   452 _SM2	=	0x009d
                           00009E   453 _SM1	=	0x009e
                           00009F   454 _SM0	=	0x009f
                           000088   455 _IT0	=	0x0088
                           000089   456 _IE0	=	0x0089
                           00008A   457 _IT1	=	0x008a
                           00008B   458 _IE1	=	0x008b
                           00008C   459 _TR0	=	0x008c
                           00008D   460 _TF0	=	0x008d
                           00008E   461 _TR1	=	0x008e
                           00008F   462 _TF1	=	0x008f
                                    463 ;--------------------------------------------------------
                                    464 ; overlayable register banks
                                    465 ;--------------------------------------------------------
                                    466 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        467 	.ds 8
                                    468 ;--------------------------------------------------------
                                    469 ; internal ram data
                                    470 ;--------------------------------------------------------
                                    471 	.area DSEG    (DATA)
                                    472 ;--------------------------------------------------------
                                    473 ; overlayable items in internal ram
                                    474 ;--------------------------------------------------------
                                    475 ;--------------------------------------------------------
                                    476 ; indirectly addressable internal ram data
                                    477 ;--------------------------------------------------------
                                    478 	.area ISEG    (DATA)
                                    479 ;--------------------------------------------------------
                                    480 ; absolute internal ram data
                                    481 ;--------------------------------------------------------
                                    482 	.area IABS    (ABS,DATA)
                                    483 	.area IABS    (ABS,DATA)
                                    484 ;--------------------------------------------------------
                                    485 ; bit data
                                    486 ;--------------------------------------------------------
                                    487 	.area BSEG    (BIT)
                                    488 ;--------------------------------------------------------
                                    489 ; paged external ram data
                                    490 ;--------------------------------------------------------
                                    491 	.area PSEG    (PAG,XDATA)
                                    492 ;--------------------------------------------------------
                                    493 ; external ram data
                                    494 ;--------------------------------------------------------
                                    495 	.area XSEG    (XDATA)
      000020                        496 _delay_d_65536_107:
      000020                        497 	.ds 2
      000022                        498 _lcd_cmd_command_65536_110:
      000022                        499 	.ds 1
      000023                        500 _lcdgotoaddress_cgram_addr_65536_113:
      000023                        501 	.ds 1
      000024                        502 _lcdputch_cgram_cc_65536_115:
      000024                        503 	.ds 1
      000025                        504 _hexdump_cgram_size_65536_118:
      000025                        505 	.ds 2
      000027                        506 _hexdump_cgram_address_65536_118:
      000027                        507 	.ds 2
      000029                        508 _LCD_build_main_PARM_2:
      000029                        509 	.ds 3
      00002C                        510 _LCD_build_main_location_65536_124:
      00002C                        511 	.ds 1
      00002D                        512 _LCD_build_PARM_2:
      00002D                        513 	.ds 3
      000030                        514 _LCD_build_location_65536_128:
      000030                        515 	.ds 1
      000031                        516 _lcdgotoaddress_addr_65536_133:
      000031                        517 	.ds 1
      000032                        518 _lcdputch_cc_65536_135:
      000032                        519 	.ds 1
      000033                        520 _putchar_c_65536_139:
      000033                        521 	.ds 2
      000035                        522 _putstr_s_65536_143:
      000035                        523 	.ds 3
      000038                        524 _getstr_a_65536_146:
      000038                        525 	.ds 3
                                    526 ;--------------------------------------------------------
                                    527 ; absolute external ram data
                                    528 ;--------------------------------------------------------
                                    529 	.area XABS    (ABS,XDATA)
                                    530 ;--------------------------------------------------------
                                    531 ; external initialized ram data
                                    532 ;--------------------------------------------------------
                                    533 	.area XISEG   (XDATA)
      00007E                        534 _ptr::
      00007E                        535 	.ds 3
      000081                        536 _CursorPtr::
      000081                        537 	.ds 1
      000082                        538 _busy_flag::
      000082                        539 	.ds 3
                                    540 	.area HOME    (CODE)
                                    541 	.area GSINIT0 (CODE)
                                    542 	.area GSINIT1 (CODE)
                                    543 	.area GSINIT2 (CODE)
                                    544 	.area GSINIT3 (CODE)
                                    545 	.area GSINIT4 (CODE)
                                    546 	.area GSINIT5 (CODE)
                                    547 	.area GSINIT  (CODE)
                                    548 	.area GSFINAL (CODE)
                                    549 	.area CSEG    (CODE)
                                    550 ;--------------------------------------------------------
                                    551 ; global & static initialisations
                                    552 ;--------------------------------------------------------
                                    553 	.area HOME    (CODE)
                                    554 	.area GSINIT  (CODE)
                                    555 	.area GSFINAL (CODE)
                                    556 	.area GSINIT  (CODE)
                                    557 ;--------------------------------------------------------
                                    558 ; Home
                                    559 ;--------------------------------------------------------
                                    560 	.area HOME    (CODE)
                                    561 	.area HOME    (CODE)
                                    562 ;--------------------------------------------------------
                                    563 ; code
                                    564 ;--------------------------------------------------------
                                    565 	.area CSEG    (CODE)
                                    566 ;------------------------------------------------------------
                                    567 ;Allocation info for local variables in function 'delay'
                                    568 ;------------------------------------------------------------
                                    569 ;d                         Allocated with name '_delay_d_65536_107'
                                    570 ;------------------------------------------------------------
                                    571 ;	support_functions.c:27: void delay(unsigned int d)
                                    572 ;	-----------------------------------------
                                    573 ;	 function delay
                                    574 ;	-----------------------------------------
      00034B                        575 _delay:
                           000007   576 	ar7 = 0x07
                           000006   577 	ar6 = 0x06
                           000005   578 	ar5 = 0x05
                           000004   579 	ar4 = 0x04
                           000003   580 	ar3 = 0x03
                           000002   581 	ar2 = 0x02
                           000001   582 	ar1 = 0x01
                           000000   583 	ar0 = 0x00
      00034B AF 83            [24]  584 	mov	r7,dph
      00034D E5 82            [12]  585 	mov	a,dpl
      00034F 90 00 20         [24]  586 	mov	dptr,#_delay_d_65536_107
      000352 F0               [24]  587 	movx	@dptr,a
      000353 EF               [12]  588 	mov	a,r7
      000354 A3               [24]  589 	inc	dptr
      000355 F0               [24]  590 	movx	@dptr,a
                                    591 ;	support_functions.c:29: while(d--);
      000356 90 00 20         [24]  592 	mov	dptr,#_delay_d_65536_107
      000359 E0               [24]  593 	movx	a,@dptr
      00035A FE               [12]  594 	mov	r6,a
      00035B A3               [24]  595 	inc	dptr
      00035C E0               [24]  596 	movx	a,@dptr
      00035D FF               [12]  597 	mov	r7,a
      00035E                        598 00101$:
      00035E 8E 04            [24]  599 	mov	ar4,r6
      000360 8F 05            [24]  600 	mov	ar5,r7
      000362 1E               [12]  601 	dec	r6
      000363 BE FF 01         [24]  602 	cjne	r6,#0xff,00114$
      000366 1F               [12]  603 	dec	r7
      000367                        604 00114$:
      000367 90 00 20         [24]  605 	mov	dptr,#_delay_d_65536_107
      00036A EE               [12]  606 	mov	a,r6
      00036B F0               [24]  607 	movx	@dptr,a
      00036C EF               [12]  608 	mov	a,r7
      00036D A3               [24]  609 	inc	dptr
      00036E F0               [24]  610 	movx	@dptr,a
      00036F EC               [12]  611 	mov	a,r4
      000370 4D               [12]  612 	orl	a,r5
      000371 70 EB            [24]  613 	jnz	00101$
      000373 90 00 20         [24]  614 	mov	dptr,#_delay_d_65536_107
      000376 EE               [12]  615 	mov	a,r6
      000377 F0               [24]  616 	movx	@dptr,a
      000378 EF               [12]  617 	mov	a,r7
      000379 A3               [24]  618 	inc	dptr
      00037A F0               [24]  619 	movx	@dptr,a
                                    620 ;	support_functions.c:30: }
      00037B 22               [24]  621 	ret
                                    622 ;------------------------------------------------------------
                                    623 ;Allocation info for local variables in function 'lcdbusywait'
                                    624 ;------------------------------------------------------------
                                    625 ;	support_functions.c:32: void lcdbusywait()
                                    626 ;	-----------------------------------------
                                    627 ;	 function lcdbusywait
                                    628 ;	-----------------------------------------
      00037C                        629 _lcdbusywait:
                                    630 ;	support_functions.c:34: Rs = 0;                             //condition for busy polling
                                    631 ;	assignBit
      00037C C2 95            [12]  632 	clr	_P1_5
                                    633 ;	support_functions.c:35: Rw = 1;
                                    634 ;	assignBit
      00037E D2 96            [12]  635 	setb	_P1_6
                                    636 ;	support_functions.c:36: while(((*busy_flag)& 0x80)==0x80);      //wait till BF flag is not set
      000380                        637 00101$:
      000380 90 00 82         [24]  638 	mov	dptr,#_busy_flag
      000383 E0               [24]  639 	movx	a,@dptr
      000384 FD               [12]  640 	mov	r5,a
      000385 A3               [24]  641 	inc	dptr
      000386 E0               [24]  642 	movx	a,@dptr
      000387 FE               [12]  643 	mov	r6,a
      000388 A3               [24]  644 	inc	dptr
      000389 E0               [24]  645 	movx	a,@dptr
      00038A FF               [12]  646 	mov	r7,a
      00038B 8D 82            [24]  647 	mov	dpl,r5
      00038D 8E 83            [24]  648 	mov	dph,r6
      00038F 8F F0            [24]  649 	mov	b,r7
      000391 12 14 2A         [24]  650 	lcall	__gptrget
      000394 FD               [12]  651 	mov	r5,a
      000395 A3               [24]  652 	inc	dptr
      000396 12 14 2A         [24]  653 	lcall	__gptrget
      000399 53 05 80         [24]  654 	anl	ar5,#0x80
      00039C 7E 00            [12]  655 	mov	r6,#0x00
      00039E BD 80 05         [24]  656 	cjne	r5,#0x80,00110$
      0003A1 BE 00 02         [24]  657 	cjne	r6,#0x00,00110$
      0003A4 80 DA            [24]  658 	sjmp	00101$
      0003A6                        659 00110$:
                                    660 ;	support_functions.c:37: }
      0003A6 22               [24]  661 	ret
                                    662 ;------------------------------------------------------------
                                    663 ;Allocation info for local variables in function 'lcd_cmd'
                                    664 ;------------------------------------------------------------
                                    665 ;command                   Allocated with name '_lcd_cmd_command_65536_110'
                                    666 ;------------------------------------------------------------
                                    667 ;	support_functions.c:39: void lcd_cmd(unsigned char command)
                                    668 ;	-----------------------------------------
                                    669 ;	 function lcd_cmd
                                    670 ;	-----------------------------------------
      0003A7                        671 _lcd_cmd:
      0003A7 E5 82            [12]  672 	mov	a,dpl
      0003A9 90 00 22         [24]  673 	mov	dptr,#_lcd_cmd_command_65536_110
      0003AC F0               [24]  674 	movx	@dptr,a
                                    675 ;	support_functions.c:41: *ptr=command;
      0003AD 90 00 7E         [24]  676 	mov	dptr,#_ptr
      0003B0 E0               [24]  677 	movx	a,@dptr
      0003B1 FD               [12]  678 	mov	r5,a
      0003B2 A3               [24]  679 	inc	dptr
      0003B3 E0               [24]  680 	movx	a,@dptr
      0003B4 FE               [12]  681 	mov	r6,a
      0003B5 A3               [24]  682 	inc	dptr
      0003B6 E0               [24]  683 	movx	a,@dptr
      0003B7 FF               [12]  684 	mov	r7,a
      0003B8 90 00 22         [24]  685 	mov	dptr,#_lcd_cmd_command_65536_110
      0003BB E0               [24]  686 	movx	a,@dptr
      0003BC FC               [12]  687 	mov	r4,a
      0003BD 7B 00            [12]  688 	mov	r3,#0x00
      0003BF 8D 82            [24]  689 	mov	dpl,r5
      0003C1 8E 83            [24]  690 	mov	dph,r6
      0003C3 8F F0            [24]  691 	mov	b,r7
      0003C5 EC               [12]  692 	mov	a,r4
      0003C6 12 09 15         [24]  693 	lcall	__gptrput
      0003C9 A3               [24]  694 	inc	dptr
      0003CA EB               [12]  695 	mov	a,r3
                                    696 ;	support_functions.c:42: }
      0003CB 02 09 15         [24]  697 	ljmp	__gptrput
                                    698 ;------------------------------------------------------------
                                    699 ;Allocation info for local variables in function 'lcd_init'
                                    700 ;------------------------------------------------------------
                                    701 ;	support_functions.c:44: void lcd_init()
                                    702 ;	-----------------------------------------
                                    703 ;	 function lcd_init
                                    704 ;	-----------------------------------------
      0003CE                        705 _lcd_init:
                                    706 ;	support_functions.c:46: Rs=0;
                                    707 ;	assignBit
      0003CE C2 95            [12]  708 	clr	_P1_5
                                    709 ;	support_functions.c:47: Rw=0;
                                    710 ;	assignBit
      0003D0 C2 96            [12]  711 	clr	_P1_6
                                    712 ;	support_functions.c:49: lcd_cmd(0x30);      //unlock command
      0003D2 75 82 30         [24]  713 	mov	dpl,#0x30
      0003D5 12 03 A7         [24]  714 	lcall	_lcd_cmd
                                    715 ;	support_functions.c:50: delay(10000);
      0003D8 90 27 10         [24]  716 	mov	dptr,#0x2710
      0003DB 12 03 4B         [24]  717 	lcall	_delay
                                    718 ;	support_functions.c:51: lcd_cmd(0x30);      //unlock command
      0003DE 75 82 30         [24]  719 	mov	dpl,#0x30
      0003E1 12 03 A7         [24]  720 	lcall	_lcd_cmd
                                    721 ;	support_functions.c:52: delay(10000);
      0003E4 90 27 10         [24]  722 	mov	dptr,#0x2710
      0003E7 12 03 4B         [24]  723 	lcall	_delay
                                    724 ;	support_functions.c:53: lcd_cmd(0x30);      //unlock command
      0003EA 75 82 30         [24]  725 	mov	dpl,#0x30
      0003ED 12 03 A7         [24]  726 	lcall	_lcd_cmd
                                    727 ;	support_functions.c:54: delay(10000);
      0003F0 90 27 10         [24]  728 	mov	dptr,#0x2710
      0003F3 12 03 4B         [24]  729 	lcall	_delay
                                    730 ;	support_functions.c:55: lcd_cmd(0x38);      //function set command
      0003F6 75 82 38         [24]  731 	mov	dpl,#0x38
      0003F9 12 03 A7         [24]  732 	lcall	_lcd_cmd
                                    733 ;	support_functions.c:56: delay(100);
      0003FC 90 00 64         [24]  734 	mov	dptr,#0x0064
      0003FF 12 03 4B         [24]  735 	lcall	_delay
                                    736 ;	support_functions.c:57: lcd_cmd(0x0c);      //turn display on
      000402 75 82 0C         [24]  737 	mov	dpl,#0x0c
      000405 12 03 A7         [24]  738 	lcall	_lcd_cmd
                                    739 ;	support_functions.c:58: delay(100);
      000408 90 00 64         [24]  740 	mov	dptr,#0x0064
      00040B 12 03 4B         [24]  741 	lcall	_delay
                                    742 ;	support_functions.c:59: lcd_cmd(0x06);      //entry mode set command
      00040E 75 82 06         [24]  743 	mov	dpl,#0x06
      000411 12 03 A7         [24]  744 	lcall	_lcd_cmd
                                    745 ;	support_functions.c:60: delay(100);
      000414 90 00 64         [24]  746 	mov	dptr,#0x0064
      000417 12 03 4B         [24]  747 	lcall	_delay
                                    748 ;	support_functions.c:61: lcd_cmd(0x01);      //clear screen and send the cursor home
      00041A 75 82 01         [24]  749 	mov	dpl,#0x01
      00041D 12 03 A7         [24]  750 	lcall	_lcd_cmd
                                    751 ;	support_functions.c:62: delay(100);
      000420 90 00 64         [24]  752 	mov	dptr,#0x0064
      000423 12 03 4B         [24]  753 	lcall	_delay
                                    754 ;	support_functions.c:63: lcdbusywait();      //poll for BF=0
                                    755 ;	support_functions.c:64: }
      000426 02 03 7C         [24]  756 	ljmp	_lcdbusywait
                                    757 ;------------------------------------------------------------
                                    758 ;Allocation info for local variables in function 'lcdgotoaddress_cgram'
                                    759 ;------------------------------------------------------------
                                    760 ;addr                      Allocated with name '_lcdgotoaddress_cgram_addr_65536_113'
                                    761 ;------------------------------------------------------------
                                    762 ;	support_functions.c:68: void lcdgotoaddress_cgram(unsigned char addr)
                                    763 ;	-----------------------------------------
                                    764 ;	 function lcdgotoaddress_cgram
                                    765 ;	-----------------------------------------
      000429                        766 _lcdgotoaddress_cgram:
      000429 E5 82            [12]  767 	mov	a,dpl
      00042B 90 00 23         [24]  768 	mov	dptr,#_lcdgotoaddress_cgram_addr_65536_113
      00042E F0               [24]  769 	movx	@dptr,a
                                    770 ;	support_functions.c:70: lcdbusywait();
      00042F 12 03 7C         [24]  771 	lcall	_lcdbusywait
                                    772 ;	support_functions.c:71: Rs=0;
                                    773 ;	assignBit
      000432 C2 95            [12]  774 	clr	_P1_5
                                    775 ;	support_functions.c:72: Rw=0;
                                    776 ;	assignBit
      000434 C2 96            [12]  777 	clr	_P1_6
                                    778 ;	support_functions.c:73: lcd_cmd(addr | 0x40);
      000436 90 00 23         [24]  779 	mov	dptr,#_lcdgotoaddress_cgram_addr_65536_113
      000439 E0               [24]  780 	movx	a,@dptr
      00043A 44 40            [12]  781 	orl	a,#0x40
      00043C F5 82            [12]  782 	mov	dpl,a
                                    783 ;	support_functions.c:74: }
      00043E 02 03 A7         [24]  784 	ljmp	_lcd_cmd
                                    785 ;------------------------------------------------------------
                                    786 ;Allocation info for local variables in function 'lcdputch_cgram'
                                    787 ;------------------------------------------------------------
                                    788 ;cc                        Allocated with name '_lcdputch_cgram_cc_65536_115'
                                    789 ;------------------------------------------------------------
                                    790 ;	support_functions.c:76: void lcdputch_cgram(unsigned char cc)
                                    791 ;	-----------------------------------------
                                    792 ;	 function lcdputch_cgram
                                    793 ;	-----------------------------------------
      000441                        794 _lcdputch_cgram:
      000441 E5 82            [12]  795 	mov	a,dpl
      000443 90 00 24         [24]  796 	mov	dptr,#_lcdputch_cgram_cc_65536_115
      000446 F0               [24]  797 	movx	@dptr,a
                                    798 ;	support_functions.c:78: lcdbusywait();
      000447 12 03 7C         [24]  799 	lcall	_lcdbusywait
                                    800 ;	support_functions.c:79: Rs=1;               //write command
                                    801 ;	assignBit
      00044A D2 95            [12]  802 	setb	_P1_5
                                    803 ;	support_functions.c:80: Rw=0;
                                    804 ;	assignBit
      00044C C2 96            [12]  805 	clr	_P1_6
                                    806 ;	support_functions.c:81: *ptr=cc;
      00044E 90 00 7E         [24]  807 	mov	dptr,#_ptr
      000451 E0               [24]  808 	movx	a,@dptr
      000452 FD               [12]  809 	mov	r5,a
      000453 A3               [24]  810 	inc	dptr
      000454 E0               [24]  811 	movx	a,@dptr
      000455 FE               [12]  812 	mov	r6,a
      000456 A3               [24]  813 	inc	dptr
      000457 E0               [24]  814 	movx	a,@dptr
      000458 FF               [12]  815 	mov	r7,a
      000459 90 00 24         [24]  816 	mov	dptr,#_lcdputch_cgram_cc_65536_115
      00045C E0               [24]  817 	movx	a,@dptr
      00045D FC               [12]  818 	mov	r4,a
      00045E 7B 00            [12]  819 	mov	r3,#0x00
      000460 8D 82            [24]  820 	mov	dpl,r5
      000462 8E 83            [24]  821 	mov	dph,r6
      000464 8F F0            [24]  822 	mov	b,r7
      000466 EC               [12]  823 	mov	a,r4
      000467 12 09 15         [24]  824 	lcall	__gptrput
      00046A A3               [24]  825 	inc	dptr
      00046B EB               [12]  826 	mov	a,r3
                                    827 ;	support_functions.c:82: }
      00046C 02 09 15         [24]  828 	ljmp	__gptrput
                                    829 ;------------------------------------------------------------
                                    830 ;Allocation info for local variables in function 'hexdump_cgram'
                                    831 ;------------------------------------------------------------
                                    832 ;size                      Allocated with name '_hexdump_cgram_size_65536_118'
                                    833 ;address                   Allocated with name '_hexdump_cgram_address_65536_118'
                                    834 ;i                         Allocated with name '_hexdump_cgram_i_196608_120'
                                    835 ;------------------------------------------------------------
                                    836 ;	support_functions.c:87: void hexdump_cgram(void)
                                    837 ;	-----------------------------------------
                                    838 ;	 function hexdump_cgram
                                    839 ;	-----------------------------------------
      00046F                        840 _hexdump_cgram:
                                    841 ;	support_functions.c:89: int size= CGRAM_END - CGRAM_START;
      00046F 90 00 25         [24]  842 	mov	dptr,#_hexdump_cgram_size_65536_118
      000472 74 40            [12]  843 	mov	a,#0x40
      000474 F0               [24]  844 	movx	@dptr,a
      000475 E4               [12]  845 	clr	a
      000476 A3               [24]  846 	inc	dptr
      000477 F0               [24]  847 	movx	@dptr,a
                                    848 ;	support_functions.c:90: int address=CGRAM_START;
      000478 90 00 27         [24]  849 	mov	dptr,#_hexdump_cgram_address_65536_118
      00047B 74 40            [12]  850 	mov	a,#0x40
      00047D F0               [24]  851 	movx	@dptr,a
      00047E E4               [12]  852 	clr	a
      00047F A3               [24]  853 	inc	dptr
      000480 F0               [24]  854 	movx	@dptr,a
                                    855 ;	support_functions.c:91: while (size)
      000481                        856 00104$:
      000481 90 00 25         [24]  857 	mov	dptr,#_hexdump_cgram_size_65536_118
      000484 E0               [24]  858 	movx	a,@dptr
      000485 FE               [12]  859 	mov	r6,a
      000486 A3               [24]  860 	inc	dptr
      000487 E0               [24]  861 	movx	a,@dptr
      000488 FF               [12]  862 	mov	r7,a
      000489 90 00 25         [24]  863 	mov	dptr,#_hexdump_cgram_size_65536_118
      00048C E0               [24]  864 	movx	a,@dptr
      00048D F5 F0            [12]  865 	mov	b,a
      00048F A3               [24]  866 	inc	dptr
      000490 E0               [24]  867 	movx	a,@dptr
      000491 45 F0            [12]  868 	orl	a,b
      000493 70 01            [24]  869 	jnz	00133$
      000495 22               [24]  870 	ret
      000496                        871 00133$:
                                    872 ;	support_functions.c:93: printf("%03x: ", address);
      000496 90 00 27         [24]  873 	mov	dptr,#_hexdump_cgram_address_65536_118
      000499 E0               [24]  874 	movx	a,@dptr
      00049A FC               [12]  875 	mov	r4,a
      00049B A3               [24]  876 	inc	dptr
      00049C E0               [24]  877 	movx	a,@dptr
      00049D FD               [12]  878 	mov	r5,a
      00049E C0 07            [24]  879 	push	ar7
      0004A0 C0 06            [24]  880 	push	ar6
      0004A2 C0 05            [24]  881 	push	ar5
      0004A4 C0 04            [24]  882 	push	ar4
      0004A6 C0 04            [24]  883 	push	ar4
      0004A8 C0 05            [24]  884 	push	ar5
      0004AA 74 C0            [12]  885 	mov	a,#___str_0
      0004AC C0 E0            [24]  886 	push	acc
      0004AE 74 15            [12]  887 	mov	a,#(___str_0 >> 8)
      0004B0 C0 E0            [24]  888 	push	acc
      0004B2 74 80            [12]  889 	mov	a,#0x80
      0004B4 C0 E0            [24]  890 	push	acc
      0004B6 12 09 FE         [24]  891 	lcall	_printf
      0004B9 E5 81            [12]  892 	mov	a,sp
      0004BB 24 FB            [12]  893 	add	a,#0xfb
      0004BD F5 81            [12]  894 	mov	sp,a
      0004BF D0 04            [24]  895 	pop	ar4
      0004C1 D0 05            [24]  896 	pop	ar5
      0004C3 D0 06            [24]  897 	pop	ar6
      0004C5 D0 07            [24]  898 	pop	ar7
                                    899 ;	support_functions.c:94: for (int i=0; i<16; i++)
      0004C7 7A 00            [12]  900 	mov	r2,#0x00
      0004C9 7B 00            [12]  901 	mov	r3,#0x00
      0004CB                        902 00108$:
      0004CB C3               [12]  903 	clr	c
      0004CC EA               [12]  904 	mov	a,r2
      0004CD 94 10            [12]  905 	subb	a,#0x10
      0004CF EB               [12]  906 	mov	a,r3
      0004D0 64 80            [12]  907 	xrl	a,#0x80
      0004D2 94 80            [12]  908 	subb	a,#0x80
      0004D4 50 54            [24]  909 	jnc	00117$
                                    910 ;	support_functions.c:96: lcdgotoaddress_cgram(address);
      0004D6 8C 01            [24]  911 	mov	ar1,r4
      0004D8 89 82            [24]  912 	mov	dpl,r1
      0004DA C0 07            [24]  913 	push	ar7
      0004DC C0 06            [24]  914 	push	ar6
      0004DE C0 05            [24]  915 	push	ar5
      0004E0 C0 04            [24]  916 	push	ar4
      0004E2 C0 03            [24]  917 	push	ar3
      0004E4 C0 02            [24]  918 	push	ar2
      0004E6 12 04 29         [24]  919 	lcall	_lcdgotoaddress_cgram
                                    920 ;	support_functions.c:97: printf("%02x ", lcdgetch_cgram());
      0004E9 12 05 52         [24]  921 	lcall	_lcdgetch_cgram
      0004EC A8 82            [24]  922 	mov	r0,dpl
      0004EE A9 83            [24]  923 	mov	r1,dph
      0004F0 C0 00            [24]  924 	push	ar0
      0004F2 C0 01            [24]  925 	push	ar1
      0004F4 74 C7            [12]  926 	mov	a,#___str_1
      0004F6 C0 E0            [24]  927 	push	acc
      0004F8 74 15            [12]  928 	mov	a,#(___str_1 >> 8)
      0004FA C0 E0            [24]  929 	push	acc
      0004FC 74 80            [12]  930 	mov	a,#0x80
      0004FE C0 E0            [24]  931 	push	acc
      000500 12 09 FE         [24]  932 	lcall	_printf
      000503 E5 81            [12]  933 	mov	a,sp
      000505 24 FB            [12]  934 	add	a,#0xfb
      000507 F5 81            [12]  935 	mov	sp,a
      000509 D0 02            [24]  936 	pop	ar2
      00050B D0 03            [24]  937 	pop	ar3
      00050D D0 04            [24]  938 	pop	ar4
      00050F D0 05            [24]  939 	pop	ar5
      000511 D0 06            [24]  940 	pop	ar6
      000513 D0 07            [24]  941 	pop	ar7
                                    942 ;	support_functions.c:98: address++;
      000515 0C               [12]  943 	inc	r4
      000516 BC 00 01         [24]  944 	cjne	r4,#0x00,00135$
      000519 0D               [12]  945 	inc	r5
      00051A                        946 00135$:
                                    947 ;	support_functions.c:99: size--;
      00051A 1E               [12]  948 	dec	r6
      00051B BE FF 01         [24]  949 	cjne	r6,#0xff,00136$
      00051E 1F               [12]  950 	dec	r7
      00051F                        951 00136$:
                                    952 ;	support_functions.c:100: if (size==0)
      00051F EE               [12]  953 	mov	a,r6
      000520 4F               [12]  954 	orl	a,r7
      000521 60 07            [24]  955 	jz	00117$
                                    956 ;	support_functions.c:94: for (int i=0; i<16; i++)
      000523 0A               [12]  957 	inc	r2
      000524 BA 00 A4         [24]  958 	cjne	r2,#0x00,00108$
      000527 0B               [12]  959 	inc	r3
      000528 80 A1            [24]  960 	sjmp	00108$
      00052A                        961 00117$:
      00052A 90 00 27         [24]  962 	mov	dptr,#_hexdump_cgram_address_65536_118
      00052D EC               [12]  963 	mov	a,r4
      00052E F0               [24]  964 	movx	@dptr,a
      00052F ED               [12]  965 	mov	a,r5
      000530 A3               [24]  966 	inc	dptr
      000531 F0               [24]  967 	movx	@dptr,a
      000532 90 00 25         [24]  968 	mov	dptr,#_hexdump_cgram_size_65536_118
      000535 EE               [12]  969 	mov	a,r6
      000536 F0               [24]  970 	movx	@dptr,a
      000537 EF               [12]  971 	mov	a,r7
      000538 A3               [24]  972 	inc	dptr
      000539 F0               [24]  973 	movx	@dptr,a
                                    974 ;	support_functions.c:103: printf("\n\r");
      00053A 74 CD            [12]  975 	mov	a,#___str_2
      00053C C0 E0            [24]  976 	push	acc
      00053E 74 15            [12]  977 	mov	a,#(___str_2 >> 8)
      000540 C0 E0            [24]  978 	push	acc
      000542 74 80            [12]  979 	mov	a,#0x80
      000544 C0 E0            [24]  980 	push	acc
      000546 12 09 FE         [24]  981 	lcall	_printf
      000549 15 81            [12]  982 	dec	sp
      00054B 15 81            [12]  983 	dec	sp
      00054D 15 81            [12]  984 	dec	sp
                                    985 ;	support_functions.c:105: }
      00054F 02 04 81         [24]  986 	ljmp	00104$
                                    987 ;------------------------------------------------------------
                                    988 ;Allocation info for local variables in function 'lcdgetch_cgram'
                                    989 ;------------------------------------------------------------
                                    990 ;	support_functions.c:108: int lcdgetch_cgram (void)
                                    991 ;	-----------------------------------------
                                    992 ;	 function lcdgetch_cgram
                                    993 ;	-----------------------------------------
      000552                        994 _lcdgetch_cgram:
                                    995 ;	support_functions.c:110: lcdbusywait();
      000552 12 03 7C         [24]  996 	lcall	_lcdbusywait
                                    997 ;	support_functions.c:111: Rs = 1;
                                    998 ;	assignBit
      000555 D2 95            [12]  999 	setb	_P1_5
                                   1000 ;	support_functions.c:112: Rw = 1;
                                   1001 ;	assignBit
      000557 D2 96            [12] 1002 	setb	_P1_6
                                   1003 ;	support_functions.c:114: return (*ptr & 0x7F);
      000559 90 00 7E         [24] 1004 	mov	dptr,#_ptr
      00055C E0               [24] 1005 	movx	a,@dptr
      00055D FD               [12] 1006 	mov	r5,a
      00055E A3               [24] 1007 	inc	dptr
      00055F E0               [24] 1008 	movx	a,@dptr
      000560 FE               [12] 1009 	mov	r6,a
      000561 A3               [24] 1010 	inc	dptr
      000562 E0               [24] 1011 	movx	a,@dptr
      000563 FF               [12] 1012 	mov	r7,a
      000564 8D 82            [24] 1013 	mov	dpl,r5
      000566 8E 83            [24] 1014 	mov	dph,r6
      000568 8F F0            [24] 1015 	mov	b,r7
      00056A 12 14 2A         [24] 1016 	lcall	__gptrget
      00056D FD               [12] 1017 	mov	r5,a
      00056E A3               [24] 1018 	inc	dptr
      00056F 12 14 2A         [24] 1019 	lcall	__gptrget
      000572 53 05 7F         [24] 1020 	anl	ar5,#0x7f
      000575 7E 00            [12] 1021 	mov	r6,#0x00
      000577 8D 82            [24] 1022 	mov	dpl,r5
      000579 8E 83            [24] 1023 	mov	dph,r6
                                   1024 ;	support_functions.c:115: }
      00057B 22               [24] 1025 	ret
                                   1026 ;------------------------------------------------------------
                                   1027 ;Allocation info for local variables in function 'LCD_build_main'
                                   1028 ;------------------------------------------------------------
                                   1029 ;ptr                       Allocated with name '_LCD_build_main_PARM_2'
                                   1030 ;location                  Allocated with name '_LCD_build_main_location_65536_124'
                                   1031 ;i                         Allocated with name '_LCD_build_main_i_65536_125'
                                   1032 ;------------------------------------------------------------
                                   1033 ;	support_functions.c:118: void LCD_build_main(unsigned char location, unsigned char *ptr)
                                   1034 ;	-----------------------------------------
                                   1035 ;	 function LCD_build_main
                                   1036 ;	-----------------------------------------
      00057C                       1037 _LCD_build_main:
      00057C E5 82            [12] 1038 	mov	a,dpl
      00057E 90 00 2C         [24] 1039 	mov	dptr,#_LCD_build_main_location_65536_124
      000581 F0               [24] 1040 	movx	@dptr,a
                                   1041 ;	support_functions.c:121: for(i=0;i<8;i++)
      000582 E0               [24] 1042 	movx	a,@dptr
      000583 FF               [12] 1043 	mov	r7,a
      000584 90 00 29         [24] 1044 	mov	dptr,#_LCD_build_main_PARM_2
      000587 E0               [24] 1045 	movx	a,@dptr
      000588 FC               [12] 1046 	mov	r4,a
      000589 A3               [24] 1047 	inc	dptr
      00058A E0               [24] 1048 	movx	a,@dptr
      00058B FD               [12] 1049 	mov	r5,a
      00058C A3               [24] 1050 	inc	dptr
      00058D E0               [24] 1051 	movx	a,@dptr
      00058E FE               [12] 1052 	mov	r6,a
      00058F 7B 00            [12] 1053 	mov	r3,#0x00
      000591                       1054 00102$:
                                   1055 ;	support_functions.c:123: lcdgotoaddress_cgram(0x40+ location*8 + i);
      000591 8F 02            [24] 1056 	mov	ar2,r7
      000593 EA               [12] 1057 	mov	a,r2
      000594 C4               [12] 1058 	swap	a
      000595 03               [12] 1059 	rr	a
      000596 54 F8            [12] 1060 	anl	a,#0xf8
      000598 24 40            [12] 1061 	add	a,#0x40
      00059A FA               [12] 1062 	mov	r2,a
      00059B 8B 01            [24] 1063 	mov	ar1,r3
      00059D E9               [12] 1064 	mov	a,r1
      00059E 2A               [12] 1065 	add	a,r2
      00059F F5 82            [12] 1066 	mov	dpl,a
      0005A1 C0 07            [24] 1067 	push	ar7
      0005A3 C0 06            [24] 1068 	push	ar6
      0005A5 C0 05            [24] 1069 	push	ar5
      0005A7 C0 04            [24] 1070 	push	ar4
      0005A9 C0 03            [24] 1071 	push	ar3
      0005AB 12 04 29         [24] 1072 	lcall	_lcdgotoaddress_cgram
      0005AE D0 03            [24] 1073 	pop	ar3
      0005B0 D0 04            [24] 1074 	pop	ar4
      0005B2 D0 05            [24] 1075 	pop	ar5
      0005B4 D0 06            [24] 1076 	pop	ar6
                                   1077 ;	support_functions.c:124: lcdputch_cgram(ptr[i]);
      0005B6 EB               [12] 1078 	mov	a,r3
      0005B7 2C               [12] 1079 	add	a,r4
      0005B8 F8               [12] 1080 	mov	r0,a
      0005B9 E4               [12] 1081 	clr	a
      0005BA 3D               [12] 1082 	addc	a,r5
      0005BB F9               [12] 1083 	mov	r1,a
      0005BC 8E 02            [24] 1084 	mov	ar2,r6
      0005BE 88 82            [24] 1085 	mov	dpl,r0
      0005C0 89 83            [24] 1086 	mov	dph,r1
      0005C2 8A F0            [24] 1087 	mov	b,r2
      0005C4 12 14 2A         [24] 1088 	lcall	__gptrget
      0005C7 F5 82            [12] 1089 	mov	dpl,a
      0005C9 C0 06            [24] 1090 	push	ar6
      0005CB C0 05            [24] 1091 	push	ar5
      0005CD C0 04            [24] 1092 	push	ar4
      0005CF C0 03            [24] 1093 	push	ar3
      0005D1 12 04 41         [24] 1094 	lcall	_lcdputch_cgram
      0005D4 D0 03            [24] 1095 	pop	ar3
      0005D6 D0 04            [24] 1096 	pop	ar4
      0005D8 D0 05            [24] 1097 	pop	ar5
      0005DA D0 06            [24] 1098 	pop	ar6
      0005DC D0 07            [24] 1099 	pop	ar7
                                   1100 ;	support_functions.c:121: for(i=0;i<8;i++)
      0005DE 0B               [12] 1101 	inc	r3
      0005DF BB 08 00         [24] 1102 	cjne	r3,#0x08,00115$
      0005E2                       1103 00115$:
      0005E2 40 AD            [24] 1104 	jc	00102$
                                   1105 ;	support_functions.c:126: lcdgotoaddress(0x00);
      0005E4 75 82 00         [24] 1106 	mov	dpl,#0x00
      0005E7 12 06 71         [24] 1107 	lcall	_lcdgotoaddress
                                   1108 ;	support_functions.c:127: lcdputch(0x00);
      0005EA 75 82 00         [24] 1109 	mov	dpl,#0x00
                                   1110 ;	support_functions.c:128: }
      0005ED 02 06 89         [24] 1111 	ljmp	_lcdputch
                                   1112 ;------------------------------------------------------------
                                   1113 ;Allocation info for local variables in function 'LCD_build'
                                   1114 ;------------------------------------------------------------
                                   1115 ;ptr                       Allocated with name '_LCD_build_PARM_2'
                                   1116 ;location                  Allocated with name '_LCD_build_location_65536_128'
                                   1117 ;i                         Allocated with name '_LCD_build_i_65536_129'
                                   1118 ;------------------------------------------------------------
                                   1119 ;	support_functions.c:131: void LCD_build(unsigned char location, unsigned char *ptr)
                                   1120 ;	-----------------------------------------
                                   1121 ;	 function LCD_build
                                   1122 ;	-----------------------------------------
      0005F0                       1123 _LCD_build:
      0005F0 E5 82            [12] 1124 	mov	a,dpl
      0005F2 90 00 30         [24] 1125 	mov	dptr,#_LCD_build_location_65536_128
      0005F5 F0               [24] 1126 	movx	@dptr,a
                                   1127 ;	support_functions.c:134: for(i=0;i<8;i++)
      0005F6 E0               [24] 1128 	movx	a,@dptr
      0005F7 FF               [12] 1129 	mov	r7,a
      0005F8 90 00 2D         [24] 1130 	mov	dptr,#_LCD_build_PARM_2
      0005FB E0               [24] 1131 	movx	a,@dptr
      0005FC FC               [12] 1132 	mov	r4,a
      0005FD A3               [24] 1133 	inc	dptr
      0005FE E0               [24] 1134 	movx	a,@dptr
      0005FF FD               [12] 1135 	mov	r5,a
      000600 A3               [24] 1136 	inc	dptr
      000601 E0               [24] 1137 	movx	a,@dptr
      000602 FE               [12] 1138 	mov	r6,a
      000603 7B 00            [12] 1139 	mov	r3,#0x00
      000605                       1140 00102$:
                                   1141 ;	support_functions.c:136: lcdgotoaddress_cgram(0x40+ location*8 + i);
      000605 8F 02            [24] 1142 	mov	ar2,r7
      000607 EA               [12] 1143 	mov	a,r2
      000608 C4               [12] 1144 	swap	a
      000609 03               [12] 1145 	rr	a
      00060A 54 F8            [12] 1146 	anl	a,#0xf8
      00060C 24 40            [12] 1147 	add	a,#0x40
      00060E FA               [12] 1148 	mov	r2,a
      00060F 8B 01            [24] 1149 	mov	ar1,r3
      000611 E9               [12] 1150 	mov	a,r1
      000612 2A               [12] 1151 	add	a,r2
      000613 F5 82            [12] 1152 	mov	dpl,a
      000615 C0 07            [24] 1153 	push	ar7
      000617 C0 06            [24] 1154 	push	ar6
      000619 C0 05            [24] 1155 	push	ar5
      00061B C0 04            [24] 1156 	push	ar4
      00061D C0 03            [24] 1157 	push	ar3
      00061F 12 04 29         [24] 1158 	lcall	_lcdgotoaddress_cgram
      000622 D0 03            [24] 1159 	pop	ar3
      000624 D0 04            [24] 1160 	pop	ar4
      000626 D0 05            [24] 1161 	pop	ar5
      000628 D0 06            [24] 1162 	pop	ar6
                                   1163 ;	support_functions.c:137: lcdputch_cgram(ptr[i]);
      00062A EB               [12] 1164 	mov	a,r3
      00062B 2C               [12] 1165 	add	a,r4
      00062C F8               [12] 1166 	mov	r0,a
      00062D E4               [12] 1167 	clr	a
      00062E 3D               [12] 1168 	addc	a,r5
      00062F F9               [12] 1169 	mov	r1,a
      000630 8E 02            [24] 1170 	mov	ar2,r6
      000632 88 82            [24] 1171 	mov	dpl,r0
      000634 89 83            [24] 1172 	mov	dph,r1
      000636 8A F0            [24] 1173 	mov	b,r2
      000638 12 14 2A         [24] 1174 	lcall	__gptrget
      00063B F5 82            [12] 1175 	mov	dpl,a
      00063D C0 06            [24] 1176 	push	ar6
      00063F C0 05            [24] 1177 	push	ar5
      000641 C0 04            [24] 1178 	push	ar4
      000643 C0 03            [24] 1179 	push	ar3
      000645 12 04 41         [24] 1180 	lcall	_lcdputch_cgram
      000648 D0 03            [24] 1181 	pop	ar3
      00064A D0 04            [24] 1182 	pop	ar4
      00064C D0 05            [24] 1183 	pop	ar5
      00064E D0 06            [24] 1184 	pop	ar6
      000650 D0 07            [24] 1185 	pop	ar7
                                   1186 ;	support_functions.c:134: for(i=0;i<8;i++)
      000652 0B               [12] 1187 	inc	r3
      000653 BB 08 00         [24] 1188 	cjne	r3,#0x08,00111$
      000656                       1189 00111$:
      000656 40 AD            [24] 1190 	jc	00102$
                                   1191 ;	support_functions.c:152: }
      000658 22               [24] 1192 	ret
                                   1193 ;------------------------------------------------------------
                                   1194 ;Allocation info for local variables in function 'lcdclear'
                                   1195 ;------------------------------------------------------------
                                   1196 ;	support_functions.c:178: void lcdclear()
                                   1197 ;	-----------------------------------------
                                   1198 ;	 function lcdclear
                                   1199 ;	-----------------------------------------
      000659                       1200 _lcdclear:
                                   1201 ;	support_functions.c:180: lcdbusywait();              //busy polling
      000659 12 03 7C         [24] 1202 	lcall	_lcdbusywait
                                   1203 ;	support_functions.c:181: Rs=0;                       //command conditions
                                   1204 ;	assignBit
      00065C C2 95            [12] 1205 	clr	_P1_5
                                   1206 ;	support_functions.c:182: Rw=0;
                                   1207 ;	assignBit
      00065E C2 96            [12] 1208 	clr	_P1_6
                                   1209 ;	support_functions.c:183: lcd_cmd(0x01);              //command to clear screen
      000660 75 82 01         [24] 1210 	mov	dpl,#0x01
      000663 12 03 A7         [24] 1211 	lcall	_lcd_cmd
                                   1212 ;	support_functions.c:184: CursorPtr=0x00;             //send cursor to starting
      000666 90 00 81         [24] 1213 	mov	dptr,#_CursorPtr
      000669 E4               [12] 1214 	clr	a
      00066A F0               [24] 1215 	movx	@dptr,a
                                   1216 ;	support_functions.c:185: lcdgotoaddress(CursorPtr);
      00066B 75 82 00         [24] 1217 	mov	dpl,#0x00
                                   1218 ;	support_functions.c:186: }
      00066E 02 06 71         [24] 1219 	ljmp	_lcdgotoaddress
                                   1220 ;------------------------------------------------------------
                                   1221 ;Allocation info for local variables in function 'lcdgotoaddress'
                                   1222 ;------------------------------------------------------------
                                   1223 ;addr                      Allocated with name '_lcdgotoaddress_addr_65536_133'
                                   1224 ;------------------------------------------------------------
                                   1225 ;	support_functions.c:189: void lcdgotoaddress(unsigned char addr)
                                   1226 ;	-----------------------------------------
                                   1227 ;	 function lcdgotoaddress
                                   1228 ;	-----------------------------------------
      000671                       1229 _lcdgotoaddress:
      000671 E5 82            [12] 1230 	mov	a,dpl
      000673 90 00 31         [24] 1231 	mov	dptr,#_lcdgotoaddress_addr_65536_133
      000676 F0               [24] 1232 	movx	@dptr,a
                                   1233 ;	support_functions.c:191: lcdbusywait();
      000677 12 03 7C         [24] 1234 	lcall	_lcdbusywait
                                   1235 ;	support_functions.c:192: Rs=0;
                                   1236 ;	assignBit
      00067A C2 95            [12] 1237 	clr	_P1_5
                                   1238 ;	support_functions.c:193: Rw=0;
                                   1239 ;	assignBit
      00067C C2 96            [12] 1240 	clr	_P1_6
                                   1241 ;	support_functions.c:194: lcd_cmd(addr | 0x80);
      00067E 90 00 31         [24] 1242 	mov	dptr,#_lcdgotoaddress_addr_65536_133
      000681 E0               [24] 1243 	movx	a,@dptr
      000682 44 80            [12] 1244 	orl	a,#0x80
      000684 F5 82            [12] 1245 	mov	dpl,a
                                   1246 ;	support_functions.c:195: }
      000686 02 03 A7         [24] 1247 	ljmp	_lcd_cmd
                                   1248 ;------------------------------------------------------------
                                   1249 ;Allocation info for local variables in function 'lcdputch'
                                   1250 ;------------------------------------------------------------
                                   1251 ;cc                        Allocated with name '_lcdputch_cc_65536_135'
                                   1252 ;------------------------------------------------------------
                                   1253 ;	support_functions.c:197: void lcdputch(unsigned char cc)
                                   1254 ;	-----------------------------------------
                                   1255 ;	 function lcdputch
                                   1256 ;	-----------------------------------------
      000689                       1257 _lcdputch:
      000689 E5 82            [12] 1258 	mov	a,dpl
      00068B 90 00 32         [24] 1259 	mov	dptr,#_lcdputch_cc_65536_135
      00068E F0               [24] 1260 	movx	@dptr,a
                                   1261 ;	support_functions.c:199: lcdbusywait();
      00068F 12 03 7C         [24] 1262 	lcall	_lcdbusywait
                                   1263 ;	support_functions.c:200: Rs=1;               //write command
                                   1264 ;	assignBit
      000692 D2 95            [12] 1265 	setb	_P1_5
                                   1266 ;	support_functions.c:201: Rw=0;
                                   1267 ;	assignBit
      000694 C2 96            [12] 1268 	clr	_P1_6
                                   1269 ;	support_functions.c:202: *ptr=cc;
      000696 90 00 7E         [24] 1270 	mov	dptr,#_ptr
      000699 E0               [24] 1271 	movx	a,@dptr
      00069A FD               [12] 1272 	mov	r5,a
      00069B A3               [24] 1273 	inc	dptr
      00069C E0               [24] 1274 	movx	a,@dptr
      00069D FE               [12] 1275 	mov	r6,a
      00069E A3               [24] 1276 	inc	dptr
      00069F E0               [24] 1277 	movx	a,@dptr
      0006A0 FF               [12] 1278 	mov	r7,a
      0006A1 90 00 32         [24] 1279 	mov	dptr,#_lcdputch_cc_65536_135
      0006A4 E0               [24] 1280 	movx	a,@dptr
      0006A5 FC               [12] 1281 	mov	r4,a
      0006A6 7B 00            [12] 1282 	mov	r3,#0x00
      0006A8 8D 82            [24] 1283 	mov	dpl,r5
      0006AA 8E 83            [24] 1284 	mov	dph,r6
      0006AC 8F F0            [24] 1285 	mov	b,r7
      0006AE EC               [12] 1286 	mov	a,r4
      0006AF 12 09 15         [24] 1287 	lcall	__gptrput
      0006B2 A3               [24] 1288 	inc	dptr
      0006B3 EB               [12] 1289 	mov	a,r3
                                   1290 ;	support_functions.c:203: }
      0006B4 02 09 15         [24] 1291 	ljmp	__gptrput
                                   1292 ;------------------------------------------------------------
                                   1293 ;Allocation info for local variables in function 'serial_init'
                                   1294 ;------------------------------------------------------------
                                   1295 ;	support_functions.c:206: void serial_init(void){
                                   1296 ;	-----------------------------------------
                                   1297 ;	 function serial_init
                                   1298 ;	-----------------------------------------
      0006B7                       1299 _serial_init:
                                   1300 ;	support_functions.c:207: TMOD=0x20;
      0006B7 75 89 20         [24] 1301 	mov	_TMOD,#0x20
                                   1302 ;	support_functions.c:208: TH1=0xFD;
      0006BA 75 8D FD         [24] 1303 	mov	_TH1,#0xfd
                                   1304 ;	support_functions.c:209: SCON=0x50;
      0006BD 75 98 50         [24] 1305 	mov	_SCON,#0x50
                                   1306 ;	support_functions.c:210: TR1=1;
                                   1307 ;	assignBit
      0006C0 D2 8E            [12] 1308 	setb	_TR1
                                   1309 ;	support_functions.c:211: TI=1;
                                   1310 ;	assignBit
      0006C2 D2 99            [12] 1311 	setb	_TI
                                   1312 ;	support_functions.c:212: }
      0006C4 22               [24] 1313 	ret
                                   1314 ;------------------------------------------------------------
                                   1315 ;Allocation info for local variables in function 'putchar'
                                   1316 ;------------------------------------------------------------
                                   1317 ;c                         Allocated with name '_putchar_c_65536_139'
                                   1318 ;------------------------------------------------------------
                                   1319 ;	support_functions.c:214: int putchar (int c)
                                   1320 ;	-----------------------------------------
                                   1321 ;	 function putchar
                                   1322 ;	-----------------------------------------
      0006C5                       1323 _putchar:
      0006C5 AF 83            [24] 1324 	mov	r7,dph
      0006C7 E5 82            [12] 1325 	mov	a,dpl
      0006C9 90 00 33         [24] 1326 	mov	dptr,#_putchar_c_65536_139
      0006CC F0               [24] 1327 	movx	@dptr,a
      0006CD EF               [12] 1328 	mov	a,r7
      0006CE A3               [24] 1329 	inc	dptr
      0006CF F0               [24] 1330 	movx	@dptr,a
                                   1331 ;	support_functions.c:216: while (!TI);
      0006D0                       1332 00101$:
      0006D0 30 99 FD         [24] 1333 	jnb	_TI,00101$
                                   1334 ;	support_functions.c:217: while (TI == 0);
      0006D3                       1335 00104$:
      0006D3 30 99 FD         [24] 1336 	jnb	_TI,00104$
                                   1337 ;	support_functions.c:218: while ((SCON & 0x02) == 0);
      0006D6                       1338 00107$:
      0006D6 E5 98            [12] 1339 	mov	a,_SCON
      0006D8 30 E1 FB         [24] 1340 	jnb	acc.1,00107$
                                   1341 ;	support_functions.c:220: SBUF = c;           // load serial port with transmit value
      0006DB 90 00 33         [24] 1342 	mov	dptr,#_putchar_c_65536_139
      0006DE E0               [24] 1343 	movx	a,@dptr
      0006DF FE               [12] 1344 	mov	r6,a
      0006E0 A3               [24] 1345 	inc	dptr
      0006E1 E0               [24] 1346 	movx	a,@dptr
      0006E2 FF               [12] 1347 	mov	r7,a
      0006E3 8E 99            [24] 1348 	mov	_SBUF,r6
                                   1349 ;	support_functions.c:221: TI = 0;             // clear TI flag
                                   1350 ;	assignBit
      0006E5 C2 99            [12] 1351 	clr	_TI
                                   1352 ;	support_functions.c:223: return c;
      0006E7 8E 82            [24] 1353 	mov	dpl,r6
      0006E9 8F 83            [24] 1354 	mov	dph,r7
                                   1355 ;	support_functions.c:224: }
      0006EB 22               [24] 1356 	ret
                                   1357 ;------------------------------------------------------------
                                   1358 ;Allocation info for local variables in function 'getchar'
                                   1359 ;------------------------------------------------------------
                                   1360 ;	support_functions.c:226: int getchar (void)
                                   1361 ;	-----------------------------------------
                                   1362 ;	 function getchar
                                   1363 ;	-----------------------------------------
      0006EC                       1364 _getchar:
                                   1365 ;	support_functions.c:228: while (!RI);
      0006EC                       1366 00101$:
      0006EC 30 98 FD         [24] 1367 	jnb	_RI,00101$
                                   1368 ;	support_functions.c:229: while ((SCON & 0x01) == 0);
      0006EF                       1369 00104$:
      0006EF E5 98            [12] 1370 	mov	a,_SCON
      0006F1 30 E0 FB         [24] 1371 	jnb	acc.0,00104$
                                   1372 ;	support_functions.c:230: while (RI == 0);
      0006F4                       1373 00107$:
                                   1374 ;	support_functions.c:232: RI = 0;                         // clear RI flag
                                   1375 ;	assignBit
      0006F4 10 98 02         [24] 1376 	jbc	_RI,00130$
      0006F7 80 FB            [24] 1377 	sjmp	00107$
      0006F9                       1378 00130$:
                                   1379 ;	support_functions.c:233: return SBUF;                    // return character from SBUF
      0006F9 AE 99            [24] 1380 	mov	r6,_SBUF
      0006FB 7F 00            [12] 1381 	mov	r7,#0x00
      0006FD 8E 82            [24] 1382 	mov	dpl,r6
      0006FF 8F 83            [24] 1383 	mov	dph,r7
                                   1384 ;	support_functions.c:234: }
      000701 22               [24] 1385 	ret
                                   1386 ;------------------------------------------------------------
                                   1387 ;Allocation info for local variables in function 'putstr'
                                   1388 ;------------------------------------------------------------
                                   1389 ;s                         Allocated with name '_putstr_s_65536_143'
                                   1390 ;i                         Allocated with name '_putstr_i_65536_144'
                                   1391 ;------------------------------------------------------------
                                   1392 ;	support_functions.c:236: int putstr (char *s)
                                   1393 ;	-----------------------------------------
                                   1394 ;	 function putstr
                                   1395 ;	-----------------------------------------
      000702                       1396 _putstr:
      000702 AF F0            [24] 1397 	mov	r7,b
      000704 AE 83            [24] 1398 	mov	r6,dph
      000706 E5 82            [12] 1399 	mov	a,dpl
      000708 90 00 35         [24] 1400 	mov	dptr,#_putstr_s_65536_143
      00070B F0               [24] 1401 	movx	@dptr,a
      00070C EE               [12] 1402 	mov	a,r6
      00070D A3               [24] 1403 	inc	dptr
      00070E F0               [24] 1404 	movx	@dptr,a
      00070F EF               [12] 1405 	mov	a,r7
      000710 A3               [24] 1406 	inc	dptr
      000711 F0               [24] 1407 	movx	@dptr,a
                                   1408 ;	support_functions.c:239: while (*s){            // output characters until NULL found
      000712 90 00 35         [24] 1409 	mov	dptr,#_putstr_s_65536_143
      000715 E0               [24] 1410 	movx	a,@dptr
      000716 FD               [12] 1411 	mov	r5,a
      000717 A3               [24] 1412 	inc	dptr
      000718 E0               [24] 1413 	movx	a,@dptr
      000719 FE               [12] 1414 	mov	r6,a
      00071A A3               [24] 1415 	inc	dptr
      00071B E0               [24] 1416 	movx	a,@dptr
      00071C FF               [12] 1417 	mov	r7,a
      00071D 7B 00            [12] 1418 	mov	r3,#0x00
      00071F 7C 00            [12] 1419 	mov	r4,#0x00
      000721                       1420 00101$:
      000721 8D 82            [24] 1421 	mov	dpl,r5
      000723 8E 83            [24] 1422 	mov	dph,r6
      000725 8F F0            [24] 1423 	mov	b,r7
      000727 12 14 2A         [24] 1424 	lcall	__gptrget
      00072A FA               [12] 1425 	mov	r2,a
      00072B 60 36            [24] 1426 	jz	00108$
                                   1427 ;	support_functions.c:240: putchar(*s++);
      00072D 0D               [12] 1428 	inc	r5
      00072E BD 00 01         [24] 1429 	cjne	r5,#0x00,00116$
      000731 0E               [12] 1430 	inc	r6
      000732                       1431 00116$:
      000732 90 00 35         [24] 1432 	mov	dptr,#_putstr_s_65536_143
      000735 ED               [12] 1433 	mov	a,r5
      000736 F0               [24] 1434 	movx	@dptr,a
      000737 EE               [12] 1435 	mov	a,r6
      000738 A3               [24] 1436 	inc	dptr
      000739 F0               [24] 1437 	movx	@dptr,a
      00073A EF               [12] 1438 	mov	a,r7
      00073B A3               [24] 1439 	inc	dptr
      00073C F0               [24] 1440 	movx	@dptr,a
      00073D 8A 01            [24] 1441 	mov	ar1,r2
      00073F 7A 00            [12] 1442 	mov	r2,#0x00
      000741 89 82            [24] 1443 	mov	dpl,r1
      000743 8A 83            [24] 1444 	mov	dph,r2
      000745 C0 07            [24] 1445 	push	ar7
      000747 C0 06            [24] 1446 	push	ar6
      000749 C0 05            [24] 1447 	push	ar5
      00074B C0 04            [24] 1448 	push	ar4
      00074D C0 03            [24] 1449 	push	ar3
      00074F 12 06 C5         [24] 1450 	lcall	_putchar
      000752 D0 03            [24] 1451 	pop	ar3
      000754 D0 04            [24] 1452 	pop	ar4
      000756 D0 05            [24] 1453 	pop	ar5
      000758 D0 06            [24] 1454 	pop	ar6
      00075A D0 07            [24] 1455 	pop	ar7
                                   1456 ;	support_functions.c:241: i++;
      00075C 0B               [12] 1457 	inc	r3
      00075D BB 00 C1         [24] 1458 	cjne	r3,#0x00,00101$
      000760 0C               [12] 1459 	inc	r4
      000761 80 BE            [24] 1460 	sjmp	00101$
      000763                       1461 00108$:
      000763 90 00 35         [24] 1462 	mov	dptr,#_putstr_s_65536_143
      000766 ED               [12] 1463 	mov	a,r5
      000767 F0               [24] 1464 	movx	@dptr,a
      000768 EE               [12] 1465 	mov	a,r6
      000769 A3               [24] 1466 	inc	dptr
      00076A F0               [24] 1467 	movx	@dptr,a
      00076B EF               [12] 1468 	mov	a,r7
      00076C A3               [24] 1469 	inc	dptr
      00076D F0               [24] 1470 	movx	@dptr,a
                                   1471 ;	support_functions.c:243: return i+1;
      00076E 0B               [12] 1472 	inc	r3
      00076F BB 00 01         [24] 1473 	cjne	r3,#0x00,00118$
      000772 0C               [12] 1474 	inc	r4
      000773                       1475 00118$:
      000773 8B 82            [24] 1476 	mov	dpl,r3
      000775 8C 83            [24] 1477 	mov	dph,r4
                                   1478 ;	support_functions.c:244: }
      000777 22               [24] 1479 	ret
                                   1480 ;------------------------------------------------------------
                                   1481 ;Allocation info for local variables in function 'getstr'
                                   1482 ;------------------------------------------------------------
                                   1483 ;a                         Allocated with name '_getstr_a_65536_146'
                                   1484 ;i                         Allocated with name '_getstr_i_65536_147'
                                   1485 ;------------------------------------------------------------
                                   1486 ;	support_functions.c:246: int getstr(char *a)
                                   1487 ;	-----------------------------------------
                                   1488 ;	 function getstr
                                   1489 ;	-----------------------------------------
      000778                       1490 _getstr:
      000778 AF F0            [24] 1491 	mov	r7,b
      00077A AE 83            [24] 1492 	mov	r6,dph
      00077C E5 82            [12] 1493 	mov	a,dpl
      00077E 90 00 38         [24] 1494 	mov	dptr,#_getstr_a_65536_146
      000781 F0               [24] 1495 	movx	@dptr,a
      000782 EE               [12] 1496 	mov	a,r6
      000783 A3               [24] 1497 	inc	dptr
      000784 F0               [24] 1498 	movx	@dptr,a
      000785 EF               [12] 1499 	mov	a,r7
      000786 A3               [24] 1500 	inc	dptr
      000787 F0               [24] 1501 	movx	@dptr,a
                                   1502 ;	support_functions.c:250: do{
      000788 7E 00            [12] 1503 	mov	r6,#0x00
      00078A 7F 00            [12] 1504 	mov	r7,#0x00
      00078C 90 00 38         [24] 1505 	mov	dptr,#_getstr_a_65536_146
      00078F E0               [24] 1506 	movx	a,@dptr
      000790 FB               [12] 1507 	mov	r3,a
      000791 A3               [24] 1508 	inc	dptr
      000792 E0               [24] 1509 	movx	a,@dptr
      000793 FC               [12] 1510 	mov	r4,a
      000794 A3               [24] 1511 	inc	dptr
      000795 E0               [24] 1512 	movx	a,@dptr
      000796 FD               [12] 1513 	mov	r5,a
      000797                       1514 00101$:
                                   1515 ;	support_functions.c:251: *a = getchar();     //get characters till enter is found
      000797 C0 07            [24] 1516 	push	ar7
      000799 C0 06            [24] 1517 	push	ar6
      00079B C0 05            [24] 1518 	push	ar5
      00079D C0 04            [24] 1519 	push	ar4
      00079F C0 03            [24] 1520 	push	ar3
      0007A1 12 06 EC         [24] 1521 	lcall	_getchar
      0007A4 A9 82            [24] 1522 	mov	r1,dpl
      0007A6 D0 03            [24] 1523 	pop	ar3
      0007A8 D0 04            [24] 1524 	pop	ar4
      0007AA D0 05            [24] 1525 	pop	ar5
      0007AC D0 06            [24] 1526 	pop	ar6
      0007AE D0 07            [24] 1527 	pop	ar7
      0007B0 8B 82            [24] 1528 	mov	dpl,r3
      0007B2 8C 83            [24] 1529 	mov	dph,r4
      0007B4 8D F0            [24] 1530 	mov	b,r5
      0007B6 E9               [12] 1531 	mov	a,r1
      0007B7 12 09 15         [24] 1532 	lcall	__gptrput
      0007BA A3               [24] 1533 	inc	dptr
      0007BB AB 82            [24] 1534 	mov	r3,dpl
      0007BD AC 83            [24] 1535 	mov	r4,dph
                                   1536 ;	support_functions.c:252: i++;
      0007BF 0E               [12] 1537 	inc	r6
      0007C0 BE 00 01         [24] 1538 	cjne	r6,#0x00,00115$
      0007C3 0F               [12] 1539 	inc	r7
      0007C4                       1540 00115$:
                                   1541 ;	support_functions.c:253: }while(*a++ != '\r');
      0007C4 90 00 38         [24] 1542 	mov	dptr,#_getstr_a_65536_146
      0007C7 EB               [12] 1543 	mov	a,r3
      0007C8 F0               [24] 1544 	movx	@dptr,a
      0007C9 EC               [12] 1545 	mov	a,r4
      0007CA A3               [24] 1546 	inc	dptr
      0007CB F0               [24] 1547 	movx	@dptr,a
      0007CC ED               [12] 1548 	mov	a,r5
      0007CD A3               [24] 1549 	inc	dptr
      0007CE F0               [24] 1550 	movx	@dptr,a
      0007CF B9 0D C5         [24] 1551 	cjne	r1,#0x0d,00101$
                                   1552 ;	support_functions.c:255: *a = '\0';          //append null character to string
      0007D2 90 00 38         [24] 1553 	mov	dptr,#_getstr_a_65536_146
      0007D5 EB               [12] 1554 	mov	a,r3
      0007D6 F0               [24] 1555 	movx	@dptr,a
      0007D7 EC               [12] 1556 	mov	a,r4
      0007D8 A3               [24] 1557 	inc	dptr
      0007D9 F0               [24] 1558 	movx	@dptr,a
      0007DA ED               [12] 1559 	mov	a,r5
      0007DB A3               [24] 1560 	inc	dptr
      0007DC F0               [24] 1561 	movx	@dptr,a
      0007DD 8B 82            [24] 1562 	mov	dpl,r3
      0007DF 8C 83            [24] 1563 	mov	dph,r4
      0007E1 8D F0            [24] 1564 	mov	b,r5
      0007E3 E4               [12] 1565 	clr	a
      0007E4 12 09 15         [24] 1566 	lcall	__gptrput
                                   1567 ;	support_functions.c:256: return i+1;
      0007E7 0E               [12] 1568 	inc	r6
      0007E8 BE 00 01         [24] 1569 	cjne	r6,#0x00,00118$
      0007EB 0F               [12] 1570 	inc	r7
      0007EC                       1571 00118$:
      0007EC 8E 82            [24] 1572 	mov	dpl,r6
      0007EE 8F 83            [24] 1573 	mov	dph,r7
                                   1574 ;	support_functions.c:257: }
      0007F0 22               [24] 1575 	ret
                                   1576 	.area CSEG    (CODE)
                                   1577 	.area CONST   (CODE)
                                   1578 	.area CONST   (CODE)
      0015C0                       1579 ___str_0:
      0015C0 25 30 33 78 3A 20     1580 	.ascii "%03x: "
      0015C6 00                    1581 	.db 0x00
                                   1582 	.area CSEG    (CODE)
                                   1583 	.area CONST   (CODE)
      0015C7                       1584 ___str_1:
      0015C7 25 30 32 78 20        1585 	.ascii "%02x "
      0015CC 00                    1586 	.db 0x00
                                   1587 	.area CSEG    (CODE)
                                   1588 	.area CONST   (CODE)
      0015CD                       1589 ___str_2:
      0015CD 0A                    1590 	.db 0x0a
      0015CE 0D                    1591 	.db 0x0d
      0015CF 00                    1592 	.db 0x00
                                   1593 	.area CSEG    (CODE)
                                   1594 	.area XINIT   (CODE)
      0015DB                       1595 __xinit__ptr:
                                   1596 ; generic printIvalPtr
      0015DB 00 80 00              1597 	.byte #0x00,#0x80,#0x00
      0015DE                       1598 __xinit__CursorPtr:
      0015DE 00                    1599 	.db #0x00	; 0
      0015DF                       1600 __xinit__busy_flag:
      0015DF 7E 00 00              1601 	.byte _ptr, (_ptr >> 8),#0x00
                                   1602 	.area CABS    (ABS,CODE)
