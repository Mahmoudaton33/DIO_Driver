/*
 * main.c
 *
 *  Created on: Aug 2, 2023
 *      Author: ATON
 */




#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "MDIO_interface.h"

#include "util/delay.h"

// PIND5 >> OUTPUT >> HIGH 1 sec >> LOW 1 sec

int main()
{
	MDIO_voidSetPinDirection(DIO_PORTD ,PIN5 , DIO_OUTPUT);


	while(1)
	{
		MDIO_voidSetPinValue(DIO_PORTD , PIN5 , DIO_HIGH);
		_delay_ms(1000);
		MDIO_voidSetPinValue(DIO_PORTD , PIN5 , DIO_LOW);
		_delay_ms(1000);

	}
}
