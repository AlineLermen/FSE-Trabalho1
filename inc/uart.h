#ifndef UART_H_
#define UART_H_

int escreveUART(int uartFilestream, char *txBuffer, char *pTxBuffer);
int leIntUART(int uartFilestream);
float leFloatUART(int uartFilestream);
// char *leStringUART(int uartFilestream);
int inicializaUART(char dispositivo[]);


#endif /* UART_H_ */