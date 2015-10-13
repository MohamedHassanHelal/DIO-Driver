/*
 * DIO.h
 *
 * Created: 10/11/2015 12:27:15 PM
 *  Author: Mohamed Hassan Helal
 */ 


#ifndef DIO_H_
#define DIO_H_

#define pin0 0
#define pin1 1
#define pin2 2
#define pin3 3
#define pin4 4
#define pin5 5
#define pin6 6
#define pin7 7
#define pin8 8
#define pin9 9
#define pin10 10
#define pin11 11
#define pin12 12
#define pin13 13
#define pin14 14
#define pin15 15
#define pin16 16
#define pin17 17
#define pin18 18
#define pin19 19
#define pin20 20
#define pin21 21
#define pin22 22
#define pin23 23
#define pin24 24
#define pin25 25
#define pin26 26
#define pin27 27
#define pin28 28
#define pin29 29
#define pin30 30
#define pin31 31


void vDIO_Init(unsigned char,unsigned char);
void vDIO_Write(unsigned char,unsigned char);
void vDIO_Read(unsigned char);


#endif /* DIO_H_ */