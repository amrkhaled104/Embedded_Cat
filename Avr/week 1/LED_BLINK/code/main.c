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
	SET_BIT(DDRA,0);

    while (1) {
    	SET_BIT(PORTA,0);
        _delay_ms(1000);
        CLEAR_BIT(PORTA,0);
        _delay_ms(1000);
    }

    return 0;
}
