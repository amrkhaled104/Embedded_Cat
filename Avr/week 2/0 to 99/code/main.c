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

// test 7segment
int main() {
	DDRA=0xff;
	DDRB=0xff;
	PORTA=0x00;
	PORTB=0x00;
	u8 arr1[10]={
			0x3F,0x06,0x5B,0x4F
			,0x66,0x6D,0x7D,0x07
			,0x7F,0x6F};
    while (1) {
    	for(int i=0;i<10;i++){
    		PORTA=~arr1[i];
    		for(int j=0;j<10;j++){
    		PORTB=arr1[j];
    		_delay_ms(1000);
    		}
    	}

    }
    return 0;
}
