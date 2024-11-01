/*
 * main.
 *
 *  Created on: ??þ/??þ/????
 *      Author: Al-3amer
 */
#include "DIO_init.h"
#include "util/delay.h"
#include"STD_TYPE.h"

int main(){
	DIO_enuInit();
	u8 arr1[10] = {
					0x3F, 0x06, 0x5B, 0x4F, 0x66,
					0x6D, 0x7D, 0x07, 0x7F, 0x6F
				};
	while(1){
		u8 PIN0,PIN1,i=0;
		DIO_enuGetpin(DIO_u8PORTD,DIO_u8PIN0 ,&PIN0);
		DIO_enuGetpin(DIO_u8PORTD,DIO_u8PIN0 ,&PIN1);
		if (PIN0==0) {
		    		i++;
		    		if (i > 9) {
		    			i = 9;
		    			continue;
		    		}
		    		DIO_enuSetPortValue(DIO_u8PORTB, ~arr1[i]);
		    		while (PIN0==0);
		    	}
		    	else if (PIN1==0) {
		    		i--;
		    		if (i < 0) {
		    		    i = 0;
		    		    continue;
		    		}
		    		DIO_enuSetPortValue(DIO_u8PORTB, ~arr1[i]);
		    		while (PIN1==0);
		    	}
		        DIO_enuSetPortValue(DIO_u8PORTB, ~arr1[i]);
		    }
	return 0;
}

