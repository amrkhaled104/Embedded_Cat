/**
 ******************************************************************************
 * @file           : DIO_int.
 * @author         : Amr Khaled
 * @brief          : interface file of DIO.
 * @date           : 10/6/2023
 * @board          : ATMEGA32
 ******************************************************************************
**/

#ifndef DIO_INT_H_
#define DIO_INT_H_

#include"STD_TYPE.h"
#include"ErorrState.h"
/* configuration of names of 4 ports */
#define DIO_u8PORTA 		0
#define DIO_u8PORTB 		1
#define DIO_u8PORTC   		2
#define DIO_u8PORTD	   		3

/* configuration of names of pins */
#define DIO_u8PIN0 			0
#define DIO_u8PIN1 			1
#define DIO_u8PIN2 			2
#define DIO_u8PIN3 			3
#define DIO_u8PIN4 			4
#define DIO_u8PIN5 			5
#define DIO_u8PIN6 			6
#define DIO_u8PIN7 			7

/* configuration of data direction states */
#define DIO_u8INPUT			0
#define DIO_u8OUTPUT		1

/* configuration of input states */
#define DIO_u8FLOAT			0
#define DIO_u8PULL_UP		1

/* configuration of output states */
#define DIO_u8LOW			0
#define DIO_u8HIGH			1

/* initialize function */
ES_T DIO_enuInit(void);

/* PORT functions */

ES_T DIO_enuSetPortDirection(u8 Copy_u8PortID, u8 Copy_u8Value);

ES_T DIO_enuSetPortValue(u8 Copy_u8PortID, u8 Copy_u8Value);

ES_T DIO_enuTogPort(u8 Copy_u8PortID);

ES_T DIO_enuGetPort(u8 Copy_u8PortID, u8* Copy_pu8Value);

/* PIN functions */
ES_T DIO_enuSetPinDirection(u8 Copy_u8PortID,u8 Copy_u8PinID, u8 Copy_u8Value);

ES_T DIO_enuSetPinValue(u8 Copy_u8PortID,u8 Copy_u8PinID, u8 Copy_u8Value);

ES_T DIO_enuGetpin(u8 Copy_u8PortID,u8 Copy_u8PinID, u8* Copy_pu8Value);

ES_T DIO_enuTogPin(u8 Copy_u8PortID, u8 Copy_u8PinID);


#endif /* DIO_INT_H_ */
