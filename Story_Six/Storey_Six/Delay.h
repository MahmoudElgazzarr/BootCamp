/*
 * Delay.h
 *
 * Created: 2/13/2019 4:52:49 PM
 *  Author: AVE-LAP-040
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#ifndef DELAY_H_
#define DELAY_H_
#include "Types.h"

extern void delay_ms(uint32 time_in_ms);


#endif /* DELAY_H_ */