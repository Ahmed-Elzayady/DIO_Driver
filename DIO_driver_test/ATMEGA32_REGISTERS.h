/*
 * ATMEGA32_REGISTERS.h
 *
 *  Created on: 5/3/2023
 *      Author: Ahmed Elzayady
 */

#ifndef ATMEGA32_REGISTERS_H_
#define ATMEGA32_REGISTERS_H_

/********************************* DIO REGISTERS*************************/

/********************DIRECTION REGISTERS*****************/

#define DDRA           *((volatile u8*)0x3A)
#define DDRB           *((volatile u8*)0x37)
#define DDRC           *((volatile u8*)0x34)
#define DDRD           *((volatile u8*)0x31)


/********************OUTPUT REGISTERS********************/

#define PORTA           *((volatile u8*)0x3B)
#define PORTB           *((volatile u8*)0x38)
#define PORTC           *((volatile u8*)0x35)
#define PORTD           *((volatile u8*)0x32)


/********************INPUT REGISTERS********************/

#define PINA           *((volatile u8*)0x39)
#define PINB           *((volatile u8*)0x36)
#define PINC           *((volatile u8*)0x33)
#define PIND           *((volatile u8*)0x30)



#endif /* ATMEGA32_REGISTERS_H_ */
