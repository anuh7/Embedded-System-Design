#ifndef LAB3_PART22_H_INCLUDED
#define LAB3_PART22_H_INCLUDED

/* ---------------------------------------------------------------------------------
 * Anuhya Kuraparthy
 * ECEN 5613 - Fall 2022 - Prof. McClure
 * University of Colorado Boulder
 * Revised 10/18/22
 * Attributions: Material given in class
                https://stackoverflow.com/questions/7775991/how-to-get-hexdump-of-a-structure-data
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


/* -------------------------------------------------- */
//          FUNCTION DECLARATIONS
/* -------------------------------------------------- */

// getstr gets a string (char array) and passes it to pointer.
// Returns length of printed string with null char
int getstr(char *a);

// getchar gets a char from RX. Blocking. Returns char.
int getchar (void);

// putchar takes a char and TX's it. Blocking. No return value.
int putchar (int c);

// putstr takes a string (char array) and prints till it finds a NULL.
// Returns length of printed string with null char
int putstr (char *s);

/*initializes the serial communication. No return value.
// baud rate=9600
*/
void serial_init(void);

/* function to print hexadecimal values
// param-addr passes the start address of where the characters are stored
// param-len  length of the number of characters to print hexadecimal values of
// param- perline   number of characters per line
*/
void hexDump (const void * addr, const int len, int perLine);

/*function to pass value v to debug_address while in debug mode. No return value.
//param v value to be passed
*/
void dataout(uint8_t v);



#endif // LAB3_PART22_H_INCLUDED
