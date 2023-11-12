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
                                    221 	.globl _checkAddress
                                    222 	.globl _putchar
                                    223 	.globl _getchar
                                    224 	.globl _putstr
                                    225 	.globl _getstr
                                    226 ;--------------------------------------------------------
                                    227 ; special function registers
                                    228 ;--------------------------------------------------------
                                    229 	.area RSEG    (ABS,DATA)
      000000                        230 	.org 0x0000
                           0000C8   231 _T2CON	=	0x00c8
                           0000CA   232 _RCAP2L	=	0x00ca
                           0000CB   233 _RCAP2H	=	0x00cb
                           0000CC   234 _TL2	=	0x00cc
                           0000CD   235 _TH2	=	0x00cd
                           00008E   236 _AUXR	=	0x008e
                           0000A2   237 _AUXR1	=	0x00a2
                           000097   238 _CKRL	=	0x0097
                           00008F   239 _CKCON0	=	0x008f
                           0000AF   240 _CKCON1	=	0x00af
                           0000FA   241 _CCAP0H	=	0x00fa
                           0000FB   242 _CCAP1H	=	0x00fb
                           0000FC   243 _CCAP2H	=	0x00fc
                           0000FD   244 _CCAP3H	=	0x00fd
                           0000FE   245 _CCAP4H	=	0x00fe
                           0000EA   246 _CCAP0L	=	0x00ea
                           0000EB   247 _CCAP1L	=	0x00eb
                           0000EC   248 _CCAP2L	=	0x00ec
                           0000ED   249 _CCAP3L	=	0x00ed
                           0000EE   250 _CCAP4L	=	0x00ee
                           0000DA   251 _CCAPM0	=	0x00da
                           0000DB   252 _CCAPM1	=	0x00db
                           0000DC   253 _CCAPM2	=	0x00dc
                           0000DD   254 _CCAPM3	=	0x00dd
                           0000DE   255 _CCAPM4	=	0x00de
                           0000D8   256 _CCON	=	0x00d8
                           0000F9   257 _CH	=	0x00f9
                           0000E9   258 _CL	=	0x00e9
                           0000D9   259 _CMOD	=	0x00d9
                           0000A8   260 _IEN0	=	0x00a8
                           0000B1   261 _IEN1	=	0x00b1
                           0000B8   262 _IPL0	=	0x00b8
                           0000B7   263 _IPH0	=	0x00b7
                           0000B2   264 _IPL1	=	0x00b2
                           0000B3   265 _IPH1	=	0x00b3
                           0000C0   266 _P4	=	0x00c0
                           0000E8   267 _P5	=	0x00e8
                           0000A6   268 _WDTRST	=	0x00a6
                           0000A7   269 _WDTPRG	=	0x00a7
                           0000A9   270 _SADDR	=	0x00a9
                           0000B9   271 _SADEN	=	0x00b9
                           0000C3   272 _SPCON	=	0x00c3
                           0000C4   273 _SPSTA	=	0x00c4
                           0000C5   274 _SPDAT	=	0x00c5
                           0000C9   275 _T2MOD	=	0x00c9
                           00009B   276 _BDRCON	=	0x009b
                           00009A   277 _BRL	=	0x009a
                           00009C   278 _KBLS	=	0x009c
                           00009D   279 _KBE	=	0x009d
                           00009E   280 _KBF	=	0x009e
                           0000D2   281 _EECON	=	0x00d2
                           0000E0   282 _ACC	=	0x00e0
                           0000F0   283 _B	=	0x00f0
                           000083   284 _DPH	=	0x0083
                           000083   285 _DP0H	=	0x0083
                           000082   286 _DPL	=	0x0082
                           000082   287 _DP0L	=	0x0082
                           0000A8   288 _IE	=	0x00a8
                           0000B8   289 _IP	=	0x00b8
                           000080   290 _P0	=	0x0080
                           000090   291 _P1	=	0x0090
                           0000A0   292 _P2	=	0x00a0
                           0000B0   293 _P3	=	0x00b0
                           000087   294 _PCON	=	0x0087
                           0000D0   295 _PSW	=	0x00d0
                           000099   296 _SBUF	=	0x0099
                           000099   297 _SBUF0	=	0x0099
                           000098   298 _SCON	=	0x0098
                           000081   299 _SP	=	0x0081
                           000088   300 _TCON	=	0x0088
                           00008C   301 _TH0	=	0x008c
                           00008D   302 _TH1	=	0x008d
                           00008A   303 _TL0	=	0x008a
                           00008B   304 _TL1	=	0x008b
                           000089   305 _TMOD	=	0x0089
                                    306 ;--------------------------------------------------------
                                    307 ; special function bits
                                    308 ;--------------------------------------------------------
                                    309 	.area RSEG    (ABS,DATA)
      000000                        310 	.org 0x0000
                           0000AD   311 _ET2	=	0x00ad
                           0000BD   312 _PT2	=	0x00bd
                           0000C8   313 _T2CON_0	=	0x00c8
                           0000C9   314 _T2CON_1	=	0x00c9
                           0000CA   315 _T2CON_2	=	0x00ca
                           0000CB   316 _T2CON_3	=	0x00cb
                           0000CC   317 _T2CON_4	=	0x00cc
                           0000CD   318 _T2CON_5	=	0x00cd
                           0000CE   319 _T2CON_6	=	0x00ce
                           0000CF   320 _T2CON_7	=	0x00cf
                           0000C8   321 _CP_RL2	=	0x00c8
                           0000C9   322 _C_T2	=	0x00c9
                           0000CA   323 _TR2	=	0x00ca
                           0000CB   324 _EXEN2	=	0x00cb
                           0000CC   325 _TCLK	=	0x00cc
                           0000CD   326 _RCLK	=	0x00cd
                           0000CE   327 _EXF2	=	0x00ce
                           0000CF   328 _TF2	=	0x00cf
                           0000DF   329 _CF	=	0x00df
                           0000DE   330 _CR	=	0x00de
                           0000DC   331 _CCF4	=	0x00dc
                           0000DB   332 _CCF3	=	0x00db
                           0000DA   333 _CCF2	=	0x00da
                           0000D9   334 _CCF1	=	0x00d9
                           0000D8   335 _CCF0	=	0x00d8
                           0000AE   336 _EC	=	0x00ae
                           0000BE   337 _PPCL	=	0x00be
                           0000BD   338 _PT2L	=	0x00bd
                           0000BC   339 _PSL	=	0x00bc
                           0000BB   340 _PT1L	=	0x00bb
                           0000BA   341 _PX1L	=	0x00ba
                           0000B9   342 _PT0L	=	0x00b9
                           0000B8   343 _PX0L	=	0x00b8
                           0000C0   344 _P4_0	=	0x00c0
                           0000C1   345 _P4_1	=	0x00c1
                           0000C2   346 _P4_2	=	0x00c2
                           0000C3   347 _P4_3	=	0x00c3
                           0000C4   348 _P4_4	=	0x00c4
                           0000C5   349 _P4_5	=	0x00c5
                           0000C6   350 _P4_6	=	0x00c6
                           0000C7   351 _P4_7	=	0x00c7
                           0000E8   352 _P5_0	=	0x00e8
                           0000E9   353 _P5_1	=	0x00e9
                           0000EA   354 _P5_2	=	0x00ea
                           0000EB   355 _P5_3	=	0x00eb
                           0000EC   356 _P5_4	=	0x00ec
                           0000ED   357 _P5_5	=	0x00ed
                           0000EE   358 _P5_6	=	0x00ee
                           0000EF   359 _P5_7	=	0x00ef
                           0000F0   360 _BREG_F0	=	0x00f0
                           0000F1   361 _BREG_F1	=	0x00f1
                           0000F2   362 _BREG_F2	=	0x00f2
                           0000F3   363 _BREG_F3	=	0x00f3
                           0000F4   364 _BREG_F4	=	0x00f4
                           0000F5   365 _BREG_F5	=	0x00f5
                           0000F6   366 _BREG_F6	=	0x00f6
                           0000F7   367 _BREG_F7	=	0x00f7
                           0000A8   368 _EX0	=	0x00a8
                           0000A9   369 _ET0	=	0x00a9
                           0000AA   370 _EX1	=	0x00aa
                           0000AB   371 _ET1	=	0x00ab
                           0000AC   372 _ES	=	0x00ac
                           0000AF   373 _EA	=	0x00af
                           0000B8   374 _PX0	=	0x00b8
                           0000B9   375 _PT0	=	0x00b9
                           0000BA   376 _PX1	=	0x00ba
                           0000BB   377 _PT1	=	0x00bb
                           0000BC   378 _PS	=	0x00bc
                           000080   379 _P0_0	=	0x0080
                           000081   380 _P0_1	=	0x0081
                           000082   381 _P0_2	=	0x0082
                           000083   382 _P0_3	=	0x0083
                           000084   383 _P0_4	=	0x0084
                           000085   384 _P0_5	=	0x0085
                           000086   385 _P0_6	=	0x0086
                           000087   386 _P0_7	=	0x0087
                           000090   387 _P1_0	=	0x0090
                           000091   388 _P1_1	=	0x0091
                           000092   389 _P1_2	=	0x0092
                           000093   390 _P1_3	=	0x0093
                           000094   391 _P1_4	=	0x0094
                           000095   392 _P1_5	=	0x0095
                           000096   393 _P1_6	=	0x0096
                           000097   394 _P1_7	=	0x0097
                           0000A0   395 _P2_0	=	0x00a0
                           0000A1   396 _P2_1	=	0x00a1
                           0000A2   397 _P2_2	=	0x00a2
                           0000A3   398 _P2_3	=	0x00a3
                           0000A4   399 _P2_4	=	0x00a4
                           0000A5   400 _P2_5	=	0x00a5
                           0000A6   401 _P2_6	=	0x00a6
                           0000A7   402 _P2_7	=	0x00a7
                           0000B0   403 _P3_0	=	0x00b0
                           0000B1   404 _P3_1	=	0x00b1
                           0000B2   405 _P3_2	=	0x00b2
                           0000B3   406 _P3_3	=	0x00b3
                           0000B4   407 _P3_4	=	0x00b4
                           0000B5   408 _P3_5	=	0x00b5
                           0000B6   409 _P3_6	=	0x00b6
                           0000B7   410 _P3_7	=	0x00b7
                           0000B0   411 _RXD	=	0x00b0
                           0000B0   412 _RXD0	=	0x00b0
                           0000B1   413 _TXD	=	0x00b1
                           0000B1   414 _TXD0	=	0x00b1
                           0000B2   415 _INT0	=	0x00b2
                           0000B3   416 _INT1	=	0x00b3
                           0000B4   417 _T0	=	0x00b4
                           0000B5   418 _T1	=	0x00b5
                           0000B6   419 _WR	=	0x00b6
                           0000B7   420 _RD	=	0x00b7
                           0000D0   421 _P	=	0x00d0
                           0000D1   422 _F1	=	0x00d1
                           0000D2   423 _OV	=	0x00d2
                           0000D3   424 _RS0	=	0x00d3
                           0000D4   425 _RS1	=	0x00d4
                           0000D5   426 _F0	=	0x00d5
                           0000D6   427 _AC	=	0x00d6
                           0000D7   428 _CY	=	0x00d7
                           000098   429 _RI	=	0x0098
                           000099   430 _TI	=	0x0099
                           00009A   431 _RB8	=	0x009a
                           00009B   432 _TB8	=	0x009b
                           00009C   433 _REN	=	0x009c
                           00009D   434 _SM2	=	0x009d
                           00009E   435 _SM1	=	0x009e
                           00009F   436 _SM0	=	0x009f
                           000088   437 _IT0	=	0x0088
                           000089   438 _IE0	=	0x0089
                           00008A   439 _IT1	=	0x008a
                           00008B   440 _IE1	=	0x008b
                           00008C   441 _TR0	=	0x008c
                           00008D   442 _TF0	=	0x008d
                           00008E   443 _TR1	=	0x008e
                           00008F   444 _TF1	=	0x008f
                                    445 ;--------------------------------------------------------
                                    446 ; overlayable register banks
                                    447 ;--------------------------------------------------------
                                    448 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        449 	.ds 8
                                    450 ;--------------------------------------------------------
                                    451 ; internal ram data
                                    452 ;--------------------------------------------------------
                                    453 	.area DSEG    (DATA)
                                    454 ;--------------------------------------------------------
                                    455 ; overlayable items in internal ram
                                    456 ;--------------------------------------------------------
                                    457 ;--------------------------------------------------------
                                    458 ; indirectly addressable internal ram data
                                    459 ;--------------------------------------------------------
                                    460 	.area ISEG    (DATA)
                                    461 ;--------------------------------------------------------
                                    462 ; absolute internal ram data
                                    463 ;--------------------------------------------------------
                                    464 	.area IABS    (ABS,DATA)
                                    465 	.area IABS    (ABS,DATA)
                                    466 ;--------------------------------------------------------
                                    467 ; bit data
                                    468 ;--------------------------------------------------------
                                    469 	.area BSEG    (BIT)
                                    470 ;--------------------------------------------------------
                                    471 ; paged external ram data
                                    472 ;--------------------------------------------------------
                                    473 	.area PSEG    (PAG,XDATA)
                                    474 ;--------------------------------------------------------
                                    475 ; external ram data
                                    476 ;--------------------------------------------------------
                                    477 	.area XSEG    (XDATA)
      00003D                        478 _checkAddress_address_65536_50:
      00003D                        479 	.ds 2
      00003F                        480 _putchar_c_65536_54:
      00003F                        481 	.ds 2
      000041                        482 _putstr_s_65536_58:
      000041                        483 	.ds 3
      000044                        484 _getstr_a_65536_61:
      000044                        485 	.ds 3
                                    486 ;--------------------------------------------------------
                                    487 ; absolute external ram data
                                    488 ;--------------------------------------------------------
                                    489 	.area XABS    (ABS,XDATA)
                                    490 ;--------------------------------------------------------
                                    491 ; external initialized ram data
                                    492 ;--------------------------------------------------------
                                    493 	.area XISEG   (XDATA)
                                    494 	.area HOME    (CODE)
                                    495 	.area GSINIT0 (CODE)
                                    496 	.area GSINIT1 (CODE)
                                    497 	.area GSINIT2 (CODE)
                                    498 	.area GSINIT3 (CODE)
                                    499 	.area GSINIT4 (CODE)
                                    500 	.area GSINIT5 (CODE)
                                    501 	.area GSINIT  (CODE)
                                    502 	.area GSFINAL (CODE)
                                    503 	.area CSEG    (CODE)
                                    504 ;--------------------------------------------------------
                                    505 ; global & static initialisations
                                    506 ;--------------------------------------------------------
                                    507 	.area HOME    (CODE)
                                    508 	.area GSINIT  (CODE)
                                    509 	.area GSFINAL (CODE)
                                    510 	.area GSINIT  (CODE)
                                    511 ;--------------------------------------------------------
                                    512 ; Home
                                    513 ;--------------------------------------------------------
                                    514 	.area HOME    (CODE)
                                    515 	.area HOME    (CODE)
                                    516 ;--------------------------------------------------------
                                    517 ; code
                                    518 ;--------------------------------------------------------
                                    519 	.area CSEG    (CODE)
                                    520 ;------------------------------------------------------------
                                    521 ;Allocation info for local variables in function 'serial_init'
                                    522 ;------------------------------------------------------------
                                    523 ;	support_functions.c:27: void serial_init(void){
                                    524 ;	-----------------------------------------
                                    525 ;	 function serial_init
                                    526 ;	-----------------------------------------
      000643                        527 _serial_init:
                           000007   528 	ar7 = 0x07
                           000006   529 	ar6 = 0x06
                           000005   530 	ar5 = 0x05
                           000004   531 	ar4 = 0x04
                           000003   532 	ar3 = 0x03
                           000002   533 	ar2 = 0x02
                           000001   534 	ar1 = 0x01
                           000000   535 	ar0 = 0x00
                                    536 ;	support_functions.c:28: TMOD=0x20;
      000643 75 89 20         [24]  537 	mov	_TMOD,#0x20
                                    538 ;	support_functions.c:29: TH1=0xFD;
      000646 75 8D FD         [24]  539 	mov	_TH1,#0xfd
                                    540 ;	support_functions.c:30: SCON=0x50;
      000649 75 98 50         [24]  541 	mov	_SCON,#0x50
                                    542 ;	support_functions.c:31: TR1=1;
                                    543 ;	assignBit
      00064C D2 8E            [12]  544 	setb	_TR1
                                    545 ;	support_functions.c:32: TI=1;
                                    546 ;	assignBit
      00064E D2 99            [12]  547 	setb	_TI
                                    548 ;	support_functions.c:33: }
      000650 22               [24]  549 	ret
                                    550 ;------------------------------------------------------------
                                    551 ;Allocation info for local variables in function 'checkAddress'
                                    552 ;------------------------------------------------------------
                                    553 ;address                   Allocated with name '_checkAddress_address_65536_50'
                                    554 ;------------------------------------------------------------
                                    555 ;	support_functions.c:35: int checkAddress(unsigned int address)
                                    556 ;	-----------------------------------------
                                    557 ;	 function checkAddress
                                    558 ;	-----------------------------------------
      000651                        559 _checkAddress:
      000651 AF 83            [24]  560 	mov	r7,dph
      000653 E5 82            [12]  561 	mov	a,dpl
      000655 90 00 3D         [24]  562 	mov	dptr,#_checkAddress_address_65536_50
      000658 F0               [24]  563 	movx	@dptr,a
      000659 EF               [12]  564 	mov	a,r7
      00065A A3               [24]  565 	inc	dptr
      00065B F0               [24]  566 	movx	@dptr,a
                                    567 ;	support_functions.c:37: if (address >=0x00 && address<0x8000)           //eeprom address rangle
      00065C 90 00 3D         [24]  568 	mov	dptr,#_checkAddress_address_65536_50
      00065F E0               [24]  569 	movx	a,@dptr
      000660 A3               [24]  570 	inc	dptr
      000661 E0               [24]  571 	movx	a,@dptr
      000662 C3               [12]  572 	clr	c
      000663 94 80            [12]  573 	subb	a,#0x80
      000665 50 04            [24]  574 	jnc	00102$
                                    575 ;	support_functions.c:39: return 1;
      000667 90 00 01         [24]  576 	mov	dptr,#0x0001
      00066A 22               [24]  577 	ret
      00066B                        578 00102$:
                                    579 ;	support_functions.c:42: {return 0;}
      00066B 90 00 00         [24]  580 	mov	dptr,#0x0000
                                    581 ;	support_functions.c:43: }
      00066E 22               [24]  582 	ret
                                    583 ;------------------------------------------------------------
                                    584 ;Allocation info for local variables in function 'putchar'
                                    585 ;------------------------------------------------------------
                                    586 ;c                         Allocated with name '_putchar_c_65536_54'
                                    587 ;------------------------------------------------------------
                                    588 ;	support_functions.c:45: int putchar (int c)
                                    589 ;	-----------------------------------------
                                    590 ;	 function putchar
                                    591 ;	-----------------------------------------
      00066F                        592 _putchar:
      00066F AF 83            [24]  593 	mov	r7,dph
      000671 E5 82            [12]  594 	mov	a,dpl
      000673 90 00 3F         [24]  595 	mov	dptr,#_putchar_c_65536_54
      000676 F0               [24]  596 	movx	@dptr,a
      000677 EF               [12]  597 	mov	a,r7
      000678 A3               [24]  598 	inc	dptr
      000679 F0               [24]  599 	movx	@dptr,a
                                    600 ;	support_functions.c:47: while (!TI);
      00067A                        601 00101$:
      00067A 30 99 FD         [24]  602 	jnb	_TI,00101$
                                    603 ;	support_functions.c:48: while (TI == 0);
      00067D                        604 00104$:
      00067D 30 99 FD         [24]  605 	jnb	_TI,00104$
                                    606 ;	support_functions.c:49: while ((SCON & 0x02) == 0);
      000680                        607 00107$:
      000680 E5 98            [12]  608 	mov	a,_SCON
      000682 30 E1 FB         [24]  609 	jnb	acc.1,00107$
                                    610 ;	support_functions.c:51: SBUF = c;           // load serial port with transmit value
      000685 90 00 3F         [24]  611 	mov	dptr,#_putchar_c_65536_54
      000688 E0               [24]  612 	movx	a,@dptr
      000689 FE               [12]  613 	mov	r6,a
      00068A A3               [24]  614 	inc	dptr
      00068B E0               [24]  615 	movx	a,@dptr
      00068C FF               [12]  616 	mov	r7,a
      00068D 8E 99            [24]  617 	mov	_SBUF,r6
                                    618 ;	support_functions.c:52: TI = 0;             // clear TI flag
                                    619 ;	assignBit
      00068F C2 99            [12]  620 	clr	_TI
                                    621 ;	support_functions.c:54: return c;
      000691 8E 82            [24]  622 	mov	dpl,r6
      000693 8F 83            [24]  623 	mov	dph,r7
                                    624 ;	support_functions.c:55: }
      000695 22               [24]  625 	ret
                                    626 ;------------------------------------------------------------
                                    627 ;Allocation info for local variables in function 'getchar'
                                    628 ;------------------------------------------------------------
                                    629 ;	support_functions.c:57: int getchar (void)
                                    630 ;	-----------------------------------------
                                    631 ;	 function getchar
                                    632 ;	-----------------------------------------
      000696                        633 _getchar:
                                    634 ;	support_functions.c:59: while (!RI);
      000696                        635 00101$:
      000696 30 98 FD         [24]  636 	jnb	_RI,00101$
                                    637 ;	support_functions.c:60: while ((SCON & 0x01) == 0);
      000699                        638 00104$:
      000699 E5 98            [12]  639 	mov	a,_SCON
      00069B 30 E0 FB         [24]  640 	jnb	acc.0,00104$
                                    641 ;	support_functions.c:61: while (RI == 0);
      00069E                        642 00107$:
                                    643 ;	support_functions.c:63: RI = 0;                         // clear RI flag
                                    644 ;	assignBit
      00069E 10 98 02         [24]  645 	jbc	_RI,00130$
      0006A1 80 FB            [24]  646 	sjmp	00107$
      0006A3                        647 00130$:
                                    648 ;	support_functions.c:64: return SBUF;                    // return character from SBUF
      0006A3 AE 99            [24]  649 	mov	r6,_SBUF
      0006A5 7F 00            [12]  650 	mov	r7,#0x00
      0006A7 8E 82            [24]  651 	mov	dpl,r6
      0006A9 8F 83            [24]  652 	mov	dph,r7
                                    653 ;	support_functions.c:65: }
      0006AB 22               [24]  654 	ret
                                    655 ;------------------------------------------------------------
                                    656 ;Allocation info for local variables in function 'putstr'
                                    657 ;------------------------------------------------------------
                                    658 ;s                         Allocated with name '_putstr_s_65536_58'
                                    659 ;i                         Allocated with name '_putstr_i_65536_59'
                                    660 ;------------------------------------------------------------
                                    661 ;	support_functions.c:67: int putstr (char *s)
                                    662 ;	-----------------------------------------
                                    663 ;	 function putstr
                                    664 ;	-----------------------------------------
      0006AC                        665 _putstr:
      0006AC AF F0            [24]  666 	mov	r7,b
      0006AE AE 83            [24]  667 	mov	r6,dph
      0006B0 E5 82            [12]  668 	mov	a,dpl
      0006B2 90 00 41         [24]  669 	mov	dptr,#_putstr_s_65536_58
      0006B5 F0               [24]  670 	movx	@dptr,a
      0006B6 EE               [12]  671 	mov	a,r6
      0006B7 A3               [24]  672 	inc	dptr
      0006B8 F0               [24]  673 	movx	@dptr,a
      0006B9 EF               [12]  674 	mov	a,r7
      0006BA A3               [24]  675 	inc	dptr
      0006BB F0               [24]  676 	movx	@dptr,a
                                    677 ;	support_functions.c:70: while (*s){            // output characters until NULL found
      0006BC 90 00 41         [24]  678 	mov	dptr,#_putstr_s_65536_58
      0006BF E0               [24]  679 	movx	a,@dptr
      0006C0 FD               [12]  680 	mov	r5,a
      0006C1 A3               [24]  681 	inc	dptr
      0006C2 E0               [24]  682 	movx	a,@dptr
      0006C3 FE               [12]  683 	mov	r6,a
      0006C4 A3               [24]  684 	inc	dptr
      0006C5 E0               [24]  685 	movx	a,@dptr
      0006C6 FF               [12]  686 	mov	r7,a
      0006C7 7B 00            [12]  687 	mov	r3,#0x00
      0006C9 7C 00            [12]  688 	mov	r4,#0x00
      0006CB                        689 00101$:
      0006CB 8D 82            [24]  690 	mov	dpl,r5
      0006CD 8E 83            [24]  691 	mov	dph,r6
      0006CF 8F F0            [24]  692 	mov	b,r7
      0006D1 12 1A 69         [24]  693 	lcall	__gptrget
      0006D4 FA               [12]  694 	mov	r2,a
      0006D5 60 36            [24]  695 	jz	00108$
                                    696 ;	support_functions.c:71: putchar(*s++);
      0006D7 0D               [12]  697 	inc	r5
      0006D8 BD 00 01         [24]  698 	cjne	r5,#0x00,00116$
      0006DB 0E               [12]  699 	inc	r6
      0006DC                        700 00116$:
      0006DC 90 00 41         [24]  701 	mov	dptr,#_putstr_s_65536_58
      0006DF ED               [12]  702 	mov	a,r5
      0006E0 F0               [24]  703 	movx	@dptr,a
      0006E1 EE               [12]  704 	mov	a,r6
      0006E2 A3               [24]  705 	inc	dptr
      0006E3 F0               [24]  706 	movx	@dptr,a
      0006E4 EF               [12]  707 	mov	a,r7
      0006E5 A3               [24]  708 	inc	dptr
      0006E6 F0               [24]  709 	movx	@dptr,a
      0006E7 8A 01            [24]  710 	mov	ar1,r2
      0006E9 7A 00            [12]  711 	mov	r2,#0x00
      0006EB 89 82            [24]  712 	mov	dpl,r1
      0006ED 8A 83            [24]  713 	mov	dph,r2
      0006EF C0 07            [24]  714 	push	ar7
      0006F1 C0 06            [24]  715 	push	ar6
      0006F3 C0 05            [24]  716 	push	ar5
      0006F5 C0 04            [24]  717 	push	ar4
      0006F7 C0 03            [24]  718 	push	ar3
      0006F9 12 06 6F         [24]  719 	lcall	_putchar
      0006FC D0 03            [24]  720 	pop	ar3
      0006FE D0 04            [24]  721 	pop	ar4
      000700 D0 05            [24]  722 	pop	ar5
      000702 D0 06            [24]  723 	pop	ar6
      000704 D0 07            [24]  724 	pop	ar7
                                    725 ;	support_functions.c:72: i++;
      000706 0B               [12]  726 	inc	r3
      000707 BB 00 C1         [24]  727 	cjne	r3,#0x00,00101$
      00070A 0C               [12]  728 	inc	r4
      00070B 80 BE            [24]  729 	sjmp	00101$
      00070D                        730 00108$:
      00070D 90 00 41         [24]  731 	mov	dptr,#_putstr_s_65536_58
      000710 ED               [12]  732 	mov	a,r5
      000711 F0               [24]  733 	movx	@dptr,a
      000712 EE               [12]  734 	mov	a,r6
      000713 A3               [24]  735 	inc	dptr
      000714 F0               [24]  736 	movx	@dptr,a
      000715 EF               [12]  737 	mov	a,r7
      000716 A3               [24]  738 	inc	dptr
      000717 F0               [24]  739 	movx	@dptr,a
                                    740 ;	support_functions.c:74: return i+1;
      000718 0B               [12]  741 	inc	r3
      000719 BB 00 01         [24]  742 	cjne	r3,#0x00,00118$
      00071C 0C               [12]  743 	inc	r4
      00071D                        744 00118$:
      00071D 8B 82            [24]  745 	mov	dpl,r3
      00071F 8C 83            [24]  746 	mov	dph,r4
                                    747 ;	support_functions.c:75: }
      000721 22               [24]  748 	ret
                                    749 ;------------------------------------------------------------
                                    750 ;Allocation info for local variables in function 'getstr'
                                    751 ;------------------------------------------------------------
                                    752 ;a                         Allocated with name '_getstr_a_65536_61'
                                    753 ;i                         Allocated with name '_getstr_i_65536_62'
                                    754 ;------------------------------------------------------------
                                    755 ;	support_functions.c:78: int getstr(char *a)
                                    756 ;	-----------------------------------------
                                    757 ;	 function getstr
                                    758 ;	-----------------------------------------
      000722                        759 _getstr:
      000722 AF F0            [24]  760 	mov	r7,b
      000724 AE 83            [24]  761 	mov	r6,dph
      000726 E5 82            [12]  762 	mov	a,dpl
      000728 90 00 44         [24]  763 	mov	dptr,#_getstr_a_65536_61
      00072B F0               [24]  764 	movx	@dptr,a
      00072C EE               [12]  765 	mov	a,r6
      00072D A3               [24]  766 	inc	dptr
      00072E F0               [24]  767 	movx	@dptr,a
      00072F EF               [12]  768 	mov	a,r7
      000730 A3               [24]  769 	inc	dptr
      000731 F0               [24]  770 	movx	@dptr,a
                                    771 ;	support_functions.c:82: do{
      000732 7E 00            [12]  772 	mov	r6,#0x00
      000734 7F 00            [12]  773 	mov	r7,#0x00
      000736 90 00 44         [24]  774 	mov	dptr,#_getstr_a_65536_61
      000739 E0               [24]  775 	movx	a,@dptr
      00073A FB               [12]  776 	mov	r3,a
      00073B A3               [24]  777 	inc	dptr
      00073C E0               [24]  778 	movx	a,@dptr
      00073D FC               [12]  779 	mov	r4,a
      00073E A3               [24]  780 	inc	dptr
      00073F E0               [24]  781 	movx	a,@dptr
      000740 FD               [12]  782 	mov	r5,a
      000741                        783 00101$:
                                    784 ;	support_functions.c:83: *a = getchar();     //get characters till enter is found
      000741 C0 07            [24]  785 	push	ar7
      000743 C0 06            [24]  786 	push	ar6
      000745 C0 05            [24]  787 	push	ar5
      000747 C0 04            [24]  788 	push	ar4
      000749 C0 03            [24]  789 	push	ar3
      00074B 12 06 96         [24]  790 	lcall	_getchar
      00074E A9 82            [24]  791 	mov	r1,dpl
      000750 D0 03            [24]  792 	pop	ar3
      000752 D0 04            [24]  793 	pop	ar4
      000754 D0 05            [24]  794 	pop	ar5
      000756 D0 06            [24]  795 	pop	ar6
      000758 D0 07            [24]  796 	pop	ar7
      00075A 8B 82            [24]  797 	mov	dpl,r3
      00075C 8C 83            [24]  798 	mov	dph,r4
      00075E 8D F0            [24]  799 	mov	b,r5
      000760 E9               [12]  800 	mov	a,r1
      000761 12 0A 55         [24]  801 	lcall	__gptrput
      000764 A3               [24]  802 	inc	dptr
      000765 AB 82            [24]  803 	mov	r3,dpl
      000767 AC 83            [24]  804 	mov	r4,dph
                                    805 ;	support_functions.c:84: i++;
      000769 0E               [12]  806 	inc	r6
      00076A BE 00 01         [24]  807 	cjne	r6,#0x00,00115$
      00076D 0F               [12]  808 	inc	r7
      00076E                        809 00115$:
                                    810 ;	support_functions.c:85: }while(*a++ != '\r');
      00076E 90 00 44         [24]  811 	mov	dptr,#_getstr_a_65536_61
      000771 EB               [12]  812 	mov	a,r3
      000772 F0               [24]  813 	movx	@dptr,a
      000773 EC               [12]  814 	mov	a,r4
      000774 A3               [24]  815 	inc	dptr
      000775 F0               [24]  816 	movx	@dptr,a
      000776 ED               [12]  817 	mov	a,r5
      000777 A3               [24]  818 	inc	dptr
      000778 F0               [24]  819 	movx	@dptr,a
      000779 B9 0D C5         [24]  820 	cjne	r1,#0x0d,00101$
                                    821 ;	support_functions.c:87: *a = '\0';          //append null character to string
      00077C 90 00 44         [24]  822 	mov	dptr,#_getstr_a_65536_61
      00077F EB               [12]  823 	mov	a,r3
      000780 F0               [24]  824 	movx	@dptr,a
      000781 EC               [12]  825 	mov	a,r4
      000782 A3               [24]  826 	inc	dptr
      000783 F0               [24]  827 	movx	@dptr,a
      000784 ED               [12]  828 	mov	a,r5
      000785 A3               [24]  829 	inc	dptr
      000786 F0               [24]  830 	movx	@dptr,a
      000787 8B 82            [24]  831 	mov	dpl,r3
      000789 8C 83            [24]  832 	mov	dph,r4
      00078B 8D F0            [24]  833 	mov	b,r5
      00078D E4               [12]  834 	clr	a
      00078E 12 0A 55         [24]  835 	lcall	__gptrput
                                    836 ;	support_functions.c:88: return i+1;
      000791 0E               [12]  837 	inc	r6
      000792 BE 00 01         [24]  838 	cjne	r6,#0x00,00118$
      000795 0F               [12]  839 	inc	r7
      000796                        840 00118$:
      000796 8E 82            [24]  841 	mov	dpl,r6
      000798 8F 83            [24]  842 	mov	dph,r7
                                    843 ;	support_functions.c:89: }
      00079A 22               [24]  844 	ret
                                    845 	.area CSEG    (CODE)
                                    846 	.area CONST   (CODE)
                                    847 	.area XINIT   (CODE)
                                    848 	.area CABS    (ABS,CODE)
