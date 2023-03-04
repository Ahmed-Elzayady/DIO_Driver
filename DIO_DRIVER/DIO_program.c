
#include "STD_TYPES.h"
#include "DIO_interface.h"
#include <avr/io.h>
#include "BIT_MATH.h"

/******************** Direction Function******************/

void SetPinDirection(u8 GroupId, u8 PinId, u8 PinState)
{
  switch (GroupId)
  {
  case DIO_GroupA:
    if (PinState == DIO_OUTPUT)
    {
      SET_BIT(DDRA, PinId);
    }
    else
    {
      CLEAR_BIT(DDRA, PinId);
    }
    break;
  case DIO_GroupB:
    if (PinState == DIO_OUTPUT)
    {
      SET_BIT(DDRB, PinId);
    }
    else
    {
      CLEAR_BIT(DDRB, PinId);
    }

    break;
  case DIO_GroupC:
    if (PinState == DIO_OUTPUT)
    {
      SET_BIT(DDRC, PinId);
    }
    else
    {
      CLEAR_BIT(DDRC, PinId);
    }

    break;
  case DIO_GroupD:
    if (PinState == DIO_OUTPUT)
    {
      SET_BIT(DDRD, PinId);
    }
    else
    {
      CLEAR_BIT(DDRD, PinId);
    }
    break;
  }
}

/*********************************** Pin State Function********************/
void SetPinValue(u8 GroupId, u8 PinId, u8 PinValue) // for output
{

  switch (GroupId)
  {

  case DIO_GroupA:
    if (PinValue == DIO_HIGH)
    {

      SET_BIT(PORTA, PinId);
    }

    else
    {

      CLEAR_BIT(PORTA, PinId);
    }
    break;
  case DIO_GroupB:
    if (PinValue == DIO_HIGH)
    {

      SET_BIT(PORTB, PinId);
    }

    else
    {

      CLEAR_BIT(PORTB, PinId);
    }
    break;
  case DIO_GroupC:
    if (PinValue == DIO_HIGH)
    {

      SET_BIT(PORTC, PinId);
    }

    else
    {

      CLEAR_BIT(PORTC, PinId);
    }
    break;
  case DIO_GroupD:
    if (PinValue == DIO_HIGH)
    {

      SET_BIT(PORTD, PinId);
    }

    else
    {

      CLEAR_BIT(PORTD, PinId);
    }
    break;
  }
}
