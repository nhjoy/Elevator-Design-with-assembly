/*
 * Blink.c
 *
 * Created: 12/4/2020 5:49:30 PM
 *  Author: nhjoy
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL // 16 MHz clock speed
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC = 0xFF; //Makes PORTC as Output
	while(1) //infinite loop
	{
		PORTC = 0xFF; //Turns ON All LEDs
		_delay_ms(1000); //1 second delay
		PORTC= 0x00; //Turns OFF All LEDs
		_delay_ms(1000); //1 second delay
	}
}