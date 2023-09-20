/******************************************************************/
/******************************************************************/
/***************   		Author : Hossam Medhat		***************/
/***************   		Layer : MCAL         		***************/
/***************   		SWC : APP           		***************/
/***************   		Version : 1.00      		***************/
/******************************************************************/
/******************************************************************/

/* Include Libraries */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "util/delay.h"

/*Include MCAL */
#include "DIO_Interface.h"

int main (void){

	DIO_u8SetPinDirection(DIO_PORTC , DIO_PIN0 ,DIO_OUTPUT);



	while(1){

		DIO_u8SetPinValue(DIO_PORTC , DIO_PIN0 ,DIO_HIGH);
		_delay_ms(1000);
		DIO_u8SetPinValue(DIO_PORTC , DIO_PIN0 ,DIO_LOW);
		_delay_ms(1000);
	}
}


