#ifndef EEPROM_H_INCLUDED
#define EEPROM_H_INCLUDED

/* ---------------------------------------------------------------------------------
 * Anuhya Kuraparthy
 * ECEN 5613 - Fall 2022 - Prof. McClure
 * University of Colorado Boulder
 * Revised 10/18/22
 * Attributions: Material given in class
                https://stackoverflow.com/questions/7775991/how-to-get-hexdump-of-a-structure-data
   --------------------------------------------------------------------------------
This submodule file contains declarations of EEPROM functions to enable read, write, reset and hexdump functionality
   ---------------------------------------------------------------------------------*/

/* -------------------------------------------------- */
//          INCLUDES & DEFINES
/* -------------------------------------------------- */


// Define 24LC16 i2c device address
#define Device_Address_24LC64_EEPROM	0xA0

/**
 * @brief writes a single byte on given address
 * @param Address   can have any value from 0 to 0x7FF
 * @param DataByte  can have a value of 0 to 0xFF.
 * @return void
 */
void Write_Byte_To_EEPROM(unsigned int Address, unsigned char DataByte);


/**
 * @brief reads a single byte from given address
 * @param Address   can have any value from 0 to 0x7FF
 * @return void
 */
unsigned char Read_Byte_From_EEPROM(unsigned int Address);

/**
 * @brief Prints hexdump of values stored from address1 to address2
 * @param Address1  start address of hexdump
 * @param Address2  end address of hexdump
 * @return void
 */
void hexdump(int address1, int address2);

/**
 * @brief performs software reset of the EEPROM
 * @return void
 */
void reset_eeprom(void);


#endif // EEPROM_H_INCLUDED
