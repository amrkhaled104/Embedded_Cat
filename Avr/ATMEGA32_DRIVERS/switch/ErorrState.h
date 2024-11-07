/*
 * DIO_Prog.c
 *
 *  Created on: 2023
 *      Author:Amr Khaled
 */

#ifndef ERORRSTATE_H_
#define ERORRSTATE_H_

//all function i do will return Enum
typedef enum {
	ES_OK,//when the function done true
    ES_NOK,//When the function has an error
    ES_NULL_POINTER,//when pass null pointer
    ES_OUT_OF_RANGE //when pass port out of range
}ES_T;//T Typedef

#endif
