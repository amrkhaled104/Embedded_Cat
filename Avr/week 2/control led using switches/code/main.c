/*
 * main.c
 *      Author: Amr Khaled
 */
#include "STD_TYPE.h"
#include "BIT_MATH.h"
#include <util/delay.h>

// Register Definitions
#define DDRA  *((u8 *)0x3A)      // Data Direction Register A
#define PORTA *((u8 *)0x3B)      // Port A Register
#define PINA  *((volatile u8 *)0x39) // Input Pins Register A
#define DDRB  *((u8 *)0x37)      // Data Direction Register B
#define PORTB *((u8 *)0x38)      // Port B Register
#define PINB  *((volatile u8 *)0x36) // Input Pins Register B
#define DDRD  *((u8 *)0x31)      // Data Direction Register D
#define PORTD *((u8 *)0x32)      // Port D Register
#define PIND  *((volatile u8 *)0x30) // Input Pins Register D

int main() {
    DDRA = 0x03;
    DDRB = 0x00;

    PORTA = 0x00;
    PORTB = 0x07;
    while (1) {
        if (!READ_BIT(PINB, 2)) {
            if (!READ_BIT(PINB, 2)) {
            PORTA = 0x03;
            }
        }
        else if (!READ_BIT(PINB,0)) {
            if (!READ_BIT(PINB,0)) {
            PORTA = 0x01;
        	//SET_BIT(PORTA, 0);
        	//CLEAR_BIT(PORTA,1);
            }
        }
        else if (!READ_BIT(PINB, 1)) {
            if (!READ_BIT(PINB, 1)) {
            	 PORTA = 0x02;
            	  //	SET_BIT(PORTA, 1);
            	  //CLEAR_BIT(PORTA,0);
            }
        }
        else {
            PORTA = 0x00;
        }
    }
    return 0;
}
