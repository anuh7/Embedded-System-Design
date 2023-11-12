                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module eeprom
                                      6 	.optsdcc -mmcs51 --model-large
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _I2C_Read_Byte
                                     12 	.globl _I2C_Write_Byte
                                     13 	.globl _I2C_Send_NACK
                                     14 	.globl _I2C_Stop
                                     15 	.globl _I2C_ReStart
                                     16 	.globl _I2C_Start
                                     17 	.globl ___delay_us
                                     18 	.globl _printf
                                     19 	.globl _TF1
                                     20 	.globl _TR1
                                     21 	.globl _TF0
                                     22 	.globl _TR0
                                     23 	.globl _IE1
                                     24 	.globl _IT1
                                     25 	.globl _IE0
                                     26 	.globl _IT0
                                     27 	.globl _SM0
                                     28 	.globl _SM1
                                     29 	.globl _SM2
                                     30 	.globl _REN
                                     31 	.globl _TB8
                                     32 	.globl _RB8
                                     33 	.globl _TI
                                     34 	.globl _RI
                                     35 	.globl _CY
                                     36 	.globl _AC
                                     37 	.globl _F0
                                     38 	.globl _RS1
                                     39 	.globl _RS0
                                     40 	.globl _OV
                                     41 	.globl _F1
                                     42 	.globl _P
                                     43 	.globl _RD
                                     44 	.globl _WR
                                     45 	.globl _T1
                                     46 	.globl _T0
                                     47 	.globl _INT1
                                     48 	.globl _INT0
                                     49 	.globl _TXD0
                                     50 	.globl _TXD
                                     51 	.globl _RXD0
                                     52 	.globl _RXD
                                     53 	.globl _P3_7
                                     54 	.globl _P3_6
                                     55 	.globl _P3_5
                                     56 	.globl _P3_4
                                     57 	.globl _P3_3
                                     58 	.globl _P3_2
                                     59 	.globl _P3_1
                                     60 	.globl _P3_0
                                     61 	.globl _P2_7
                                     62 	.globl _P2_6
                                     63 	.globl _P2_5
                                     64 	.globl _P2_4
                                     65 	.globl _P2_3
                                     66 	.globl _P2_2
                                     67 	.globl _P2_1
                                     68 	.globl _P2_0
                                     69 	.globl _P1_7
                                     70 	.globl _P1_6
                                     71 	.globl _P1_5
                                     72 	.globl _P1_4
                                     73 	.globl _P1_3
                                     74 	.globl _P1_2
                                     75 	.globl _P1_1
                                     76 	.globl _P1_0
                                     77 	.globl _P0_7
                                     78 	.globl _P0_6
                                     79 	.globl _P0_5
                                     80 	.globl _P0_4
                                     81 	.globl _P0_3
                                     82 	.globl _P0_2
                                     83 	.globl _P0_1
                                     84 	.globl _P0_0
                                     85 	.globl _PS
                                     86 	.globl _PT1
                                     87 	.globl _PX1
                                     88 	.globl _PT0
                                     89 	.globl _PX0
                                     90 	.globl _EA
                                     91 	.globl _ES
                                     92 	.globl _ET1
                                     93 	.globl _EX1
                                     94 	.globl _ET0
                                     95 	.globl _EX0
                                     96 	.globl _BREG_F7
                                     97 	.globl _BREG_F6
                                     98 	.globl _BREG_F5
                                     99 	.globl _BREG_F4
                                    100 	.globl _BREG_F3
                                    101 	.globl _BREG_F2
                                    102 	.globl _BREG_F1
                                    103 	.globl _BREG_F0
                                    104 	.globl _P5_7
                                    105 	.globl _P5_6
                                    106 	.globl _P5_5
                                    107 	.globl _P5_4
                                    108 	.globl _P5_3
                                    109 	.globl _P5_2
                                    110 	.globl _P5_1
                                    111 	.globl _P5_0
                                    112 	.globl _P4_7
                                    113 	.globl _P4_6
                                    114 	.globl _P4_5
                                    115 	.globl _P4_4
                                    116 	.globl _P4_3
                                    117 	.globl _P4_2
                                    118 	.globl _P4_1
                                    119 	.globl _P4_0
                                    120 	.globl _PX0L
                                    121 	.globl _PT0L
                                    122 	.globl _PX1L
                                    123 	.globl _PT1L
                                    124 	.globl _PSL
                                    125 	.globl _PT2L
                                    126 	.globl _PPCL
                                    127 	.globl _EC
                                    128 	.globl _CCF0
                                    129 	.globl _CCF1
                                    130 	.globl _CCF2
                                    131 	.globl _CCF3
                                    132 	.globl _CCF4
                                    133 	.globl _CR
                                    134 	.globl _CF
                                    135 	.globl _TF2
                                    136 	.globl _EXF2
                                    137 	.globl _RCLK
                                    138 	.globl _TCLK
                                    139 	.globl _EXEN2
                                    140 	.globl _TR2
                                    141 	.globl _C_T2
                                    142 	.globl _CP_RL2
                                    143 	.globl _T2CON_7
                                    144 	.globl _T2CON_6
                                    145 	.globl _T2CON_5
                                    146 	.globl _T2CON_4
                                    147 	.globl _T2CON_3
                                    148 	.globl _T2CON_2
                                    149 	.globl _T2CON_1
                                    150 	.globl _T2CON_0
                                    151 	.globl _PT2
                                    152 	.globl _ET2
                                    153 	.globl _TMOD
                                    154 	.globl _TL1
                                    155 	.globl _TL0
                                    156 	.globl _TH1
                                    157 	.globl _TH0
                                    158 	.globl _TCON
                                    159 	.globl _SP
                                    160 	.globl _SCON
                                    161 	.globl _SBUF0
                                    162 	.globl _SBUF
                                    163 	.globl _PSW
                                    164 	.globl _PCON
                                    165 	.globl _P3
                                    166 	.globl _P2
                                    167 	.globl _P1
                                    168 	.globl _P0
                                    169 	.globl _IP
                                    170 	.globl _IE
                                    171 	.globl _DP0L
                                    172 	.globl _DPL
                                    173 	.globl _DP0H
                                    174 	.globl _DPH
                                    175 	.globl _B
                                    176 	.globl _ACC
                                    177 	.globl _EECON
                                    178 	.globl _KBF
                                    179 	.globl _KBE
                                    180 	.globl _KBLS
                                    181 	.globl _BRL
                                    182 	.globl _BDRCON
                                    183 	.globl _T2MOD
                                    184 	.globl _SPDAT
                                    185 	.globl _SPSTA
                                    186 	.globl _SPCON
                                    187 	.globl _SADEN
                                    188 	.globl _SADDR
                                    189 	.globl _WDTPRG
                                    190 	.globl _WDTRST
                                    191 	.globl _P5
                                    192 	.globl _P4
                                    193 	.globl _IPH1
                                    194 	.globl _IPL1
                                    195 	.globl _IPH0
                                    196 	.globl _IPL0
                                    197 	.globl _IEN1
                                    198 	.globl _IEN0
                                    199 	.globl _CMOD
                                    200 	.globl _CL
                                    201 	.globl _CH
                                    202 	.globl _CCON
                                    203 	.globl _CCAPM4
                                    204 	.globl _CCAPM3
                                    205 	.globl _CCAPM2
                                    206 	.globl _CCAPM1
                                    207 	.globl _CCAPM0
                                    208 	.globl _CCAP4L
                                    209 	.globl _CCAP3L
                                    210 	.globl _CCAP2L
                                    211 	.globl _CCAP1L
                                    212 	.globl _CCAP0L
                                    213 	.globl _CCAP4H
                                    214 	.globl _CCAP3H
                                    215 	.globl _CCAP2H
                                    216 	.globl _CCAP1H
                                    217 	.globl _CCAP0H
                                    218 	.globl _CKCON1
                                    219 	.globl _CKCON0
                                    220 	.globl _CKRL
                                    221 	.globl _AUXR1
                                    222 	.globl _AUXR
                                    223 	.globl _TH2
                                    224 	.globl _TL2
                                    225 	.globl _RCAP2H
                                    226 	.globl _RCAP2L
                                    227 	.globl _T2CON
                                    228 	.globl _hexdump_PARM_2
                                    229 	.globl _Write_Byte_To_EEPROM_PARM_2
                                    230 	.globl _Write_Byte_To_EEPROM
                                    231 	.globl _Read_Byte_From_EEPROM
                                    232 	.globl _hexdump
                                    233 	.globl _reset_eeprom
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
      000001                        486 _Write_Byte_To_EEPROM_PARM_2:
      000001                        487 	.ds 1
      000002                        488 _Write_Byte_To_EEPROM_Address_65536_61:
      000002                        489 	.ds 2
      000004                        490 _Read_Byte_From_EEPROM_Address_65536_64:
      000004                        491 	.ds 2
      000006                        492 _hexdump_PARM_2:
      000006                        493 	.ds 2
      000008                        494 _hexdump_address1_65536_67:
      000008                        495 	.ds 2
      00000A                        496 _hexdump_size_65536_68:
      00000A                        497 	.ds 2
                                    498 ;--------------------------------------------------------
                                    499 ; absolute external ram data
                                    500 ;--------------------------------------------------------
                                    501 	.area XABS    (ABS,XDATA)
                                    502 ;--------------------------------------------------------
                                    503 ; external initialized ram data
                                    504 ;--------------------------------------------------------
                                    505 	.area XISEG   (XDATA)
                                    506 	.area HOME    (CODE)
                                    507 	.area GSINIT0 (CODE)
                                    508 	.area GSINIT1 (CODE)
                                    509 	.area GSINIT2 (CODE)
                                    510 	.area GSINIT3 (CODE)
                                    511 	.area GSINIT4 (CODE)
                                    512 	.area GSINIT5 (CODE)
                                    513 	.area GSINIT  (CODE)
                                    514 	.area GSFINAL (CODE)
                                    515 	.area CSEG    (CODE)
                                    516 ;--------------------------------------------------------
                                    517 ; global & static initialisations
                                    518 ;--------------------------------------------------------
                                    519 	.area HOME    (CODE)
                                    520 	.area GSINIT  (CODE)
                                    521 	.area GSFINAL (CODE)
                                    522 	.area GSINIT  (CODE)
                                    523 ;--------------------------------------------------------
                                    524 ; Home
                                    525 ;--------------------------------------------------------
                                    526 	.area HOME    (CODE)
                                    527 	.area HOME    (CODE)
                                    528 ;--------------------------------------------------------
                                    529 ; code
                                    530 ;--------------------------------------------------------
                                    531 	.area CSEG    (CODE)
                                    532 ;------------------------------------------------------------
                                    533 ;Allocation info for local variables in function 'Write_Byte_To_EEPROM'
                                    534 ;------------------------------------------------------------
                                    535 ;DataByte                  Allocated with name '_Write_Byte_To_EEPROM_PARM_2'
                                    536 ;Address                   Allocated with name '_Write_Byte_To_EEPROM_Address_65536_61'
                                    537 ;block_merge               Allocated with name '_Write_Byte_To_EEPROM_block_merge_65537_63'
                                    538 ;------------------------------------------------------------
                                    539 ;	eeprom.c:29: void Write_Byte_To_EEPROM(unsigned int Address, unsigned char DataByte)
                                    540 ;	-----------------------------------------
                                    541 ;	 function Write_Byte_To_EEPROM
                                    542 ;	-----------------------------------------
      000090                        543 _Write_Byte_To_EEPROM:
                           000007   544 	ar7 = 0x07
                           000006   545 	ar6 = 0x06
                           000005   546 	ar5 = 0x05
                           000004   547 	ar4 = 0x04
                           000003   548 	ar3 = 0x03
                           000002   549 	ar2 = 0x02
                           000001   550 	ar1 = 0x01
                           000000   551 	ar0 = 0x00
      000090 AF 83            [24]  552 	mov	r7,dph
      000092 E5 82            [12]  553 	mov	a,dpl
      000094 90 00 02         [24]  554 	mov	dptr,#_Write_Byte_To_EEPROM_Address_65536_61
      000097 F0               [24]  555 	movx	@dptr,a
      000098 EF               [12]  556 	mov	a,r7
      000099 A3               [24]  557 	inc	dptr
      00009A F0               [24]  558 	movx	@dptr,a
                                    559 ;	eeprom.c:31: I2C_Start();										                // Start i2c communication
      00009B 12 02 98         [24]  560 	lcall	_I2C_Start
                                    561 ;	eeprom.c:32: signed char block_merge = ((unsigned char)((Address>>8)<<1));  //WORD ADDRESS, block address 0111
      00009E 90 00 02         [24]  562 	mov	dptr,#_Write_Byte_To_EEPROM_Address_65536_61
      0000A1 E0               [24]  563 	movx	a,@dptr
      0000A2 FE               [12]  564 	mov	r6,a
      0000A3 A3               [24]  565 	inc	dptr
      0000A4 E0               [24]  566 	movx	a,@dptr
      0000A5 FF               [12]  567 	mov	r7,a
      0000A6 FD               [12]  568 	mov	r5,a
      0000A7 ED               [12]  569 	mov	a,r5
      0000A8 2D               [12]  570 	add	a,r5
      0000A9 FD               [12]  571 	mov	r5,a
                                    572 ;	eeprom.c:33: I2C_Write_Byte(0XA0 | block_merge);
      0000AA 43 05 A0         [24]  573 	orl	ar5,#0xa0
      0000AD 8D 82            [24]  574 	mov	dpl,r5
      0000AF C0 07            [24]  575 	push	ar7
      0000B1 C0 06            [24]  576 	push	ar6
      0000B3 12 03 18         [24]  577 	lcall	_I2C_Write_Byte
      0000B6 D0 06            [24]  578 	pop	ar6
      0000B8 D0 07            [24]  579 	pop	ar7
                                    580 ;	eeprom.c:34: I2C_Write_Byte((unsigned char)Address);				// Write Address lower byte
      0000BA 8E 82            [24]  581 	mov	dpl,r6
      0000BC 12 03 18         [24]  582 	lcall	_I2C_Write_Byte
                                    583 ;	eeprom.c:35: I2C_Write_Byte(DataByte);							// Write data byte
      0000BF 90 00 01         [24]  584 	mov	dptr,#_Write_Byte_To_EEPROM_PARM_2
      0000C2 E0               [24]  585 	movx	a,@dptr
      0000C3 F5 82            [12]  586 	mov	dpl,a
      0000C5 12 03 18         [24]  587 	lcall	_I2C_Write_Byte
                                    588 ;	eeprom.c:36: I2C_Stop();											// Stop i2c communication
                                    589 ;	eeprom.c:37: }
      0000C8 02 02 CD         [24]  590 	ljmp	_I2C_Stop
                                    591 ;------------------------------------------------------------
                                    592 ;Allocation info for local variables in function 'Read_Byte_From_EEPROM'
                                    593 ;------------------------------------------------------------
                                    594 ;Address                   Allocated with name '_Read_Byte_From_EEPROM_Address_65536_64'
                                    595 ;Byte                      Allocated with name '_Read_Byte_From_EEPROM_Byte_65536_65'
                                    596 ;block_merge               Allocated with name '_Read_Byte_From_EEPROM_block_merge_65537_66'
                                    597 ;control_byte              Allocated with name '_Read_Byte_From_EEPROM_control_byte_65537_66'
                                    598 ;------------------------------------------------------------
                                    599 ;	eeprom.c:40: unsigned char Read_Byte_From_EEPROM(unsigned int Address)
                                    600 ;	-----------------------------------------
                                    601 ;	 function Read_Byte_From_EEPROM
                                    602 ;	-----------------------------------------
      0000CB                        603 _Read_Byte_From_EEPROM:
      0000CB AF 83            [24]  604 	mov	r7,dph
      0000CD E5 82            [12]  605 	mov	a,dpl
      0000CF 90 00 04         [24]  606 	mov	dptr,#_Read_Byte_From_EEPROM_Address_65536_64
      0000D2 F0               [24]  607 	movx	@dptr,a
      0000D3 EF               [12]  608 	mov	a,r7
      0000D4 A3               [24]  609 	inc	dptr
      0000D5 F0               [24]  610 	movx	@dptr,a
                                    611 ;	eeprom.c:44: I2C_Start();										// Start i2c communication
      0000D6 12 02 98         [24]  612 	lcall	_I2C_Start
                                    613 ;	eeprom.c:45: unsigned char block_merge=((unsigned char)(Address>>8)<<1);
      0000D9 90 00 04         [24]  614 	mov	dptr,#_Read_Byte_From_EEPROM_Address_65536_64
      0000DC E0               [24]  615 	movx	a,@dptr
      0000DD FE               [12]  616 	mov	r6,a
      0000DE A3               [24]  617 	inc	dptr
      0000DF E0               [24]  618 	movx	a,@dptr
      0000E0 FF               [12]  619 	mov	r7,a
      0000E1 FD               [12]  620 	mov	r5,a
      0000E2 2D               [12]  621 	add	a,r5
      0000E3 FD               [12]  622 	mov	r5,a
                                    623 ;	eeprom.c:46: unsigned char control_byte =(0xA0 | block_merge);
      0000E4 43 05 A0         [24]  624 	orl	ar5,#0xa0
                                    625 ;	eeprom.c:47: I2C_Write_Byte((0XA0 | block_merge));
      0000E7 8D 82            [24]  626 	mov	dpl,r5
      0000E9 C0 07            [24]  627 	push	ar7
      0000EB C0 06            [24]  628 	push	ar6
      0000ED C0 05            [24]  629 	push	ar5
      0000EF 12 03 18         [24]  630 	lcall	_I2C_Write_Byte
      0000F2 D0 05            [24]  631 	pop	ar5
      0000F4 D0 06            [24]  632 	pop	ar6
      0000F6 D0 07            [24]  633 	pop	ar7
                                    634 ;	eeprom.c:48: I2C_Write_Byte((unsigned char)Address);	            // Write Address lower byte
      0000F8 8E 82            [24]  635 	mov	dpl,r6
      0000FA C0 05            [24]  636 	push	ar5
      0000FC 12 03 18         [24]  637 	lcall	_I2C_Write_Byte
                                    638 ;	eeprom.c:49: I2C_ReStart();										// Restart i2c
      0000FF 12 02 AD         [24]  639 	lcall	_I2C_ReStart
      000102 D0 05            [24]  640 	pop	ar5
                                    641 ;	eeprom.c:50: I2C_Write_Byte(control_byte | 1);                   // Send i2c address of 24LC64 EEPROM with read command
      000104 43 05 01         [24]  642 	orl	ar5,#0x01
      000107 8D 82            [24]  643 	mov	dpl,r5
      000109 12 03 18         [24]  644 	lcall	_I2C_Write_Byte
                                    645 ;	eeprom.c:51: Byte = I2C_Read_Byte();								// Read byte from EEPROM
      00010C 12 03 95         [24]  646 	lcall	_I2C_Read_Byte
      00010F AF 82            [24]  647 	mov	r7,dpl
                                    648 ;	eeprom.c:52: I2C_Send_NACK();                                    // Send a NACK to indiacate single byte read is complete
      000111 C0 07            [24]  649 	push	ar7
      000113 12 03 00         [24]  650 	lcall	_I2C_Send_NACK
                                    651 ;	eeprom.c:53: I2C_Stop();
      000116 12 02 CD         [24]  652 	lcall	_I2C_Stop
      000119 D0 07            [24]  653 	pop	ar7
                                    654 ;	eeprom.c:55: return Byte;				// Return the byte received from 24LC64 EEPROM
      00011B 8F 82            [24]  655 	mov	dpl,r7
                                    656 ;	eeprom.c:56: }
      00011D 22               [24]  657 	ret
                                    658 ;------------------------------------------------------------
                                    659 ;Allocation info for local variables in function 'hexdump'
                                    660 ;------------------------------------------------------------
                                    661 ;address2                  Allocated with name '_hexdump_PARM_2'
                                    662 ;address1                  Allocated with name '_hexdump_address1_65536_67'
                                    663 ;size                      Allocated with name '_hexdump_size_65536_68'
                                    664 ;i                         Allocated with name '_hexdump_i_196608_70'
                                    665 ;------------------------------------------------------------
                                    666 ;	eeprom.c:59: void hexdump(int address1, int address2)
                                    667 ;	-----------------------------------------
                                    668 ;	 function hexdump
                                    669 ;	-----------------------------------------
      00011E                        670 _hexdump:
      00011E AF 83            [24]  671 	mov	r7,dph
      000120 E5 82            [12]  672 	mov	a,dpl
      000122 90 00 08         [24]  673 	mov	dptr,#_hexdump_address1_65536_67
      000125 F0               [24]  674 	movx	@dptr,a
      000126 EF               [12]  675 	mov	a,r7
      000127 A3               [24]  676 	inc	dptr
      000128 F0               [24]  677 	movx	@dptr,a
                                    678 ;	eeprom.c:61: int size= address2-address1;                        //calculate length of hexdump
      000129 90 00 08         [24]  679 	mov	dptr,#_hexdump_address1_65536_67
      00012C E0               [24]  680 	movx	a,@dptr
      00012D FE               [12]  681 	mov	r6,a
      00012E A3               [24]  682 	inc	dptr
      00012F E0               [24]  683 	movx	a,@dptr
      000130 FF               [12]  684 	mov	r7,a
      000131 90 00 06         [24]  685 	mov	dptr,#_hexdump_PARM_2
      000134 E0               [24]  686 	movx	a,@dptr
      000135 FC               [12]  687 	mov	r4,a
      000136 A3               [24]  688 	inc	dptr
      000137 E0               [24]  689 	movx	a,@dptr
      000138 FD               [12]  690 	mov	r5,a
      000139 90 00 0A         [24]  691 	mov	dptr,#_hexdump_size_65536_68
      00013C EC               [12]  692 	mov	a,r4
      00013D C3               [12]  693 	clr	c
      00013E 9E               [12]  694 	subb	a,r6
      00013F F0               [24]  695 	movx	@dptr,a
      000140 ED               [12]  696 	mov	a,r5
      000141 9F               [12]  697 	subb	a,r7
      000142 A3               [24]  698 	inc	dptr
      000143 F0               [24]  699 	movx	@dptr,a
                                    700 ;	eeprom.c:62: while (size)                                        //while size is not NULL
      000144                        701 00104$:
      000144 90 00 0A         [24]  702 	mov	dptr,#_hexdump_size_65536_68
      000147 E0               [24]  703 	movx	a,@dptr
      000148 FE               [12]  704 	mov	r6,a
      000149 A3               [24]  705 	inc	dptr
      00014A E0               [24]  706 	movx	a,@dptr
      00014B FF               [12]  707 	mov	r7,a
      00014C 90 00 0A         [24]  708 	mov	dptr,#_hexdump_size_65536_68
      00014F E0               [24]  709 	movx	a,@dptr
      000150 F5 F0            [12]  710 	mov	b,a
      000152 A3               [24]  711 	inc	dptr
      000153 E0               [24]  712 	movx	a,@dptr
      000154 45 F0            [12]  713 	orl	a,b
      000156 70 01            [24]  714 	jnz	00133$
      000158 22               [24]  715 	ret
      000159                        716 00133$:
                                    717 ;	eeprom.c:64: printf("%.3X: ", address1);                     //print hexadecimal value of address- 3 digits
      000159 90 00 08         [24]  718 	mov	dptr,#_hexdump_address1_65536_67
      00015C E0               [24]  719 	movx	a,@dptr
      00015D FC               [12]  720 	mov	r4,a
      00015E A3               [24]  721 	inc	dptr
      00015F E0               [24]  722 	movx	a,@dptr
      000160 FD               [12]  723 	mov	r5,a
      000161 C0 07            [24]  724 	push	ar7
      000163 C0 06            [24]  725 	push	ar6
      000165 C0 05            [24]  726 	push	ar5
      000167 C0 04            [24]  727 	push	ar4
      000169 C0 04            [24]  728 	push	ar4
      00016B C0 05            [24]  729 	push	ar5
      00016D 74 F5            [12]  730 	mov	a,#___str_0
      00016F C0 E0            [24]  731 	push	acc
      000171 74 1A            [12]  732 	mov	a,#(___str_0 >> 8)
      000173 C0 E0            [24]  733 	push	acc
      000175 74 80            [12]  734 	mov	a,#0x80
      000177 C0 E0            [24]  735 	push	acc
      000179 12 10 1D         [24]  736 	lcall	_printf
      00017C E5 81            [12]  737 	mov	a,sp
      00017E 24 FB            [12]  738 	add	a,#0xfb
      000180 F5 81            [12]  739 	mov	sp,a
      000182 D0 04            [24]  740 	pop	ar4
      000184 D0 05            [24]  741 	pop	ar5
      000186 D0 06            [24]  742 	pop	ar6
      000188 D0 07            [24]  743 	pop	ar7
                                    744 ;	eeprom.c:65: for (int i=0; i<16; i++)
      00018A 7A 00            [12]  745 	mov	r2,#0x00
      00018C 7B 00            [12]  746 	mov	r3,#0x00
      00018E                        747 00108$:
      00018E C3               [12]  748 	clr	c
      00018F EA               [12]  749 	mov	a,r2
      000190 94 10            [12]  750 	subb	a,#0x10
      000192 EB               [12]  751 	mov	a,r3
      000193 64 80            [12]  752 	xrl	a,#0x80
      000195 94 80            [12]  753 	subb	a,#0x80
      000197 50 59            [24]  754 	jnc	00117$
                                    755 ;	eeprom.c:67: printf("%.2x ", Read_Byte_From_EEPROM(address1));
      000199 8C 82            [24]  756 	mov	dpl,r4
      00019B 8D 83            [24]  757 	mov	dph,r5
      00019D C0 07            [24]  758 	push	ar7
      00019F C0 06            [24]  759 	push	ar6
      0001A1 C0 05            [24]  760 	push	ar5
      0001A3 C0 04            [24]  761 	push	ar4
      0001A5 C0 03            [24]  762 	push	ar3
      0001A7 C0 02            [24]  763 	push	ar2
      0001A9 12 00 CB         [24]  764 	lcall	_Read_Byte_From_EEPROM
      0001AC A8 82            [24]  765 	mov	r0,dpl
      0001AE 79 00            [12]  766 	mov	r1,#0x00
      0001B0 C0 00            [24]  767 	push	ar0
      0001B2 C0 01            [24]  768 	push	ar1
      0001B4 74 FC            [12]  769 	mov	a,#___str_1
      0001B6 C0 E0            [24]  770 	push	acc
      0001B8 74 1A            [12]  771 	mov	a,#(___str_1 >> 8)
      0001BA C0 E0            [24]  772 	push	acc
      0001BC 74 80            [12]  773 	mov	a,#0x80
      0001BE C0 E0            [24]  774 	push	acc
      0001C0 12 10 1D         [24]  775 	lcall	_printf
      0001C3 E5 81            [12]  776 	mov	a,sp
      0001C5 24 FB            [12]  777 	add	a,#0xfb
      0001C7 F5 81            [12]  778 	mov	sp,a
      0001C9 D0 02            [24]  779 	pop	ar2
      0001CB D0 03            [24]  780 	pop	ar3
      0001CD D0 04            [24]  781 	pop	ar4
      0001CF D0 05            [24]  782 	pop	ar5
      0001D1 D0 06            [24]  783 	pop	ar6
      0001D3 D0 07            [24]  784 	pop	ar7
                                    785 ;	eeprom.c:68: address1++;                                 //increment address
      0001D5 0C               [12]  786 	inc	r4
      0001D6 BC 00 01         [24]  787 	cjne	r4,#0x00,00135$
      0001D9 0D               [12]  788 	inc	r5
      0001DA                        789 00135$:
      0001DA 90 00 08         [24]  790 	mov	dptr,#_hexdump_address1_65536_67
      0001DD EC               [12]  791 	mov	a,r4
      0001DE F0               [24]  792 	movx	@dptr,a
      0001DF ED               [12]  793 	mov	a,r5
      0001E0 A3               [24]  794 	inc	dptr
      0001E1 F0               [24]  795 	movx	@dptr,a
                                    796 ;	eeprom.c:69: size--;                                     //decrement address
      0001E2 1E               [12]  797 	dec	r6
      0001E3 BE FF 01         [24]  798 	cjne	r6,#0xff,00136$
      0001E6 1F               [12]  799 	dec	r7
      0001E7                        800 00136$:
                                    801 ;	eeprom.c:70: if (size==0)
      0001E7 EE               [12]  802 	mov	a,r6
      0001E8 4F               [12]  803 	orl	a,r7
      0001E9 60 07            [24]  804 	jz	00117$
                                    805 ;	eeprom.c:65: for (int i=0; i<16; i++)
      0001EB 0A               [12]  806 	inc	r2
      0001EC BA 00 9F         [24]  807 	cjne	r2,#0x00,00108$
      0001EF 0B               [12]  808 	inc	r3
      0001F0 80 9C            [24]  809 	sjmp	00108$
      0001F2                        810 00117$:
      0001F2 90 00 08         [24]  811 	mov	dptr,#_hexdump_address1_65536_67
      0001F5 EC               [12]  812 	mov	a,r4
      0001F6 F0               [24]  813 	movx	@dptr,a
      0001F7 ED               [12]  814 	mov	a,r5
      0001F8 A3               [24]  815 	inc	dptr
      0001F9 F0               [24]  816 	movx	@dptr,a
      0001FA 90 00 0A         [24]  817 	mov	dptr,#_hexdump_size_65536_68
      0001FD EE               [12]  818 	mov	a,r6
      0001FE F0               [24]  819 	movx	@dptr,a
      0001FF EF               [12]  820 	mov	a,r7
      000200 A3               [24]  821 	inc	dptr
      000201 F0               [24]  822 	movx	@dptr,a
                                    823 ;	eeprom.c:73: printf ("\n\r");
      000202 74 02            [12]  824 	mov	a,#___str_2
      000204 C0 E0            [24]  825 	push	acc
      000206 74 1B            [12]  826 	mov	a,#(___str_2 >> 8)
      000208 C0 E0            [24]  827 	push	acc
      00020A 74 80            [12]  828 	mov	a,#0x80
      00020C C0 E0            [24]  829 	push	acc
      00020E 12 10 1D         [24]  830 	lcall	_printf
      000211 15 81            [12]  831 	dec	sp
      000213 15 81            [12]  832 	dec	sp
      000215 15 81            [12]  833 	dec	sp
                                    834 ;	eeprom.c:75: }
      000217 02 01 44         [24]  835 	ljmp	00104$
                                    836 ;------------------------------------------------------------
                                    837 ;Allocation info for local variables in function 'reset_eeprom'
                                    838 ;------------------------------------------------------------
                                    839 ;i                         Allocated with name '_reset_eeprom_i_131072_74'
                                    840 ;------------------------------------------------------------
                                    841 ;	eeprom.c:77: void reset_eeprom(void)
                                    842 ;	-----------------------------------------
                                    843 ;	 function reset_eeprom
                                    844 ;	-----------------------------------------
      00021A                        845 _reset_eeprom:
                                    846 ;	eeprom.c:79: I2C_Start();                        //start i2c communication
      00021A 12 02 98         [24]  847 	lcall	_I2C_Start
                                    848 ;	eeprom.c:80: __delay_us(HalfBitDelay);
      00021D 90 01 F4         [24]  849 	mov	dptr,#0x01f4
      000220 12 02 59         [24]  850 	lcall	___delay_us
                                    851 ;	eeprom.c:82: Set_SDA_High;
                                    852 ;	assignBit
      000223 D2 94            [12]  853 	setb	_P1_4
                                    854 ;	eeprom.c:84: for (int i=0; i<10; i++)            //clock in 9 bits of '1'
      000225 7E 00            [12]  855 	mov	r6,#0x00
      000227 7F 00            [12]  856 	mov	r7,#0x00
      000229                        857 00103$:
      000229 C3               [12]  858 	clr	c
      00022A EE               [12]  859 	mov	a,r6
      00022B 94 0A            [12]  860 	subb	a,#0x0a
      00022D EF               [12]  861 	mov	a,r7
      00022E 64 80            [12]  862 	xrl	a,#0x80
      000230 94 80            [12]  863 	subb	a,#0x80
      000232 50 1F            [24]  864 	jnc	00101$
                                    865 ;	eeprom.c:86: SCK = 0;
                                    866 ;	assignBit
      000234 C2 93            [12]  867 	clr	_P1_3
                                    868 ;	eeprom.c:87: __delay_us(HalfBitDelay);
      000236 90 01 F4         [24]  869 	mov	dptr,#0x01f4
      000239 C0 07            [24]  870 	push	ar7
      00023B C0 06            [24]  871 	push	ar6
      00023D 12 02 59         [24]  872 	lcall	___delay_us
                                    873 ;	eeprom.c:88: SCK = 1;
                                    874 ;	assignBit
      000240 D2 93            [12]  875 	setb	_P1_3
                                    876 ;	eeprom.c:89: __delay_us(HalfBitDelay);
      000242 90 01 F4         [24]  877 	mov	dptr,#0x01f4
      000245 12 02 59         [24]  878 	lcall	___delay_us
      000248 D0 06            [24]  879 	pop	ar6
      00024A D0 07            [24]  880 	pop	ar7
                                    881 ;	eeprom.c:84: for (int i=0; i<10; i++)            //clock in 9 bits of '1'
      00024C 0E               [12]  882 	inc	r6
      00024D BE 00 D9         [24]  883 	cjne	r6,#0x00,00103$
      000250 0F               [12]  884 	inc	r7
      000251 80 D6            [24]  885 	sjmp	00103$
      000253                        886 00101$:
                                    887 ;	eeprom.c:92: I2C_Start();                    //start i2c communication
      000253 12 02 98         [24]  888 	lcall	_I2C_Start
                                    889 ;	eeprom.c:93: I2C_Stop();                     //stop i2c communication
                                    890 ;	eeprom.c:94: }
      000256 02 02 CD         [24]  891 	ljmp	_I2C_Stop
                                    892 	.area CSEG    (CODE)
                                    893 	.area CONST   (CODE)
                                    894 	.area CONST   (CODE)
      001AF5                        895 ___str_0:
      001AF5 25 2E 33 58 3A 20      896 	.ascii "%.3X: "
      001AFB 00                     897 	.db 0x00
                                    898 	.area CSEG    (CODE)
                                    899 	.area CONST   (CODE)
      001AFC                        900 ___str_1:
      001AFC 25 2E 32 78 20         901 	.ascii "%.2x "
      001B01 00                     902 	.db 0x00
                                    903 	.area CSEG    (CODE)
                                    904 	.area CONST   (CODE)
      001B02                        905 ___str_2:
      001B02 0A                     906 	.db 0x0a
      001B03 0D                     907 	.db 0x0d
      001B04 00                     908 	.db 0x00
                                    909 	.area CSEG    (CODE)
                                    910 	.area XINIT   (CODE)
                                    911 	.area CABS    (ABS,CODE)
