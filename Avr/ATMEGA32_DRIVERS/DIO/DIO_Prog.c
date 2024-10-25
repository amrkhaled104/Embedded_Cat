/**
 ******************************************************************************
 * @file           : DIO_prog.c
 * @author         : Amr Khaled
 * @brief          : program file of DIO.
 * @date           : 10/6/2023
 * @board          : ATMEGA32
 ******************************************************************************
**/
#include "STD_TYPE.h"
#include "ErorrState.h"

#include "DIO_priv.h"
#include "DIO_config.h"

/**
 ******************************************************************************
 * @Fn			: DIO_enuINIT
 * @brief		: it is used to initialize DIO peripheral
 * @param [in]	: none
 * @retval		: ES_t --> it returns the state of excution of this function
 * @note		: Atmega32 has 4 ports A, B, C, D and each port consist of 8 pins
 ******************************************************************************
**/
ES_T DIO_enuInit(void) {

	ES_T Local_enuErrorState = ES_NOK;
	//Initialize Direction Pins
	DDRA = CONC(PA_PIN7_DIR, PA_PIN6_DIR, PA_PIN5_DIR, PA_PIN4_DIR, PA_PIN3_DIR,
			PA_PIN2_DIR, PA_PIN1_DIR, PA_PIN0_DIR);
	DDRB = CONC(PB_PIN7_DIR, PB_PIN6_DIR, PB_PIN5_DIR, PB_PIN4_DIR, PB_PIN3_DIR,
			PB_PIN2_DIR, PB_PIN1_DIR, PB_PIN0_DIR);
	DDRC = CONC(PC_PIN7_DIR, PC_PIN6_DIR, PC_PIN5_DIR, PC_PIN4_DIR, PC_PIN3_DIR,
			PC_PIN2_DIR, PC_PIN1_DIR, PC_PIN0_DIR);
	DDRD = CONC(PD_PIN7_DIR, PD_PIN6_DIR, PD_PIN5_DIR, PD_PIN4_DIR, PD_PIN3_DIR,
			PD_PIN2_DIR, PD_PIN1_DIR, PD_PIN0_DIR);

	//Initialize Port Pins
	PORTA = CONC(PA_PIN7_Val, PA_PIN6_Val, PA_PIN5_Val, PA_PIN4_Val,
			PA_PIN3_Val, PA_PIN2_Val, PA_PIN1_Val, PA_PIN0_Val);
	PORTB = CONC(PB_PIN7_Val, PB_PIN6_Val, PB_PIN5_Val, PB_PIN4_Val,
			PB_PIN3_Val, PB_PIN2_Val, PB_PIN1_Val, PB_PIN0_Val);
	PORTC = CONC(PC_PIN7_Val, PC_PIN6_Val, PC_PIN5_Val, PC_PIN4_Val,
			PC_PIN3_Val, PC_PIN2_Val, PC_PIN1_Val, PC_PIN0_Val);
	PORTD = CONC(PD_PIN7_Val, PD_PIN6_Val, PD_PIN5_Val, PD_PIN4_Val,
			PD_PIN3_Val, PD_PIN2_Val, PD_PIN1_Val, PD_PIN0_Val);

	Local_enuErrorState = ES_OK;

	return Local_enuErrorState;
}

/**
 ******************************************************************************
 * @Fn			: DIO_enuSetPortDirection
 * @brief		: it is used to specify the direction of the port
 * @param [in]	: Copy_u8PortID --> it is specify which port we need to access
 * @param [in]	: Copy_u8Value --> it is specify the direction of the port input or output
 * @retval		: ES_t --> it returns the state of excution of this function
 * @note		: none
 ******************************************************************************
**/
ES_T DIO_enuSetPortDirection(u8 Copy_u8PortID, u8 Copy_u8Value) {

	ES_T Local_enuErrorState = ES_NOK;
	if (Copy_u8PortID <= DIO_PORTD) {
		switch (Copy_u8PortID) {
		case DIO_PORTA:
			DDRA = Copy_u8Value;
			break;
		case DIO_PORTB:
			DDRB = Copy_u8Value;
			break;
		case DIO_PORTC:
			DDRC = Copy_u8Value;
			break;
		case DIO_PORTD:
			DDRD = Copy_u8Value;
			break;
		}
		Local_enuErrorState = ES_OK;
	} else {
		Local_enuErrorState = ES_OUT_OF_RANGE;
	}

	return Local_enuErrorState;
}

