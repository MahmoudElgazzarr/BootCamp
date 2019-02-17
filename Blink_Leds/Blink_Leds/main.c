/*
 * Blink_Leds.c
 *
 * Created: 2/13/2019 5:24:59 PM
 * Author : AVE-LAP-040
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include "avr/delay.h"


int main(void)
{
    /* Replace with your application code */
	DDRB |=((1<<PINB4)|(1<<PINB5)|(1<<PINB6)|(1<<PINB7));
    while (1) 
    {
		PORTB |=((1<<PINB4)|(1<<PINB5)|(1<<PINB6)|(1<<PINB7));
		_delay_ms(1000);
		PORTB &=~(1<<PINB4);
		PORTB &=~((1<<PINB5));
		PORTB &=~((1<<PINB6));
		PORTB &=~((1<<PINB7));
		_delay_ms(1000);
    }
}

