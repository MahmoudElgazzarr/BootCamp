/*
 * AVR_Atmega32_First_Project.c
 *
 * Created: 2/13/2019 10:38:26 AM
 * Author : AVE-LAP-040
 */
#include "stdio.h"
#include "Types.h"
#include "BitwiseOperation.h"

int main(void)
{
    /* Replace with your application code */
	uint8 x=1;
	uint8 y=0;
	y=(1<<x);
	//Set_Bit(x,0);
	printf("%d",y);

}

