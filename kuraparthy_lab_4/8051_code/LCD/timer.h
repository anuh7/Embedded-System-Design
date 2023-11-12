#ifndef TIMER_H_INCLUDED
#define TIMER_H_INCLUDED


/* ---------------------------------------------------------------------------------
 * Anuhya Kuraparthy
 * ECEN 5613 - Fall 2022 - Prof. McClure
 * University of Colorado Boulder
 * Revised 11/12/22
 --------------------------------------------------------------------------------
 * This c file contains declarations of functions to handle clock functionality
   ---------------------------------------------------------------------------------*/


/**
 * @brief Updates all the timer counters every time the software interrupt is called
 * @return void
 */
void updateTimeCounters(void);

void tostring(char str[], int num);

/**
 * @brief Displays all the timer counters at the last row on LCD display while the Display_flag is set
 * @return void
 */
void display_clock(void);

/**
 * @brief Clears all the timer counters when called
 * @return void
 */
void resetClock(void);

#endif // TIMER_H_INCLUDED
