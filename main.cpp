/*
 * povToy.cpp
 *
 * Created: 31/05/2018 19:37:37
 * Author : Marina
 */ 
#define F_CPU 16000000UL //definição da frequência de clock para uso da biblioteca delay

#include <avr/io.h>
#include <util/delay.h>

void povDisplay(uint8_t byteportd,uint8_t byteportb)
{
	PORTD= byteportd;
	PORTB= byteportb;
	_delay_ms(200);	
}

int main(void)
{
	
    DDRD = 0x3F; //set up all led pins as outputs
	DDRB = 0x2;
    while (1) 
    {
		povDisplay(0x0E<<2,0);
		povDisplay(0x18<<2,0);
		povDisplay(0xBD<<2,0x2);
		povDisplay(0x76<<2,0x1);
		povDisplay(0x3C<<2,0);
		povDisplay(0x3C<<2,0);
		povDisplay(0x3C<<2,0);
		povDisplay(0x76<<2,0x1);
		povDisplay(0xBD<<2,0x2);
		povDisplay(0x18<<2,0);
		povDisplay(0x0E<<2,0);
		
		PORTD = 0;
		PORTB = 0;
		
		_delay_ms(10);
    }
	return 0;
}

