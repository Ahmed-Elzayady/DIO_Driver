#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_
/************************** MACROS OF NAMES OF GROUPS**************/
#define DIO_GroupA     1
#define DIO_GroupB     2
#define DIO_GroupC     3
#define DIO_GroupD     4
/************************ MACROS OF PINS STATE*********/
#define DIO_OUTPUT    1
#define DIO_INPUT     0
/************************************* MACROS OF VALUE OF OUTPUT OF PIN****************/
#define DIO_HIGH      1
#define DIO_LOW       0
/******************** PROTO TYPES OF THE FUNCTIONS******************/
void SetPinDirection(u8 GropId,u8 PinId,u8 PinState);
void SetPinValue(u8 GroupId,u8 PinId,u8 PinValue);
#endif /* DIO_INTERFACE_H_ */
