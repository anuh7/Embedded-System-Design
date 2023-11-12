
/* ---------------------------------------------------------------------------------
 * Anuhya Kuraparthy
 * ECEN 5613 - Fall 2022 - Prof. McClure
 * University of Colorado Boulder
 * Revised 11/12/22
 * Attributions: https://saeedsolutions.blogspot.com/2012/11/interfacing-of-8051-with-i2c-based.html
 --------------------------------------------------------------------------------
 * This c file contains functions for required delay to use in I2C functionality, initialization of I2C.
 * It includes functions fot I2C start bit sequence, I2C stop bit sequence, I2C restart sequence, acknowledgment.
 * Finally it includes functions to write and read byte via I2C.
   ---------------------------------------------------------------------------------*/


#include <at89c51ed2.h>       //also includes 8052.h and 8051.h
#include <mcs51reg.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include "i2c.h"


void __delay_us(unsigned int d)
{
   unsigned int i, limit;
   limit = d/15;

   for(i=0;i<limit;i++);
}

void InitI2C(void)
{
	SDA = 1;
	SCK = 1;
}

void I2C_Start(void)
{
	Set_SCK_High;				// Make SCK pin high
	Set_SDA_High;				// Make SDA pin High
	__delay_us(HalfBitDelay);	// Half bit delay
	Set_SDA_Low;				// Make SDA Low
	__delay_us(HalfBitDelay);   // Half bit delay
    Set_SCK_Low;
}

void I2C_ReStart(void)
{
	Set_SCK_Low;				// Make SCK pin low
	__delay_us(HalfBitDelay/2);	// Data pin should change it's value,
								// when it is confirm that SCK is low
	Set_SDA_High;				// Make SDA pin High

	__delay_us(HalfBitDelay/2);	// 1/4 bit delay
	Set_SCK_High;				// Make SCK pin high
	__delay_us(HalfBitDelay/2);	// 1/4 bit delay
	Set_SDA_Low;				// Make SDA Low
	__delay_us(HalfBitDelay/2);	// 1/4 bit delay
}

void I2C_Stop(void)
{
	Set_SDA_Low;				// Make SDA pin low
	__delay_us(HalfBitDelay/2);	// 1/4 bit delay
	Set_SCK_High;				// Make SCK pin high
	__delay_us(HalfBitDelay/2);	// 1/4 bit delay
	Set_SDA_High;				// Make SDA high
	__delay_us(HalfBitDelay/2); // 1/4 bit delay
	Set_SCK_Low;
}

void I2C_Send_ACK(void)
{
	Set_SCK_Low;				// Make SCK pin low
	__delay_us(HalfBitDelay/2);	// Data pin should change it's value,
								// when it is confirm that SCK is low
	Set_SDA_Low;				// Make SDA Low
	__delay_us(HalfBitDelay/2);	// 1/4 bit delay
	Set_SCK_High;				// Make SCK pin high
	__delay_us(HalfBitDelay);	// Half bit delay
}



void I2C_Send_NACK(void)
{
	Set_SCK_Low;				// Make SCK pin low
	__delay_us(HalfBitDelay/2);	// Data pin should change it's value,
								// when it is confirm that SCK is low
	Set_SDA_High;				// Make SDA high
	__delay_us(HalfBitDelay/2);	// 1/4 bit delay
	Set_SCK_High;				// Make SCK pin high
	__delay_us(HalfBitDelay);	// Half bit delay
}



unsigned char I2C_Write_Byte(unsigned char Byte)
{
	unsigned char i;		// Variable to be used in for loop

	for(i=0;i<8;i++)		// Repeat for every bit
	{
		Set_SCK_Low;		//when the SCL (clk) bus is low/ 0 we can make changes
		__delay_us(HalfBitDelay/2);	// Data pin should change it's value,
									// when it is confirm that SCK is low

		if((Byte<<i)&0x80)  // Place data bit value on SDA pin
			Set_SDA_High;	// If bit is high, make SDA high
		else				// Data is transferred MSB first
			Set_SDA_Low;	// If bit is low, make SDA low

		__delay_us(HalfBitDelay/2);	// Toggle SCK pin so that slave can latch data bit
		Set_SCK_High;
		__delay_us(HalfBitDelay);
    }

	// ack by master
	Set_SCK_Low;
    Set_SDA_High;
    __delay_us(HalfBitDelay);
    Set_SCK_High;
    __delay_us(HalfBitDelay);

    while (SDA != 0);
    __delay_us(HalfBitDelay/2);
    Set_SCK_Low;
    __delay_us(HalfBitDelay);
    int get_byte=SDA;

	return get_byte;
}



unsigned char I2C_Read_Byte(void)
{
	unsigned char i, d, RxData = 0;

	for(i=0;i<8;i++)
	{
	    Set_SCK_Low;
	    __delay_us(HalfBitDelay);
	    d = SDA;
	    RxData = RxData|(d<<(7-i));
	    Set_SCK_High;
	    __delay_us(HalfBitDelay);
	}

    return RxData;						// Return received byte
}
