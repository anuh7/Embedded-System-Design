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
                                     12 	.globl _reset_eeprom
                                     13 	.globl _hexdump
                                     14 	.globl _Read_Byte_From_EEPROM
                                     15 	.globl _Write_Byte_To_EEPROM
                                     16 	.globl _InitI2C
                                     17 	.globl _serial_init
                                     18 	.globl _getstr
                                     19 	.globl _checkAddress
                                     20 	.globl _strtol
                                     21 	.globl _puts
                                     22 	.globl _printf
                                     23 	.globl _TF1
                                     24 	.globl _TR1
                                     25 	.globl _TF0
                                     26 	.globl _TR0
                                     27 	.globl _IE1
                                     28 	.globl _IT1
                                     29 	.globl _IE0
                                     30 	.globl _IT0
                                     31 	.globl _SM0
                                     32 	.globl _SM1
                                     33 	.globl _SM2
                                     34 	.globl _REN
                                     35 	.globl _TB8
                                     36 	.globl _RB8
                                     37 	.globl _TI
                                     38 	.globl _RI
                                     39 	.globl _CY
                                     40 	.globl _AC
                                     41 	.globl _F0
                                     42 	.globl _RS1
                                     43 	.globl _RS0
                                     44 	.globl _OV
                                     45 	.globl _F1
                                     46 	.globl _P
                                     47 	.globl _RD
                                     48 	.globl _WR
                                     49 	.globl _T1
                                     50 	.globl _T0
                                     51 	.globl _INT1
                                     52 	.globl _INT0
                                     53 	.globl _TXD0
                                     54 	.globl _TXD
                                     55 	.globl _RXD0
                                     56 	.globl _RXD
                                     57 	.globl _P3_7
                                     58 	.globl _P3_6
                                     59 	.globl _P3_5
                                     60 	.globl _P3_4
                                     61 	.globl _P3_3
                                     62 	.globl _P3_2
                                     63 	.globl _P3_1
                                     64 	.globl _P3_0
                                     65 	.globl _P2_7
                                     66 	.globl _P2_6
                                     67 	.globl _P2_5
                                     68 	.globl _P2_4
                                     69 	.globl _P2_3
                                     70 	.globl _P2_2
                                     71 	.globl _P2_1
                                     72 	.globl _P2_0
                                     73 	.globl _P1_7
                                     74 	.globl _P1_6
                                     75 	.globl _P1_5
                                     76 	.globl _P1_4
                                     77 	.globl _P1_3
                                     78 	.globl _P1_2
                                     79 	.globl _P1_1
                                     80 	.globl _P1_0
                                     81 	.globl _P0_7
                                     82 	.globl _P0_6
                                     83 	.globl _P0_5
                                     84 	.globl _P0_4
                                     85 	.globl _P0_3
                                     86 	.globl _P0_2
                                     87 	.globl _P0_1
                                     88 	.globl _P0_0
                                     89 	.globl _PS
                                     90 	.globl _PT1
                                     91 	.globl _PX1
                                     92 	.globl _PT0
                                     93 	.globl _PX0
                                     94 	.globl _EA
                                     95 	.globl _ES
                                     96 	.globl _ET1
                                     97 	.globl _EX1
                                     98 	.globl _ET0
                                     99 	.globl _EX0
                                    100 	.globl _BREG_F7
                                    101 	.globl _BREG_F6
                                    102 	.globl _BREG_F5
                                    103 	.globl _BREG_F4
                                    104 	.globl _BREG_F3
                                    105 	.globl _BREG_F2
                                    106 	.globl _BREG_F1
                                    107 	.globl _BREG_F0
                                    108 	.globl _P5_7
                                    109 	.globl _P5_6
                                    110 	.globl _P5_5
                                    111 	.globl _P5_4
                                    112 	.globl _P5_3
                                    113 	.globl _P5_2
                                    114 	.globl _P5_1
                                    115 	.globl _P5_0
                                    116 	.globl _P4_7
                                    117 	.globl _P4_6
                                    118 	.globl _P4_5
                                    119 	.globl _P4_4
                                    120 	.globl _P4_3
                                    121 	.globl _P4_2
                                    122 	.globl _P4_1
                                    123 	.globl _P4_0
                                    124 	.globl _PX0L
                                    125 	.globl _PT0L
                                    126 	.globl _PX1L
                                    127 	.globl _PT1L
                                    128 	.globl _PSL
                                    129 	.globl _PT2L
                                    130 	.globl _PPCL
                                    131 	.globl _EC
                                    132 	.globl _CCF0
                                    133 	.globl _CCF1
                                    134 	.globl _CCF2
                                    135 	.globl _CCF3
                                    136 	.globl _CCF4
                                    137 	.globl _CR
                                    138 	.globl _CF
                                    139 	.globl _TF2
                                    140 	.globl _EXF2
                                    141 	.globl _RCLK
                                    142 	.globl _TCLK
                                    143 	.globl _EXEN2
                                    144 	.globl _TR2
                                    145 	.globl _C_T2
                                    146 	.globl _CP_RL2
                                    147 	.globl _T2CON_7
                                    148 	.globl _T2CON_6
                                    149 	.globl _T2CON_5
                                    150 	.globl _T2CON_4
                                    151 	.globl _T2CON_3
                                    152 	.globl _T2CON_2
                                    153 	.globl _T2CON_1
                                    154 	.globl _T2CON_0
                                    155 	.globl _PT2
                                    156 	.globl _ET2
                                    157 	.globl _TMOD
                                    158 	.globl _TL1
                                    159 	.globl _TL0
                                    160 	.globl _TH1
                                    161 	.globl _TH0
                                    162 	.globl _TCON
                                    163 	.globl _SP
                                    164 	.globl _SCON
                                    165 	.globl _SBUF0
                                    166 	.globl _SBUF
                                    167 	.globl _PSW
                                    168 	.globl _PCON
                                    169 	.globl _P3
                                    170 	.globl _P2
                                    171 	.globl _P1
                                    172 	.globl _P0
                                    173 	.globl _IP
                                    174 	.globl _IE
                                    175 	.globl _DP0L
                                    176 	.globl _DPL
                                    177 	.globl _DP0H
                                    178 	.globl _DPH
                                    179 	.globl _B
                                    180 	.globl _ACC
                                    181 	.globl _EECON
                                    182 	.globl _KBF
                                    183 	.globl _KBE
                                    184 	.globl _KBLS
                                    185 	.globl _BRL
                                    186 	.globl _BDRCON
                                    187 	.globl _T2MOD
                                    188 	.globl _SPDAT
                                    189 	.globl _SPSTA
                                    190 	.globl _SPCON
                                    191 	.globl _SADEN
                                    192 	.globl _SADDR
                                    193 	.globl _WDTPRG
                                    194 	.globl _WDTRST
                                    195 	.globl _P5
                                    196 	.globl _P4
                                    197 	.globl _IPH1
                                    198 	.globl _IPL1
                                    199 	.globl _IPH0
                                    200 	.globl _IPL0
                                    201 	.globl _IEN1
                                    202 	.globl _IEN0
                                    203 	.globl _CMOD
                                    204 	.globl _CL
                                    205 	.globl _CH
                                    206 	.globl _CCON
                                    207 	.globl _CCAPM4
                                    208 	.globl _CCAPM3
                                    209 	.globl _CCAPM2
                                    210 	.globl _CCAPM1
                                    211 	.globl _CCAPM0
                                    212 	.globl _CCAP4L
                                    213 	.globl _CCAP3L
                                    214 	.globl _CCAP2L
                                    215 	.globl _CCAP1L
                                    216 	.globl _CCAP0L
                                    217 	.globl _CCAP4H
                                    218 	.globl _CCAP3H
                                    219 	.globl _CCAP2H
                                    220 	.globl _CCAP1H
                                    221 	.globl _CCAP0H
                                    222 	.globl _CKCON1
                                    223 	.globl _CKCON0
                                    224 	.globl _CKRL
                                    225 	.globl _AUXR1
                                    226 	.globl _AUXR
                                    227 	.globl _TH2
                                    228 	.globl _TL2
                                    229 	.globl _RCAP2H
                                    230 	.globl _RCAP2L
                                    231 	.globl _T2CON
                                    232 ;--------------------------------------------------------
                                    233 ; special function registers
                                    234 ;--------------------------------------------------------
                                    235 	.area RSEG    (ABS,DATA)
      000000                        236 	.org 0x0000
                           0000C8   237 _T2CON	=	0x00c8
                           0000CA   238 _RCAP2L	=	0x00ca
                           0000CB   239 _RCAP2H	=	0x00cb
                           0000CC   240 _TL2	=	0x00cc
                           0000CD   241 _TH2	=	0x00cd
                           00008E   242 _AUXR	=	0x008e
                           0000A2   243 _AUXR1	=	0x00a2
                           000097   244 _CKRL	=	0x0097
                           00008F   245 _CKCON0	=	0x008f
                           0000AF   246 _CKCON1	=	0x00af
                           0000FA   247 _CCAP0H	=	0x00fa
                           0000FB   248 _CCAP1H	=	0x00fb
                           0000FC   249 _CCAP2H	=	0x00fc
                           0000FD   250 _CCAP3H	=	0x00fd
                           0000FE   251 _CCAP4H	=	0x00fe
                           0000EA   252 _CCAP0L	=	0x00ea
                           0000EB   253 _CCAP1L	=	0x00eb
                           0000EC   254 _CCAP2L	=	0x00ec
                           0000ED   255 _CCAP3L	=	0x00ed
                           0000EE   256 _CCAP4L	=	0x00ee
                           0000DA   257 _CCAPM0	=	0x00da
                           0000DB   258 _CCAPM1	=	0x00db
                           0000DC   259 _CCAPM2	=	0x00dc
                           0000DD   260 _CCAPM3	=	0x00dd
                           0000DE   261 _CCAPM4	=	0x00de
                           0000D8   262 _CCON	=	0x00d8
                           0000F9   263 _CH	=	0x00f9
                           0000E9   264 _CL	=	0x00e9
                           0000D9   265 _CMOD	=	0x00d9
                           0000A8   266 _IEN0	=	0x00a8
                           0000B1   267 _IEN1	=	0x00b1
                           0000B8   268 _IPL0	=	0x00b8
                           0000B7   269 _IPH0	=	0x00b7
                           0000B2   270 _IPL1	=	0x00b2
                           0000B3   271 _IPH1	=	0x00b3
                           0000C0   272 _P4	=	0x00c0
                           0000E8   273 _P5	=	0x00e8
                           0000A6   274 _WDTRST	=	0x00a6
                           0000A7   275 _WDTPRG	=	0x00a7
                           0000A9   276 _SADDR	=	0x00a9
                           0000B9   277 _SADEN	=	0x00b9
                           0000C3   278 _SPCON	=	0x00c3
                           0000C4   279 _SPSTA	=	0x00c4
                           0000C5   280 _SPDAT	=	0x00c5
                           0000C9   281 _T2MOD	=	0x00c9
                           00009B   282 _BDRCON	=	0x009b
                           00009A   283 _BRL	=	0x009a
                           00009C   284 _KBLS	=	0x009c
                           00009D   285 _KBE	=	0x009d
                           00009E   286 _KBF	=	0x009e
                           0000D2   287 _EECON	=	0x00d2
                           0000E0   288 _ACC	=	0x00e0
                           0000F0   289 _B	=	0x00f0
                           000083   290 _DPH	=	0x0083
                           000083   291 _DP0H	=	0x0083
                           000082   292 _DPL	=	0x0082
                           000082   293 _DP0L	=	0x0082
                           0000A8   294 _IE	=	0x00a8
                           0000B8   295 _IP	=	0x00b8
                           000080   296 _P0	=	0x0080
                           000090   297 _P1	=	0x0090
                           0000A0   298 _P2	=	0x00a0
                           0000B0   299 _P3	=	0x00b0
                           000087   300 _PCON	=	0x0087
                           0000D0   301 _PSW	=	0x00d0
                           000099   302 _SBUF	=	0x0099
                           000099   303 _SBUF0	=	0x0099
                           000098   304 _SCON	=	0x0098
                           000081   305 _SP	=	0x0081
                           000088   306 _TCON	=	0x0088
                           00008C   307 _TH0	=	0x008c
                           00008D   308 _TH1	=	0x008d
                           00008A   309 _TL0	=	0x008a
                           00008B   310 _TL1	=	0x008b
                           000089   311 _TMOD	=	0x0089
                                    312 ;--------------------------------------------------------
                                    313 ; special function bits
                                    314 ;--------------------------------------------------------
                                    315 	.area RSEG    (ABS,DATA)
      000000                        316 	.org 0x0000
                           0000AD   317 _ET2	=	0x00ad
                           0000BD   318 _PT2	=	0x00bd
                           0000C8   319 _T2CON_0	=	0x00c8
                           0000C9   320 _T2CON_1	=	0x00c9
                           0000CA   321 _T2CON_2	=	0x00ca
                           0000CB   322 _T2CON_3	=	0x00cb
                           0000CC   323 _T2CON_4	=	0x00cc
                           0000CD   324 _T2CON_5	=	0x00cd
                           0000CE   325 _T2CON_6	=	0x00ce
                           0000CF   326 _T2CON_7	=	0x00cf
                           0000C8   327 _CP_RL2	=	0x00c8
                           0000C9   328 _C_T2	=	0x00c9
                           0000CA   329 _TR2	=	0x00ca
                           0000CB   330 _EXEN2	=	0x00cb
                           0000CC   331 _TCLK	=	0x00cc
                           0000CD   332 _RCLK	=	0x00cd
                           0000CE   333 _EXF2	=	0x00ce
                           0000CF   334 _TF2	=	0x00cf
                           0000DF   335 _CF	=	0x00df
                           0000DE   336 _CR	=	0x00de
                           0000DC   337 _CCF4	=	0x00dc
                           0000DB   338 _CCF3	=	0x00db
                           0000DA   339 _CCF2	=	0x00da
                           0000D9   340 _CCF1	=	0x00d9
                           0000D8   341 _CCF0	=	0x00d8
                           0000AE   342 _EC	=	0x00ae
                           0000BE   343 _PPCL	=	0x00be
                           0000BD   344 _PT2L	=	0x00bd
                           0000BC   345 _PSL	=	0x00bc
                           0000BB   346 _PT1L	=	0x00bb
                           0000BA   347 _PX1L	=	0x00ba
                           0000B9   348 _PT0L	=	0x00b9
                           0000B8   349 _PX0L	=	0x00b8
                           0000C0   350 _P4_0	=	0x00c0
                           0000C1   351 _P4_1	=	0x00c1
                           0000C2   352 _P4_2	=	0x00c2
                           0000C3   353 _P4_3	=	0x00c3
                           0000C4   354 _P4_4	=	0x00c4
                           0000C5   355 _P4_5	=	0x00c5
                           0000C6   356 _P4_6	=	0x00c6
                           0000C7   357 _P4_7	=	0x00c7
                           0000E8   358 _P5_0	=	0x00e8
                           0000E9   359 _P5_1	=	0x00e9
                           0000EA   360 _P5_2	=	0x00ea
                           0000EB   361 _P5_3	=	0x00eb
                           0000EC   362 _P5_4	=	0x00ec
                           0000ED   363 _P5_5	=	0x00ed
                           0000EE   364 _P5_6	=	0x00ee
                           0000EF   365 _P5_7	=	0x00ef
                           0000F0   366 _BREG_F0	=	0x00f0
                           0000F1   367 _BREG_F1	=	0x00f1
                           0000F2   368 _BREG_F2	=	0x00f2
                           0000F3   369 _BREG_F3	=	0x00f3
                           0000F4   370 _BREG_F4	=	0x00f4
                           0000F5   371 _BREG_F5	=	0x00f5
                           0000F6   372 _BREG_F6	=	0x00f6
                           0000F7   373 _BREG_F7	=	0x00f7
                           0000A8   374 _EX0	=	0x00a8
                           0000A9   375 _ET0	=	0x00a9
                           0000AA   376 _EX1	=	0x00aa
                           0000AB   377 _ET1	=	0x00ab
                           0000AC   378 _ES	=	0x00ac
                           0000AF   379 _EA	=	0x00af
                           0000B8   380 _PX0	=	0x00b8
                           0000B9   381 _PT0	=	0x00b9
                           0000BA   382 _PX1	=	0x00ba
                           0000BB   383 _PT1	=	0x00bb
                           0000BC   384 _PS	=	0x00bc
                           000080   385 _P0_0	=	0x0080
                           000081   386 _P0_1	=	0x0081
                           000082   387 _P0_2	=	0x0082
                           000083   388 _P0_3	=	0x0083
                           000084   389 _P0_4	=	0x0084
                           000085   390 _P0_5	=	0x0085
                           000086   391 _P0_6	=	0x0086
                           000087   392 _P0_7	=	0x0087
                           000090   393 _P1_0	=	0x0090
                           000091   394 _P1_1	=	0x0091
                           000092   395 _P1_2	=	0x0092
                           000093   396 _P1_3	=	0x0093
                           000094   397 _P1_4	=	0x0094
                           000095   398 _P1_5	=	0x0095
                           000096   399 _P1_6	=	0x0096
                           000097   400 _P1_7	=	0x0097
                           0000A0   401 _P2_0	=	0x00a0
                           0000A1   402 _P2_1	=	0x00a1
                           0000A2   403 _P2_2	=	0x00a2
                           0000A3   404 _P2_3	=	0x00a3
                           0000A4   405 _P2_4	=	0x00a4
                           0000A5   406 _P2_5	=	0x00a5
                           0000A6   407 _P2_6	=	0x00a6
                           0000A7   408 _P2_7	=	0x00a7
                           0000B0   409 _P3_0	=	0x00b0
                           0000B1   410 _P3_1	=	0x00b1
                           0000B2   411 _P3_2	=	0x00b2
                           0000B3   412 _P3_3	=	0x00b3
                           0000B4   413 _P3_4	=	0x00b4
                           0000B5   414 _P3_5	=	0x00b5
                           0000B6   415 _P3_6	=	0x00b6
                           0000B7   416 _P3_7	=	0x00b7
                           0000B0   417 _RXD	=	0x00b0
                           0000B0   418 _RXD0	=	0x00b0
                           0000B1   419 _TXD	=	0x00b1
                           0000B1   420 _TXD0	=	0x00b1
                           0000B2   421 _INT0	=	0x00b2
                           0000B3   422 _INT1	=	0x00b3
                           0000B4   423 _T0	=	0x00b4
                           0000B5   424 _T1	=	0x00b5
                           0000B6   425 _WR	=	0x00b6
                           0000B7   426 _RD	=	0x00b7
                           0000D0   427 _P	=	0x00d0
                           0000D1   428 _F1	=	0x00d1
                           0000D2   429 _OV	=	0x00d2
                           0000D3   430 _RS0	=	0x00d3
                           0000D4   431 _RS1	=	0x00d4
                           0000D5   432 _F0	=	0x00d5
                           0000D6   433 _AC	=	0x00d6
                           0000D7   434 _CY	=	0x00d7
                           000098   435 _RI	=	0x0098
                           000099   436 _TI	=	0x0099
                           00009A   437 _RB8	=	0x009a
                           00009B   438 _TB8	=	0x009b
                           00009C   439 _REN	=	0x009c
                           00009D   440 _SM2	=	0x009d
                           00009E   441 _SM1	=	0x009e
                           00009F   442 _SM0	=	0x009f
                           000088   443 _IT0	=	0x0088
                           000089   444 _IE0	=	0x0089
                           00008A   445 _IT1	=	0x008a
                           00008B   446 _IE1	=	0x008b
                           00008C   447 _TR0	=	0x008c
                           00008D   448 _TF0	=	0x008d
                           00008E   449 _TR1	=	0x008e
                           00008F   450 _TF1	=	0x008f
                                    451 ;--------------------------------------------------------
                                    452 ; overlayable register banks
                                    453 ;--------------------------------------------------------
                                    454 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        455 	.ds 8
                                    456 ;--------------------------------------------------------
                                    457 ; internal ram data
                                    458 ;--------------------------------------------------------
                                    459 	.area DSEG    (DATA)
                                    460 ;--------------------------------------------------------
                                    461 ; overlayable items in internal ram
                                    462 ;--------------------------------------------------------
                                    463 ;--------------------------------------------------------
                                    464 ; Stack segment in internal ram
                                    465 ;--------------------------------------------------------
                                    466 	.area	SSEG
      000021                        467 __start__stack:
      000021                        468 	.ds	1
                                    469 
                                    470 ;--------------------------------------------------------
                                    471 ; indirectly addressable internal ram data
                                    472 ;--------------------------------------------------------
                                    473 	.area ISEG    (DATA)
                                    474 ;--------------------------------------------------------
                                    475 ; absolute internal ram data
                                    476 ;--------------------------------------------------------
                                    477 	.area IABS    (ABS,DATA)
                                    478 	.area IABS    (ABS,DATA)
                                    479 ;--------------------------------------------------------
                                    480 ; bit data
                                    481 ;--------------------------------------------------------
                                    482 	.area BSEG    (BIT)
                                    483 ;--------------------------------------------------------
                                    484 ; paged external ram data
                                    485 ;--------------------------------------------------------
                                    486 	.area PSEG    (PAG,XDATA)
                                    487 ;--------------------------------------------------------
                                    488 ; external ram data
                                    489 ;--------------------------------------------------------
                                    490 	.area XSEG    (XDATA)
      000010                        491 _main_character_65536_62:
      000010                        492 	.ds 5
      000015                        493 _main_address_65536_62:
      000015                        494 	.ds 10
      00001F                        495 _main_address1_65536_62:
      00001F                        496 	.ds 10
      000029                        497 _main_address2_65536_62:
      000029                        498 	.ds 10
      000033                        499 _main_value_65536_62:
      000033                        500 	.ds 10
                                    501 ;--------------------------------------------------------
                                    502 ; absolute external ram data
                                    503 ;--------------------------------------------------------
                                    504 	.area XABS    (ABS,XDATA)
                                    505 ;--------------------------------------------------------
                                    506 ; external initialized ram data
                                    507 ;--------------------------------------------------------
                                    508 	.area XISEG   (XDATA)
                                    509 	.area HOME    (CODE)
                                    510 	.area GSINIT0 (CODE)
                                    511 	.area GSINIT1 (CODE)
                                    512 	.area GSINIT2 (CODE)
                                    513 	.area GSINIT3 (CODE)
                                    514 	.area GSINIT4 (CODE)
                                    515 	.area GSINIT5 (CODE)
                                    516 	.area GSINIT  (CODE)
                                    517 	.area GSFINAL (CODE)
                                    518 	.area CSEG    (CODE)
                                    519 ;--------------------------------------------------------
                                    520 ; interrupt vector
                                    521 ;--------------------------------------------------------
                                    522 	.area HOME    (CODE)
      000000                        523 __interrupt_vect:
      000000 02 00 34         [24]  524 	ljmp	__sdcc_gsinit_startup
                                    525 ;--------------------------------------------------------
                                    526 ; global & static initialisations
                                    527 ;--------------------------------------------------------
                                    528 	.area HOME    (CODE)
                                    529 	.area GSINIT  (CODE)
                                    530 	.area GSFINAL (CODE)
                                    531 	.area GSINIT  (CODE)
                                    532 	.globl __sdcc_gsinit_startup
                                    533 	.globl __sdcc_program_startup
                                    534 	.globl __start__stack
                                    535 	.globl __mcs51_genXINIT
                                    536 	.globl __mcs51_genXRAMCLEAR
                                    537 	.globl __mcs51_genRAMCLEAR
                                    538 	.area GSFINAL (CODE)
      00008D 02 00 03         [24]  539 	ljmp	__sdcc_program_startup
                                    540 ;--------------------------------------------------------
                                    541 ; Home
                                    542 ;--------------------------------------------------------
                                    543 	.area HOME    (CODE)
                                    544 	.area HOME    (CODE)
      000003                        545 __sdcc_program_startup:
      000003 02 03 E0         [24]  546 	ljmp	_main
                                    547 ;	return from main will return to caller
                                    548 ;--------------------------------------------------------
                                    549 ; code
                                    550 ;--------------------------------------------------------
                                    551 	.area CSEG    (CODE)
                                    552 ;------------------------------------------------------------
                                    553 ;Allocation info for local variables in function 'main'
                                    554 ;------------------------------------------------------------
                                    555 ;RxByte                    Allocated with name '_main_RxByte_65536_62'
                                    556 ;character                 Allocated with name '_main_character_65536_62'
                                    557 ;address                   Allocated with name '_main_address_65536_62'
                                    558 ;address1                  Allocated with name '_main_address1_65536_62'
                                    559 ;address2                  Allocated with name '_main_address2_65536_62'
                                    560 ;value                     Allocated with name '_main_value_65536_62'
                                    561 ;addressint                Allocated with name '_main_addressint_65536_62'
                                    562 ;address1int               Allocated with name '_main_address1int_65536_62'
                                    563 ;address2int               Allocated with name '_main_address2int_65536_62'
                                    564 ;valueint                  Allocated with name '_main_valueint_65536_62'
                                    565 ;isAddressValid            Allocated with name '_main_isAddressValid_65536_62'
                                    566 ;------------------------------------------------------------
                                    567 ;	main.c:36: void main(void)
                                    568 ;	-----------------------------------------
                                    569 ;	 function main
                                    570 ;	-----------------------------------------
      0003E0                        571 _main:
                           000007   572 	ar7 = 0x07
                           000006   573 	ar6 = 0x06
                           000005   574 	ar5 = 0x05
                           000004   575 	ar4 = 0x04
                           000003   576 	ar3 = 0x03
                           000002   577 	ar2 = 0x02
                           000001   578 	ar1 = 0x01
                           000000   579 	ar0 = 0x00
                                    580 ;	main.c:50: serial_init();
      0003E0 12 06 43         [24]  581 	lcall	_serial_init
                                    582 ;	main.c:51: printf("SERIAL INITIALISATION \n\r");// Initialize i2c pins
      0003E3 74 05            [12]  583 	mov	a,#___str_0
      0003E5 C0 E0            [24]  584 	push	acc
      0003E7 74 1B            [12]  585 	mov	a,#(___str_0 >> 8)
      0003E9 C0 E0            [24]  586 	push	acc
      0003EB 74 80            [12]  587 	mov	a,#0x80
      0003ED C0 E0            [24]  588 	push	acc
      0003EF 12 10 1D         [24]  589 	lcall	_printf
      0003F2 15 81            [12]  590 	dec	sp
      0003F4 15 81            [12]  591 	dec	sp
      0003F6 15 81            [12]  592 	dec	sp
                                    593 ;	main.c:52: InitI2C();
      0003F8 12 02 93         [24]  594 	lcall	_InitI2C
                                    595 ;	main.c:53: puts("Enter 1 to write data at <address> \r");
      0003FB 90 1B 1E         [24]  596 	mov	dptr,#___str_1
      0003FE 75 F0 80         [24]  597 	mov	b,#0x80
      000401 12 0F 6F         [24]  598 	lcall	_puts
                                    599 ;	main.c:54: puts("Enter 2 to read data at <address> \r");
      000404 90 1B 43         [24]  600 	mov	dptr,#___str_2
      000407 75 F0 80         [24]  601 	mov	b,#0x80
      00040A 12 0F 6F         [24]  602 	lcall	_puts
                                    603 ;	main.c:55: puts("Enter 3 for hexdump from <address1> to <address2> \r");
      00040D 90 1B 67         [24]  604 	mov	dptr,#___str_3
      000410 75 F0 80         [24]  605 	mov	b,#0x80
      000413 12 0F 6F         [24]  606 	lcall	_puts
                                    607 ;	main.c:56: puts("Enter 4 to reset EEPROM \r");
      000416 90 1B 9B         [24]  608 	mov	dptr,#___str_4
      000419 75 F0 80         [24]  609 	mov	b,#0x80
      00041C 12 0F 6F         [24]  610 	lcall	_puts
                                    611 ;	main.c:57: puts("Enter ? for user menu \r");
      00041F 90 1B B5         [24]  612 	mov	dptr,#___str_5
      000422 75 F0 80         [24]  613 	mov	b,#0x80
      000425 12 0F 6F         [24]  614 	lcall	_puts
                                    615 ;	main.c:59: while(1)
      000428                        616 00123$:
                                    617 ;	main.c:61: puts("<<Enter command for operation>>\n\r");
      000428 90 1B CD         [24]  618 	mov	dptr,#___str_6
      00042B 75 F0 80         [24]  619 	mov	b,#0x80
      00042E 12 0F 6F         [24]  620 	lcall	_puts
                                    621 ;	main.c:62: getstr(character);
      000431 90 00 10         [24]  622 	mov	dptr,#_main_character_65536_62
      000434 75 F0 00         [24]  623 	mov	b,#0x00
      000437 12 07 22         [24]  624 	lcall	_getstr
                                    625 ;	main.c:63: if (character[0]=='1'){
      00043A 90 00 10         [24]  626 	mov	dptr,#_main_character_65536_62
      00043D E0               [24]  627 	movx	a,@dptr
      00043E FF               [12]  628 	mov	r7,a
      00043F BF 31 02         [24]  629 	cjne	r7,#0x31,00159$
      000442 80 03            [24]  630 	sjmp	00160$
      000444                        631 00159$:
      000444 02 04 EB         [24]  632 	ljmp	00120$
      000447                        633 00160$:
                                    634 ;	main.c:64: puts("Enter address to write data to \n\r");
      000447 90 1B EF         [24]  635 	mov	dptr,#___str_7
      00044A 75 F0 80         [24]  636 	mov	b,#0x80
      00044D 12 0F 6F         [24]  637 	lcall	_puts
                                    638 ;	main.c:65: getstr(address);
      000450 90 00 15         [24]  639 	mov	dptr,#_main_address_65536_62
      000453 75 F0 00         [24]  640 	mov	b,#0x00
      000456 12 07 22         [24]  641 	lcall	_getstr
                                    642 ;	main.c:66: addressint=(int)strtol(address, NULL, 16);
      000459 90 00 4E         [24]  643 	mov	dptr,#_strtol_PARM_2
      00045C E4               [12]  644 	clr	a
      00045D F0               [24]  645 	movx	@dptr,a
      00045E A3               [24]  646 	inc	dptr
      00045F F0               [24]  647 	movx	@dptr,a
      000460 A3               [24]  648 	inc	dptr
      000461 F0               [24]  649 	movx	@dptr,a
      000462 90 00 51         [24]  650 	mov	dptr,#_strtol_PARM_3
      000465 74 10            [12]  651 	mov	a,#0x10
      000467 F0               [24]  652 	movx	@dptr,a
      000468 E4               [12]  653 	clr	a
      000469 A3               [24]  654 	inc	dptr
      00046A F0               [24]  655 	movx	@dptr,a
      00046B 90 00 15         [24]  656 	mov	dptr,#_main_address_65536_62
      00046E 75 F0 00         [24]  657 	mov	b,#0x00
      000471 12 08 28         [24]  658 	lcall	_strtol
                                    659 ;	main.c:67: isAddressValid= checkAddress(addressint);
      000474 AB 82            [24]  660 	mov	r3,dpl
      000476 AC 83            [24]  661 	mov	r4,dph
      000478 C0 04            [24]  662 	push	ar4
      00047A C0 03            [24]  663 	push	ar3
      00047C 12 06 51         [24]  664 	lcall	_checkAddress
      00047F AD 82            [24]  665 	mov	r5,dpl
      000481 AE 83            [24]  666 	mov	r6,dph
      000483 D0 03            [24]  667 	pop	ar3
      000485 D0 04            [24]  668 	pop	ar4
                                    669 ;	main.c:68: if (isAddressValid==1)
      000487 BD 01 49         [24]  670 	cjne	r5,#0x01,00102$
      00048A BE 00 46         [24]  671 	cjne	r6,#0x00,00102$
                                    672 ;	main.c:70: puts("Enter data value \n\r");
      00048D 90 1C 11         [24]  673 	mov	dptr,#___str_8
      000490 75 F0 80         [24]  674 	mov	b,#0x80
      000493 C0 04            [24]  675 	push	ar4
      000495 C0 03            [24]  676 	push	ar3
      000497 12 0F 6F         [24]  677 	lcall	_puts
                                    678 ;	main.c:71: getstr(value);
      00049A 90 00 33         [24]  679 	mov	dptr,#_main_value_65536_62
      00049D 75 F0 00         [24]  680 	mov	b,#0x00
      0004A0 12 07 22         [24]  681 	lcall	_getstr
                                    682 ;	main.c:72: valueint=(int)strtol(value, NULL, 16);
      0004A3 90 00 4E         [24]  683 	mov	dptr,#_strtol_PARM_2
      0004A6 E4               [12]  684 	clr	a
      0004A7 F0               [24]  685 	movx	@dptr,a
      0004A8 A3               [24]  686 	inc	dptr
      0004A9 F0               [24]  687 	movx	@dptr,a
      0004AA A3               [24]  688 	inc	dptr
      0004AB F0               [24]  689 	movx	@dptr,a
      0004AC 90 00 51         [24]  690 	mov	dptr,#_strtol_PARM_3
      0004AF 74 10            [12]  691 	mov	a,#0x10
      0004B1 F0               [24]  692 	movx	@dptr,a
      0004B2 E4               [12]  693 	clr	a
      0004B3 A3               [24]  694 	inc	dptr
      0004B4 F0               [24]  695 	movx	@dptr,a
      0004B5 90 00 33         [24]  696 	mov	dptr,#_main_value_65536_62
      0004B8 75 F0 00         [24]  697 	mov	b,#0x00
      0004BB 12 08 28         [24]  698 	lcall	_strtol
      0004BE A9 82            [24]  699 	mov	r1,dpl
      0004C0 D0 03            [24]  700 	pop	ar3
      0004C2 D0 04            [24]  701 	pop	ar4
      0004C4 90 00 01         [24]  702 	mov	dptr,#_Write_Byte_To_EEPROM_PARM_2
      0004C7 E9               [12]  703 	mov	a,r1
      0004C8 F0               [24]  704 	movx	@dptr,a
                                    705 ;	main.c:73: Write_Byte_To_EEPROM(addressint, valueint);
      0004C9 8B 82            [24]  706 	mov	dpl,r3
      0004CB 8C 83            [24]  707 	mov	dph,r4
      0004CD 12 00 90         [24]  708 	lcall	_Write_Byte_To_EEPROM
      0004D0 02 04 28         [24]  709 	ljmp	00123$
      0004D3                        710 00102$:
                                    711 ;	main.c:77: printf("Invalid address \n\r");
      0004D3 74 25            [12]  712 	mov	a,#___str_9
      0004D5 C0 E0            [24]  713 	push	acc
      0004D7 74 1C            [12]  714 	mov	a,#(___str_9 >> 8)
      0004D9 C0 E0            [24]  715 	push	acc
      0004DB 74 80            [12]  716 	mov	a,#0x80
      0004DD C0 E0            [24]  717 	push	acc
      0004DF 12 10 1D         [24]  718 	lcall	_printf
      0004E2 15 81            [12]  719 	dec	sp
      0004E4 15 81            [12]  720 	dec	sp
      0004E6 15 81            [12]  721 	dec	sp
      0004E8 02 04 28         [24]  722 	ljmp	00123$
      0004EB                        723 00120$:
                                    724 ;	main.c:81: else if (character[0]=='2'){
      0004EB BF 32 02         [24]  725 	cjne	r7,#0x32,00163$
      0004EE 80 03            [24]  726 	sjmp	00164$
      0004F0                        727 00163$:
      0004F0 02 05 78         [24]  728 	ljmp	00117$
      0004F3                        729 00164$:
                                    730 ;	main.c:82: puts("Enter address to read data from \n\r");
      0004F3 90 1C 38         [24]  731 	mov	dptr,#___str_10
      0004F6 75 F0 80         [24]  732 	mov	b,#0x80
      0004F9 12 0F 6F         [24]  733 	lcall	_puts
                                    734 ;	main.c:83: getstr(address);
      0004FC 90 00 15         [24]  735 	mov	dptr,#_main_address_65536_62
      0004FF 75 F0 00         [24]  736 	mov	b,#0x00
      000502 12 07 22         [24]  737 	lcall	_getstr
                                    738 ;	main.c:84: addressint=(int)strtol(address, NULL, 16);
      000505 90 00 4E         [24]  739 	mov	dptr,#_strtol_PARM_2
      000508 E4               [12]  740 	clr	a
      000509 F0               [24]  741 	movx	@dptr,a
      00050A A3               [24]  742 	inc	dptr
      00050B F0               [24]  743 	movx	@dptr,a
      00050C A3               [24]  744 	inc	dptr
      00050D F0               [24]  745 	movx	@dptr,a
      00050E 90 00 51         [24]  746 	mov	dptr,#_strtol_PARM_3
      000511 74 10            [12]  747 	mov	a,#0x10
      000513 F0               [24]  748 	movx	@dptr,a
      000514 E4               [12]  749 	clr	a
      000515 A3               [24]  750 	inc	dptr
      000516 F0               [24]  751 	movx	@dptr,a
      000517 90 00 15         [24]  752 	mov	dptr,#_main_address_65536_62
      00051A 75 F0 00         [24]  753 	mov	b,#0x00
      00051D 12 08 28         [24]  754 	lcall	_strtol
                                    755 ;	main.c:85: isAddressValid= checkAddress(addressint);
      000520 AB 82            [24]  756 	mov	r3,dpl
      000522 AC 83            [24]  757 	mov	r4,dph
      000524 C0 04            [24]  758 	push	ar4
      000526 C0 03            [24]  759 	push	ar3
      000528 12 06 51         [24]  760 	lcall	_checkAddress
      00052B AD 82            [24]  761 	mov	r5,dpl
      00052D AE 83            [24]  762 	mov	r6,dph
      00052F D0 03            [24]  763 	pop	ar3
      000531 D0 04            [24]  764 	pop	ar4
                                    765 ;	main.c:86: if (isAddressValid==1)
      000533 BD 01 2A         [24]  766 	cjne	r5,#0x01,00105$
      000536 BE 00 27         [24]  767 	cjne	r6,#0x00,00105$
                                    768 ;	main.c:88: RxByte = Read_Byte_From_EEPROM(addressint);
      000539 8B 82            [24]  769 	mov	dpl,r3
      00053B 8C 83            [24]  770 	mov	dph,r4
      00053D 12 00 CB         [24]  771 	lcall	_Read_Byte_From_EEPROM
      000540 AE 82            [24]  772 	mov	r6,dpl
                                    773 ;	main.c:89: printf("Read byte %X \n\r", RxByte);
      000542 7D 00            [12]  774 	mov	r5,#0x00
      000544 C0 06            [24]  775 	push	ar6
      000546 C0 05            [24]  776 	push	ar5
      000548 74 5B            [12]  777 	mov	a,#___str_11
      00054A C0 E0            [24]  778 	push	acc
      00054C 74 1C            [12]  779 	mov	a,#(___str_11 >> 8)
      00054E C0 E0            [24]  780 	push	acc
      000550 74 80            [12]  781 	mov	a,#0x80
      000552 C0 E0            [24]  782 	push	acc
      000554 12 10 1D         [24]  783 	lcall	_printf
      000557 E5 81            [12]  784 	mov	a,sp
      000559 24 FB            [12]  785 	add	a,#0xfb
      00055B F5 81            [12]  786 	mov	sp,a
      00055D 02 04 28         [24]  787 	ljmp	00123$
      000560                        788 00105$:
                                    789 ;	main.c:93: printf("Invalid address \n\r");
      000560 74 25            [12]  790 	mov	a,#___str_9
      000562 C0 E0            [24]  791 	push	acc
      000564 74 1C            [12]  792 	mov	a,#(___str_9 >> 8)
      000566 C0 E0            [24]  793 	push	acc
      000568 74 80            [12]  794 	mov	a,#0x80
      00056A C0 E0            [24]  795 	push	acc
      00056C 12 10 1D         [24]  796 	lcall	_printf
      00056F 15 81            [12]  797 	dec	sp
      000571 15 81            [12]  798 	dec	sp
      000573 15 81            [12]  799 	dec	sp
      000575 02 04 28         [24]  800 	ljmp	00123$
      000578                        801 00117$:
                                    802 ;	main.c:97: else if (character[0]=='3'){
      000578 BF 33 02         [24]  803 	cjne	r7,#0x33,00167$
      00057B 80 02            [24]  804 	sjmp	00168$
      00057D                        805 00167$:
      00057D 80 7C            [24]  806 	sjmp	00114$
      00057F                        807 00168$:
                                    808 ;	main.c:98: puts("Enter address1 to start hexdump from \n\r");
      00057F 90 1C 6B         [24]  809 	mov	dptr,#___str_12
      000582 75 F0 80         [24]  810 	mov	b,#0x80
      000585 12 0F 6F         [24]  811 	lcall	_puts
                                    812 ;	main.c:99: getstr(address1);
      000588 90 00 1F         [24]  813 	mov	dptr,#_main_address1_65536_62
      00058B 75 F0 00         [24]  814 	mov	b,#0x00
      00058E 12 07 22         [24]  815 	lcall	_getstr
                                    816 ;	main.c:100: puts("Enter address2 to end hexdump at \n\r");
      000591 90 1C 93         [24]  817 	mov	dptr,#___str_13
      000594 75 F0 80         [24]  818 	mov	b,#0x80
      000597 12 0F 6F         [24]  819 	lcall	_puts
                                    820 ;	main.c:101: getstr(address2);
      00059A 90 00 29         [24]  821 	mov	dptr,#_main_address2_65536_62
      00059D 75 F0 00         [24]  822 	mov	b,#0x00
      0005A0 12 07 22         [24]  823 	lcall	_getstr
                                    824 ;	main.c:102: address1int=(int)strtol(address1, NULL, 16);
      0005A3 90 00 4E         [24]  825 	mov	dptr,#_strtol_PARM_2
      0005A6 E4               [12]  826 	clr	a
      0005A7 F0               [24]  827 	movx	@dptr,a
      0005A8 A3               [24]  828 	inc	dptr
      0005A9 F0               [24]  829 	movx	@dptr,a
      0005AA A3               [24]  830 	inc	dptr
      0005AB F0               [24]  831 	movx	@dptr,a
      0005AC 90 00 51         [24]  832 	mov	dptr,#_strtol_PARM_3
      0005AF 74 10            [12]  833 	mov	a,#0x10
      0005B1 F0               [24]  834 	movx	@dptr,a
      0005B2 E4               [12]  835 	clr	a
      0005B3 A3               [24]  836 	inc	dptr
      0005B4 F0               [24]  837 	movx	@dptr,a
      0005B5 90 00 1F         [24]  838 	mov	dptr,#_main_address1_65536_62
      0005B8 75 F0 00         [24]  839 	mov	b,#0x00
      0005BB 12 08 28         [24]  840 	lcall	_strtol
      0005BE AB 82            [24]  841 	mov	r3,dpl
      0005C0 AC 83            [24]  842 	mov	r4,dph
                                    843 ;	main.c:103: address2int=(int)strtol(address2, NULL, 16);
      0005C2 90 00 4E         [24]  844 	mov	dptr,#_strtol_PARM_2
      0005C5 E4               [12]  845 	clr	a
      0005C6 F0               [24]  846 	movx	@dptr,a
      0005C7 A3               [24]  847 	inc	dptr
      0005C8 F0               [24]  848 	movx	@dptr,a
      0005C9 A3               [24]  849 	inc	dptr
      0005CA F0               [24]  850 	movx	@dptr,a
      0005CB 90 00 51         [24]  851 	mov	dptr,#_strtol_PARM_3
      0005CE 74 10            [12]  852 	mov	a,#0x10
      0005D0 F0               [24]  853 	movx	@dptr,a
      0005D1 E4               [12]  854 	clr	a
      0005D2 A3               [24]  855 	inc	dptr
      0005D3 F0               [24]  856 	movx	@dptr,a
      0005D4 90 00 29         [24]  857 	mov	dptr,#_main_address2_65536_62
      0005D7 75 F0 00         [24]  858 	mov	b,#0x00
      0005DA C0 04            [24]  859 	push	ar4
      0005DC C0 03            [24]  860 	push	ar3
      0005DE 12 08 28         [24]  861 	lcall	_strtol
      0005E1 A9 82            [24]  862 	mov	r1,dpl
      0005E3 AA 83            [24]  863 	mov	r2,dph
      0005E5 D0 03            [24]  864 	pop	ar3
      0005E7 D0 04            [24]  865 	pop	ar4
      0005E9 90 00 06         [24]  866 	mov	dptr,#_hexdump_PARM_2
      0005EC E9               [12]  867 	mov	a,r1
      0005ED F0               [24]  868 	movx	@dptr,a
      0005EE EA               [12]  869 	mov	a,r2
      0005EF A3               [24]  870 	inc	dptr
      0005F0 F0               [24]  871 	movx	@dptr,a
                                    872 ;	main.c:104: hexdump(address1int, address2int);
      0005F1 8B 82            [24]  873 	mov	dpl,r3
      0005F3 8C 83            [24]  874 	mov	dph,r4
      0005F5 12 01 1E         [24]  875 	lcall	_hexdump
      0005F8 02 04 28         [24]  876 	ljmp	00123$
      0005FB                        877 00114$:
                                    878 ;	main.c:107: else if (character[0]=='4'){
      0005FB BF 34 0F         [24]  879 	cjne	r7,#0x34,00111$
                                    880 ;	main.c:108: puts("Reset eeprom \n\r");
      0005FE 90 1C B7         [24]  881 	mov	dptr,#___str_14
      000601 75 F0 80         [24]  882 	mov	b,#0x80
      000604 12 0F 6F         [24]  883 	lcall	_puts
                                    884 ;	main.c:109: reset_eeprom();
      000607 12 02 1A         [24]  885 	lcall	_reset_eeprom
      00060A 02 04 28         [24]  886 	ljmp	00123$
      00060D                        887 00111$:
                                    888 ;	main.c:112: else if (character[0]=='?'){
      00060D BF 3F 27         [24]  889 	cjne	r7,#0x3f,00108$
                                    890 ;	main.c:113: puts("Enter 1 to write data at <address> \r");
      000610 90 1B 1E         [24]  891 	mov	dptr,#___str_1
      000613 75 F0 80         [24]  892 	mov	b,#0x80
      000616 12 0F 6F         [24]  893 	lcall	_puts
                                    894 ;	main.c:114: puts("Enter 2 to read data at <address> \r");
      000619 90 1B 43         [24]  895 	mov	dptr,#___str_2
      00061C 75 F0 80         [24]  896 	mov	b,#0x80
      00061F 12 0F 6F         [24]  897 	lcall	_puts
                                    898 ;	main.c:115: puts("Enter 3 for hexdump from <address1> to <address2> \r");
      000622 90 1B 67         [24]  899 	mov	dptr,#___str_3
      000625 75 F0 80         [24]  900 	mov	b,#0x80
      000628 12 0F 6F         [24]  901 	lcall	_puts
                                    902 ;	main.c:116: puts("Enter 4 to reset EEPROM \r");
      00062B 90 1B 9B         [24]  903 	mov	dptr,#___str_4
      00062E 75 F0 80         [24]  904 	mov	b,#0x80
      000631 12 0F 6F         [24]  905 	lcall	_puts
      000634 02 04 28         [24]  906 	ljmp	00123$
      000637                        907 00108$:
                                    908 ;	main.c:120: puts("Enter correct command or enter '?' for the user menu \r\n");
      000637 90 1C C7         [24]  909 	mov	dptr,#___str_15
      00063A 75 F0 80         [24]  910 	mov	b,#0x80
      00063D 12 0F 6F         [24]  911 	lcall	_puts
                                    912 ;	main.c:124: }
      000640 02 04 28         [24]  913 	ljmp	00123$
                                    914 	.area CSEG    (CODE)
                                    915 	.area CONST   (CODE)
                                    916 	.area CONST   (CODE)
      001B05                        917 ___str_0:
      001B05 53 45 52 49 41 4C 20   918 	.ascii "SERIAL INITIALISATION "
             49 4E 49 54 49 41 4C
             49 53 41 54 49 4F 4E
             20
      001B1B 0A                     919 	.db 0x0a
      001B1C 0D                     920 	.db 0x0d
      001B1D 00                     921 	.db 0x00
                                    922 	.area CSEG    (CODE)
                                    923 	.area CONST   (CODE)
      001B1E                        924 ___str_1:
      001B1E 45 6E 74 65 72 20 31   925 	.ascii "Enter 1 to write data at <address> "
             20 74 6F 20 77 72 69
             74 65 20 64 61 74 61
             20 61 74 20 3C 61 64
             64 72 65 73 73 3E 20
      001B41 0D                     926 	.db 0x0d
      001B42 00                     927 	.db 0x00
                                    928 	.area CSEG    (CODE)
                                    929 	.area CONST   (CODE)
      001B43                        930 ___str_2:
      001B43 45 6E 74 65 72 20 32   931 	.ascii "Enter 2 to read data at <address> "
             20 74 6F 20 72 65 61
             64 20 64 61 74 61 20
             61 74 20 3C 61 64 64
             72 65 73 73 3E 20
      001B65 0D                     932 	.db 0x0d
      001B66 00                     933 	.db 0x00
                                    934 	.area CSEG    (CODE)
                                    935 	.area CONST   (CODE)
      001B67                        936 ___str_3:
      001B67 45 6E 74 65 72 20 33   937 	.ascii "Enter 3 for hexdump from <address1> to <address2> "
             20 66 6F 72 20 68 65
             78 64 75 6D 70 20 66
             72 6F 6D 20 3C 61 64
             64 72 65 73 73 31 3E
             20 74 6F 20 3C 61 64
             64 72 65 73 73 32 3E
             20
      001B99 0D                     938 	.db 0x0d
      001B9A 00                     939 	.db 0x00
                                    940 	.area CSEG    (CODE)
                                    941 	.area CONST   (CODE)
      001B9B                        942 ___str_4:
      001B9B 45 6E 74 65 72 20 34   943 	.ascii "Enter 4 to reset EEPROM "
             20 74 6F 20 72 65 73
             65 74 20 45 45 50 52
             4F 4D 20
      001BB3 0D                     944 	.db 0x0d
      001BB4 00                     945 	.db 0x00
                                    946 	.area CSEG    (CODE)
                                    947 	.area CONST   (CODE)
      001BB5                        948 ___str_5:
      001BB5 45 6E 74 65 72 20 3F   949 	.ascii "Enter ? for user menu "
             20 66 6F 72 20 75 73
             65 72 20 6D 65 6E 75
             20
      001BCB 0D                     950 	.db 0x0d
      001BCC 00                     951 	.db 0x00
                                    952 	.area CSEG    (CODE)
                                    953 	.area CONST   (CODE)
      001BCD                        954 ___str_6:
      001BCD 3C 3C 45 6E 74 65 72   955 	.ascii "<<Enter command for operation>>"
             20 63 6F 6D 6D 61 6E
             64 20 66 6F 72 20 6F
             70 65 72 61 74 69 6F
             6E 3E 3E
      001BEC 0A                     956 	.db 0x0a
      001BED 0D                     957 	.db 0x0d
      001BEE 00                     958 	.db 0x00
                                    959 	.area CSEG    (CODE)
                                    960 	.area CONST   (CODE)
      001BEF                        961 ___str_7:
      001BEF 45 6E 74 65 72 20 61   962 	.ascii "Enter address to write data to "
             64 64 72 65 73 73 20
             74 6F 20 77 72 69 74
             65 20 64 61 74 61 20
             74 6F 20
      001C0E 0A                     963 	.db 0x0a
      001C0F 0D                     964 	.db 0x0d
      001C10 00                     965 	.db 0x00
                                    966 	.area CSEG    (CODE)
                                    967 	.area CONST   (CODE)
      001C11                        968 ___str_8:
      001C11 45 6E 74 65 72 20 64   969 	.ascii "Enter data value "
             61 74 61 20 76 61 6C
             75 65 20
      001C22 0A                     970 	.db 0x0a
      001C23 0D                     971 	.db 0x0d
      001C24 00                     972 	.db 0x00
                                    973 	.area CSEG    (CODE)
                                    974 	.area CONST   (CODE)
      001C25                        975 ___str_9:
      001C25 49 6E 76 61 6C 69 64   976 	.ascii "Invalid address "
             20 61 64 64 72 65 73
             73 20
      001C35 0A                     977 	.db 0x0a
      001C36 0D                     978 	.db 0x0d
      001C37 00                     979 	.db 0x00
                                    980 	.area CSEG    (CODE)
                                    981 	.area CONST   (CODE)
      001C38                        982 ___str_10:
      001C38 45 6E 74 65 72 20 61   983 	.ascii "Enter address to read data from "
             64 64 72 65 73 73 20
             74 6F 20 72 65 61 64
             20 64 61 74 61 20 66
             72 6F 6D 20
      001C58 0A                     984 	.db 0x0a
      001C59 0D                     985 	.db 0x0d
      001C5A 00                     986 	.db 0x00
                                    987 	.area CSEG    (CODE)
                                    988 	.area CONST   (CODE)
      001C5B                        989 ___str_11:
      001C5B 52 65 61 64 20 62 79   990 	.ascii "Read byte %X "
             74 65 20 25 58 20
      001C68 0A                     991 	.db 0x0a
      001C69 0D                     992 	.db 0x0d
      001C6A 00                     993 	.db 0x00
                                    994 	.area CSEG    (CODE)
                                    995 	.area CONST   (CODE)
      001C6B                        996 ___str_12:
      001C6B 45 6E 74 65 72 20 61   997 	.ascii "Enter address1 to start hexdump from "
             64 64 72 65 73 73 31
             20 74 6F 20 73 74 61
             72 74 20 68 65 78 64
             75 6D 70 20 66 72 6F
             6D 20
      001C90 0A                     998 	.db 0x0a
      001C91 0D                     999 	.db 0x0d
      001C92 00                    1000 	.db 0x00
                                   1001 	.area CSEG    (CODE)
                                   1002 	.area CONST   (CODE)
      001C93                       1003 ___str_13:
      001C93 45 6E 74 65 72 20 61  1004 	.ascii "Enter address2 to end hexdump at "
             64 64 72 65 73 73 32
             20 74 6F 20 65 6E 64
             20 68 65 78 64 75 6D
             70 20 61 74 20
      001CB4 0A                    1005 	.db 0x0a
      001CB5 0D                    1006 	.db 0x0d
      001CB6 00                    1007 	.db 0x00
                                   1008 	.area CSEG    (CODE)
                                   1009 	.area CONST   (CODE)
      001CB7                       1010 ___str_14:
      001CB7 52 65 73 65 74 20 65  1011 	.ascii "Reset eeprom "
             65 70 72 6F 6D 20
      001CC4 0A                    1012 	.db 0x0a
      001CC5 0D                    1013 	.db 0x0d
      001CC6 00                    1014 	.db 0x00
                                   1015 	.area CSEG    (CODE)
                                   1016 	.area CONST   (CODE)
      001CC7                       1017 ___str_15:
      001CC7 45 6E 74 65 72 20 63  1018 	.ascii "Enter correct command or enter '?' for the user menu "
             6F 72 72 65 63 74 20
             63 6F 6D 6D 61 6E 64
             20 6F 72 20 65 6E 74
             65 72 20 27 3F 27 20
             66 6F 72 20 74 68 65
             20 75 73 65 72 20 6D
             65 6E 75 20
      001CFC 0D                    1019 	.db 0x0d
      001CFD 0A                    1020 	.db 0x0a
      001CFE 00                    1021 	.db 0x00
                                   1022 	.area CSEG    (CODE)
                                   1023 	.area XINIT   (CODE)
                                   1024 	.area CABS    (ABS,CODE)