/**
 ******************************************************************************
 * @Fn			: DIO_enuSetPortVal
 * @brief		: it is used to write a value on the port
 * @param [in]	: Copy_u8PortID --> it is specify which port we need to write on it
 * @param [in]	: Copy_u8Value --> it is specify the value of the port high or low
 * @retval		: ES_t --> it returns the state of excution of this function
 * @note		: none
 ******************************************************************************
**/
ES_T DIO_enuSetPortValue(u8 Copy_u8PortID, u8 Copy_u8Value) {

	ES_T Local_enuErrorState = ES_NOK;
	if (Copy_u8PortID <= DIO_PORTD) {
		switch (Copy_u8PortID) {
		case DIO_PORTA:
			PORTA = Copy_u8Value;
			break;
		case DIO_PORTB:
			PORTB = Copy_u8Value;
			break;
		case DIO_PORTC:
			PORTC = Copy_u8Value;
			break;
		case DIO_PORTD:
			PORTD = Copy_u8Value;
			break;
		}
		Local_enuErrorState = ES_OK;
	} else {
		Local_enuErrorState = ES_OUT_OF_RANGE;
	}
	return Local_enuErrorState;
}
/**
 ******************************************************************************
 * @Fn			: DIO_enuTogPortVal
 * @brief		: it is used to toggle the value of the port
 * @param [in]	: Copy_u8PortID --> it is specify which port we need to toggle its value
 * @retval		: ES_t --> it returns the state of excution of this function
 * @note		: none
 ******************************************************************************
**/

ES_T DIO_enuTogPort(u8 Copy_u8PortID) {

	ES_T Local_enuErrorState = ES_NOK;
	if (Copy_u8PortID <= DIO_PORTD) {
		switch (Copy_u8PortID) {
		case DIO_PORTA:
			PORTA = ~PORTA;
			break;
		case DIO_PORTB:
			PORTB = ~PORTB;
			break;
		case DIO_PORTC:
			PORTC = ~PORTC;
			break;
		case DIO_PORTD:
			PORTD = ~PORTD;
			break;
		}
		Local_enuErrorState = ES_OK;
	} else {
		Local_enuErrorState = ES_OUT_OF_RANGE;
	}
	return Local_enuErrorState;
}

/**
 ******************************************************************************
 * @Fn			: DIO_enuGetPortVal
 * @brief		: it is used to read a value from the port
 * @param [in]	: Copy_u8PortID --> it is specify which port we need to read its value
 * @param [in]	: Copy_pu8Value --> it is a pointer to save the value of port in it
 * @retval		: ES_t --> it returns the state of excution of this function
 * @note		: none
 ******************************************************************************
**/
ES_T DIO_enuGetPort(u8 Copy_u8PortID, u8* Copy_pu8Value) {

	ES_T Local_enuErrorState = ES_NOK;

	if (Copy_pu8Value != NULL) {
		if (Copy_u8PortID <= DIO_PORTD) {
			switch (Copy_u8PortID) {
			case DIO_PORTA:
				*Copy_pu8Value = PINA;
				break;
			case DIO_PORTB:
				*Copy_pu8Value = PINB;
				break;
			case DIO_PORTC:
				*Copy_pu8Value = PINC;
				break;
			case DIO_PORTD:
				*Copy_pu8Value = PIND;
				break;
			}
			Local_enuErrorState = ES_OK;
		} else {
			Local_enuErrorState = ES_OUT_OF_RANGE;
		}
	} else {
		Local_enuErrorState = ES_NULL_POINTER;
	}
	return Local_enuErrorState;
}

/**
 ******************************************************************************
 * @Fn			: DIO_enuSetPinDirection
 * @brief		: it is used to specify the direction of specific pin
 * @param [in]	: Copy_u8PortID --> it is specify which port we need to access it
 * @param [in]	: Copy_u8PinID --> it is specify which pin we need to access it
 * @param [in]	: Copy_u8Value --> it is specify the direction of the pin input or output
 * @retval		: ES_t --> it returns the state of excution of this function
 * @note		: none
 ******************************************************************************
**/
ES_T DIO_enuSetPinDirection(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Value) {
	ES_T Local_enuErrorState = ES_NOK;

	if (Copy_u8PortID <= DIO_PORTD && Copy_u8PinID <= DIO_PIN7
			&& Copy_u8Value <= OUTPUT) {
		switch (Copy_u8PortID) {
		case DIO_PORTA:
			DDRA &= ~(1 << Copy_u8PinID);
			DDRA |= (Copy_u8Value << Copy_u8PinID);
			break;
		case DIO_PORTB:
			DDRB &= ~(1 << Copy_u8PinID);
			DDRB |= (Copy_u8Value << Copy_u8PinID);
			break;
		case DIO_PORTC:
			DDRC &= ~(1 << Copy_u8PinID);
			DDRC |= (Copy_u8Value << Copy_u8PinID);
			break;
		case DIO_PORTD:
			DDRD &= ~(1 << Copy_u8PinID);
			DDRD |= (Copy_u8Value << Copy_u8PinID);
			break;
		}
		Local_enuErrorState = ES_OK;
	} else {
		Local_enuErrorState = ES_OUT_OF_RANGE;
	}
	return Local_enuErrorState;

}

