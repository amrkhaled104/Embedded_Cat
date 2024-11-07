/**
 ******************************************************************************
 * @file           : Switch_config.h
 * @author         : Amr Khaled
 * @brief          : Configuration file of Switch.
 * @date           : 10/13/2023
 * @board          : ATMEGA32
 ******************************************************************************
**/

#include "STD_TYPE.h"

#ifndef SWITCH_CONFIG_H_
#define SWITCH_CONFIG_H_

/* specify number of switches */
#define SW_NUM	3

/* switch definition */
typedef struct
{
	/* SW_u8PortID --> must specify according to @ref configuration of names of 4 ports at DIO_int.h */
	u8 SW_u8PortID;

	/* SW_u8PinID --> must specify according to @ref configuration of names of pins at DIO_int.h */
	u8 SW_u8PinID;

	/* SW_u8PortID --> must specify according to @ref configuration of input states at DIO_int.h */
	u8 SW_u8Status;
}SW_t;

#endif /* SWITCH_CONFIG_H_ */
