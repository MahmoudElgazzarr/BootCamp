/*
 * delay_Timer.h
 *
 * Created: 2/14/2019 10:07:03 AM
 *  Author: AVE-LAP-040
 */ 


#ifndef DELAY_TIMER_H_
#define DELAY_TIMER_H_

void timer_init(void);
void timer_delay(uint32 n);

#define SFIOR (*(volatile uint8*)0x50)
#define TCCR1A (*(volatile uint8*)0x4F)
#define TCNT0 (*(volatile uint8*)0x52)
#define OCR0 (*(volatile uint8*)0x5C)
#define TIMSK (*(volatile uint8*)0x59)
#define TIFR (*(volatile uint8*)0x58)
#define SREG (*(volatile uint8*)0x5F)
#define TCCR0 (*(volatile uint8*)0x53)

#define IBit 7

#define OCF0 1

#define CS00 0
#define CS01 1
#define CS02 2

#define WGM01 3
#define COM00 4
#define COM01 5
#define WGM00 6
#define FOC0 7


#endif /* DELAY_TIMER_H_ */