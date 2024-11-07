/**
 ******************************************************************************
 * @file           : Switch_config.c
 * @author         : Amr Khaled
 * @brief          : Configuration file of Switch.
 * @date           : 10/13/2023
 * @board          : ATMEGA32
 ******************************************************************************
**/
#include "STD_TYPE.h"
#include "ErorrState.h"
#include "DIO_init.h"
#include "Switch_config.h"

SW_t SW_AstrSwitchConfig[SW_NUM] =
{
	{DIO_u8PORTA, DIO_u8PIN0, DIO_u8FLOAT},
	{DIO_u8PORTA, DIO_u8PIN1, DIO_u8PULL_UP},
	{DIO_u8PORTA, DIO_u8PIN2, DIO_u8PULL_UP}

};
