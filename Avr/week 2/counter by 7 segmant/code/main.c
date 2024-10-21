/*
 * main.c
 *      Author: Amr Khaled
 */
#include "STD_TYPE.h"
#include "BIT_MATH.h"
#include <util/delay.h>

#define DDRA *((u8 *)0x3A)  // Data Direction Register A
#define PORTA *((u8 *)0x3B) // Port A Register
#define PINA *((volatile u8 *)0x39) // Input Pins Register A
#define DDRB *((u8 *)0x37)  // Data Direction Register B
#define PORTB *((u8 *)0x38) // Port B Register
#define PINB *((volatile u8 *)0x36) // Input Pins Register B
#define DDRD *((u8 *)0x31)  // Data Direction Register D
#define PORTD *((u8 *)0x32)
#define PIND *((u8 *)0x30)

int main() {
	DDRB = 0xff;
	PORTB = 0xff;

	DDRD = 0x00;
	PORTD = 0x03;

	u8 arr1[10] = {
		0x3F, 0x06, 0x5B, 0x4F, 0x66,
		0x6D, 0x7D, 0x07, 0x7F, 0x6F
	};

	int i = 0;

    while (1) {
    	if (READ_BIT(PIND, 0)==0) {
    		i++;
    		if (i > 9) {
    			i = 9;
    			continue;
    		}
    		PORTB = ~arr1[i];
    		while (READ_BIT(PIND, 0)==0);
    	}
    	else if (READ_BIT(PIND, 1)==0) {
    		i--;
    		if (i < 0) {
    		    i = 0;
    		    continue;
    		}
    		PORTB = ~arr1[i];
    		while (READ_BIT(PIND, 1)==0);
    	}
		PORTB = ~arr1[i] ;
    }
    return 0;
}
