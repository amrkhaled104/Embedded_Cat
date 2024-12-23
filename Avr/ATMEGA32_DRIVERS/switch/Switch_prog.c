/**
 ******************************************************************************
 * @file           : Switch_prog.c
 * @author         : Amr Khaled
 * @brief          : program file of Switch.
 * @date           : 10/13/2023
 * @board          : ATMEGA32
 ******************************************************************************
**/

#include "DIO_init.h"
#include "Switch_config.h"
#include "STD_TYPE.h"
#include "ErorrState.h"

ES_T Switch_enuINIT(SW_t * Copy_pAstrSwConfig){

	ES_T Local_enuErrorState = ES_NOK;

	if(Copy_pAstrSwConfig != NULL)
		{
			u8 Local_u8Iterator;

			for(Local_u8Iterator = 0; Local_u8Iterator < SW_NUM; Local_u8Iterator++)
			{
				Local_enuErrorState = DIO_enuSetPinDirection(Copy_pAstrSwConfig[Local_u8Iterator].SW_u8PortID, Copy_pAstrSwConfig[Local_u8Iterator].SW_u8PinID, DIO_u8INPUT);
				Local_enuErrorState = DIO_enuSetPinValue(Copy_pAstrSwConfig[Local_u8Iterator].SW_u8PortID, Copy_pAstrSwConfig[Local_u8Iterator].SW_u8PinID, Copy_pAstrSwConfig[Local_u8Iterator].SW_u8Status);
			}
		}
		else
		{
			Local_enuErrorState = ES_NULL_POINTER;
		}
	return Local_enuErrorState;
}

ES_T Switch_enuGetState(SW_t * Copy_pstrSwConfigID, u8 * Copy_pu8SwitchState){
	ES_T Local_enuErrorState = ES_NOK;

	if(Copy_pstrSwConfigID != NULL && Copy_pu8SwitchState != NULL)
		{
			Local_enuErrorState = DIO_enuGetpin(Copy_pstrSwConfigID->SW_u8PortID, Copy_pstrSwConfigID->SW_u8PinID, Copy_pu8SwitchState);
		}
		else
		{
			Local_enuErrorState = ES_NULL_POINTER;
		}

	return Local_enuErrorState;

}

ES_T Switch_enuChangeMode(SW_t * Copy_pstrSwConfigID, u8 Copy_u8SwitchStatus)
{
	ES_T Local_enuErrorState = ES_NOK;

	if(Copy_pstrSwConfigID != NULL)
	{
		Local_enuErrorState = DIO_enuSetPinDirection(Copy_pstrSwConfigID->SW_u8PortID, Copy_pstrSwConfigID->SW_u8PinID, DIO_u8INPUT);
		Local_enuErrorState = DIO_enuSetPinValue(Copy_pstrSwConfigID->SW_u8PortID, Copy_pstrSwConfigID->SW_u8PinID, Copy_u8SwitchStatus);
	}
	else
	{
		Local_enuErrorState = ES_NULL_POINTER;
	}

	return Local_enuErrorState;
}
