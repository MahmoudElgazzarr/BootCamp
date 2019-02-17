/*
 * Story_Seven.c
 *
 * Created: 2/14/2019 10:03:13 AM
 * Author : AVE-LAP-040
 */ 

//#include <avr/io.h>

#include "Types.h"
#include "DIO_Registers_Definitions.h"
#include "DIO_Registers.h"
#include "delay_Timer.h"


int main(void)
{
	/*Set Leds As OUTPUt*/
	DIO_SetPinDirection(PIN12,OUTPUT);
	DIO_SetPinDirection(PIN13,OUTPUT);
	DIO_SetPinDirection(PIN14,OUTPUT);
	DIO_SetPinDirection(PIN15,OUTPUT);
	timer_init();
	while(1)
	{
		DIO_WritePin(PIN12,LOW);
		DIO_WritePin(PIN13,LOW);
		DIO_WritePin(PIN14,LOW);
		DIO_WritePin(PIN15,LOW);
		timer_delay(1000);
		DIO_WritePin(PIN12,HIGH);
		DIO_WritePin(PIN13,HIGH);
		DIO_WritePin(PIN14,HIGH);
		DIO_WritePin(PIN15,HIGH);
		timer_delay(1000);
	}
	
}