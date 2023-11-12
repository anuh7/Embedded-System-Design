/* ---------------------------------------------------------------------------------
 * Anuhya Kuraparthy
 * ECEN 5613 - Fall 2022 - Prof. McClure
 * University of Colorado Boulder
 * Revised 11/12/22
 * Attributions: Material given in class
                 Microchip AN709, Fairchild App Note AN-794, Microchip 24LC16 datasheet
                 EEPROM Guide "Adding an NM24C04 (or NM24C16) EEPROM to your board"
                 https://saeedsolutions.blogspot.com/2012/11/interfacing-of-8051-with-i2c-based.html
 --------------------------------------------------------------------------------
 * This project initialises the I2C communication and enables serial communication at baud rate=9600.
 * It provides a user-interface to interact with the EEPROM via PC terminal emulator screen which enables
 * user to read, write into addresses in the EEPROM.
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
#include "sample.h"
#include "i2c.h"
#include "eeprom.h"



void main(void)
{
    unsigned char RxByte = 0;
    unsigned char character[5];
    unsigned char address[10];
    unsigned char address1[10];
    unsigned char address2[10];
    unsigned char value[10];
    int addressint;
    int address1int;
    int address2int;
    int valueint;
    int isAddressValid;

	serial_init();
	printf("SERIAL INITIALISATION \n\r");// Initialize i2c pins
	InitI2C();
    puts("Enter 1 to write data at <address> \r");
    puts("Enter 2 to read data at <address> \r");
    puts("Enter 3 for hexdump from <address1> to <address2> \r");
    puts("Enter 4 to reset EEPROM \r");
    puts("Enter ? for user menu \r");

    while(1)
    {
        puts("<<Enter command for operation>>\n\r");
        getstr(character);
        if (character[0]=='1'){
            puts("Enter address to write data to \n\r");
            getstr(address);
            addressint=(int)strtol(address, NULL, 16);
            isAddressValid= checkAddress(addressint);
            if (isAddressValid==1)
                {
                puts("Enter data value \n\r");
                getstr(value);
                valueint=(int)strtol(value, NULL, 16);
                Write_Byte_To_EEPROM(addressint, valueint);
                }
            else
                {
                  printf("Invalid address \n\r");
                }
        }

        else if (character[0]=='2'){
            puts("Enter address to read data from \n\r");
            getstr(address);
            addressint=(int)strtol(address, NULL, 16);
            isAddressValid= checkAddress(addressint);
            if (isAddressValid==1)
                {
                RxByte = Read_Byte_From_EEPROM(addressint);
                printf("Read byte %X \n\r", RxByte);
                }
            else
                {
                  printf("Invalid address \n\r");
                }
        }

        else if (character[0]=='3'){
            puts("Enter address1 to start hexdump from \n\r");
            getstr(address1);
            puts("Enter address2 to end hexdump at \n\r");
            getstr(address2);
            address1int=(int)strtol(address1, NULL, 16);
            address2int=(int)strtol(address2, NULL, 16);
            hexdump(address1int, address2int);
        }

        else if (character[0]=='4'){
            puts("Reset eeprom \n\r");
            reset_eeprom();
        }

        else if (character[0]=='?'){
                puts("Enter 1 to write data at <address> \r");
                puts("Enter 2 to read data at <address> \r");
                puts("Enter 3 for hexdump from <address1> to <address2> \r");
                puts("Enter 4 to reset EEPROM \r");
        }

        else{
            puts("Enter correct command or enter '?' for the user menu \r\n");
        }
    }

}

