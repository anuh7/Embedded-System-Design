#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

/** ---------------------------------------------------------------------------------
 * Anuhya Kuraparthy
 * ECEN 5613 - Fall 2022 - Prof. McClure
 * University of Colorado Boulder
 * Revised 10/22/22
   ---------------------------------------------------------------------------------*/

int getstr(char *a);
int getchar (void);
int putstr (char *s);
int putchar (int c);
void pwm_init();
void serial_init(void);
void timer_init();
void watchdog_init();
void timer_interrupt0();


#endif // MAIN_H_INCLUDED
