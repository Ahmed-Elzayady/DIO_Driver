/*
 * main.c
 *
 *  Created on: 5/3/2023
 *      Author: Ahmed Elzayady
 */

/* UTILES_LIB*/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ATMEGA32_REGISTERS.h"
/* MCAL_LIB*/
#include "DIO_interface.h"
int main()
{
	u8 value;
	DIO_SetPinDirection(DIO_GROUPC, DIO_PIN2, DIO_SET_PIN_OUTPUT); // led 0 >> output
	DIO_SetPinDirection(DIO_GROUPC, DIO_PIN7, DIO_SET_PIN_OUTPUT); // led 1 >> output
	DIO_SetPinDirection(DIO_GROUPD, DIO_PIN3, DIO_SET_PIN_OUTPUT); // led 2 >> output
	DIO_SetPinDirection(DIO_GROUPB, DIO_PIN0, DIO_SET_PIN_INPUT);  // BUTTON 0>> input
	DIO_SetPinDirection(DIO_GROUPD, DIO_PIN6, DIO_SET_PIN_INPUT);  // button 1 >> input
	DIO_SetPinDirection(DIO_GROUPD, DIO_PIN2, DIO_SET_PIN_INPUT);  // button 2 >> input

	while (1)
	{

		DIO_GetPinValue(DIO_GROUPB, DIO_PIN0, &value);
		if (value == HIGH)
		{
			DIO_SetPinValue(DIO_GROUPC, DIO_PIN2, LOW);
			DIO_SetPinValue(DIO_GROUPC, DIO_PIN7, LOW);
		}
		DIO_GetPinValue(DIO_GROUPD, DIO_PIN6, &value);
		if (value == HIGH)
		{

			DIO_SetPinValue(DIO_GROUPC, DIO_PIN2, HIGH);
			DIO_SetPinValue(DIO_GROUPC, DIO_PIN7, LOW);
		}
		DIO_GetPinValue(DIO_GROUPD, DIO_PIN2, &value);
		if (value == HIGH)
		{
			DIO_SetPinValue(DIO_GROUPC, DIO_PIN7, HIGH);
			DIO_SetPinValue(DIO_GROUPC, DIO_PIN2, LOW);
		}
	}

	return 0;
}
