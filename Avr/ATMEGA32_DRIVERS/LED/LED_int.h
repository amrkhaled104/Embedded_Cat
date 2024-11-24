/**
 ******************************************************************************
 * @file           : LED_int.h
 * @author         : Amr Khaled
 * @brief          : interface file of LED.
 * @date           : 24/11/2024
 * @board          : ATMEGA32
 ******************************************************************************
**/

#ifndef LED_INT_H_
#define LED_INT_H_

ES_T LED_enuINIT(LED_t *Copy_pAstrLedConfig);

ES_T LED_enuTurnON(LED_t *Copy_pstrLedID);

ES_T LED_enuTurnOFF(LED_t *Copy_pstrLedID);


#endif /* LED_INT_H_ */
