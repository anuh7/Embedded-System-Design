/* ---------------------------------------------------------------------------------
 * Anuhya Kuraparthy
 * ECEN 5613 - Fall 2022 - Prof. McClure
 * University of Colorado Boulder
 * Revised 11/12/22
 * Attributions: Material given in class
                Microchip AN709, Fairchild App Note AN-794, Microchip 24LC16 datasheet
                https://stackoverflow.com/questions/7775991/how-to-get-hexdump-of-a-structure-data
                https://saeedsolutions.blogspot.com/2012/11/interfacing-of-8051-with-i2c-based.html
    --------------------------------------------------------------------------------
* This submodule file contains EEPROM functions to enable read, write, reset and hexdump functionality
   ---------------------------------------------------------------------------------*/

/* -------------------------------------------------- */
//          INCLUDES & DEFINES
/* -------------------------------------------------- */

#include <at89c51ed2.h>       //also includes 8052.h and 8051.h
#include <mcs51reg.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include "i2c.h"
#include "eeprom.h"
#include "sample.h"



void Write_Byte_To_EEPROM(unsigned int Address, unsigned char DataByte)
{
	I2C_Start();										                // Start i2c communication
    signed char block_merge = ((unsigned char)((Address>>8)<<1));  //WORD ADDRESS, block address 0111
	I2C_Write_Byte(0XA0 | block_merge);
	I2C_Write_Byte((unsigned char)Address);				// Write Address lower byte
	I2C_Write_Byte(DataByte);							// Write data byte
	I2C_Stop();											// Stop i2c communication
}


unsigned char Read_Byte_From_EEPROM(unsigned int Address)
{
	unsigned char Byte = 0;								// Variable to store Received byte

	I2C_Start();										// Start i2c communication
    unsigned char block_merge=((unsigned char)(Address>>8)<<1);
    unsigned char control_byte =(0xA0 | block_merge);
    I2C_Write_Byte((0XA0 | block_merge));
    I2C_Write_Byte((unsigned char)Address);	            // Write Address lower byte
	I2C_ReStart();										// Restart i2c
	I2C_Write_Byte(control_byte | 1);                   // Send i2c address of 24LC64 EEPROM with read command
	Byte = I2C_Read_Byte();								// Read byte from EEPROM
	I2C_Send_NACK();                                    // Send a NACK to indiacate single byte read is complete
	I2C_Stop();

	return Byte;				// Return the byte received from 24LC64 EEPROM
}


void hexdump(int address1, int address2)
{
    int size= address2-address1;                        //calculate length of hexdump
    while (size)                                        //while size is not NULL
    {
        printf("%.3X: ", address1);                     //print hexadecimal value of address- 3 digits
       for (int i=0; i<16; i++)
        {
            printf("%.2x ", Read_Byte_From_EEPROM(address1));
            address1++;                                 //increment address
            size--;                                     //decrement address
            if (size==0)
                break;
        }
        printf ("\n\r");
    }
}

void reset_eeprom(void)
{
    I2C_Start();                        //start i2c communication
    __delay_us(HalfBitDelay);

	Set_SDA_High;

        for (int i=0; i<10; i++)            //clock in 9 bits of '1'
        {
            SCK = 0;
            __delay_us(HalfBitDelay);
            SCK = 1;
            __delay_us(HalfBitDelay);
        }

    I2C_Start();                    //start i2c communication
    I2C_Stop();                     //stop i2c communication
}
