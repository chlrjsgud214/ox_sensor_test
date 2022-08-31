
#ifndef _EPD_TEST_H_
#define _EPD_TEST_H_

#include "DEV_Config.h"
#include <stdlib.h> // malloc() free()
#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/uart.h"
#include "hardware/irq.h"
#include <string.h>



#define UART_ID0 uart0
#define UART_ID1 uart1
#define BAUD_RATE 9600
#define BAUD_RATE1 115200
#define DATA_BITS 8
#define STOP_BITS 1
#define PARITY    UART_PARITY_NONE

#define UART_TX_PIN0 0
#define UART_RX_PIN0 1
#define UART_TX_PIN1 4
#define UART_RX_PIN1 5

#define UART_RX_MAXLEN 256
static int chars_rxed0 = 0;
static int chars_rxed1 = 0;




int Pico_RS232_test(void);
void show_oxdata(void);
#endif
