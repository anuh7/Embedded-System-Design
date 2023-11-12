/* ---------------------------------------------------------------------------------
 * Anuhya Kuraparthy
 * ECEN 5613 - Fall 2022 - Prof. McClure
 * University of Colorado Boulder
 * Revised 11/12/22
 * Attributions: Lcd guide distributed in class
                 Hitachi LCD controller data sheet
                 lecture slides
                 sdcc_syntax_example.c given in class
 --------------------------------------------------------------------------------
 * This project allows the user to interact with the LCD on the development board. This file initializes the software timer, lcd
 * and enables serial communication at baud rate=9600. It provides a user-interface to interact with the LCD via PC terminal emulator
 * screen which enables the user to write characters or strings onto the LCD. The clock on LCD can also be started and stopped.
   ---------------------------------------------------------------------------------*/


/* -------------------------------------------------- */
//          INCLUDES & DEFINES
/* -------------------------------------------------- */


#include <mcs51/8051.h>
#include <at89c51ed2.h>
#include <mcs51reg.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#include "lcd_functions.h"
#include "support_functions.h"
#include "timer.h"




int displayFlag=1;                  //flag to display clock
void timer_init(void);              //software timer declaration



void timer_init(void)           //software timer using PCA1 module initialization
{
    EA=1;                       //enabling global interrupt
    CMOD |= 0x03;               //enabling ECF bit to generate interrupt
    CCAP1L = 0x6A;
    CCAP1H = 0xDC;              // for 10ms delay register= 6E35
    CCAPM1 = 0x49;              //setting ECOM1, MAT1, CCF1
    CR=1;                       //starting timer
    EC=1;                       //enabling PCA interrupt bit in interrupt enable register
    P1_2=0;
}


void Timer0_ISR (void) __interrupt(PCA_VECTOR)      //PCA Interrupt
{
   CH=0;                //clear the counters
   CL=0;
   CCF1=0;
   P1_2=!P1_2;
                            //update timers
  uint8_t position= current_position();
  if (displayFlag){
    updateTimeCounters();     //if display flag is set
    display_clock();            //display clock
   }
   lcdgotoaddress(position);
}


void main(void)
{
    char data;
    char character[5];
    char address[5];
    char string[50];
    int addressint;
    char row[5];
    char column[5];
    uint8_t rowint;
    uint8_t columnint;

    serial_init();
    lcd_init();
    timer_init();

    puts("Press 1 to write data at the current cursor \r");
    puts("Press 2 to go to address \r");
    puts("Press 3 to go to x,y address \r");
    puts("Press 4 to write string at current cursor \r");
    puts("Press 5 to clear LCD screen \r");
    puts("Press 6 to restart clock \r");
    puts("Press 7 to stop clock display \r");
    puts("Press 8 to restart clock \r");
    puts("Press 9 to for DDRAM hexdump \r");
    puts("Press ? to for user menu \r");

    while(1)                        //command processor
    {
        puts("<<Enter command for operation>>\n\r");
        getstr(character);
        if (character[0]=='1')
            {
                puts("Enter character to put at current cursor \n\r");
                data=getchar();
                lcdputch(data);
            }
        else if (character[0]=='2')
        {
            puts("Enter address to go to \n\r");
            getstr(address);
            addressint= (int)strtol(address, NULL, 16);                             //taking address in hex
            if ((ROW1_START <= addressint && addressint <= ROW1_END) |              //checking address boundary wrt to clock
                (ROW2_START <= addressint && addressint <= ROW2_END) |
                (ROW3_START <= addressint && addressint <= ROW3_END) |
                (ROW4_START <= addressint && addressint <= ROW4_CLOCK))
            {
                 lcdgotoaddress(addressint);
            }

            else
            {
                printf("Enter valid address\n\r");
            }

        }
        else if (character[0]=='3')
        {
            puts("Enter row-1,2,3,4 to go to \n\r");
            getstr(row);
            rowint=(int)strtol(row, NULL, 10);
            puts("Enter column (0-15) to go to \n\r");
            getstr(column);
            columnint=(int)strtol(column, NULL, 10);
            lcdgotoxy(rowint, columnint);
        }

        else if (character[0]=='4')
        {
            puts("Enter string to print at cursor \n\r");
            getstr(string);
            lcdputstr(string);
        }

        else if (character[0]=='5')
        {
            puts("Clear lcd screen \n\r");
            lcdclear();
        }

        else if (character[0]=='6')
        {
                puts("Restart clock \n\r");
                displayFlag=1;
        }

        else if (character[0]=='7')
        {
                puts("Stop clock \n\r");
                displayFlag=0;
        }


        else if (character[0]=='8')
        {
                puts("Reset clock \n\r");
                resetClock();
        }

        else if (character[0]=='9')
        {
               puts("DDRAM hexdump \n\r");
               hexdump();
        }

        else if (character[0]=='?')
        {
            puts("Press 1 to write data at the current cursor \r");
            puts("Press 2 to go to address \r");
            puts("Press 3 to go to x,y address \r");
            puts("Press 4 to write string at current cursor \r");
            puts("Press 5 to clear LCD screen \r");
            puts("Press 6 to restart clock \r");
            puts("Press 7 to stop clock display \r");
            puts("Press 8 to restart clock \r");
            puts("Press 9 to for DDRAM hexdump \r");
            puts("Press ? to for user menu \r");
        }

        else
        {
            puts("Enter a valid command or press '?' for user menu \n\r");
        }
    }
}
