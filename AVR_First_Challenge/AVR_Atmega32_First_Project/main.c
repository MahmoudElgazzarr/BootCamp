/*
 * AVR_Atmega32_First_Project.c
 *
 * Created: 2/13/2019 10:38:26 AM
 * Author : AVE-LAP-040
 */ 

#include "Types.h"
#include "DIO_Registers_Definitions.h"
#include "DIO_Registers.h"


int main(void)
{
	int x=0;
    /* Replace with your application code */
	DIO_SetPinDirection(PIN0,OUTPUT);
	DIO_WritePin(PIN0,HIGH);
	x++;
}

