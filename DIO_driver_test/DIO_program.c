/*
 * DIO_program.c
 *
 *  Created on: 4/3/2023
 *      Author: Ahmed Elzayady
 */

/* UTILES_LIB*/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ATMEGA32_REGISTERS.h"
/* MCAL_LIB*/
#include "DIO_interface.h"

/*********************************************SETPIN*****************************/


void DIO_SetPinDirection(u8 GroupId,u8 PinId,u8 PinMode)
{
	/* Switch Code*/
switch (GroupId)
{
   case DIO_GROUPA:
    if(PinMode==DIO_SET_PIN_OUTPUT)
    {
     SET_BIT(DDRA,PinId);
    }
    else
		{
    	CLEAR_BIT(DDRA,PinId);
		}
	break;
   case DIO_GROUPB:
       if(PinMode==DIO_SET_PIN_OUTPUT)
       {
        SET_BIT(DDRB,PinId);
       }
       else
   		{
       	CLEAR_BIT(DDRB,PinId);
   		}
   	break;
   case DIO_GROUPC:
       if(PinMode==DIO_SET_PIN_OUTPUT)
       {
        SET_BIT(DDRC,PinId);
       }
       else
   		{
       	CLEAR_BIT(DDRC,PinId);
   		}
   	break;
   case DIO_GROUPD:
       if(PinMode==DIO_SET_PIN_OUTPUT)
       {
        SET_BIT(DDRD,PinId);
       }
       else
   		{
       	CLEAR_BIT(DDRD,PinId);
   		}
   	break;
}
}

/**************************************************PINVALUE********************************/

void DIO_SetPinValue(u8 GroupId,u8 PinId,u8 PinValue)
{

	switch(GroupId)
	{
	case DIO_GROUPA:
       if(PinValue==HIGH)
       {
    	   SET_BIT(PORTA,PinId);

       }

       else
       {

    	   CLEAR_BIT(PORTA,PinId);
       }
		break;
	case DIO_GROUPB:
	       if(PinValue==HIGH)
	       {
	    	   SET_BIT(PORTB,PinId);

	       }

	       else
	       {

	    	   CLEAR_BIT(PORTB,PinId);
	       }
			break;
	case DIO_GROUPC:
	       if(PinValue==HIGH)
	       {
	    	   SET_BIT(PORTC,PinId);

	       }

	       else
	       {

	    	   CLEAR_BIT(PORTC,PinId);
	       }
			break;
	case DIO_GROUPD:
	       if(PinValue==HIGH)
	       {
	    	   SET_BIT(PORTD,PinId);

	       }

	       else
	       {

	    	   CLEAR_BIT(PORTD,PinId);
	       }
			break;
	}
}


void DIO_GetPinValue(u8 GroupId,u8 PinId,u8* PinValue)
{
	switch(GroupId)
	{
	case DIO_GROUPA:
		*PinValue=CHK_BIT(PINA,PinId);
		break;
	case DIO_GROUPB:
			*PinValue=CHK_BIT(PINB,PinId);
			break;
	case DIO_GROUPC:
			*PinValue=CHK_BIT(PINC,PinId);
			break;
	case DIO_GROUPD:
			*PinValue=CHK_BIT(PIND,PinId);
			break;

	}

}
void DIO_TogglePinValue(u8 GroupId,u8 PinId)
{
   switch(GroupId)
   {
   case DIO_GROUPA:
	   TOOGLE_BIT(PORTA,PinId);
	   break;
   case DIO_GROUPB:
   	   TOOGLE_BIT(PORTB,PinId);
   	   break;
   case DIO_GROUPC:
   	   TOOGLE_BIT(PORTC,PinId);
   	   break;
   case DIO_GROUPD:
   	   TOOGLE_BIT(PORTD,PinId);
   	   break;


   }
}

