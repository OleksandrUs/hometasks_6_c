/*
 * uart_echo, main.c
 * Purpose: develop application that communicates with PC trough UART.
 * Application should send just echo. You should use only CMSIS library.
 * UART driver should contain following functions:
 * init();
 * open();
 * read();
 * write();
 * close();
 * deinit();
 *
 * Connection:
 * PA2 - USART2_TX
 * PA3 - USART2_RX
 *
 * @author Oleksandr Ushkarenko
 * @version 1.0 31/08/2021
 */

#include "stm32f3xx.h"
#include "uart_driver.h"

/*
 * The entry point of the program. The program demonstrates the usage
 * of the USART2: received symbol is transmitted immediately (echo). Polling mode is used.
 */
int main(void)
{
	uart_init();
	uart_open();

	int data;

	while(1) {
		data = uart_read();
		uart_write(data);
	}

	uart_close();
	uart_deinit();

	return 0;
}
