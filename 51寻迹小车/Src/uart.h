
#ifndef UART_H
#define UART_H


#include "basic.h"

#define u8 unsigned char	// �궨��
#define u16 unsigned int	// �궨��

#define FOSC 11059200L      //System frequency
#define BAUD 9600           //UART baudrate


extern u8 RxBuf;


void UartInit(void);
void SendData(u8 dat);
void SendString(char *s);

#endif
