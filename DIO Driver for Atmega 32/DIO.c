/*
 * DIO.c
 *
 * Created: 10/11/2015 12:23:02 PM
 *  Author: Mohamed Hassan Helal
 */ 

/*this code for AVR atmega32A you can Maintain it to any MC*/
#include <avr/io.h>
#include "DIO.h"


//#define  SETBIT( reg,n)  ((reg) |= (1<<(n)))
//#define CLEARBIT( reg,n) ((reg) &=~ (1<<(n)) 


void vDIO_Init(unsigned char pin,unsigned char io ){
	
	//pin number to set DDR , io to set if DDR input or output

	while (pin>0 && pin<7 ) {               //DDRA from pin0 to pin7
		if( io==1){
			//SETBIT( DDRA,pin) ;
			DDRA |= (1<<pin);
		}
		else if( io==0){
			//CLEARBIT(DDRA,pin) ;
			DDRA &=~ (1<<pin);
		}
	}
	
		
	while (pin>0 && pin<7 ) {           //DDRB from pin0 to pin7
		if(io==1){
			//SETBIT(DDRB,pin) ;
			DDRB |= (1<<pin);
		}
		else if(io==0){
			//CLEARBIT(DDRB,pin) ;
			DDRB &=~ (1<<pin);
		}
	}
	
			
	while (pin>0 && pin<7 ) { 	     //DDRC from pin0 to pin7
		if(io==1){
			//SETBIT(DDRC,pin);
			DDRC |= (1<<pin);
		}
		else if(io==0){
			//CLEARBIT(DDRC,pin);
			DDRC &=~ (1<<pin);
		}
	}
	
	
	while (pin>0 && pin<7 ) {       //DDRD from pin0 to pin7
		if(io==1){
			//SETBIT(DDRD,pin);
			DDRD |= (1<<pin);
		}
		else if(io==0){
			//CLEARBIT(DDRD,pin);
			DDRD &=~ (1<<pin);
		}
	}			
}



//this function to write on desired pin ( high or low )

void vDIO_Write(unsigned char pin,unsigned char io){
	
	while (pin>0 && pin<7 ) {             //port A from pin0 to pin7
		if(io==1){
			//SETBIT(PORTA,pin);
			PORTA |= (1<<pin);
		}
		else if(io==0){
			//CLEARBIT(PORTA,pin);
			PORTA &=~ (1<<pin);
			
		}
	}
	
	
	while (pin>0 && pin<7 ) {           //port B from pin0 to pin7
		if(io==1){
			//SETBIT(PORTB,pin);
			PORTB |= (1<<pin);
		}
		else if(io==0){
			//CLEARBIT(PORTB,pin);
			PORTB &=~ (1<<pin);
		}
	}
	
	
	while (pin>0 && pin<7 ) { 	       //port C from pin0 to pin7
		if(io==1){
			//SETBIT(PORTC,pin);
			PORTC |= (1<<pin);
		}
		else if(io==0){
			//CLEARBIT(PORTC,pin);
			PORTC &=~ (1<<pin);
		}
	}
	
	
	while (pin>0 && pin<7 ) {         //port D from pin0 to pin7
		if(io==1){
			//SETBIT(PORTD,pin);
			PORTD |= (1<<pin);
		}
		else if(io==0){
			//CLEARBIT(PORTD,pin);
			PORTD &=~ (1<<pin);
		}
	}	

}



void vDIO_Read(unsigned char pin){
	while (pin>0 && pin<7 ) {            //Pin A from pin0 to pin7
			//CLEARBIT(PINA,pin);
			PINA &=~ (1<<pin);
	}
	
	
	while (pin>0 && pin<7 ) {           //Pin B from pin0 to pin7
			//CLEARBIT(PINB,pin);
			PINB &=~ (1<<pin);
	}
	
	
	while (pin>0 && pin<7 ) { 	       //Pin C from pin0 to pin7
			//CLEARBIT(PINC,pin);
			PINC &=~ (1<<pin);
	}
	
	
	while (pin>0 && pin<7 ) {         //Pin D from pin0 to pin7
			//CLEARBIT(PIND,pin);
			PIND &=~ (1<<pin);
	}	
}