/**
 ******************************************************************************
 * @file           : LED_prog.c
 * @author         : Amr Khaled
 * @brief          : program file of LED.
 * @date           : 24/11/2024
 * @board          : ATMEGA32
 ******************************************************************************
 **/

#include "ErorrState.h"
#include "STD_TYPE.h"

#include "DIO_init.h"

#include "LED_priv.h"
#include "LED_config.h"

ES_T LED_enuINIT(LED_t *Copy_pAstrLedConfig) {

	ES_T Local_enuErrorState = ES_NOK;
	if (Copy_pAstrLedConfig != NULL) {
		u8 Local_u8Iterator;
		for (Local_u8Iterator = 0; Local_u8Iterator < LED_NUM;
				Local_u8Iterator++) {
			DIO_enuSetPinDirection(
					Copy_pAstrLedConfig[Local_u8Iterator].LED_u8PortID,
					Copy_pAstrLedConfig[Local_u8Iterator].LED_u8PinID,
					DIO_u8OUTPUT);
			if (Copy_pAstrLedConfig[Local_u8Iterator].LED_u8Connection
					== LED_u8SINK) {
				if (Copy_pAstrLedConfig[Local_u8Iterator].LED_u8InitState
						== LED_u8ON) {
					Local_enuErrorState = DIO_enuSetPinValue(
							Copy_pAstrLedConfig[Local_u8Iterator].LED_u8PortID,
							Copy_pAstrLedConfig[Local_u8Iterator].LED_u8PinID,
							DIO_u8LOW);
				} else if (Copy_pAstrLedConfig[Local_u8Iterator].LED_u8InitState
						== LED_u8OFF) {
					Local_enuErrorState = DIO_enuSetPinValue(
							Copy_pAstrLedConfig[Local_u8Iterator].LED_u8PortID,
							Copy_pAstrLedConfig[Local_u8Iterator].LED_u8PinID,
							DIO_u8HIGH);
				} else {
					Local_enuErrorState = ES_OUT_OF_RANGE;
				}
			} else if (Copy_pAstrLedConfig[Local_u8Iterator].LED_u8Connection
					== LED_u8SOURCE) {
				if (Copy_pAstrLedConfig[Local_u8Iterator].LED_u8InitState
						== LED_u8ON) {
					Local_enuErrorState = DIO_enuSetPinValue(
							Copy_pAstrLedConfig[Local_u8Iterator].LED_u8PortID,
							Copy_pAstrLedConfig[Local_u8Iterator].LED_u8PinID,
							DIO_u8HIGH);
				} else if (Copy_pAstrLedConfig[Local_u8Iterator].LED_u8InitState
						== LED_u8OFF) {
					Local_enuErrorState = DIO_enuSetPinValue(
							Copy_pAstrLedConfig[Local_u8Iterator].LED_u8PortID,
							Copy_pAstrLedConfig[Local_u8Iterator].LED_u8PinID,
							DIO_u8LOW);
				} else {
					Local_enuErrorState = ES_OUT_OF_RANGE;
				}
			} else {
				Local_enuErrorState = ES_OUT_OF_RANGE;
			}
		}
	} else {
		Local_enuErrorState = ES_NULL_POINTER;
	}
	return Local_enuErrorState;
}

ES_T LED_enuTurnON(LED_t *Copy_pstrLedID) {
	ES_T Local_enuErrorState = ES_NOK;
	if (Copy_pstrLedID != NULL) {
		DIO_enuSetPinDirection(Copy_pstrLedID->LED_u8PortID,
				Copy_pstrLedID->LED_u8PinID, DIO_u8OUTPUT);
		if (Copy_pstrLedID->LED_u8Connection == LED_u8SINK) {
			Local_enuErrorState = DIO_enuSetPinValue(
					Copy_pstrLedID->LED_u8PortID, Copy_pstrLedID->LED_u8PinID,
					DIO_u8LOW);
		} else if (Copy_pstrLedID->LED_u8Connection == LED_u8SOURCE) {
			Local_enuErrorState = DIO_enuSetPinValue(
					Copy_pstrLedID->LED_u8PortID, Copy_pstrLedID->LED_u8PinID,
					DIO_u8HIGH);
		} else {
			Local_enuErrorState = ES_OUT_OF_RANGE;
		}
	}
	return Local_enuErrorState;
}

ES_T LED_enuTurnOFF(LED_t *Copy_pstrLedID) {
	ES_T Local_enuErrorState = ES_NOK;
	if (Copy_pstrLedID != NULL) {
		DIO_enuSetPinDirection(Copy_pstrLedID->LED_u8PortID,
				Copy_pstrLedID->LED_u8PinID, DIO_u8OUTPUT);
		if (Copy_pstrLedID->LED_u8Connection == LED_u8SINK) {
			Local_enuErrorState = DIO_enuSetPinValue(
					Copy_pstrLedID->LED_u8PortID, Copy_pstrLedID->LED_u8PinID,
					DIO_u8HIGH);
		} else if (Copy_pstrLedID->LED_u8Connection == LED_u8SOURCE) {
			Local_enuErrorState = DIO_enuSetPinValue(
					Copy_pstrLedID->LED_u8PortID, Copy_pstrLedID->LED_u8PinID,
					DIO_u8LOW);
		} else {
			Local_enuErrorState = ES_OUT_OF_RANGE;
		}
	}
	return Local_enuErrorState;
}

