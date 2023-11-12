#ifndef I2C_H_INCLUDED
#define I2C_H_INCLUDED

/* ---------------------------------------------------------------------------------
 * Anuhya Kuraparthy
 * ECEN 5613 - Fall 2022 - Prof. McClure
 * University of Colorado Boulder
 * Revised 11/12/22
 * Attributions: https://saeedsolutions.blogspot.com/2012/11/interfacing-of-8051-with-i2c-based.html
 --------------------------------------------------------------------------------
 * This c file contains declarations of all the functions in i2c.c
   ---------------------------------------------------------------------------------*/

/* -------------------------------------------------- */
//          DEFINES
/* -------------------------------------------------- */

// Define i2c pins
#define SDA P1_4		// Data pin for i2c
#define SCK P1_3		// Clock pin for i2c

// Define i2c speed
#define I2C_SPEED_FACTOR	1	// Low value means low i2c frequency
#define Crystal_Value		12  // MHz
#define HalfBitDelay 		(500*Crystal_Value)/(12*I2C_SPEED_FACTOR)

// Define macros
#define Set_SDA_Low		SDA = 0
#define Set_SDA_High	SDA = 1
#define Set_SCK_Low		SCK = 0
#define Set_SCK_High	SCK = 1


/**
 * @brief Produce approximate delay in given uSecs.
 * @param d   required delay in usecs
 * @return void
 */
void __delay_us(unsigned int d);

/**
 * @brief Set initial values of SCK and SDA pins
 * @return void
 */
void InitI2C(void);

/**
 * @brief Sends start bit sequence
 * @return void
 */
void I2C_Start(void);

/**
 * @brief Sends start bit sequence
 * @return void
 */
void I2C_ReStart(void);

/**
 * @brief Sends stop bit sequence
 * @return void
 */
void I2C_Stop(void);

/**
 * @brief sends ACK bit sequence
 * @return void
 */
void I2C_Send_ACK(void);

/**
 * @brief sends NACK bit sequence
 * @return void
 */
void I2C_Send_NACK(void);

/**
 * @brief Transfers one byte
 * @param Byte  character to be transferred
 * @return unsigned char     returns acknowledgment from slave
 */
unsigned char I2C_Write_Byte(unsigned char Byte);

/**
 * @brief reads one byte
 * @return unsigned char     returns the read byte
 */
unsigned char I2C_Read_Byte(void);

#endif // I2C_H_INCLUDED
