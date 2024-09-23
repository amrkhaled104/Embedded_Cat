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

int main() {
	DDRA=0xFF;
    while (1) {
    	for(int i=0;i<8;i++){
    		SET_BIT(PORTA,i);
    		_delay_ms(500);
    	}
    	for(int i=0;i<8;i++){
    		CLEAR_BIT(PORTA,i);
    		_delay_ms(500);
    	}
    }

    return 0;
}
