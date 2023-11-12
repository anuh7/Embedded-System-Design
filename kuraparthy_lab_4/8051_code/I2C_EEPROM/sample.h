#ifndef SAMPLE_H_INCLUDED
#define SAMPLE_H_INCLUDED

/* ---------------------------------------------------------------------------------
 * Anuhya Kuraparthy
 * ECEN 5613 - Fall 2022 - Prof. McClure
 * University of Colorado Boulder
 * Revised 11/12/22
 * Attributions: sdcc_syntax_example.c given in class
 --------------------------------------------------------------------------------
 * This c file contains declarations of functions to initialise serial communication, get and print characters and strings
 * via the PC terminal emulator screen
   ---------------------------------------------------------------------------------*/


/**
 * @brief checks if the entered address is within the range of EEPROM addresses
 * @param address     EEPROM address to check
 * @return 1    on success
 * @return 0    on failure
 */
int checkAddress(unsigned int address);

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

/*initializes the serial communication. No return value.
// baud rate=9600
*/
/**
 * @brief initializes the serial communication (baud rate=9600)
 * @return void
 */
void serial_init(void);


#endif // SAMPLE_H_INCLUDED