/**
 ******************************************************************************
 * @Fn			: DIO_enuSetPinVal
 * @brief		: it is used to write a value on specific pin
 * @param [in]	: Copy_u8PortID --> it is specify which port we need to access it
 * @param [in]	: Copy_u8PinID --> it is specify which pin we need to access it
 * @param [in]	: Copy_u8Value --> it is specify the value of the pin high or low
 * @retval		: ES_t --> it returns the state of excution of this function
 * @note		: none
 ******************************************************************************
**/

ES_T DIO_enuSetPinValue(u8 Copy_u8PortID, u8 Copy_u8PinID, u8 Copy_u8Value) {
	ES_T Local_enuErrorState = ES_NOK;

	if (Copy_u8PortID <= DIO_PORTD && Copy_u8PinID <= DIO_PIN7
			&& Copy_u8Value <= OUTPUT) {
		switch (Copy_u8PortID) {
		case DIO_PORTA:
			PORTA &= ~(1 << Copy_u8PinID);
			PORTA |= (Copy_u8Value << Copy_u8PinID);
			break;
		case DIO_PORTB:
			PORTB &= ~(1 << Copy_u8PinID);
			PORTB |= (Copy_u8Value << Copy_u8PinID);
			break;
		case DIO_PORTC:
			PORTC &= ~(1 << Copy_u8PinID);
			PORTC |= (Copy_u8Value << Copy_u8PinID);
			break;
		case DIO_PORTD:
			PORTD &= ~(1 << Copy_u8PinID);
			PORTD |= (Copy_u8Value << Copy_u8PinID);
			break;
		}
		Local_enuErrorState = ES_OK;
	} else {
		Local_enuErrorState = ES_OUT_OF_RANGE;
	}
	return Local_enuErrorState;
}

/**
 ******************************************************************************
 * @Fn			: DIO_enuGetPinVal
 * @brief		: it is used to read a value from specific pin
 * @param [in]	: Copy_u8PortID --> it is specify which port we need to access it
 * @param [in]	: Copy_u8PinID --> it is specify which pin we need to access it
 * @param [in]	: Copy_pu8Value --> it is a pointer where we will save the value of the pin on it
 * @retval		: ES_t --> it returns the state of excution of this function
 * @note		: none
 ******************************************************************************
**/
ES_T DIO_enuGetpin(u8 Copy_u8PortID, u8 Copy_u8PinID, u8* Copy_pu8Value) {
	ES_T Local_enuErrorState = ES_NOK;
	if (Copy_pu8Value != NULL) {
		if (Copy_u8PortID <= DIO_PORTD && Copy_u8PinID <= DIO_PIN7) {
			switch (Copy_u8PortID) {
			case DIO_PORTA:
				*Copy_pu8Value = ((PINA >> Copy_u8PinID) & 1);
				break;
			case DIO_PORTB:
				*Copy_pu8Value = ((PINB >> Copy_u8PinID) & 1);
				break;
			case DIO_PORTC:
				*Copy_pu8Value = ((PINC >> Copy_u8PinID) & 1);
				break;
			case DIO_PORTD:
				*Copy_pu8Value = ((PIND >> Copy_u8PinID) & 1);
				break;
			}
			Local_enuErrorState = ES_OK;
		} else {
			Local_enuErrorState = ES_OUT_OF_RANGE;
		}

	} else {
		Local_enuErrorState = ES_NULL_POINTER;
	}

	return Local_enuErrorState;
}


/**
 ******************************************************************************
 * @Fn			: DIO_enuTogPinVal
 * @brief		: it is used to toggle a value of specific pin
 * @param [in]	: Copy_u8PortID --> it is specify which port we need to access it
 * @param [in]	: Copy_u8PinID --> it is specify which pin we need to access it
 * @retval		: ES_t --> it returns the state of excution of this function
 * @note		: none
 ******************************************************************************
**/
ES_T DIO_enuTogPin(u8 Copy_u8PortID, u8 Copy_u8PinID) {
	ES_T Local_enuErrorState = ES_NOK;

	if (Copy_u8PortID <= DIO_PORTD && Copy_u8PinID <= DIO_PIN7) {
		switch (Copy_u8PortID) {
		case DIO_PORTA:
			PORTA ^= (1 << Copy_u8PinID);
			break;
		case DIO_PORTB:
			PORTB ^= (1 << Copy_u8PinID);
			break;
		case DIO_PORTC:
			PORTC ^= (1 << Copy_u8PinID);
			break;
		case DIO_PORTD:
			PORTD ^= (1 << Copy_u8PinID);
			break;
		}
		Local_enuErrorState = ES_OK;
	} else {
		Local_enuErrorState = ES_OUT_OF_RANGE;
	}
	return Local_enuErrorState;

}

