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
                                     12 	.globl _lcdclear
                                     13 	.globl _LCD_build_main
                                     14 	.globl _LCD_build
                                     15 	.globl _hexdump_cgram
                                     16 	.globl _lcdputch
                                     17 	.globl _lcdgotoaddress
                                     18 	.globl _lcd_init
                                     19 	.globl _serial_init
                                     20 	.globl _putchar
                                     21 	.globl _getstr
                                     22 	.globl _atoi
                                     23 	.globl _puts
                                     24 	.globl _printf
                                     25 	.globl _TF1
                                     26 	.globl _TR1
                                     27 	.globl _TF0
                                     28 	.globl _TR0
                                     29 	.globl _IE1
                                     30 	.globl _IT1
                                     31 	.globl _IE0
                                     32 	.globl _IT0
                                     33 	.globl _SM0
                                     34 	.globl _SM1
                                     35 	.globl _SM2
                                     36 	.globl _REN
                                     37 	.globl _TB8
                                     38 	.globl _RB8
                                     39 	.globl _TI
                                     40 	.globl _RI
                                     41 	.globl _CY
                                     42 	.globl _AC
                                     43 	.globl _F0
                                     44 	.globl _RS1
                                     45 	.globl _RS0
                                     46 	.globl _OV
                                     47 	.globl _F1
                                     48 	.globl _P
                                     49 	.globl _RD
                                     50 	.globl _WR
                                     51 	.globl _T1
                                     52 	.globl _T0
                                     53 	.globl _INT1
                                     54 	.globl _INT0
                                     55 	.globl _TXD0
                                     56 	.globl _TXD
                                     57 	.globl _RXD0
                                     58 	.globl _RXD
                                     59 	.globl _P3_7
                                     60 	.globl _P3_6
                                     61 	.globl _P3_5
                                     62 	.globl _P3_4
                                     63 	.globl _P3_3
                                     64 	.globl _P3_2
                                     65 	.globl _P3_1
                                     66 	.globl _P3_0
                                     67 	.globl _P2_7
                                     68 	.globl _P2_6
                                     69 	.globl _P2_5
                                     70 	.globl _P2_4
                                     71 	.globl _P2_3
                                     72 	.globl _P2_2
                                     73 	.globl _P2_1
                                     74 	.globl _P2_0
                                     75 	.globl _P1_7
                                     76 	.globl _P1_6
                                     77 	.globl _P1_5
                                     78 	.globl _P1_4
                                     79 	.globl _P1_3
                                     80 	.globl _P1_2
                                     81 	.globl _P1_1
                                     82 	.globl _P1_0
                                     83 	.globl _P0_7
                                     84 	.globl _P0_6
                                     85 	.globl _P0_5
                                     86 	.globl _P0_4
                                     87 	.globl _P0_3
                                     88 	.globl _P0_2
                                     89 	.globl _P0_1
                                     90 	.globl _P0_0
                                     91 	.globl _PS
                                     92 	.globl _PT1
                                     93 	.globl _PX1
                                     94 	.globl _PT0
                                     95 	.globl _PX0
                                     96 	.globl _EA
                                     97 	.globl _ES
                                     98 	.globl _ET1
                                     99 	.globl _EX1
                                    100 	.globl _ET0
                                    101 	.globl _EX0
                                    102 	.globl _BREG_F7
                                    103 	.globl _BREG_F6
                                    104 	.globl _BREG_F5
                                    105 	.globl _BREG_F4
                                    106 	.globl _BREG_F3
                                    107 	.globl _BREG_F2
                                    108 	.globl _BREG_F1
                                    109 	.globl _BREG_F0
                                    110 	.globl _P5_7
                                    111 	.globl _P5_6
                                    112 	.globl _P5_5
                                    113 	.globl _P5_4
                                    114 	.globl _P5_3
                                    115 	.globl _P5_2
                                    116 	.globl _P5_1
                                    117 	.globl _P5_0
                                    118 	.globl _P4_7
                                    119 	.globl _P4_6
                                    120 	.globl _P4_5
                                    121 	.globl _P4_4
                                    122 	.globl _P4_3
                                    123 	.globl _P4_2
                                    124 	.globl _P4_1
                                    125 	.globl _P4_0
                                    126 	.globl _PX0L
                                    127 	.globl _PT0L
                                    128 	.globl _PX1L
                                    129 	.globl _PT1L
                                    130 	.globl _PSL
                                    131 	.globl _PT2L
                                    132 	.globl _PPCL
                                    133 	.globl _EC
                                    134 	.globl _CCF0
                                    135 	.globl _CCF1
                                    136 	.globl _CCF2
                                    137 	.globl _CCF3
                                    138 	.globl _CCF4
                                    139 	.globl _CR
                                    140 	.globl _CF
                                    141 	.globl _TF2
                                    142 	.globl _EXF2
                                    143 	.globl _RCLK
                                    144 	.globl _TCLK
                                    145 	.globl _EXEN2
                                    146 	.globl _TR2
                                    147 	.globl _C_T2
                                    148 	.globl _CP_RL2
                                    149 	.globl _T2CON_7
                                    150 	.globl _T2CON_6
                                    151 	.globl _T2CON_5
                                    152 	.globl _T2CON_4
                                    153 	.globl _T2CON_3
                                    154 	.globl _T2CON_2
                                    155 	.globl _T2CON_1
                                    156 	.globl _T2CON_0
                                    157 	.globl _PT2
                                    158 	.globl _ET2
                                    159 	.globl _TMOD
                                    160 	.globl _TL1
                                    161 	.globl _TL0
                                    162 	.globl _TH1
                                    163 	.globl _TH0
                                    164 	.globl _TCON
                                    165 	.globl _SP
                                    166 	.globl _SCON
                                    167 	.globl _SBUF0
                                    168 	.globl _SBUF
                                    169 	.globl _PSW
                                    170 	.globl _PCON
                                    171 	.globl _P3
                                    172 	.globl _P2
                                    173 	.globl _P1
                                    174 	.globl _P0
                                    175 	.globl _IP
                                    176 	.globl _IE
                                    177 	.globl _DP0L
                                    178 	.globl _DPL
                                    179 	.globl _DP0H
                                    180 	.globl _DPH
                                    181 	.globl _B
                                    182 	.globl _ACC
                                    183 	.globl _EECON
                                    184 	.globl _KBF
                                    185 	.globl _KBE
                                    186 	.globl _KBLS
                                    187 	.globl _BRL
                                    188 	.globl _BDRCON
                                    189 	.globl _T2MOD
                                    190 	.globl _SPDAT
                                    191 	.globl _SPSTA
                                    192 	.globl _SPCON
                                    193 	.globl _SADEN
                                    194 	.globl _SADDR
                                    195 	.globl _WDTPRG
                                    196 	.globl _WDTRST
                                    197 	.globl _P5
                                    198 	.globl _P4
                                    199 	.globl _IPH1
                                    200 	.globl _IPL1
                                    201 	.globl _IPH0
                                    202 	.globl _IPL0
                                    203 	.globl _IEN1
                                    204 	.globl _IEN0
                                    205 	.globl _CMOD
                                    206 	.globl _CL
                                    207 	.globl _CH
                                    208 	.globl _CCON
                                    209 	.globl _CCAPM4
                                    210 	.globl _CCAPM3
                                    211 	.globl _CCAPM2
                                    212 	.globl _CCAPM1
                                    213 	.globl _CCAPM0
                                    214 	.globl _CCAP4L
                                    215 	.globl _CCAP3L
                                    216 	.globl _CCAP2L
                                    217 	.globl _CCAP1L
                                    218 	.globl _CCAP0L
                                    219 	.globl _CCAP4H
                                    220 	.globl _CCAP3H
                                    221 	.globl _CCAP2H
                                    222 	.globl _CCAP1H
                                    223 	.globl _CCAP0H
                                    224 	.globl _CKCON1
                                    225 	.globl _CKCON0
                                    226 	.globl _CKRL
                                    227 	.globl _AUXR1
                                    228 	.globl _AUXR
                                    229 	.globl _TH2
                                    230 	.globl _TL2
                                    231 	.globl _RCAP2H
                                    232 	.globl _RCAP2L
                                    233 	.globl _T2CON
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
      000021                        469 __start__stack:
      000021                        470 	.ds	1
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
      000001                        493 _main_character_65536_104:
      000001                        494 	.ds 5
      000006                        495 _main_get_input_65536_104:
      000006                        496 	.ds 2
      000008                        497 _main_user_array_65536_104:
      000008                        498 	.ds 8
      000010                        499 _main_pattern_65536_104:
      000010                        500 	.ds 8
      000018                        501 _main_pattern2_65536_104:
      000018                        502 	.ds 8
                                    503 ;--------------------------------------------------------
                                    504 ; absolute external ram data
                                    505 ;--------------------------------------------------------
                                    506 	.area XABS    (ABS,XDATA)
                                    507 ;--------------------------------------------------------
                                    508 ; external initialized ram data
                                    509 ;--------------------------------------------------------
                                    510 	.area XISEG   (XDATA)
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
      000000 02 00 06         [24]  526 	ljmp	__sdcc_gsinit_startup
                                    527 ;--------------------------------------------------------
                                    528 ; global & static initialisations
                                    529 ;--------------------------------------------------------
                                    530 	.area HOME    (CODE)
                                    531 	.area GSINIT  (CODE)
                                    532 	.area GSFINAL (CODE)
                                    533 	.area GSINIT  (CODE)
                                    534 	.globl __sdcc_gsinit_startup
                                    535 	.globl __sdcc_program_startup
                                    536 	.globl __start__stack
                                    537 	.globl __mcs51_genXINIT
                                    538 	.globl __mcs51_genXRAMCLEAR
                                    539 	.globl __mcs51_genRAMCLEAR
                                    540 	.area GSFINAL (CODE)
      00005F 02 00 03         [24]  541 	ljmp	__sdcc_program_startup
                                    542 ;--------------------------------------------------------
                                    543 ; Home
                                    544 ;--------------------------------------------------------
                                    545 	.area HOME    (CODE)
                                    546 	.area HOME    (CODE)
      000003                        547 __sdcc_program_startup:
      000003 02 00 62         [24]  548 	ljmp	_main
                                    549 ;	return from main will return to caller
                                    550 ;--------------------------------------------------------
                                    551 ; code
                                    552 ;--------------------------------------------------------
                                    553 	.area CSEG    (CODE)
                                    554 ;------------------------------------------------------------
                                    555 ;Allocation info for local variables in function 'main'
                                    556 ;------------------------------------------------------------
                                    557 ;total_value               Allocated to registers r7 
                                    558 ;character                 Allocated with name '_main_character_65536_104'
                                    559 ;get_input                 Allocated with name '_main_get_input_65536_104'
                                    560 ;get_num                   Allocated with name '_main_get_num_65536_104'
                                    561 ;value                     Allocated with name '_main_value_65536_104'
                                    562 ;user_array                Allocated with name '_main_user_array_65536_104'
                                    563 ;pattern                   Allocated with name '_main_pattern_65536_104'
                                    564 ;pattern2                  Allocated with name '_main_pattern2_65536_104'
                                    565 ;i                         Allocated with name '_main_i_262144_107'
                                    566 ;j                         Allocated with name '_main_j_393216_109'
                                    567 ;i                         Allocated with name '_main_i_262144_112'
                                    568 ;i                         Allocated with name '_main_i_262144_114'
                                    569 ;i                         Allocated with name '_main_i_262144_116'
                                    570 ;i                         Allocated with name '_main_i_262144_118'
                                    571 ;------------------------------------------------------------
                                    572 ;	main.c:18: void main(void)
                                    573 ;	-----------------------------------------
                                    574 ;	 function main
                                    575 ;	-----------------------------------------
      000062                        576 _main:
                           000007   577 	ar7 = 0x07
                           000006   578 	ar6 = 0x06
                           000005   579 	ar5 = 0x05
                           000004   580 	ar4 = 0x04
                           000003   581 	ar3 = 0x03
                           000002   582 	ar2 = 0x02
                           000001   583 	ar1 = 0x01
                           000000   584 	ar0 = 0x00
                                    585 ;	main.c:24: __data uint8_t total_value=0;
      000062 7F 00            [12]  586 	mov	r7,#0x00
                                    587 ;	main.c:25: uint8_t user_array[8]={0};
      000064 90 00 08         [24]  588 	mov	dptr,#_main_user_array_65536_104
      000067 E4               [12]  589 	clr	a
      000068 F0               [24]  590 	movx	@dptr,a
      000069 90 00 09         [24]  591 	mov	dptr,#(_main_user_array_65536_104 + 0x0001)
      00006C F0               [24]  592 	movx	@dptr,a
      00006D 90 00 0A         [24]  593 	mov	dptr,#(_main_user_array_65536_104 + 0x0002)
      000070 F0               [24]  594 	movx	@dptr,a
      000071 90 00 0B         [24]  595 	mov	dptr,#(_main_user_array_65536_104 + 0x0003)
      000074 F0               [24]  596 	movx	@dptr,a
      000075 90 00 0C         [24]  597 	mov	dptr,#(_main_user_array_65536_104 + 0x0004)
      000078 F0               [24]  598 	movx	@dptr,a
      000079 90 00 0D         [24]  599 	mov	dptr,#(_main_user_array_65536_104 + 0x0005)
      00007C F0               [24]  600 	movx	@dptr,a
      00007D 90 00 0E         [24]  601 	mov	dptr,#(_main_user_array_65536_104 + 0x0006)
      000080 F0               [24]  602 	movx	@dptr,a
      000081 90 00 0F         [24]  603 	mov	dptr,#(_main_user_array_65536_104 + 0x0007)
      000084 F0               [24]  604 	movx	@dptr,a
                                    605 ;	main.c:26: unsigned char pattern[8]={0x04,0x0E,0x0E,0x0E,0x1F,0x00,0x04,0x00};
      000085 90 00 10         [24]  606 	mov	dptr,#_main_pattern_65536_104
      000088 74 04            [12]  607 	mov	a,#0x04
      00008A F0               [24]  608 	movx	@dptr,a
      00008B 90 00 11         [24]  609 	mov	dptr,#(_main_pattern_65536_104 + 0x0001)
      00008E 74 0E            [12]  610 	mov	a,#0x0e
      000090 F0               [24]  611 	movx	@dptr,a
      000091 90 00 12         [24]  612 	mov	dptr,#(_main_pattern_65536_104 + 0x0002)
      000094 F0               [24]  613 	movx	@dptr,a
      000095 90 00 13         [24]  614 	mov	dptr,#(_main_pattern_65536_104 + 0x0003)
      000098 F0               [24]  615 	movx	@dptr,a
      000099 90 00 14         [24]  616 	mov	dptr,#(_main_pattern_65536_104 + 0x0004)
      00009C 74 1F            [12]  617 	mov	a,#0x1f
      00009E F0               [24]  618 	movx	@dptr,a
      00009F 90 00 15         [24]  619 	mov	dptr,#(_main_pattern_65536_104 + 0x0005)
      0000A2 E4               [12]  620 	clr	a
      0000A3 F0               [24]  621 	movx	@dptr,a
      0000A4 90 00 16         [24]  622 	mov	dptr,#(_main_pattern_65536_104 + 0x0006)
      0000A7 74 04            [12]  623 	mov	a,#0x04
      0000A9 F0               [24]  624 	movx	@dptr,a
      0000AA 90 00 17         [24]  625 	mov	dptr,#(_main_pattern_65536_104 + 0x0007)
      0000AD E4               [12]  626 	clr	a
      0000AE F0               [24]  627 	movx	@dptr,a
                                    628 ;	main.c:27: unsigned char pattern2[8]={0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00};
      0000AF 90 00 18         [24]  629 	mov	dptr,#_main_pattern2_65536_104
      0000B2 F0               [24]  630 	movx	@dptr,a
      0000B3 90 00 19         [24]  631 	mov	dptr,#(_main_pattern2_65536_104 + 0x0001)
      0000B6 F0               [24]  632 	movx	@dptr,a
      0000B7 90 00 1A         [24]  633 	mov	dptr,#(_main_pattern2_65536_104 + 0x0002)
      0000BA F0               [24]  634 	movx	@dptr,a
      0000BB 90 00 1B         [24]  635 	mov	dptr,#(_main_pattern2_65536_104 + 0x0003)
      0000BE 74 1F            [12]  636 	mov	a,#0x1f
      0000C0 F0               [24]  637 	movx	@dptr,a
      0000C1 90 00 1C         [24]  638 	mov	dptr,#(_main_pattern2_65536_104 + 0x0004)
      0000C4 F0               [24]  639 	movx	@dptr,a
      0000C5 90 00 1D         [24]  640 	mov	dptr,#(_main_pattern2_65536_104 + 0x0005)
      0000C8 E4               [12]  641 	clr	a
      0000C9 F0               [24]  642 	movx	@dptr,a
      0000CA 90 00 1E         [24]  643 	mov	dptr,#(_main_pattern2_65536_104 + 0x0006)
      0000CD F0               [24]  644 	movx	@dptr,a
      0000CE 90 00 1F         [24]  645 	mov	dptr,#(_main_pattern2_65536_104 + 0x0007)
      0000D1 F0               [24]  646 	movx	@dptr,a
                                    647 ;	main.c:29: serial_init();
      0000D2 C0 07            [24]  648 	push	ar7
      0000D4 12 06 B7         [24]  649 	lcall	_serial_init
                                    650 ;	main.c:30: lcd_init();
      0000D7 12 03 CE         [24]  651 	lcall	_lcd_init
                                    652 ;	main.c:32: puts("Press 1 to create custom character. Enter 0/1 for input of every column for each row. \r");
      0000DA 90 14 4A         [24]  653 	mov	dptr,#___str_0
      0000DD 75 F0 80         [24]  654 	mov	b,#0x80
      0000E0 12 09 50         [24]  655 	lcall	_puts
                                    656 ;	main.c:33: puts("Press 2 to print created logo \r");
      0000E3 90 14 A2         [24]  657 	mov	dptr,#___str_1
      0000E6 75 F0 80         [24]  658 	mov	b,#0x80
      0000E9 12 09 50         [24]  659 	lcall	_puts
                                    660 ;	main.c:34: puts("Press 3 for hexdump of CGRAM\r");
      0000EC 90 14 C2         [24]  661 	mov	dptr,#___str_2
      0000EF 75 F0 80         [24]  662 	mov	b,#0x80
      0000F2 12 09 50         [24]  663 	lcall	_puts
                                    664 ;	main.c:35: puts("Press ? user menu\r");
      0000F5 90 14 E0         [24]  665 	mov	dptr,#___str_3
      0000F8 75 F0 80         [24]  666 	mov	b,#0x80
      0000FB 12 09 50         [24]  667 	lcall	_puts
      0000FE D0 07            [24]  668 	pop	ar7
                                    669 ;	main.c:38: while(1)
      000100                        670 00120$:
                                    671 ;	main.c:40: puts("\n\r<<Enter command for operation>>\n\r");
      000100 90 14 F3         [24]  672 	mov	dptr,#___str_4
      000103 75 F0 80         [24]  673 	mov	b,#0x80
      000106 C0 07            [24]  674 	push	ar7
      000108 12 09 50         [24]  675 	lcall	_puts
                                    676 ;	main.c:41: getstr(character);
      00010B 90 00 01         [24]  677 	mov	dptr,#_main_character_65536_104
      00010E 75 F0 00         [24]  678 	mov	b,#0x00
      000111 12 07 78         [24]  679 	lcall	_getstr
      000114 D0 07            [24]  680 	pop	ar7
                                    681 ;	main.c:42: if (character[0]=='1')
      000116 90 00 01         [24]  682 	mov	dptr,#_main_character_65536_104
      000119 E0               [24]  683 	movx	a,@dptr
      00011A FE               [12]  684 	mov	r6,a
      00011B BE 31 02         [24]  685 	cjne	r6,#0x31,00215$
      00011E 80 03            [24]  686 	sjmp	00216$
      000120                        687 00215$:
      000120 02 02 44         [24]  688 	ljmp	00117$
      000123                        689 00216$:
                                    690 ;	main.c:44: lcdclear();
      000123 C0 07            [24]  691 	push	ar7
      000125 12 06 59         [24]  692 	lcall	_lcdclear
      000128 D0 07            [24]  693 	pop	ar7
                                    694 ;	main.c:45: for(uint8_t i = 0; i < 8; i++)
      00012A 7D 00            [12]  695 	mov	r5,#0x00
      00012C                        696 00126$:
      00012C BD 08 00         [24]  697 	cjne	r5,#0x08,00217$
      00012F                        698 00217$:
      00012F 40 03            [24]  699 	jc	00218$
      000131 02 02 2A         [24]  700 	ljmp	00102$
      000134                        701 00218$:
                                    702 ;	main.c:47: printf("row number %d \n\r", i);
      000134 8D 03            [24]  703 	mov	ar3,r5
      000136 7C 00            [12]  704 	mov	r4,#0x00
      000138 C0 07            [24]  705 	push	ar7
      00013A C0 05            [24]  706 	push	ar5
      00013C C0 03            [24]  707 	push	ar3
      00013E C0 04            [24]  708 	push	ar4
      000140 74 17            [12]  709 	mov	a,#___str_5
      000142 C0 E0            [24]  710 	push	acc
      000144 74 15            [12]  711 	mov	a,#(___str_5 >> 8)
      000146 C0 E0            [24]  712 	push	acc
      000148 74 80            [12]  713 	mov	a,#0x80
      00014A C0 E0            [24]  714 	push	acc
      00014C 12 09 FE         [24]  715 	lcall	_printf
      00014F E5 81            [12]  716 	mov	a,sp
      000151 24 FB            [12]  717 	add	a,#0xfb
      000153 F5 81            [12]  718 	mov	sp,a
      000155 D0 05            [24]  719 	pop	ar5
      000157 D0 07            [24]  720 	pop	ar7
                                    721 ;	main.c:48: for (uint8_t j = 0; j < 5; j++)
      000159 7C 00            [12]  722 	mov	r4,#0x00
      00015B                        723 00123$:
      00015B BC 05 00         [24]  724 	cjne	r4,#0x05,00219$
      00015E                        725 00219$:
      00015E 40 03            [24]  726 	jc	00220$
      000160 02 01 ED         [24]  727 	ljmp	00101$
      000163                        728 00220$:
                                    729 ;	main.c:50: printf("%d enter character \n\r", j);
      000163 8C 02            [24]  730 	mov	ar2,r4
      000165 7B 00            [12]  731 	mov	r3,#0x00
      000167 C0 07            [24]  732 	push	ar7
      000169 C0 05            [24]  733 	push	ar5
      00016B C0 04            [24]  734 	push	ar4
      00016D C0 02            [24]  735 	push	ar2
      00016F C0 03            [24]  736 	push	ar3
      000171 74 28            [12]  737 	mov	a,#___str_6
      000173 C0 E0            [24]  738 	push	acc
      000175 74 15            [12]  739 	mov	a,#(___str_6 >> 8)
      000177 C0 E0            [24]  740 	push	acc
      000179 74 80            [12]  741 	mov	a,#0x80
      00017B C0 E0            [24]  742 	push	acc
      00017D 12 09 FE         [24]  743 	lcall	_printf
      000180 E5 81            [12]  744 	mov	a,sp
      000182 24 FB            [12]  745 	add	a,#0xfb
      000184 F5 81            [12]  746 	mov	sp,a
                                    747 ;	main.c:51: getstr(get_input);
      000186 90 00 06         [24]  748 	mov	dptr,#_main_get_input_65536_104
      000189 75 F0 00         [24]  749 	mov	b,#0x00
      00018C 12 07 78         [24]  750 	lcall	_getstr
                                    751 ;	main.c:52: get_num = atoi(get_input);
      00018F 90 00 06         [24]  752 	mov	dptr,#_main_get_input_65536_104
      000192 75 F0 00         [24]  753 	mov	b,#0x00
      000195 12 07 F1         [24]  754 	lcall	_atoi
      000198 AA 82            [24]  755 	mov	r2,dpl
      00019A D0 04            [24]  756 	pop	ar4
      00019C D0 05            [24]  757 	pop	ar5
      00019E D0 07            [24]  758 	pop	ar7
                                    759 ;	main.c:53: value= (get_num << j);
      0001A0 8C F0            [24]  760 	mov	b,r4
      0001A2 05 F0            [12]  761 	inc	b
      0001A4 EA               [12]  762 	mov	a,r2
      0001A5 80 02            [24]  763 	sjmp	00223$
      0001A7                        764 00221$:
      0001A7 25 E0            [12]  765 	add	a,acc
      0001A9                        766 00223$:
      0001A9 D5 F0 FB         [24]  767 	djnz	b,00221$
                                    768 ;	main.c:54: total_value = total_value + value;
      0001AC 2F               [12]  769 	add	a,r7
      0001AD FF               [12]  770 	mov	r7,a
                                    771 ;	main.c:55: putchar('\t');
      0001AE 90 00 09         [24]  772 	mov	dptr,#0x0009
      0001B1 C0 07            [24]  773 	push	ar7
      0001B3 C0 05            [24]  774 	push	ar5
      0001B5 C0 04            [24]  775 	push	ar4
      0001B7 12 06 C5         [24]  776 	lcall	_putchar
      0001BA D0 04            [24]  777 	pop	ar4
      0001BC D0 05            [24]  778 	pop	ar5
      0001BE D0 07            [24]  779 	pop	ar7
                                    780 ;	main.c:56: printf("total value: %d \n\r", total_value);
      0001C0 8F 02            [24]  781 	mov	ar2,r7
      0001C2 7B 00            [12]  782 	mov	r3,#0x00
      0001C4 C0 07            [24]  783 	push	ar7
      0001C6 C0 05            [24]  784 	push	ar5
      0001C8 C0 04            [24]  785 	push	ar4
      0001CA C0 02            [24]  786 	push	ar2
      0001CC C0 03            [24]  787 	push	ar3
      0001CE 74 3E            [12]  788 	mov	a,#___str_7
      0001D0 C0 E0            [24]  789 	push	acc
      0001D2 74 15            [12]  790 	mov	a,#(___str_7 >> 8)
      0001D4 C0 E0            [24]  791 	push	acc
      0001D6 74 80            [12]  792 	mov	a,#0x80
      0001D8 C0 E0            [24]  793 	push	acc
      0001DA 12 09 FE         [24]  794 	lcall	_printf
      0001DD E5 81            [12]  795 	mov	a,sp
      0001DF 24 FB            [12]  796 	add	a,#0xfb
      0001E1 F5 81            [12]  797 	mov	sp,a
      0001E3 D0 04            [24]  798 	pop	ar4
      0001E5 D0 05            [24]  799 	pop	ar5
      0001E7 D0 07            [24]  800 	pop	ar7
                                    801 ;	main.c:48: for (uint8_t j = 0; j < 5; j++)
      0001E9 0C               [12]  802 	inc	r4
      0001EA 02 01 5B         [24]  803 	ljmp	00123$
      0001ED                        804 00101$:
                                    805 ;	main.c:58: user_array[i]=total_value;
      0001ED ED               [12]  806 	mov	a,r5
      0001EE 24 08            [12]  807 	add	a,#_main_user_array_65536_104
      0001F0 FB               [12]  808 	mov	r3,a
      0001F1 E4               [12]  809 	clr	a
      0001F2 34 00            [12]  810 	addc	a,#(_main_user_array_65536_104 >> 8)
      0001F4 FC               [12]  811 	mov	r4,a
      0001F5 8B 82            [24]  812 	mov	dpl,r3
      0001F7 8C 83            [24]  813 	mov	dph,r4
      0001F9 EF               [12]  814 	mov	a,r7
      0001FA F0               [24]  815 	movx	@dptr,a
                                    816 ;	main.c:59: total_value=0;
      0001FB 7F 00            [12]  817 	mov	r7,#0x00
                                    818 ;	main.c:60: printf("user array: %d \n\r", user_array[i]);
      0001FD 8B 82            [24]  819 	mov	dpl,r3
      0001FF 8C 83            [24]  820 	mov	dph,r4
      000201 E0               [24]  821 	movx	a,@dptr
      000202 FB               [12]  822 	mov	r3,a
      000203 7C 00            [12]  823 	mov	r4,#0x00
      000205 C0 07            [24]  824 	push	ar7
      000207 C0 05            [24]  825 	push	ar5
      000209 C0 03            [24]  826 	push	ar3
      00020B C0 04            [24]  827 	push	ar4
      00020D 74 51            [12]  828 	mov	a,#___str_8
      00020F C0 E0            [24]  829 	push	acc
      000211 74 15            [12]  830 	mov	a,#(___str_8 >> 8)
      000213 C0 E0            [24]  831 	push	acc
      000215 74 80            [12]  832 	mov	a,#0x80
      000217 C0 E0            [24]  833 	push	acc
      000219 12 09 FE         [24]  834 	lcall	_printf
      00021C E5 81            [12]  835 	mov	a,sp
      00021E 24 FB            [12]  836 	add	a,#0xfb
      000220 F5 81            [12]  837 	mov	sp,a
      000222 D0 05            [24]  838 	pop	ar5
      000224 D0 07            [24]  839 	pop	ar7
                                    840 ;	main.c:45: for(uint8_t i = 0; i < 8; i++)
      000226 0D               [12]  841 	inc	r5
      000227 02 01 2C         [24]  842 	ljmp	00126$
      00022A                        843 00102$:
                                    844 ;	main.c:63: LCD_build_main(0, user_array);
      00022A 90 00 29         [24]  845 	mov	dptr,#_LCD_build_main_PARM_2
      00022D 74 08            [12]  846 	mov	a,#_main_user_array_65536_104
      00022F F0               [24]  847 	movx	@dptr,a
      000230 74 00            [12]  848 	mov	a,#(_main_user_array_65536_104 >> 8)
      000232 A3               [24]  849 	inc	dptr
      000233 F0               [24]  850 	movx	@dptr,a
      000234 E4               [12]  851 	clr	a
      000235 A3               [24]  852 	inc	dptr
      000236 F0               [24]  853 	movx	@dptr,a
      000237 75 82 00         [24]  854 	mov	dpl,#0x00
      00023A C0 07            [24]  855 	push	ar7
      00023C 12 05 7C         [24]  856 	lcall	_LCD_build_main
      00023F D0 07            [24]  857 	pop	ar7
      000241 02 01 00         [24]  858 	ljmp	00120$
      000244                        859 00117$:
                                    860 ;	main.c:67: else if (character[0]=='2')
      000244 BE 32 02         [24]  861 	cjne	r6,#0x32,00224$
      000247 80 03            [24]  862 	sjmp	00225$
      000249                        863 00224$:
      000249 02 03 00         [24]  864 	ljmp	00114$
      00024C                        865 00225$:
                                    866 ;	main.c:69: LCD_build(0, pattern);
      00024C 90 00 2D         [24]  867 	mov	dptr,#_LCD_build_PARM_2
      00024F 74 10            [12]  868 	mov	a,#_main_pattern_65536_104
      000251 F0               [24]  869 	movx	@dptr,a
      000252 74 00            [12]  870 	mov	a,#(_main_pattern_65536_104 >> 8)
      000254 A3               [24]  871 	inc	dptr
      000255 F0               [24]  872 	movx	@dptr,a
      000256 E4               [12]  873 	clr	a
      000257 A3               [24]  874 	inc	dptr
      000258 F0               [24]  875 	movx	@dptr,a
      000259 75 82 00         [24]  876 	mov	dpl,#0x00
      00025C C0 07            [24]  877 	push	ar7
      00025E 12 05 F0         [24]  878 	lcall	_LCD_build
      000261 D0 07            [24]  879 	pop	ar7
                                    880 ;	main.c:71: for (uint8_t i=0; i<16; i++)
      000263 7D 00            [12]  881 	mov	r5,#0x00
      000265                        882 00129$:
      000265 BD 10 00         [24]  883 	cjne	r5,#0x10,00226$
      000268                        884 00226$:
      000268 50 16            [24]  885 	jnc	00103$
                                    886 ;	main.c:73: lcdgotoaddress(0+i);
      00026A 8D 82            [24]  887 	mov	dpl,r5
      00026C C0 07            [24]  888 	push	ar7
      00026E C0 05            [24]  889 	push	ar5
      000270 12 06 71         [24]  890 	lcall	_lcdgotoaddress
                                    891 ;	main.c:74: lcdputch(0x00);
      000273 75 82 00         [24]  892 	mov	dpl,#0x00
      000276 12 06 89         [24]  893 	lcall	_lcdputch
      000279 D0 05            [24]  894 	pop	ar5
      00027B D0 07            [24]  895 	pop	ar7
                                    896 ;	main.c:71: for (uint8_t i=0; i<16; i++)
      00027D 0D               [12]  897 	inc	r5
      00027E 80 E5            [24]  898 	sjmp	00129$
      000280                        899 00103$:
                                    900 ;	main.c:77: for (uint8_t i=0; i<16; i++)
      000280 7D 00            [12]  901 	mov	r5,#0x00
      000282                        902 00132$:
      000282 BD 10 00         [24]  903 	cjne	r5,#0x10,00228$
      000285                        904 00228$:
      000285 50 1B            [24]  905 	jnc	00104$
                                    906 ;	main.c:79: lcdgotoaddress(16 + i);
      000287 8D 04            [24]  907 	mov	ar4,r5
      000289 74 10            [12]  908 	mov	a,#0x10
      00028B 2C               [12]  909 	add	a,r4
      00028C F5 82            [12]  910 	mov	dpl,a
      00028E C0 07            [24]  911 	push	ar7
      000290 C0 05            [24]  912 	push	ar5
      000292 12 06 71         [24]  913 	lcall	_lcdgotoaddress
                                    914 ;	main.c:80: lcdputch(0x00);
      000295 75 82 00         [24]  915 	mov	dpl,#0x00
      000298 12 06 89         [24]  916 	lcall	_lcdputch
      00029B D0 05            [24]  917 	pop	ar5
      00029D D0 07            [24]  918 	pop	ar7
                                    919 ;	main.c:77: for (uint8_t i=0; i<16; i++)
      00029F 0D               [12]  920 	inc	r5
      0002A0 80 E0            [24]  921 	sjmp	00132$
      0002A2                        922 00104$:
                                    923 ;	main.c:83: LCD_build(1, pattern2);
      0002A2 90 00 2D         [24]  924 	mov	dptr,#_LCD_build_PARM_2
      0002A5 74 18            [12]  925 	mov	a,#_main_pattern2_65536_104
      0002A7 F0               [24]  926 	movx	@dptr,a
      0002A8 74 00            [12]  927 	mov	a,#(_main_pattern2_65536_104 >> 8)
      0002AA A3               [24]  928 	inc	dptr
      0002AB F0               [24]  929 	movx	@dptr,a
      0002AC E4               [12]  930 	clr	a
      0002AD A3               [24]  931 	inc	dptr
      0002AE F0               [24]  932 	movx	@dptr,a
      0002AF 75 82 01         [24]  933 	mov	dpl,#0x01
      0002B2 C0 07            [24]  934 	push	ar7
      0002B4 12 05 F0         [24]  935 	lcall	_LCD_build
      0002B7 D0 07            [24]  936 	pop	ar7
                                    937 ;	main.c:85: for (uint8_t i=0; i<8; i++)
      0002B9 7D 00            [12]  938 	mov	r5,#0x00
      0002BB                        939 00135$:
      0002BB BD 08 00         [24]  940 	cjne	r5,#0x08,00230$
      0002BE                        941 00230$:
      0002BE 50 1B            [24]  942 	jnc	00105$
                                    943 ;	main.c:87: lcdgotoaddress(68+i);
      0002C0 8D 04            [24]  944 	mov	ar4,r5
      0002C2 74 44            [12]  945 	mov	a,#0x44
      0002C4 2C               [12]  946 	add	a,r4
      0002C5 F5 82            [12]  947 	mov	dpl,a
      0002C7 C0 07            [24]  948 	push	ar7
      0002C9 C0 05            [24]  949 	push	ar5
      0002CB 12 06 71         [24]  950 	lcall	_lcdgotoaddress
                                    951 ;	main.c:88: lcdputch(0x01);
      0002CE 75 82 01         [24]  952 	mov	dpl,#0x01
      0002D1 12 06 89         [24]  953 	lcall	_lcdputch
      0002D4 D0 05            [24]  954 	pop	ar5
      0002D6 D0 07            [24]  955 	pop	ar7
                                    956 ;	main.c:85: for (uint8_t i=0; i<8; i++)
      0002D8 0D               [12]  957 	inc	r5
      0002D9 80 E0            [24]  958 	sjmp	00135$
      0002DB                        959 00105$:
                                    960 ;	main.c:91: for (uint8_t i=0; i<8; i++)
      0002DB 7D 00            [12]  961 	mov	r5,#0x00
      0002DD                        962 00138$:
      0002DD BD 08 00         [24]  963 	cjne	r5,#0x08,00232$
      0002E0                        964 00232$:
      0002E0 40 03            [24]  965 	jc	00233$
      0002E2 02 01 00         [24]  966 	ljmp	00120$
      0002E5                        967 00233$:
                                    968 ;	main.c:93: lcdgotoaddress(84 + i);
      0002E5 8D 04            [24]  969 	mov	ar4,r5
      0002E7 74 54            [12]  970 	mov	a,#0x54
      0002E9 2C               [12]  971 	add	a,r4
      0002EA F5 82            [12]  972 	mov	dpl,a
      0002EC C0 07            [24]  973 	push	ar7
      0002EE C0 05            [24]  974 	push	ar5
      0002F0 12 06 71         [24]  975 	lcall	_lcdgotoaddress
                                    976 ;	main.c:94: lcdputch(0x01);
      0002F3 75 82 01         [24]  977 	mov	dpl,#0x01
      0002F6 12 06 89         [24]  978 	lcall	_lcdputch
      0002F9 D0 05            [24]  979 	pop	ar5
      0002FB D0 07            [24]  980 	pop	ar7
                                    981 ;	main.c:91: for (uint8_t i=0; i<8; i++)
      0002FD 0D               [12]  982 	inc	r5
      0002FE 80 DD            [24]  983 	sjmp	00138$
      000300                        984 00114$:
                                    985 ;	main.c:99: else if (character[0]=='3')
      000300 BE 33 0A         [24]  986 	cjne	r6,#0x33,00111$
                                    987 ;	main.c:101: hexdump_cgram();
      000303 C0 07            [24]  988 	push	ar7
      000305 12 04 6F         [24]  989 	lcall	_hexdump_cgram
      000308 D0 07            [24]  990 	pop	ar7
      00030A 02 01 00         [24]  991 	ljmp	00120$
      00030D                        992 00111$:
                                    993 ;	main.c:104: else if (character[0]=='4')
      00030D BE 34 2B         [24]  994 	cjne	r6,#0x34,00108$
                                    995 ;	main.c:106: puts("Press 1 to create custom character. Enter 0/1 for input of every column for each row. \r");
      000310 90 14 4A         [24]  996 	mov	dptr,#___str_0
      000313 75 F0 80         [24]  997 	mov	b,#0x80
      000316 C0 07            [24]  998 	push	ar7
      000318 12 09 50         [24]  999 	lcall	_puts
                                   1000 ;	main.c:107: puts("Press 2 print created custom character \r");
      00031B 90 15 63         [24] 1001 	mov	dptr,#___str_9
      00031E 75 F0 80         [24] 1002 	mov	b,#0x80
      000321 12 09 50         [24] 1003 	lcall	_puts
                                   1004 ;	main.c:108: puts("Press 3 for hexdump of CGRAM\r");
      000324 90 14 C2         [24] 1005 	mov	dptr,#___str_2
      000327 75 F0 80         [24] 1006 	mov	b,#0x80
      00032A 12 09 50         [24] 1007 	lcall	_puts
                                   1008 ;	main.c:109: puts("Press ? user menu\r");
      00032D 90 14 E0         [24] 1009 	mov	dptr,#___str_3
      000330 75 F0 80         [24] 1010 	mov	b,#0x80
      000333 12 09 50         [24] 1011 	lcall	_puts
      000336 D0 07            [24] 1012 	pop	ar7
      000338 02 01 00         [24] 1013 	ljmp	00120$
      00033B                       1014 00108$:
                                   1015 ;	main.c:114: puts("Enter a valid command or press '?' for user menu \n\r");
      00033B 90 15 8C         [24] 1016 	mov	dptr,#___str_10
      00033E 75 F0 80         [24] 1017 	mov	b,#0x80
      000341 C0 07            [24] 1018 	push	ar7
      000343 12 09 50         [24] 1019 	lcall	_puts
      000346 D0 07            [24] 1020 	pop	ar7
                                   1021 ;	main.c:117: }
      000348 02 01 00         [24] 1022 	ljmp	00120$
                                   1023 	.area CSEG    (CODE)
                                   1024 	.area CONST   (CODE)
                                   1025 	.area CONST   (CODE)
      00144A                       1026 ___str_0:
      00144A 50 72 65 73 73 20 31  1027 	.ascii "Press 1 to create custom character. Enter 0/1 for input of e"
             20 74 6F 20 63 72 65
             61 74 65 20 63 75 73
             74 6F 6D 20 63 68 61
             72 61 63 74 65 72 2E
             20 45 6E 74 65 72 20
             30 2F 31 20 66 6F 72
             20 69 6E 70 75 74 20
             6F 66 20 65
      001486 76 65 72 79 20 63 6F  1028 	.ascii "very column for each row. "
             6C 75 6D 6E 20 66 6F
             72 20 65 61 63 68 20
             72 6F 77 2E 20
      0014A0 0D                    1029 	.db 0x0d
      0014A1 00                    1030 	.db 0x00
                                   1031 	.area CSEG    (CODE)
                                   1032 	.area CONST   (CODE)
      0014A2                       1033 ___str_1:
      0014A2 50 72 65 73 73 20 32  1034 	.ascii "Press 2 to print created logo "
             20 74 6F 20 70 72 69
             6E 74 20 63 72 65 61
             74 65 64 20 6C 6F 67
             6F 20
      0014C0 0D                    1035 	.db 0x0d
      0014C1 00                    1036 	.db 0x00
                                   1037 	.area CSEG    (CODE)
                                   1038 	.area CONST   (CODE)
      0014C2                       1039 ___str_2:
      0014C2 50 72 65 73 73 20 33  1040 	.ascii "Press 3 for hexdump of CGRAM"
             20 66 6F 72 20 68 65
             78 64 75 6D 70 20 6F
             66 20 43 47 52 41 4D
      0014DE 0D                    1041 	.db 0x0d
      0014DF 00                    1042 	.db 0x00
                                   1043 	.area CSEG    (CODE)
                                   1044 	.area CONST   (CODE)
      0014E0                       1045 ___str_3:
      0014E0 50 72 65 73 73 20 3F  1046 	.ascii "Press ? user menu"
             20 75 73 65 72 20 6D
             65 6E 75
      0014F1 0D                    1047 	.db 0x0d
      0014F2 00                    1048 	.db 0x00
                                   1049 	.area CSEG    (CODE)
                                   1050 	.area CONST   (CODE)
      0014F3                       1051 ___str_4:
      0014F3 0A                    1052 	.db 0x0a
      0014F4 0D                    1053 	.db 0x0d
      0014F5 3C 3C 45 6E 74 65 72  1054 	.ascii "<<Enter command for operation>>"
             20 63 6F 6D 6D 61 6E
             64 20 66 6F 72 20 6F
             70 65 72 61 74 69 6F
             6E 3E 3E
      001514 0A                    1055 	.db 0x0a
      001515 0D                    1056 	.db 0x0d
      001516 00                    1057 	.db 0x00
                                   1058 	.area CSEG    (CODE)
                                   1059 	.area CONST   (CODE)
      001517                       1060 ___str_5:
      001517 72 6F 77 20 6E 75 6D  1061 	.ascii "row number %d "
             62 65 72 20 25 64 20
      001525 0A                    1062 	.db 0x0a
      001526 0D                    1063 	.db 0x0d
      001527 00                    1064 	.db 0x00
                                   1065 	.area CSEG    (CODE)
                                   1066 	.area CONST   (CODE)
      001528                       1067 ___str_6:
      001528 25 64 20 65 6E 74 65  1068 	.ascii "%d enter character "
             72 20 63 68 61 72 61
             63 74 65 72 20
      00153B 0A                    1069 	.db 0x0a
      00153C 0D                    1070 	.db 0x0d
      00153D 00                    1071 	.db 0x00
                                   1072 	.area CSEG    (CODE)
                                   1073 	.area CONST   (CODE)
      00153E                       1074 ___str_7:
      00153E 74 6F 74 61 6C 20 76  1075 	.ascii "total value: %d "
             61 6C 75 65 3A 20 25
             64 20
      00154E 0A                    1076 	.db 0x0a
      00154F 0D                    1077 	.db 0x0d
      001550 00                    1078 	.db 0x00
                                   1079 	.area CSEG    (CODE)
                                   1080 	.area CONST   (CODE)
      001551                       1081 ___str_8:
      001551 75 73 65 72 20 61 72  1082 	.ascii "user array: %d "
             72 61 79 3A 20 25 64
             20
      001560 0A                    1083 	.db 0x0a
      001561 0D                    1084 	.db 0x0d
      001562 00                    1085 	.db 0x00
                                   1086 	.area CSEG    (CODE)
                                   1087 	.area CONST   (CODE)
      001563                       1088 ___str_9:
      001563 50 72 65 73 73 20 32  1089 	.ascii "Press 2 print created custom character "
             20 70 72 69 6E 74 20
             63 72 65 61 74 65 64
             20 63 75 73 74 6F 6D
             20 63 68 61 72 61 63
             74 65 72 20
      00158A 0D                    1090 	.db 0x0d
      00158B 00                    1091 	.db 0x00
                                   1092 	.area CSEG    (CODE)
                                   1093 	.area CONST   (CODE)
      00158C                       1094 ___str_10:
      00158C 45 6E 74 65 72 20 61  1095 	.ascii "Enter a valid command or press '?' for user menu "
             20 76 61 6C 69 64 20
             63 6F 6D 6D 61 6E 64
             20 6F 72 20 70 72 65
             73 73 20 27 3F 27 20
             66 6F 72 20 75 73 65
             72 20 6D 65 6E 75 20
      0015BD 0A                    1096 	.db 0x0a
      0015BE 0D                    1097 	.db 0x0d
      0015BF 00                    1098 	.db 0x00
                                   1099 	.area CSEG    (CODE)
                                   1100 	.area XINIT   (CODE)
                                   1101 	.area CABS    (ABS,CODE)
