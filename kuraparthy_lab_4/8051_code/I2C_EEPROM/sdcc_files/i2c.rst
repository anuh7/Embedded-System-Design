                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module i2c
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
                                    220 	.globl ___delay_us
                                    221 	.globl _InitI2C
                                    222 	.globl _I2C_Start
                                    223 	.globl _I2C_ReStart
                                    224 	.globl _I2C_Stop
                                    225 	.globl _I2C_Send_ACK
                                    226 	.globl _I2C_Send_NACK
                                    227 	.globl _I2C_Write_Byte
                                    228 	.globl _I2C_Read_Byte
                                    229 ;--------------------------------------------------------
                                    230 ; special function registers
                                    231 ;--------------------------------------------------------
                                    232 	.area RSEG    (ABS,DATA)
      000000                        233 	.org 0x0000
                           0000C8   234 _T2CON	=	0x00c8
                           0000CA   235 _RCAP2L	=	0x00ca
                           0000CB   236 _RCAP2H	=	0x00cb
                           0000CC   237 _TL2	=	0x00cc
                           0000CD   238 _TH2	=	0x00cd
                           00008E   239 _AUXR	=	0x008e
                           0000A2   240 _AUXR1	=	0x00a2
                           000097   241 _CKRL	=	0x0097
                           00008F   242 _CKCON0	=	0x008f
                           0000AF   243 _CKCON1	=	0x00af
                           0000FA   244 _CCAP0H	=	0x00fa
                           0000FB   245 _CCAP1H	=	0x00fb
                           0000FC   246 _CCAP2H	=	0x00fc
                           0000FD   247 _CCAP3H	=	0x00fd
                           0000FE   248 _CCAP4H	=	0x00fe
                           0000EA   249 _CCAP0L	=	0x00ea
                           0000EB   250 _CCAP1L	=	0x00eb
                           0000EC   251 _CCAP2L	=	0x00ec
                           0000ED   252 _CCAP3L	=	0x00ed
                           0000EE   253 _CCAP4L	=	0x00ee
                           0000DA   254 _CCAPM0	=	0x00da
                           0000DB   255 _CCAPM1	=	0x00db
                           0000DC   256 _CCAPM2	=	0x00dc
                           0000DD   257 _CCAPM3	=	0x00dd
                           0000DE   258 _CCAPM4	=	0x00de
                           0000D8   259 _CCON	=	0x00d8
                           0000F9   260 _CH	=	0x00f9
                           0000E9   261 _CL	=	0x00e9
                           0000D9   262 _CMOD	=	0x00d9
                           0000A8   263 _IEN0	=	0x00a8
                           0000B1   264 _IEN1	=	0x00b1
                           0000B8   265 _IPL0	=	0x00b8
                           0000B7   266 _IPH0	=	0x00b7
                           0000B2   267 _IPL1	=	0x00b2
                           0000B3   268 _IPH1	=	0x00b3
                           0000C0   269 _P4	=	0x00c0
                           0000E8   270 _P5	=	0x00e8
                           0000A6   271 _WDTRST	=	0x00a6
                           0000A7   272 _WDTPRG	=	0x00a7
                           0000A9   273 _SADDR	=	0x00a9
                           0000B9   274 _SADEN	=	0x00b9
                           0000C3   275 _SPCON	=	0x00c3
                           0000C4   276 _SPSTA	=	0x00c4
                           0000C5   277 _SPDAT	=	0x00c5
                           0000C9   278 _T2MOD	=	0x00c9
                           00009B   279 _BDRCON	=	0x009b
                           00009A   280 _BRL	=	0x009a
                           00009C   281 _KBLS	=	0x009c
                           00009D   282 _KBE	=	0x009d
                           00009E   283 _KBF	=	0x009e
                           0000D2   284 _EECON	=	0x00d2
                           0000E0   285 _ACC	=	0x00e0
                           0000F0   286 _B	=	0x00f0
                           000083   287 _DPH	=	0x0083
                           000083   288 _DP0H	=	0x0083
                           000082   289 _DPL	=	0x0082
                           000082   290 _DP0L	=	0x0082
                           0000A8   291 _IE	=	0x00a8
                           0000B8   292 _IP	=	0x00b8
                           000080   293 _P0	=	0x0080
                           000090   294 _P1	=	0x0090
                           0000A0   295 _P2	=	0x00a0
                           0000B0   296 _P3	=	0x00b0
                           000087   297 _PCON	=	0x0087
                           0000D0   298 _PSW	=	0x00d0
                           000099   299 _SBUF	=	0x0099
                           000099   300 _SBUF0	=	0x0099
                           000098   301 _SCON	=	0x0098
                           000081   302 _SP	=	0x0081
                           000088   303 _TCON	=	0x0088
                           00008C   304 _TH0	=	0x008c
                           00008D   305 _TH1	=	0x008d
                           00008A   306 _TL0	=	0x008a
                           00008B   307 _TL1	=	0x008b
                           000089   308 _TMOD	=	0x0089
                                    309 ;--------------------------------------------------------
                                    310 ; special function bits
                                    311 ;--------------------------------------------------------
                                    312 	.area RSEG    (ABS,DATA)
      000000                        313 	.org 0x0000
                           0000AD   314 _ET2	=	0x00ad
                           0000BD   315 _PT2	=	0x00bd
                           0000C8   316 _T2CON_0	=	0x00c8
                           0000C9   317 _T2CON_1	=	0x00c9
                           0000CA   318 _T2CON_2	=	0x00ca
                           0000CB   319 _T2CON_3	=	0x00cb
                           0000CC   320 _T2CON_4	=	0x00cc
                           0000CD   321 _T2CON_5	=	0x00cd
                           0000CE   322 _T2CON_6	=	0x00ce
                           0000CF   323 _T2CON_7	=	0x00cf
                           0000C8   324 _CP_RL2	=	0x00c8
                           0000C9   325 _C_T2	=	0x00c9
                           0000CA   326 _TR2	=	0x00ca
                           0000CB   327 _EXEN2	=	0x00cb
                           0000CC   328 _TCLK	=	0x00cc
                           0000CD   329 _RCLK	=	0x00cd
                           0000CE   330 _EXF2	=	0x00ce
                           0000CF   331 _TF2	=	0x00cf
                           0000DF   332 _CF	=	0x00df
                           0000DE   333 _CR	=	0x00de
                           0000DC   334 _CCF4	=	0x00dc
                           0000DB   335 _CCF3	=	0x00db
                           0000DA   336 _CCF2	=	0x00da
                           0000D9   337 _CCF1	=	0x00d9
                           0000D8   338 _CCF0	=	0x00d8
                           0000AE   339 _EC	=	0x00ae
                           0000BE   340 _PPCL	=	0x00be
                           0000BD   341 _PT2L	=	0x00bd
                           0000BC   342 _PSL	=	0x00bc
                           0000BB   343 _PT1L	=	0x00bb
                           0000BA   344 _PX1L	=	0x00ba
                           0000B9   345 _PT0L	=	0x00b9
                           0000B8   346 _PX0L	=	0x00b8
                           0000C0   347 _P4_0	=	0x00c0
                           0000C1   348 _P4_1	=	0x00c1
                           0000C2   349 _P4_2	=	0x00c2
                           0000C3   350 _P4_3	=	0x00c3
                           0000C4   351 _P4_4	=	0x00c4
                           0000C5   352 _P4_5	=	0x00c5
                           0000C6   353 _P4_6	=	0x00c6
                           0000C7   354 _P4_7	=	0x00c7
                           0000E8   355 _P5_0	=	0x00e8
                           0000E9   356 _P5_1	=	0x00e9
                           0000EA   357 _P5_2	=	0x00ea
                           0000EB   358 _P5_3	=	0x00eb
                           0000EC   359 _P5_4	=	0x00ec
                           0000ED   360 _P5_5	=	0x00ed
                           0000EE   361 _P5_6	=	0x00ee
                           0000EF   362 _P5_7	=	0x00ef
                           0000F0   363 _BREG_F0	=	0x00f0
                           0000F1   364 _BREG_F1	=	0x00f1
                           0000F2   365 _BREG_F2	=	0x00f2
                           0000F3   366 _BREG_F3	=	0x00f3
                           0000F4   367 _BREG_F4	=	0x00f4
                           0000F5   368 _BREG_F5	=	0x00f5
                           0000F6   369 _BREG_F6	=	0x00f6
                           0000F7   370 _BREG_F7	=	0x00f7
                           0000A8   371 _EX0	=	0x00a8
                           0000A9   372 _ET0	=	0x00a9
                           0000AA   373 _EX1	=	0x00aa
                           0000AB   374 _ET1	=	0x00ab
                           0000AC   375 _ES	=	0x00ac
                           0000AF   376 _EA	=	0x00af
                           0000B8   377 _PX0	=	0x00b8
                           0000B9   378 _PT0	=	0x00b9
                           0000BA   379 _PX1	=	0x00ba
                           0000BB   380 _PT1	=	0x00bb
                           0000BC   381 _PS	=	0x00bc
                           000080   382 _P0_0	=	0x0080
                           000081   383 _P0_1	=	0x0081
                           000082   384 _P0_2	=	0x0082
                           000083   385 _P0_3	=	0x0083
                           000084   386 _P0_4	=	0x0084
                           000085   387 _P0_5	=	0x0085
                           000086   388 _P0_6	=	0x0086
                           000087   389 _P0_7	=	0x0087
                           000090   390 _P1_0	=	0x0090
                           000091   391 _P1_1	=	0x0091
                           000092   392 _P1_2	=	0x0092
                           000093   393 _P1_3	=	0x0093
                           000094   394 _P1_4	=	0x0094
                           000095   395 _P1_5	=	0x0095
                           000096   396 _P1_6	=	0x0096
                           000097   397 _P1_7	=	0x0097
                           0000A0   398 _P2_0	=	0x00a0
                           0000A1   399 _P2_1	=	0x00a1
                           0000A2   400 _P2_2	=	0x00a2
                           0000A3   401 _P2_3	=	0x00a3
                           0000A4   402 _P2_4	=	0x00a4
                           0000A5   403 _P2_5	=	0x00a5
                           0000A6   404 _P2_6	=	0x00a6
                           0000A7   405 _P2_7	=	0x00a7
                           0000B0   406 _P3_0	=	0x00b0
                           0000B1   407 _P3_1	=	0x00b1
                           0000B2   408 _P3_2	=	0x00b2
                           0000B3   409 _P3_3	=	0x00b3
                           0000B4   410 _P3_4	=	0x00b4
                           0000B5   411 _P3_5	=	0x00b5
                           0000B6   412 _P3_6	=	0x00b6
                           0000B7   413 _P3_7	=	0x00b7
                           0000B0   414 _RXD	=	0x00b0
                           0000B0   415 _RXD0	=	0x00b0
                           0000B1   416 _TXD	=	0x00b1
                           0000B1   417 _TXD0	=	0x00b1
                           0000B2   418 _INT0	=	0x00b2
                           0000B3   419 _INT1	=	0x00b3
                           0000B4   420 _T0	=	0x00b4
                           0000B5   421 _T1	=	0x00b5
                           0000B6   422 _WR	=	0x00b6
                           0000B7   423 _RD	=	0x00b7
                           0000D0   424 _P	=	0x00d0
                           0000D1   425 _F1	=	0x00d1
                           0000D2   426 _OV	=	0x00d2
                           0000D3   427 _RS0	=	0x00d3
                           0000D4   428 _RS1	=	0x00d4
                           0000D5   429 _F0	=	0x00d5
                           0000D6   430 _AC	=	0x00d6
                           0000D7   431 _CY	=	0x00d7
                           000098   432 _RI	=	0x0098
                           000099   433 _TI	=	0x0099
                           00009A   434 _RB8	=	0x009a
                           00009B   435 _TB8	=	0x009b
                           00009C   436 _REN	=	0x009c
                           00009D   437 _SM2	=	0x009d
                           00009E   438 _SM1	=	0x009e
                           00009F   439 _SM0	=	0x009f
                           000088   440 _IT0	=	0x0088
                           000089   441 _IE0	=	0x0089
                           00008A   442 _IT1	=	0x008a
                           00008B   443 _IE1	=	0x008b
                           00008C   444 _TR0	=	0x008c
                           00008D   445 _TF0	=	0x008d
                           00008E   446 _TR1	=	0x008e
                           00008F   447 _TF1	=	0x008f
                                    448 ;--------------------------------------------------------
                                    449 ; overlayable register banks
                                    450 ;--------------------------------------------------------
                                    451 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        452 	.ds 8
                                    453 ;--------------------------------------------------------
                                    454 ; internal ram data
                                    455 ;--------------------------------------------------------
                                    456 	.area DSEG    (DATA)
                                    457 ;--------------------------------------------------------
                                    458 ; overlayable items in internal ram
                                    459 ;--------------------------------------------------------
                                    460 ;--------------------------------------------------------
                                    461 ; indirectly addressable internal ram data
                                    462 ;--------------------------------------------------------
                                    463 	.area ISEG    (DATA)
                                    464 ;--------------------------------------------------------
                                    465 ; absolute internal ram data
                                    466 ;--------------------------------------------------------
                                    467 	.area IABS    (ABS,DATA)
                                    468 	.area IABS    (ABS,DATA)
                                    469 ;--------------------------------------------------------
                                    470 ; bit data
                                    471 ;--------------------------------------------------------
                                    472 	.area BSEG    (BIT)
                                    473 ;--------------------------------------------------------
                                    474 ; paged external ram data
                                    475 ;--------------------------------------------------------
                                    476 	.area PSEG    (PAG,XDATA)
                                    477 ;--------------------------------------------------------
                                    478 ; external ram data
                                    479 ;--------------------------------------------------------
                                    480 	.area XSEG    (XDATA)
      00000C                        481 ___delay_us_d_65536_51:
      00000C                        482 	.ds 2
      00000E                        483 _I2C_Write_Byte_Byte_65536_66:
      00000E                        484 	.ds 1
      00000F                        485 _I2C_Read_Byte_RxData_65536_72:
      00000F                        486 	.ds 1
                                    487 ;--------------------------------------------------------
                                    488 ; absolute external ram data
                                    489 ;--------------------------------------------------------
                                    490 	.area XABS    (ABS,XDATA)
                                    491 ;--------------------------------------------------------
                                    492 ; external initialized ram data
                                    493 ;--------------------------------------------------------
                                    494 	.area XISEG   (XDATA)
                                    495 	.area HOME    (CODE)
                                    496 	.area GSINIT0 (CODE)
                                    497 	.area GSINIT1 (CODE)
                                    498 	.area GSINIT2 (CODE)
                                    499 	.area GSINIT3 (CODE)
                                    500 	.area GSINIT4 (CODE)
                                    501 	.area GSINIT5 (CODE)
                                    502 	.area GSINIT  (CODE)
                                    503 	.area GSFINAL (CODE)
                                    504 	.area CSEG    (CODE)
                                    505 ;--------------------------------------------------------
                                    506 ; global & static initialisations
                                    507 ;--------------------------------------------------------
                                    508 	.area HOME    (CODE)
                                    509 	.area GSINIT  (CODE)
                                    510 	.area GSFINAL (CODE)
                                    511 	.area GSINIT  (CODE)
                                    512 ;--------------------------------------------------------
                                    513 ; Home
                                    514 ;--------------------------------------------------------
                                    515 	.area HOME    (CODE)
                                    516 	.area HOME    (CODE)
                                    517 ;--------------------------------------------------------
                                    518 ; code
                                    519 ;--------------------------------------------------------
                                    520 	.area CSEG    (CODE)
                                    521 ;------------------------------------------------------------
                                    522 ;Allocation info for local variables in function '__delay_us'
                                    523 ;------------------------------------------------------------
                                    524 ;d                         Allocated with name '___delay_us_d_65536_51'
                                    525 ;i                         Allocated with name '___delay_us_i_65536_52'
                                    526 ;limit                     Allocated with name '___delay_us_limit_65536_52'
                                    527 ;------------------------------------------------------------
                                    528 ;	i2c.c:24: void __delay_us(unsigned int d)
                                    529 ;	-----------------------------------------
                                    530 ;	 function __delay_us
                                    531 ;	-----------------------------------------
      000259                        532 ___delay_us:
                           000007   533 	ar7 = 0x07
                           000006   534 	ar6 = 0x06
                           000005   535 	ar5 = 0x05
                           000004   536 	ar4 = 0x04
                           000003   537 	ar3 = 0x03
                           000002   538 	ar2 = 0x02
                           000001   539 	ar1 = 0x01
                           000000   540 	ar0 = 0x00
      000259 AF 83            [24]  541 	mov	r7,dph
      00025B E5 82            [12]  542 	mov	a,dpl
      00025D 90 00 0C         [24]  543 	mov	dptr,#___delay_us_d_65536_51
      000260 F0               [24]  544 	movx	@dptr,a
      000261 EF               [12]  545 	mov	a,r7
      000262 A3               [24]  546 	inc	dptr
      000263 F0               [24]  547 	movx	@dptr,a
                                    548 ;	i2c.c:27: limit = d/15;
      000264 90 00 0C         [24]  549 	mov	dptr,#___delay_us_d_65536_51
      000267 E0               [24]  550 	movx	a,@dptr
      000268 FE               [12]  551 	mov	r6,a
      000269 A3               [24]  552 	inc	dptr
      00026A E0               [24]  553 	movx	a,@dptr
      00026B FF               [12]  554 	mov	r7,a
      00026C 90 00 47         [24]  555 	mov	dptr,#__divuint_PARM_2
      00026F 74 0F            [12]  556 	mov	a,#0x0f
      000271 F0               [24]  557 	movx	@dptr,a
      000272 E4               [12]  558 	clr	a
      000273 A3               [24]  559 	inc	dptr
      000274 F0               [24]  560 	movx	@dptr,a
                                    561 ;	i2c.c:29: for(i=0;i<limit;i++);
      000275 8E 82            [24]  562 	mov	dpl,r6
      000277 8F 83            [24]  563 	mov	dph,r7
      000279 12 07 9B         [24]  564 	lcall	__divuint
      00027C AE 82            [24]  565 	mov	r6,dpl
      00027E AF 83            [24]  566 	mov	r7,dph
      000280 7C 00            [12]  567 	mov	r4,#0x00
      000282 7D 00            [12]  568 	mov	r5,#0x00
      000284                        569 00103$:
      000284 C3               [12]  570 	clr	c
      000285 EC               [12]  571 	mov	a,r4
      000286 9E               [12]  572 	subb	a,r6
      000287 ED               [12]  573 	mov	a,r5
      000288 9F               [12]  574 	subb	a,r7
      000289 50 07            [24]  575 	jnc	00105$
      00028B 0C               [12]  576 	inc	r4
      00028C BC 00 F5         [24]  577 	cjne	r4,#0x00,00103$
      00028F 0D               [12]  578 	inc	r5
      000290 80 F2            [24]  579 	sjmp	00103$
      000292                        580 00105$:
                                    581 ;	i2c.c:30: }
      000292 22               [24]  582 	ret
                                    583 ;------------------------------------------------------------
                                    584 ;Allocation info for local variables in function 'InitI2C'
                                    585 ;------------------------------------------------------------
                                    586 ;	i2c.c:32: void InitI2C(void)
                                    587 ;	-----------------------------------------
                                    588 ;	 function InitI2C
                                    589 ;	-----------------------------------------
      000293                        590 _InitI2C:
                                    591 ;	i2c.c:34: SDA = 1;
                                    592 ;	assignBit
      000293 D2 94            [12]  593 	setb	_P1_4
                                    594 ;	i2c.c:35: SCK = 1;
                                    595 ;	assignBit
      000295 D2 93            [12]  596 	setb	_P1_3
                                    597 ;	i2c.c:36: }
      000297 22               [24]  598 	ret
                                    599 ;------------------------------------------------------------
                                    600 ;Allocation info for local variables in function 'I2C_Start'
                                    601 ;------------------------------------------------------------
                                    602 ;	i2c.c:38: void I2C_Start(void)
                                    603 ;	-----------------------------------------
                                    604 ;	 function I2C_Start
                                    605 ;	-----------------------------------------
      000298                        606 _I2C_Start:
                                    607 ;	i2c.c:40: Set_SCK_High;				// Make SCK pin high
                                    608 ;	assignBit
      000298 D2 93            [12]  609 	setb	_P1_3
                                    610 ;	i2c.c:41: Set_SDA_High;				// Make SDA pin High
                                    611 ;	assignBit
      00029A D2 94            [12]  612 	setb	_P1_4
                                    613 ;	i2c.c:42: __delay_us(HalfBitDelay);	// Half bit delay
      00029C 90 01 F4         [24]  614 	mov	dptr,#0x01f4
      00029F 12 02 59         [24]  615 	lcall	___delay_us
                                    616 ;	i2c.c:43: Set_SDA_Low;				// Make SDA Low
                                    617 ;	assignBit
      0002A2 C2 94            [12]  618 	clr	_P1_4
                                    619 ;	i2c.c:44: __delay_us(HalfBitDelay);   // Half bit delay
      0002A4 90 01 F4         [24]  620 	mov	dptr,#0x01f4
      0002A7 12 02 59         [24]  621 	lcall	___delay_us
                                    622 ;	i2c.c:45: Set_SCK_Low;
                                    623 ;	assignBit
      0002AA C2 93            [12]  624 	clr	_P1_3
                                    625 ;	i2c.c:46: }
      0002AC 22               [24]  626 	ret
                                    627 ;------------------------------------------------------------
                                    628 ;Allocation info for local variables in function 'I2C_ReStart'
                                    629 ;------------------------------------------------------------
                                    630 ;	i2c.c:48: void I2C_ReStart(void)
                                    631 ;	-----------------------------------------
                                    632 ;	 function I2C_ReStart
                                    633 ;	-----------------------------------------
      0002AD                        634 _I2C_ReStart:
                                    635 ;	i2c.c:50: Set_SCK_Low;				// Make SCK pin low
                                    636 ;	assignBit
      0002AD C2 93            [12]  637 	clr	_P1_3
                                    638 ;	i2c.c:51: __delay_us(HalfBitDelay/2);	// Data pin should change it's value,
      0002AF 90 00 FA         [24]  639 	mov	dptr,#0x00fa
      0002B2 12 02 59         [24]  640 	lcall	___delay_us
                                    641 ;	i2c.c:53: Set_SDA_High;				// Make SDA pin High
                                    642 ;	assignBit
      0002B5 D2 94            [12]  643 	setb	_P1_4
                                    644 ;	i2c.c:55: __delay_us(HalfBitDelay/2);	// 1/4 bit delay
      0002B7 90 00 FA         [24]  645 	mov	dptr,#0x00fa
      0002BA 12 02 59         [24]  646 	lcall	___delay_us
                                    647 ;	i2c.c:56: Set_SCK_High;				// Make SCK pin high
                                    648 ;	assignBit
      0002BD D2 93            [12]  649 	setb	_P1_3
                                    650 ;	i2c.c:57: __delay_us(HalfBitDelay/2);	// 1/4 bit delay
      0002BF 90 00 FA         [24]  651 	mov	dptr,#0x00fa
      0002C2 12 02 59         [24]  652 	lcall	___delay_us
                                    653 ;	i2c.c:58: Set_SDA_Low;				// Make SDA Low
                                    654 ;	assignBit
      0002C5 C2 94            [12]  655 	clr	_P1_4
                                    656 ;	i2c.c:59: __delay_us(HalfBitDelay/2);	// 1/4 bit delay
      0002C7 90 00 FA         [24]  657 	mov	dptr,#0x00fa
                                    658 ;	i2c.c:60: }
      0002CA 02 02 59         [24]  659 	ljmp	___delay_us
                                    660 ;------------------------------------------------------------
                                    661 ;Allocation info for local variables in function 'I2C_Stop'
                                    662 ;------------------------------------------------------------
                                    663 ;	i2c.c:62: void I2C_Stop(void)
                                    664 ;	-----------------------------------------
                                    665 ;	 function I2C_Stop
                                    666 ;	-----------------------------------------
      0002CD                        667 _I2C_Stop:
                                    668 ;	i2c.c:64: Set_SDA_Low;				// Make SDA pin low
                                    669 ;	assignBit
      0002CD C2 94            [12]  670 	clr	_P1_4
                                    671 ;	i2c.c:65: __delay_us(HalfBitDelay/2);	// 1/4 bit delay
      0002CF 90 00 FA         [24]  672 	mov	dptr,#0x00fa
      0002D2 12 02 59         [24]  673 	lcall	___delay_us
                                    674 ;	i2c.c:66: Set_SCK_High;				// Make SCK pin high
                                    675 ;	assignBit
      0002D5 D2 93            [12]  676 	setb	_P1_3
                                    677 ;	i2c.c:67: __delay_us(HalfBitDelay/2);	// 1/4 bit delay
      0002D7 90 00 FA         [24]  678 	mov	dptr,#0x00fa
      0002DA 12 02 59         [24]  679 	lcall	___delay_us
                                    680 ;	i2c.c:68: Set_SDA_High;				// Make SDA high
                                    681 ;	assignBit
      0002DD D2 94            [12]  682 	setb	_P1_4
                                    683 ;	i2c.c:69: __delay_us(HalfBitDelay/2); // 1/4 bit delay
      0002DF 90 00 FA         [24]  684 	mov	dptr,#0x00fa
      0002E2 12 02 59         [24]  685 	lcall	___delay_us
                                    686 ;	i2c.c:70: Set_SCK_Low;
                                    687 ;	assignBit
      0002E5 C2 93            [12]  688 	clr	_P1_3
                                    689 ;	i2c.c:71: }
      0002E7 22               [24]  690 	ret
                                    691 ;------------------------------------------------------------
                                    692 ;Allocation info for local variables in function 'I2C_Send_ACK'
                                    693 ;------------------------------------------------------------
                                    694 ;	i2c.c:73: void I2C_Send_ACK(void)
                                    695 ;	-----------------------------------------
                                    696 ;	 function I2C_Send_ACK
                                    697 ;	-----------------------------------------
      0002E8                        698 _I2C_Send_ACK:
                                    699 ;	i2c.c:75: Set_SCK_Low;				// Make SCK pin low
                                    700 ;	assignBit
      0002E8 C2 93            [12]  701 	clr	_P1_3
                                    702 ;	i2c.c:76: __delay_us(HalfBitDelay/2);	// Data pin should change it's value,
      0002EA 90 00 FA         [24]  703 	mov	dptr,#0x00fa
      0002ED 12 02 59         [24]  704 	lcall	___delay_us
                                    705 ;	i2c.c:78: Set_SDA_Low;				// Make SDA Low
                                    706 ;	assignBit
      0002F0 C2 94            [12]  707 	clr	_P1_4
                                    708 ;	i2c.c:79: __delay_us(HalfBitDelay/2);	// 1/4 bit delay
      0002F2 90 00 FA         [24]  709 	mov	dptr,#0x00fa
      0002F5 12 02 59         [24]  710 	lcall	___delay_us
                                    711 ;	i2c.c:80: Set_SCK_High;				// Make SCK pin high
                                    712 ;	assignBit
      0002F8 D2 93            [12]  713 	setb	_P1_3
                                    714 ;	i2c.c:81: __delay_us(HalfBitDelay);	// Half bit delay
      0002FA 90 01 F4         [24]  715 	mov	dptr,#0x01f4
                                    716 ;	i2c.c:82: }
      0002FD 02 02 59         [24]  717 	ljmp	___delay_us
                                    718 ;------------------------------------------------------------
                                    719 ;Allocation info for local variables in function 'I2C_Send_NACK'
                                    720 ;------------------------------------------------------------
                                    721 ;	i2c.c:86: void I2C_Send_NACK(void)
                                    722 ;	-----------------------------------------
                                    723 ;	 function I2C_Send_NACK
                                    724 ;	-----------------------------------------
      000300                        725 _I2C_Send_NACK:
                                    726 ;	i2c.c:88: Set_SCK_Low;				// Make SCK pin low
                                    727 ;	assignBit
      000300 C2 93            [12]  728 	clr	_P1_3
                                    729 ;	i2c.c:89: __delay_us(HalfBitDelay/2);	// Data pin should change it's value,
      000302 90 00 FA         [24]  730 	mov	dptr,#0x00fa
      000305 12 02 59         [24]  731 	lcall	___delay_us
                                    732 ;	i2c.c:91: Set_SDA_High;				// Make SDA high
                                    733 ;	assignBit
      000308 D2 94            [12]  734 	setb	_P1_4
                                    735 ;	i2c.c:92: __delay_us(HalfBitDelay/2);	// 1/4 bit delay
      00030A 90 00 FA         [24]  736 	mov	dptr,#0x00fa
      00030D 12 02 59         [24]  737 	lcall	___delay_us
                                    738 ;	i2c.c:93: Set_SCK_High;				// Make SCK pin high
                                    739 ;	assignBit
      000310 D2 93            [12]  740 	setb	_P1_3
                                    741 ;	i2c.c:94: __delay_us(HalfBitDelay);	// Half bit delay
      000312 90 01 F4         [24]  742 	mov	dptr,#0x01f4
                                    743 ;	i2c.c:95: }
      000315 02 02 59         [24]  744 	ljmp	___delay_us
                                    745 ;------------------------------------------------------------
                                    746 ;Allocation info for local variables in function 'I2C_Write_Byte'
                                    747 ;------------------------------------------------------------
                                    748 ;Byte                      Allocated with name '_I2C_Write_Byte_Byte_65536_66'
                                    749 ;i                         Allocated with name '_I2C_Write_Byte_i_65536_67'
                                    750 ;get_byte                  Allocated with name '_I2C_Write_Byte_get_byte_65537_70'
                                    751 ;------------------------------------------------------------
                                    752 ;	i2c.c:99: unsigned char I2C_Write_Byte(unsigned char Byte)
                                    753 ;	-----------------------------------------
                                    754 ;	 function I2C_Write_Byte
                                    755 ;	-----------------------------------------
      000318                        756 _I2C_Write_Byte:
      000318 E5 82            [12]  757 	mov	a,dpl
      00031A 90 00 0E         [24]  758 	mov	dptr,#_I2C_Write_Byte_Byte_65536_66
      00031D F0               [24]  759 	movx	@dptr,a
                                    760 ;	i2c.c:103: for(i=0;i<8;i++)		// Repeat for every bit
      00031E E0               [24]  761 	movx	a,@dptr
      00031F FF               [12]  762 	mov	r7,a
      000320 7E 00            [12]  763 	mov	r6,#0x00
      000322                        764 00108$:
                                    765 ;	i2c.c:105: Set_SCK_Low;		//when the SCL (clk) bus is low/ 0 we can make changes
                                    766 ;	assignBit
      000322 C2 93            [12]  767 	clr	_P1_3
                                    768 ;	i2c.c:106: __delay_us(HalfBitDelay/2);	// Data pin should change it's value,
      000324 90 00 FA         [24]  769 	mov	dptr,#0x00fa
      000327 C0 07            [24]  770 	push	ar7
      000329 C0 06            [24]  771 	push	ar6
      00032B 12 02 59         [24]  772 	lcall	___delay_us
      00032E D0 06            [24]  773 	pop	ar6
      000330 D0 07            [24]  774 	pop	ar7
                                    775 ;	i2c.c:109: if((Byte<<i)&0x80)  // Place data bit value on SDA pin
      000332 8F 04            [24]  776 	mov	ar4,r7
      000334 7D 00            [12]  777 	mov	r5,#0x00
      000336 8E F0            [24]  778 	mov	b,r6
      000338 05 F0            [12]  779 	inc	b
      00033A 80 06            [24]  780 	sjmp	00134$
      00033C                        781 00133$:
      00033C EC               [12]  782 	mov	a,r4
      00033D 2C               [12]  783 	add	a,r4
      00033E FC               [12]  784 	mov	r4,a
      00033F ED               [12]  785 	mov	a,r5
      000340 33               [12]  786 	rlc	a
      000341 FD               [12]  787 	mov	r5,a
      000342                        788 00134$:
      000342 D5 F0 F7         [24]  789 	djnz	b,00133$
      000345 EC               [12]  790 	mov	a,r4
      000346 30 E7 04         [24]  791 	jnb	acc.7,00102$
                                    792 ;	i2c.c:110: Set_SDA_High;	// If bit is high, make SDA high
                                    793 ;	assignBit
      000349 D2 94            [12]  794 	setb	_P1_4
      00034B 80 02            [24]  795 	sjmp	00103$
      00034D                        796 00102$:
                                    797 ;	i2c.c:112: Set_SDA_Low;	// If bit is low, make SDA low
                                    798 ;	assignBit
      00034D C2 94            [12]  799 	clr	_P1_4
      00034F                        800 00103$:
                                    801 ;	i2c.c:114: __delay_us(HalfBitDelay/2);	// Toggle SCK pin so that slave can latch data bit
      00034F 90 00 FA         [24]  802 	mov	dptr,#0x00fa
      000352 C0 07            [24]  803 	push	ar7
      000354 C0 06            [24]  804 	push	ar6
      000356 12 02 59         [24]  805 	lcall	___delay_us
                                    806 ;	i2c.c:115: Set_SCK_High;
                                    807 ;	assignBit
      000359 D2 93            [12]  808 	setb	_P1_3
                                    809 ;	i2c.c:116: __delay_us(HalfBitDelay);
      00035B 90 01 F4         [24]  810 	mov	dptr,#0x01f4
      00035E 12 02 59         [24]  811 	lcall	___delay_us
      000361 D0 06            [24]  812 	pop	ar6
      000363 D0 07            [24]  813 	pop	ar7
                                    814 ;	i2c.c:103: for(i=0;i<8;i++)		// Repeat for every bit
      000365 0E               [12]  815 	inc	r6
      000366 BE 08 00         [24]  816 	cjne	r6,#0x08,00136$
      000369                        817 00136$:
      000369 40 B7            [24]  818 	jc	00108$
                                    819 ;	i2c.c:120: Set_SCK_Low;
                                    820 ;	assignBit
      00036B C2 93            [12]  821 	clr	_P1_3
                                    822 ;	i2c.c:121: Set_SDA_High;
                                    823 ;	assignBit
      00036D D2 94            [12]  824 	setb	_P1_4
                                    825 ;	i2c.c:122: __delay_us(HalfBitDelay);
      00036F 90 01 F4         [24]  826 	mov	dptr,#0x01f4
      000372 12 02 59         [24]  827 	lcall	___delay_us
                                    828 ;	i2c.c:123: Set_SCK_High;
                                    829 ;	assignBit
      000375 D2 93            [12]  830 	setb	_P1_3
                                    831 ;	i2c.c:124: __delay_us(HalfBitDelay);
      000377 90 01 F4         [24]  832 	mov	dptr,#0x01f4
      00037A 12 02 59         [24]  833 	lcall	___delay_us
                                    834 ;	i2c.c:126: while (SDA != 0);
      00037D                        835 00105$:
      00037D 20 94 FD         [24]  836 	jb	_P1_4,00105$
                                    837 ;	i2c.c:127: __delay_us(HalfBitDelay/2);
      000380 90 00 FA         [24]  838 	mov	dptr,#0x00fa
      000383 12 02 59         [24]  839 	lcall	___delay_us
                                    840 ;	i2c.c:128: Set_SCK_Low;
                                    841 ;	assignBit
      000386 C2 93            [12]  842 	clr	_P1_3
                                    843 ;	i2c.c:129: __delay_us(HalfBitDelay);
      000388 90 01 F4         [24]  844 	mov	dptr,#0x01f4
      00038B 12 02 59         [24]  845 	lcall	___delay_us
                                    846 ;	i2c.c:130: int get_byte=SDA;
      00038E A2 94            [12]  847 	mov	c,_P1_4
      000390 E4               [12]  848 	clr	a
      000391 33               [12]  849 	rlc	a
                                    850 ;	i2c.c:132: return get_byte;
                                    851 ;	i2c.c:133: }
      000392 F5 82            [12]  852 	mov	dpl,a
      000394 22               [24]  853 	ret
                                    854 ;------------------------------------------------------------
                                    855 ;Allocation info for local variables in function 'I2C_Read_Byte'
                                    856 ;------------------------------------------------------------
                                    857 ;i                         Allocated with name '_I2C_Read_Byte_i_65536_72'
                                    858 ;d                         Allocated with name '_I2C_Read_Byte_d_65536_72'
                                    859 ;RxData                    Allocated with name '_I2C_Read_Byte_RxData_65536_72'
                                    860 ;------------------------------------------------------------
                                    861 ;	i2c.c:137: unsigned char I2C_Read_Byte(void)
                                    862 ;	-----------------------------------------
                                    863 ;	 function I2C_Read_Byte
                                    864 ;	-----------------------------------------
      000395                        865 _I2C_Read_Byte:
                                    866 ;	i2c.c:139: unsigned char i, d, RxData = 0;
      000395 90 00 0F         [24]  867 	mov	dptr,#_I2C_Read_Byte_RxData_65536_72
      000398 E4               [12]  868 	clr	a
      000399 F0               [24]  869 	movx	@dptr,a
                                    870 ;	i2c.c:141: for(i=0;i<8;i++)
      00039A 7F 00            [12]  871 	mov	r7,#0x00
      00039C                        872 00102$:
                                    873 ;	i2c.c:143: Set_SCK_Low;
                                    874 ;	assignBit
      00039C C2 93            [12]  875 	clr	_P1_3
                                    876 ;	i2c.c:144: __delay_us(HalfBitDelay);
      00039E 90 01 F4         [24]  877 	mov	dptr,#0x01f4
      0003A1 C0 07            [24]  878 	push	ar7
      0003A3 12 02 59         [24]  879 	lcall	___delay_us
      0003A6 D0 07            [24]  880 	pop	ar7
                                    881 ;	i2c.c:145: d = SDA;
      0003A8 A2 94            [12]  882 	mov	c,_P1_4
      0003AA E4               [12]  883 	clr	a
      0003AB 33               [12]  884 	rlc	a
      0003AC FE               [12]  885 	mov	r6,a
                                    886 ;	i2c.c:146: RxData = RxData|(d<<(7-i));
      0003AD 8F 05            [24]  887 	mov	ar5,r7
      0003AF 74 07            [12]  888 	mov	a,#0x07
      0003B1 C3               [12]  889 	clr	c
      0003B2 9D               [12]  890 	subb	a,r5
      0003B3 FD               [12]  891 	mov	r5,a
      0003B4 8D F0            [24]  892 	mov	b,r5
      0003B6 05 F0            [12]  893 	inc	b
      0003B8 EE               [12]  894 	mov	a,r6
      0003B9 80 02            [24]  895 	sjmp	00117$
      0003BB                        896 00115$:
      0003BB 25 E0            [12]  897 	add	a,acc
      0003BD                        898 00117$:
      0003BD D5 F0 FB         [24]  899 	djnz	b,00115$
      0003C0 FD               [12]  900 	mov	r5,a
      0003C1 90 00 0F         [24]  901 	mov	dptr,#_I2C_Read_Byte_RxData_65536_72
      0003C4 E0               [24]  902 	movx	a,@dptr
      0003C5 4D               [12]  903 	orl	a,r5
      0003C6 F0               [24]  904 	movx	@dptr,a
                                    905 ;	i2c.c:147: Set_SCK_High;
                                    906 ;	assignBit
      0003C7 D2 93            [12]  907 	setb	_P1_3
                                    908 ;	i2c.c:148: __delay_us(HalfBitDelay);
      0003C9 90 01 F4         [24]  909 	mov	dptr,#0x01f4
      0003CC C0 07            [24]  910 	push	ar7
      0003CE 12 02 59         [24]  911 	lcall	___delay_us
      0003D1 D0 07            [24]  912 	pop	ar7
                                    913 ;	i2c.c:141: for(i=0;i<8;i++)
      0003D3 0F               [12]  914 	inc	r7
      0003D4 BF 08 00         [24]  915 	cjne	r7,#0x08,00118$
      0003D7                        916 00118$:
      0003D7 40 C3            [24]  917 	jc	00102$
                                    918 ;	i2c.c:151: return RxData;						// Return received byte
      0003D9 90 00 0F         [24]  919 	mov	dptr,#_I2C_Read_Byte_RxData_65536_72
      0003DC E0               [24]  920 	movx	a,@dptr
                                    921 ;	i2c.c:152: }
      0003DD F5 82            [12]  922 	mov	dpl,a
      0003DF 22               [24]  923 	ret
                                    924 	.area CSEG    (CODE)
                                    925 	.area CONST   (CODE)
                                    926 	.area XINIT   (CODE)
                                    927 	.area CABS    (ABS,CODE)
