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
			Set_Bit( PORTB , (PinNum-8));
		}
		if(PinValue == 0)
		{
			Clear_Bit( PORTB , (PinNum-8));
		}
	}
	if(PinNum > 15 && PinNum < 24)
	{
		if(PinValue == 1)
		{
			Set_Bit( PORTC , (PinNum-16));
		}
		if(PinValue == 0)
		{
			Clear_Bit( PORTC , (PinNum-16));
		}
	}
	
	if(PinNum > 24 && PinNum < 32)
	{
			if(PinValue == 1)
			{
				Set_Bit( PORTD , (PinNum-24));
			}
			if(PinValue == 0)
			{
				Clear_Bit( PORTD , (PinNum-24));
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
				Set_Bit( DDRB , (PinNum-8));
			}
			if(PinDirection== 0)
			{
				Clear_Bit( DDRB , (PinNum-8));
			}
		}
		if(PinNum > 15 && PinNum < 24)
		{
			if(PinDirection== 1)
			{
				Set_Bit( DDRC , (PinNum-16));
			}
			if(PinDirection== 0)
			{
				Clear_Bit( DDRC , (PinNum-16));
			}
		}
		
		if(PinNum > 24 && PinNum < 32)
		{
			if(PinDirection== 1)
			{
				Set_Bit( DDRD , (PinNum-24));
			}
			if(PinDirection== 0)
			{
				Clear_Bit( DDRD , (PinNum-24));
			}
		}
}
uint8 DIO_ReadPin(uint8 PinNum)
{
		uint8 return_value=0;
		if(PinNum >= 0 && PinNum < 8 )
		{
			return_value = Get_Bit(PINA , PinNum);
		}
		if(PinNum > 7 && PinNum < 16)
		{
			return_value = Get_Bit(PINB , (PinNum-8));
		}
		if(PinNum > 15 && PinNum < 24)
		{
			return_value = Get_Bit(PINC , (PinNum-16));
		}
		
		if(PinNum > 24 && PinNum < 32)
		{
			return_value = Get_Bit(PIND , (PinNum-24));
		}
		return return_value;
}