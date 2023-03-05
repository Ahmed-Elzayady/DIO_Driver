/*
 * DIO_interface.h
 *
 *  Created on: 4/3/2023
 *      Author: Ahmed Elzayady
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

/************* MACROS**************/
#define DIO_GROUPA      0
#define DIO_GROUPB      1
#define DIO_GROUPC      2
#define DIO_GROUPD      3

/*********** pi DIRECTION***********/

#define DIO_SET_PIN_INPUT  0
#define DIO_SET_PIN_OUTPUT  1



/**************** Pin Macros**************/

#define DIO_PIN0        0
#define DIO_PIN1        1
#define DIO_PIN2        2
#define DIO_PIN3        3
#define DIO_PIN4        4
#define DIO_PIN5        5
#define DIO_PIN6        6
#define DIO_PIN7        7

/*********************** MACROS FOR PINSTATE****************/

#define LOW  0
#define HIGH 1

/************************************ APIS PROTO TYPES************************************/

void DIO_SetPinDirection(u8 GroupId,u8 PinId,u8 PinMode);
void DIO_SetPinValue(u8 GroupId,u8 PinId,u8 PinValue);
void DIO_GetPinValue(u8 GroupId,u8 PinId,u8* PinValue);
void DIO_TogglePinValue(u8 GroupId,u8 PinId);


#endif /* DIO_INTERFACE_H_ */
