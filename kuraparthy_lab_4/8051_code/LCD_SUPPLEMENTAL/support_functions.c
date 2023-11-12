/* ---------------------------------------------------------------------------------
 * Anuhya Kuraparthy
 * ECEN 5613 - Fall 2022 - Prof. McClure
 * University of Colorado Boulder
 * Revised 11/20/22
 * Attributions: Lcd guide distributed in class
                 Hitachi LCD controller data sheet
                 lecture slides
                 https://www.8051projects.net/lcd-interfacing/lcd-custom-character.php
                 sdcc_syntax_example.c given in class
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

#include "support_functions.h"


#define Rs P1_5             //Register Select Signal
#define Rw P1_6             //Read/Write Select Signal
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
    lcd_cmd(0x0c);      //turn display on
    delay(100);
    lcd_cmd(0x06);      //entry mode set command
    delay(100);
    lcd_cmd(0x01);      //clear screen and send the cursor home
    delay(100);
    lcdbusywait();      //poll for BF=0
}



void lcdgotoaddress_cgram(unsigned char addr)
{
    lcdbusywait();
    Rs=0;
    Rw=0;
    lcd_cmd(addr | 0x40);
}

void lcdputch_cgram(unsigned char cc)
{
    lcdbusywait();
    Rs=1;               //write command
    Rw=0;
    *ptr=cc;
}




void hexdump_cgram(void)
{
    int size= CGRAM_END - CGRAM_START;
    int address=CGRAM_START;
    while (size)
    {
        printf("%03x: ", address);
        for (int i=0; i<16; i++)
        {
            lcdgotoaddress_cgram(address);
            printf("%02x ", lcdgetch_cgram());
            address++;
            size--;
            if (size==0)
                break;
        }
        printf("\n\r");
    }
}


int lcdgetch_cgram (void)
{
    lcdbusywait();
    Rs = 1;             //read command
    Rw = 1;

    return (*ptr & 0x7F);
}


void LCD_build_main(unsigned char location, unsigned char *ptr)
{
    unsigned char i;
          for(i=0;i<8;i++)
          {
             lcdgotoaddress_cgram(0x40+ location*8 + i);            //storing created character at entered location
             lcdputch_cgram(ptr[i]);                                //storing each row value
          }
    lcdgotoaddress(0x00);                   //prints at 0 cursor position
    lcdputch(0x00);
}


void LCD_build(unsigned char location, unsigned char *ptr)
{
    unsigned char i;
          for(i=0;i<8;i++)
          {
             lcdgotoaddress_cgram(0x40+ location*8 + i);
             lcdputch_cgram(ptr[i]);
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


void lcdgotoaddress(unsigned char addr)
{
    lcdbusywait();
    Rs=0;
    Rw=0;
    lcd_cmd(addr | 0x80);
}

void lcdputch(unsigned char cc)
{
    lcdbusywait();
    Rs=1;               //write command
    Rw=0;
    *ptr=cc;
}


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


