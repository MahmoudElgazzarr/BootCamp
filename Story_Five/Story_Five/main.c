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
	//inputs
	DIO_SetPinDirection(PIN10,INPUT);
	//DIO_SetPinDirection(PIN1,INPUT);
	//outputs
	DIO_SetPinDirection(PIN13,OUTPUT);
	
    while (1) 
    {
	
		if((DIO_ReadPin(PIN10)) == 1)
		{
			while(DIO_ReadPin(PIN10)==1)
			{
					DIO_WritePin(PIN13,HIGH);		
					delay_ms(1000);
			}
		}
		DIO_WritePin(PIN13,LOW);
    }
}

