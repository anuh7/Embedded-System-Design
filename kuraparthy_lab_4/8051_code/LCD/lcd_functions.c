/* ---------------------------------------------------------------------------------
 * Anuhya Kuraparthy
 * ECEN 5613 - Fall 2022 - Prof. McClure
 * University of Colorado Boulder
 * Revised 11/12/22
 * Attributions: Lcd guide distributed in class
                 Hitachi LCD controller data sheet
                 lecture slides
 --------------------------------------------------------------------------------
 * This c file contains all the functions required for LCD functionality.
   ---------------------------------------------------------------------------------*/


/* -------------------------------------------------- */
//          INCLUDES & DEFINES
/* -------------------------------------------------- */

#include <math.h>
#include <stdint.h>
#include <stdbool.h>
#include <at89c51ed2.h>
#include <mcs51reg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "lcd_functions.h"
#include "support_functions.h"

#define Rs P1_5             //Register Select Signal
#define Rw P1_6             //Read/Write Select Signal
#define ROW1_END 15         //LCD row start and end address in decimal
#define ROW2_START 64
#define ROW2_END 79
#define ROW3_START 16
#define ROW3_END 31
#define ROW4_START 80
#define ROW4_END 95
#define ROW1_START 0
#define ROW4_CLOCK 88
#define CGRAM_START 64
#define CGRAM_END 128



int *ptr=0x8000;                //LCD peripheral address
uint8_t CursorPtr=0u;           //cursor pointer at initialization

int *busy_flag= (int *)&ptr;        //busy flag polling

void delay(unsigned int d)
{
    while(d--);
}

void lcdbusywait()
{
    Rs = 0;                             //condition for busy polling
    Rw = 1;
    while(((*busy_flag)& 0x80)==0x80);      //wait till BF flag is not set
}

void lcd_cmd(unsigned char command)
{
     *ptr=command;
}

void lcd_init()
{
    Rs=0;
    Rw=0;

    lcd_cmd(0x30);      //unlock command
    delay(10000);
    lcd_cmd(0x30);      //unlock command
    delay(10000);
    lcd_cmd(0x30);      //unlock command
    delay(10000);
    lcd_cmd(0x38);      //function set command
    delay(100);
    lcd_cmd(0x0f);      //turn display on
    delay(100);
    lcd_cmd(0x06);      //entry mode set command
    delay(100);
    lcd_cmd(0x01);      //clear screen and send the cursor home
    delay(100);
    lcdbusywait();      //poll for BF=0
}

void lcdputch_timer(unsigned char cc)
{
    lcdbusywait();
    Rs=1;               //write command
    Rw=0;
    *ptr=cc;            //write character at current pointer
}

void lcdputch(unsigned char cc)
{
    lcdbusywait();
    Rs=1;               //write command
    Rw=0;
    *ptr=cc;            //write character at current pointer

   if (CursorPtr==ROW1_END){           //wrap cursor to next row
        CursorPtr=ROW2_START;
    }
    else if (CursorPtr==ROW2_END){
        CursorPtr=ROW3_START;
    }
    else if (CursorPtr==ROW3_END){
        CursorPtr=ROW4_START;
    }
    else if (CursorPtr==ROW4_CLOCK){
        CursorPtr=ROW1_START;
    }
    else {
        CursorPtr++;
    }

    lcdgotoaddress(CursorPtr);      //send cursor to address
}

void lcdgotoaddress(unsigned char addr)
{
    lcdbusywait();
    Rs=0;
    Rw=0;
    lcd_cmd(addr | 0x80);
}

void lcdputstr(char *ss)
{
    while (*ss!='\0'){          //till null character is reached
        lcdputch(*ss);
        ss++;                   //increment pointer
    }
}

void lcdclear()
{
    lcdbusywait();              //busy polling
    Rs=0;                       //command conditions
    Rw=0;
    lcd_cmd(0x01);              //command to clear screen
    CursorPtr=0x00;             //send cursor to starting
    lcdgotoaddress(CursorPtr);
}

void lcdgotoxy(uint8_t row, uint8_t column)
{
    uint8_t xyaddress=0;
    switch(row)
    {
        case 1: xyaddress= ROW1_START + column;     //address=row_address+column_number
                break;
        case 2: xyaddress= ROW2_START + column;
                break;
        case 3: xyaddress= ROW3_START + column;     //change to array
                break;
        case 4:
                if (column<9)
                {
                    xyaddress= ROW4_START + column;
                    break;
                }

                else
                {
                    printf("enter valid column /n/r");
                    break;
                }

    }
    lcdgotoaddress(xyaddress);                        //send cursor to address
}

uint8_t current_position()
{
    Rs=0;
    Rw=1;
    return (*ptr & 0x7F);
}


int lcdgetch(void)
{
    lcdbusywait();
    Rs = 1;
    Rw = 1;

    return (*ptr & 0x7F);
}


void hexdump(void)
{
    int size= ROW4_END - ROW1_START;
    int address=ROW1_START;
    while (size)
    {
        printf("%.3x: ", address);
        for (int i=0; i<16; i++)
        {
            lcdgotoaddress(address);
            printf("%.2x ", lcdgetch());
            address++;
            size--;
            if (size==0)
                break;
        }
        printf("\n\r");
    }
}
