#include<xc.h>

void USART_Init(char data)
{
    TXREG = data;
}