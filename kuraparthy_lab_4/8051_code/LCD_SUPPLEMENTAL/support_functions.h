#ifndef SUPPORT_FUNCTIONS_H_INCLUDED
#define SUPPORT_FUNCTIONS_H_INCLUDED


/* ---------------------------------------------------------------------------------
 * Anuhya Kuraparthy
 * ECEN 5613 - Fall 2022 - Prof. McClure
 * University of Colorado Boulder
 * Revised 20/12/22
 * Attributions: Lcd guide distributed in class
                 Hitachi LCD controller data sheet
                 lecture slides
                 https://www.8051projects.net/lcd-interfacing/lcd-custom-character.php
 --------------------------------------------------------------------------------
 * This c file contains declarations of all the functions required for LCD supplemental parts.
   ---------------------------------------------------------------------------------*/


#define Rs P1_5             //Register Select Signal
#define Rw P1_6             //Read/Write Select Signal




/**
 * @brief getstr gets a string (char array) and passes it to pointer.
 * @param a     pointer to store string in
 * @return length   of printed string with null char
 */
int getstr(char *a);

/**
 * @brief getchar gets a char from RX. Blocking.
 * @param a     pointer to store string in
 * @return char   returns the received character
 */
int getchar (void);

/**
 * @brief putchar takes a char and transmits it. Blocking.
 * @param a     pointer to store string in
 * @return No return value.
 */
int putchar (int c);

/**
 * @brief putstr takes a string (char array) and prints till it finds a NULL.
 * @param s     pointer to print string from
 * @return int  length of printed string with null char
 */
int putstr (char *s);

/**
 * @brief initializes the serial communication (baud rate=9600)
 * @return void
 */
void serial_init(void);

/**
 * @brief Produce approximate delay in given uSecs.
 * @param d   required delay in usecs
 * @return void
 */
void delay(unsigned int d);

/**
 * @brief Polls the LCD busy flag. Function does not return until the LCD controller is ready to accept another command.
 * @return void
 */
void lcdbusywait();

/**
 * @brief Enters the required command at the pointer of current LCD cursor.
 * @param command   Instructions for the LCD controller
 * @return void
 */
void lcd_cmd(unsigned char command);

/**
 * @brief Initializes the LCD
 * @return void
 */
void lcd_init();

/**
 * @brief Writes the specified character to the current LCD cursor position. Call lcdbusywait().
 * @param cc    character to print onto LCD
 * @return void
 */
void lcdgotoaddress(unsigned char addr);

/**
 * @brief Writes the specified character to the current LCD cursor position. Call lcdbusywait().
 * @param cc    character to print onto LCD
 * @return void
 */
void lcdputch(unsigned char cc);

/**
 * @brief Writes the value in the CGRAM. Call lcdbusywait().
 * @param cc    character to store in CGRAM
 * @return void
 */
void lcdgotoaddress_cgram(unsigned char addr);

/**
 * @brief Writes the specified character to the current LCD cursor position from CGRAM. Call lcdbusywait().
 * @param cc    character to print onto LCD
 * @return void
 */
void lcdputch_cgram(unsigned char cc);

/**
 * @brief Prints hex values of the data at LCD CGRAM addresses. Calls lcdgetch_cgram().
 * @return void
 */
void hexdump_cgram(void);

/**
 * @brief Reads the character at the current LCD cursor position.
 * @return int  Read byte at LCD address
 */
int lcdgetch_cgram (void);

/**
 * @brief Function to create a 5x8 pixel custom character with character code location (0<=location<=7) using
 *        the row values stored at the pointer *ptr. Prints the custom created character at DDRAM address 0.
 * @param location      character is stored at this position in CGRAM
 * @param *ptr      pointer to the the 8-byte array of row values given
 * @return void
 */
void LCD_build(unsigned char location, unsigned char *ptr);

/**
 * @brief Function to create a 5x8 pixel custom character with character code location (0<=location<=7) using
 *        the row values stored at the pointer *ptr.
 * @param location      character is stored at this position in CGRAM
 * @param *ptr      pointer to the the 8-byte array of row values given
 * @return void
 */
void LCD_build_main(unsigned char location, unsigned char *ptr);

/**
 * @brief Clears the LCD display
 * @return void
 */
void lcdclear();

#endif // SUPPORT_FUNCTIONS_H_INCLUDED
