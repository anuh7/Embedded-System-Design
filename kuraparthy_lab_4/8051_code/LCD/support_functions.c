/* ---------------------------------------------------------------------------------
 * Anuhya Kuraparthy
 * ECEN 5613 - Fall 2022 - Prof. McClure
 * University of Colorado Boulder
 * Revised 11/12/22
 * Attributions: sdcc_syntax_example.c given in class
 --------------------------------------------------------------------------------
 * This c file contains functions to initialize serial communication, get and print characters and strings
 * via the PC terminal emulator screen
   ---------------------------------------------------------------------------------*/

/* -------------------------------------------------- */
//          INCLUDES & DEFINES
/* -------------------------------------------------- */


#include <mcs51/8051.h>
#include <at89c51ed2.h>       //also includes 8052.h and 8051.h
#include <mcs51reg.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include "support_functions.h"


void serial_init(void){
    TMOD=0x20;
    TH1=0xFD;
    SCON=0x50;
    TR1=1;
    TI=1;
}

int putchar (int c)
{
    while (!TI);
    while (TI == 0);
    while ((SCON & 0x02) == 0);

    SBUF = c;           // load serial port with transmit value
    TI = 0;             // clear TI flag

    return c;
}

int getchar (void)
{
    while (!RI);
    while ((SCON & 0x01) == 0);
    while (RI == 0);

    RI = 0;                         // clear RI flag
    return SBUF;                    // return character from SBUF
}

int putstr (char *s)
{
    int i = 0;
    while (*s){            // output characters until NULL found
        putchar(*s++);
        i++;
    }
    return i+1;
}

int getstr(char *a)
{

    int i = 0;
    do{
        *a = getchar();     //get characters till enter is found
        i++;
    }while(*a++ != '\r');

    *a = '\0';          //append null character to string
    return i+1;
}
