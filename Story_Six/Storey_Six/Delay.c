/*
 * Delay.c
 *
 * Created: 2/13/2019 4:52:36 PM
 *  Author: AVE-LAP-040
 */ 
#include "Delay.h"
#include "Types.h"

void delay_ms(uint32 time_in_ms)
{
	uint32 loops = (((time_in_ms)*(F_CPU))/10000);
	uint32 i;
	for(i=0;i<loops;i++)
	{
		//do nothing
	}
}