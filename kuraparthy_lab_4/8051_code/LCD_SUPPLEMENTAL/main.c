/* ---------------------------------------------------------------------------------
 * Anuhya Kuraparthy
 * ECEN 5613 - Fall 2022 - Prof. McClure
 * University of Colorado Boulder
 * Revised 11/12/22
 * Attributions: Lcd guide distributed in class
                 Hitachi LCD controller data sheet
                 lecture slides
                 https://www.8051projects.net/lcd-interfacing/lcd-custom-character.php
                 sdcc_syntax_example.c given in class
 --------------------------------------------------------------------------------
 * This project allows the user to interact with the LCD on the development board. This file initializes the lcd
 * and enables serial communication at baud rate=9600. It provides a user-interface to interact with the LCD via PC terminal emulator
 * screen which enables the user to create custom characters characters, print the created fun logo or print hexdump of CGRAM.
   ---------------------------------------------------------------------------------*/

#include <mcs51/8051.h>
#include <at89c51ed2.h>
#include <mcs51reg.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


#include "support_functions.h"

void main(void)
{
    char character[5];
    char get_input[2];
    uint8_t get_num;
    uint8_t value=0;
    __data uint8_t total_value=0;
    uint8_t user_array[8]={0};
    unsigned char pattern[8]={0x04,0x0E,0x0E,0x0E,0x1F,0x00,0x04,0x00};
    unsigned char pattern2[8]={0x00,0x00,0x00,0x1F,0x1F,0x00,0x00,0x00};

    serial_init();
    lcd_init();

    puts("Press 1 to create custom character. Enter 0/1 for input of every column for each row. \r");
    puts("Press 2 to print created logo \r");
    puts("Press 3 for hexdump of CGRAM\r");
    puts("Press ? user menu\r");


    while(1)
    {
        puts("\n\r<<Enter command for operation>>\n\r");
        getstr(character);
        if (character[0]=='1')
        {
            lcdclear();
            for(uint8_t i = 0; i < 8; i++)              //8*5 inputs required by the user
            {
                    printf("row number %d \n\r", i);
                    for (uint8_t j = 0; j < 5; j++)
                    {
                            printf("%d enter character \n\r", j);
                            getstr(get_input);
                            get_num = atoi(get_input);      //convert string to integer
                            value= (get_num << j);          //2^j value of bit
                            total_value = total_value + value;      //appending to ttotal row value
                            printf("total value: %d \n\r", total_value);    //user can see final row value
                    }
                user_array[i]=total_value;
                total_value=0;
                printf("user array: %d \n\r", user_array[i]);
            }

            LCD_build_main(0, user_array);      //created user array is stored at 0x40 in CGRAM and printed

        }

        else if (character[0]=='2')
        {
            LCD_build(0, pattern);          //bell pattern

            for (uint8_t i=0; i<16; i++)
            {
                lcdgotoaddress(0+i);        //row 1 of LCD
                lcdputch(0x00);
            }

            for (uint8_t i=0; i<16; i++)
            {
                lcdgotoaddress(16 + i);     //row 3 of LCD
                lcdputch(0x00);
            }

            LCD_build(1, pattern2);         //dashes pattern

            for (uint8_t i=0; i<8; i++)
            {
                lcdgotoaddress(68+i);       //row 2 of LCD
                lcdputch(0x01);
            }

            for (uint8_t i=0; i<8; i++)
            {
                lcdgotoaddress(84 + i);     //row 4 of LCD
                lcdputch(0x01);
            }

        }

        else if (character[0]=='3')
        {
            hexdump_cgram();
        }

        else if (character[0]=='?')
        {
                puts("Press 1 to create custom character. Enter 0/1 for input of every column for each row. \r");
                puts("Press 2 print created custom character \r");
                puts("Press 3 for hexdump of CGRAM\r");
                puts("Press ? user menu\r");
        }

        else
        {
            puts("Enter a valid command or press '?' for user menu \n\r");
        }
    }
}
