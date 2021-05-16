/**
* @file main.c
* @brief Main
* @author Aleksandar Rogulja
* @date 16-05-2021
* @version 1.0
*/

#include "../serial_bibl/usart.h"
#include "../pin_driver/pin.h"
#include "../timer/timer.h"
#include "../arrays/arrays.h"

#include <avr/io.h>
#include <stdlib.h>
#include <util/delay.h>

int main()
{
	usartInit(9600);

	int16_t first_element;

	while(1)
	{
		usartPutString("Unesite prvi element:") ;
		while(!usartAvailable());

		_delay_ms(100);
	}

	return 0;
}





