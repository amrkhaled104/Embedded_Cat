/*

/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Amr Khaled
 * @brief          : application file of LED.
 * @date           : 24/11/2024
 * @board          : ATMEGA32
 ******************************************************************************
**/

#define F_CPU	1000000
#include "ErorrState.h"
#include "STD_TYPE.h"

#include "LED_config.h"
#include "LED_int.h"


#include "DIO_init.h"

#include <util/delay.h>

extern LED_t LED_AstrLedConfig[LED_NUM];

int main(void)
{
	DIO_enuInit();
	LED_enuINIT(&LED_AstrLedConfig);

    /* Replace with your application code */
    while (1)
    {
		LED_enuTurnON(&LED_AstrLedConfig[0]);
		LED_enuTurnON(&LED_AstrLedConfig[1]);
		_delay_ms(1000);
		LED_enuTurnOFF(&LED_AstrLedConfig[0]);
		LED_enuTurnOFF(&LED_AstrLedConfig[1]);
		_delay_ms(1000);
    }
}


