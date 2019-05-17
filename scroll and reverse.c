/*
 * SCROLL AND REVERSE.c
 *
 * Created: 10-May-19 12:24:54 PM
 * Author : ALEKHYA
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include<util/delay.h>


int main(void)
{
   DDRC=0XFF;
    while (1) 
    {
		PORTC=0X01;
		PORTC=0X02;
		PORTC=0X04;
		PORTC=0X08;
		PORTC=0X10;
		PORTC=0X20;
		PORTC=0X40;
		PORTC=0X80;
    }
}

