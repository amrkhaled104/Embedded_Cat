/**
 ******************************************************************************
 * @file           : DIO_config.h
 * @author         : Amr Khaled
 * @brief          : Configuration file of DIO.
 * @date           : 10/6/2023
 * @board          : ATMEGA32
 ******************************************************************************
**/

#ifndef DIO_CONFIG_H_
#define DIO_CONFIG_H_

#include "DIO_init.h"

/*
Data Direction can be:
	-> INPUT
	-> OUTPUT
*/
/* configurations of Data Direction of the pins at PortA */
#define PA_PIN0_DIR		OUTPUT
#define PA_PIN1_DIR 	OUTPUT
#define PA_PIN2_DIR 	OUTPUT
#define PA_PIN3_DIR 	OUTPUT
#define PA_PIN4_DIR 	OUTPUT
#define PA_PIN5_DIR 	OUTPUT
#define PA_PIN6_DIR 	OUTPUT
#define PA_PIN7_DIR 	OUTPUT

/* configurations of Data Direction of the pins at PortB */
#define PB_PIN0_DIR		OUTPUT
#define PB_PIN1_DIR 	OUTPUT
#define PB_PIN2_DIR 	OUTPUT
#define PB_PIN3_DIR 	OUTPUT
#define PB_PIN4_DIR 	OUTPUT
#define PB_PIN5_DIR 	OUTPUT
#define PB_PIN6_DIR 	OUTPUT
#define PB_PIN7_DIR 	OUTPUT

/* configurations of Data Direction of the pins at PortC */
#define PC_PIN0_DIR		OUTPUT
#define PC_PIN1_DIR 	OUTPUT
#define PC_PIN2_DIR 	OUTPUT
#define PC_PIN3_DIR 	OUTPUT
#define PC_PIN4_DIR 	OUTPUT
#define PC_PIN5_DIR 	OUTPUT
#define PC_PIN6_DIR 	OUTPUT
#define PC_PIN7_DIR 	OUTPUT

/* configurations of Data Direction of the pins at PortD */
#define PD_PIN0_DIR		INPUT
#define PD_PIN1_DIR 	INPUT
#define PD_PIN2_DIR 	OUTPUT
#define PD_PIN3_DIR 	OUTPUT
#define PD_PIN4_DIR 	OUTPUT
#define PD_PIN5_DIR 	OUTPUT
#define PD_PIN6_DIR 	OUTPUT
#define PD_PIN7_DIR 	OUTPUT

/*
PORT (OUTPUT) can be:
	-> LOW
	-> HIGH
PORT (INPUT) can be:
	-> FLOAT
	-> PULL_UP
*/

/* configurations of pin of PORT register at PortA */
#define PA_PIN0_Val		HIGH
#define PA_PIN1_Val 	HIGH
#define PA_PIN2_Val 	HIGH
#define PA_PIN3_Val 	HIGH
#define PA_PIN4_Val 	HIGH
#define PA_PIN5_Val 	HIGH
#define PA_PIN6_Val 	HIGH
#define PA_PIN7_Val 	HIGH

/* configurations of pin of PORT register at PortB */
#define PB_PIN0_Val		HIGH
#define PB_PIN1_Val 	HIGH
#define PB_PIN2_Val 	HIGH
#define PB_PIN3_Val 	HIGH
#define PB_PIN4_Val 	HIGH
#define PB_PIN5_Val 	HIGH
#define PB_PIN6_Val 	HIGH
#define PB_PIN7_Val 	HIGH

/* configurations of pin of PORT register at PortC */
#define PC_PIN0_Val		HIGH
#define PC_PIN1_Val 	HIGH
#define PC_PIN2_Val 	HIGH
#define PC_PIN3_Val 	HIGH
#define PC_PIN4_Val 	HIGH
#define PC_PIN5_Val 	HIGH
#define PC_PIN6_Val 	HIGH
#define PC_PIN7_Val 	HIGH

/* configurations of pin of PORT register at PortD */
#define PD_PIN0_Val		HIGH
#define PD_PIN1_Val 	HIGH
#define PD_PIN2_Val 	HIGH
#define PD_PIN3_Val 	HIGH
#define PD_PIN4_Val 	HIGH
#define PD_PIN5_Val 	HIGH
#define PD_PIN6_Val 	HIGH
#define PD_PIN7_Val 	HIGH

#endif /* DIO_CONFIG_H_ */
