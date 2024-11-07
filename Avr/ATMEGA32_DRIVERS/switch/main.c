/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Amr Khaled
 * @brief          : application file of Switch.
 * @date           : 10/13/2023
 * @board          : ATMEGA32
 ******************************************************************************
**/
#include "Switch_config.h"
#include "DIO_init.h"
extern SW_t SW_AstrSwitchConfig[SW_NUM];

int main(void)
{
	DIO_enuInit();
	Switch_enuINIT(&SW_AstrSwitchConfig);

	DIO_enuSetPinDirection(DIO_u8PORTB, DIO_u8PIN0, DIO_u8OUTPUT);

	u8 Pin_State;

    /* Replace with your application code */
    while (1)
    {
		Switch_enuGetState(&SW_AstrSwitchConfig[1], &Pin_State);
		if(Pin_State == 0)
		{
			DIO_enuSetPinValue(DIO_u8PORTB, DIO_u8PIN0, DIO_u8HIGH);
		}
		else if(Pin_State == 1)
		{
			DIO_enuSetPinValue(DIO_u8PORTB, DIO_u8PIN0, DIO_u8LOW);
		}
    }
}
