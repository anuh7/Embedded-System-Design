
/* ---------------------------------------------------------------------------------
 * Anuhya Kuraparthy
 * ECEN 5613 - Fall 2022 - Prof. McClure
 * University of Colorado Boulder
 * Revised 11/12/22
 * Attributions: https://www.sanfoundry.com/c-program-integer-to-string-vice-versa/
 --------------------------------------------------------------------------------
 * This c file contains of functions to handle clock functionality
   ---------------------------------------------------------------------------------*/


#include <mcs51/8051.h>
#include <at89c51ed2.h>       //also includes 8052.h and 8051.h
#include <mcs51reg.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#include "lcd_functions.h"
#include "support_functions.h"
#include "timer.h"



unsigned int msCounter   = 0;           //counters for milliseconds, seconds, minutes
uint8_t ms100counter = 0;
unsigned int secCounter  = 0;
unsigned int minCounter  = 0;
char sms100counter[5];                  //for printing clock counter
char ssecCounter[5];
char sminCounter[5];


void updateTimeCounters(void)
{
    msCounter = msCounter + 20;         //interrupt is called every 20ms

    if (msCounter>=100)
    {
        ms100counter++;
        msCounter=0;
    }

    if (ms100counter>=10)
    {
        secCounter++;
        ms100counter=0;
    }

    if (secCounter==60)
    {
        minCounter++;
        secCounter=0;
    }
}

void tostring(char str[], int num)          //Attribution: https://www.sanfoundry.com/c-program-integer-to-string-vice-versa/
{
     int rem, len = 0;

        rem = num % 10;
        str[1] = rem + '0';
        str[len] = '\0';
}

void display_clock(void)
{
    tostring(sms100counter, ms100counter);      //convert int to char to print using lcdputch
    lcdgotoaddress(95);                         //last location of LCD
    lcdputch_timer(sms100counter[1]);
    lcdgotoaddress(94);
    lcdputch_timer('.');

    if (secCounter <=9 )
    {
        lcdgotoaddress(93);
        tostring(ssecCounter, secCounter);           //units digits of seconds
        lcdputch_timer(ssecCounter[1]);
        lcdgotoaddress(92);
        lcdputch_timer('0');                                  //tens digit of seconds
    }
    else
    {
      lcdgotoaddress(93);
      tostring(ssecCounter, secCounter%10);          //units digits of seconds
      lcdputch_timer(ssecCounter[1]);
      lcdgotoaddress(92);
      tostring(ssecCounter, secCounter/10);          //tens digit of seconds
      lcdputch_timer(ssecCounter[1]);
    }

    lcdgotoaddress(91);
    lcdputch_timer(':');

    if (minCounter <=9 )
    {
        lcdgotoaddress(90);
        tostring(sminCounter, minCounter);
        lcdputch_timer(sminCounter[1]);
        lcdgotoaddress(89);
        lcdputch_timer('0');
    }
    else
    {
      lcdgotoaddress(90);
      tostring(sminCounter, minCounter%10);
      lcdputch_timer(sminCounter[1]);
      lcdgotoaddress(89);
      tostring(sminCounter, minCounter/10);
      lcdputch_timer(sminCounter[1]);
    }
}

void resetClock(void)
{
    msCounter   = 0;            //clear all counters
    ms100counter = 0;
    secCounter  = 0;
    minCounter  = 0;
}



