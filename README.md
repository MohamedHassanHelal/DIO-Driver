# DIO-Driver
IO-Driver 

How it use?

1-add DIO.h and DIO.c to your Micro controller ex: ATmega32 project

2-include DIO.h

3-use [void vDIO_Init(unsigned char,unsigned char);] to intialize and determine the use of your port (INPUT OR OUTPUT)

4-use void [vDIO_Write(unsigned char,unsigned char);] ex: vDIO_write(pin0,1)
 to determine the state of your port (HIGH==1 or LOW==0 at OUTPUT operation / PULL_UP or HIGH_IMPEDANCE at INPUT operation)

5-use [void vDIO_Read(unsigned char);] to scan and get input from Micro conroller

This software is developed by Mohammed Hassan Helal (mohamed.hassan.helal@hotmail.com)
