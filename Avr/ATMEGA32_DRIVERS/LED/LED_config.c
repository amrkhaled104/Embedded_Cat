/**
 ******************************************************************************
 * @file           : LED_config.c
 * @author         : Amr Khaled
 * @brief          : Configuration file of LED.
 * @date           : 24/11/2024
 * @board          : ATMEGA32
 ******************************************************************************
**/

#include "DIO_init.h"

#include "LED_config.h"

LED_t LED_AstrLedConfig[LED_NUM] =
{
	{DIO_u8PORTA, DIO_u8PIN0, LED_u8SOURCE, LED_u8OFF},
	{DIO_u8PORTA, DIO_u8PIN1, LED_u8SOURCE, LED_u8OFF},
};
