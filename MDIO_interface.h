/*****************************************/
/*****************************************/
/************** Autor: ATON **************/
/************** Layer: MCAL **************/
/************** Module: DIO **************/
/************** Version: 1.00 ************/
/************** Date: 2/8/2023 ***********/
/*****************************************/
/*****************************************/


#ifndef _MDIO_INTERFACE_H_
#define _MDIO_INTERFACE_H_

typedef enum{
	Return_Ok,
	Return_Nok,
	Return_NullPointer,
}Error_State_t;



void MDIO_voidSetPinDirection(u8 Copy_u8Port ,u8 Copy_u8Pin , u8 Copy_u8Mode );
Error_State_t MDIO_Error_State_tSetPinValue(u8 Copy_u8Port ,u8 Copy_u8Pin , u8 Copy_u8Mode );

void MDIO_voidGetPinValue(u8 Copy_u8Port ,u8 Copy_u8Pin , u8* P_u8Value );
void Port_voidInit(void);

#define DIO_OUTPUT		1
#define DIO_INPUT		0

#define DIO_HIGH		1
#define DIO_LOW			0

#define DIO_PORTA		1
#define DIO_PORTB		2
#define DIO_PORTC		3
#define DIO_PORTD		4

#define PIN0			0
#define PIN1			1
#define PIN2			2
#define PIN3			3
#define PIN4			4
#define PIN5			5
#define PIN6			6
#define PIN7			7


#endif
