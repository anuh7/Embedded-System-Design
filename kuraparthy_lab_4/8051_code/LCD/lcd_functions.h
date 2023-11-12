#ifndef LCD_FUNCTIONS_H_INCLUDED
#define LCD_FUNCTIONS_H_INCLUDED

/* ---------------------------------------------------------------------------------
 * Anuhya Kuraparthy
 * ECEN 5613 - Fall 2022 - Prof. McClure
 * University of Colorado Boulder
 * Revised 11/12/22
 * Attributions: https://saeedsolutions.blogspot.com/2012/11/interfacing-of-8051-with-i2c-based.html
 --------------------------------------------------------------------------------
 * This c file contains declarations of all the functions required for LCD.
   ---------------------------------------------------------------------------------*/

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
void lcdputch(unsigned char cc);
void lcdputch_timer(unsigned char cc);


/**
 * @brief Sets the cursor to the specified LCD DDRAM address.
 * @param addr    DDRAM address of LCD
 * @return void
 */
void lcdgotoaddress(unsigned char addr);


/**
 * @brief Writes the specified null-terminated string to the LCD starting at the current LCD cursor position.
 *  Automatically wraps long strings to the next LCD line after the right edge of the display screen has been reached.
 * @param ss    pointer to the string that needs to be printed
 * @return void
 */
void lcdputstr(char *ss);

/**
 * @brief Sets the cursor to the LCD DDRAM address corresponding to the specified row and column. Location (0,0) is
 *          the top left corner of the LCD screen.
 * @param row    required row
 * @return column   required column
 */
void lcdgotoxy(uint8_t row, uint8_t column);

/**
 * @brief Clears the LCD display
 * @return void
 */
void lcdclear();


/**
 * @brief Reads the character at the current LCD cursor position.
 * @return int  Read byte at LCD address
 */
int lcdgetch(void);

/**
 * @brief Prints hex values of the data at LCD DDRAM addresses. Calls lcdgetch().
 * @return void
 */
void hexdump(void);

/**
 * @brief Saves the current address of the cursor
 * @return uint8_t  cursor address
 */
uint8_t current_position();


#endif // LCD_FUNCTIONS_H_INCLUDED
