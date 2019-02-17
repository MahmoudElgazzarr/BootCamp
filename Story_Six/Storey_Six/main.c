/*
 * Story_Five.c
 *
 * Created: 2/13/2019 5:42:22 PM
 * Author : AVE-LAP-040
 */ 

//#include <avr/io.h>
#include "DIO_Registers_Definitions.h"
#include "DIO_Registers.h"
#include "Delay.h"


int main(void)
{
    /* Replace with your application code */
	/*OUTPUTS*/
	DIO_SetPinDirection(PIN12,OUTPUT);
	DIO_SetPinDirection(PIN13,OUTPUT);
	DIO_SetPinDirection(PIN14,OUTPUT);
	DIO_SetPinDirection(PIN15,OUTPUT);
	
    while (1) 
    {
		DIO_WritePin(PIN12,HIGH);		
		delay_ms(100);
		DIO_WritePin(PIN12,LOW);
		delay_ms(100);
		DIO_WritePin(PIN13,HIGH);
		delay_ms(100);
		DIO_WritePin(PIN13,LOW);
		delay_ms(100);
		DIO_WritePin(PIN14,HIGH);
		delay_ms(100);
		DIO_WritePin(PIN14,LOW);
		delay_ms(100);
		/*
		DIO_WritePin(PIN15,HIGH);
		delay_ms(100);
		DIO_WritePin(PIN15,LOW);
		delay_ms(100);
		*/
    }
}