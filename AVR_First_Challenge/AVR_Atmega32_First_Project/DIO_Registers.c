/*
 * DIO_Registers.c
 *
 * Created: 2/13/2019 3:17:13 PM
 *  Author: AVE-LAP-040
 */ 
#include "types.h"
#include "DIO_Registers.h"
#include "DIO_Registers_Definitions.h"
#include "BitwiseOperation.h"

void DIO_WritePin(uint8 PinNum,uint8 PinValue)
{
	if(PinNum >= 0 && PinNum < 8 )
	{
			if(PinValue == 1)
			{
				Set_Bit( PORTA , PinNum);
			}
			if(PinValue == 0)
			{
				Clear_Bit( PORTA , PinNum);
			}
	}
	if(PinNum > 7 && PinNum < 16)
	{
		if(PinValue == 1)
		{
			Set_Bit( PORTB , PinNum);
		}
		if(PinValue == 0)
		{
			Clear_Bit( PORTB , PinNum);
		}
	}
	if(PinNum > 15 && PinNum < 24)
	{
		if(PinValue == 1)
		{
			Set_Bit( PORTC , PinNum);
		}
		if(PinValue == 0)
		{
			Clear_Bit( PORTC , PinNum);
		}
	}
	
	if(PinNum > 24 && PinNum < 32)
	{
			if(PinValue == 1)
			{
				Set_Bit( PORTD , PinNum);
			}
			if(PinValue == 0)
			{
				Clear_Bit( PORTD , PinNum);
			}
	}
}

/*
pindirection = 1 output
pindirection = 0 input
*/
void DIO_SetPinDirection(uint8 PinNum,uint8 PinDirection)
{
		if(PinNum >= 0 && PinNum < 8 )
		{
			if(PinDirection== 1)
			{
				Set_Bit( DDRA , PinNum);
			}
			if(PinDirection== 0)
			{
				Clear_Bit( DDRA , PinNum);
			}
		}
		if(PinNum > 7 && PinNum < 16)
		{
			if(PinDirection== 1)
			{
				Set_Bit( DDRB , PinNum);
			}
			if(PinDirection== 0)
			{
				Clear_Bit( DDRB , PinNum);
			}
		}
		if(PinNum > 15 && PinNum < 24)
		{
			if(PinDirection== 1)
			{
				Set_Bit( DDRC , PinNum);
			}
			if(PinDirection== 0)
			{
				Clear_Bit( DDRC , PinNum);
			}
		}
		
		if(PinNum > 24 && PinNum < 32)
		{
			if(PinDirection== 1)
			{
				Set_Bit( DDRD , PinNum);
			}
			if(PinDirection== 0)
			{
				Clear_Bit( DDRD , PinNum);
			}
		}
}
uint8 DIO_ReadPin(uint8 PinNum)
{
		uint8 return_value;
		if(PinNum >= 0 && PinNum < 8 )
		{
			return_value = Get_Bit(PINA , PinNum);
		}
		if(PinNum > 7 && PinNum < 16)
		{
			return_value = Get_Bit(PINB , PinNum);
		}
		if(PinNum > 15 && PinNum < 24)
		{
			return_value = Get_Bit(PINC , PinNum);
		}
		
		if(PinNum > 24 && PinNum < 32)
		{
			return_value = Get_Bit(PIND , PinNum);
		}
		return return_value;
}