/*****************************************************************************
* | File      	:   2CH_RS232_test.c
* | Author      :   Waveshare team
* | Function    :   2.9inch e-paper V2 test demo
* | Info        :
*----------------
* |	This version:   V1.0
* | Date        :   2021-01-20
* | Info        :
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documnetation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to  whom the Software is
# furished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS OR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.
#
******************************************************************************/
#include "EPD_Test.h"
// #include "string.h"

typedef struct _ox_sensor
{
    char ox_data[UART_RX_MAXLEN];
    char temp_data[UART_RX_MAXLEN];
    char p_data[UART_RX_MAXLEN];
    char oxpar_data[UART_RX_MAXLEN];
    char e_data[UART_RX_MAXLEN];
    uint8_t oxlen;
} ox_sensor;

ox_sensor ox;
bool Ox_status=false;
uint16_t ox_data_len=0;


// RX interrupt handler
void on_uart_rx0() {
    while (uart_is_readable(UART_ID0)) {
        uint8_t ch0 = uart_getc(UART_ID0);
        // char null[]="";
        // Can we send it back?
        if (uart_is_writable(UART_ID0)) {
            // Change it slightly first!
            //ch0++;
            //uart_putc(dUART_ID0, ch0);
            //printf("%c",ch0);
            if(Ox_status && (ch0 != ' ') && (ch0 != 'e')){
                ox.ox_data[ox_data_len] = ch0;
                // printf("%c",ch0);
                ox_data_len++;
            }else{

            }

            if(ch0=='O'){
                Ox_status=false;
            }else if(ch0=='T'){
                Ox_status=false;
            }else if(ch0=='P'){
                Ox_status=false;
            }else if(ch0=='%'){
                Ox_status=true;
            }else if(ch0=='e'){
                Ox_status=false;
            }
            
            if(ch0=='\r'){
                //printf("%s \r\n",ox.ox_data);
            show_oxdata();
                
            }
            // strcat(ch0_str,ch0);
        }
        chars_rxed0++;
    }
    // printf("%c",ch0);
}
void show_oxdata(void){
    printf("ox : %s % - [uart string test] \r\n", ox.ox_data);
    ox_data_len=0;
    memset(ox.ox_data,0,sizeof(struct _ox_sensor));
    
}
void on_uart_rx1() {
    char ch1_str[]={0x00,};
    while (uart_is_readable(UART_ID1)) {
        char ch1 = uart_getc(UART_ID1);
        // Can we send it back?
        if (uart_is_writable(UART_ID1)) {
            // Change it slightly first!
            //ch1++;
            //uart_putc(UART_ID1, ch1);
            //printf("%c",ch1);
            strcat(ch1_str,ch1);
            
        }
        chars_rxed1++;
        printf("ox : %s '%' - [uart string test]",ch1_str);
    }
    // printf("%s uart1 test\r\n",ch1_str);
}

int Pico_RS232_test(void)
{
    // ox.ox_data = "";
  // Set up our UART with a basic baud rate.
    stdio_init_all();
    DEV_Delay_us(100);
    memset(&ox,0,sizeof(ox_sensor));
    uart_init(UART_ID0, 9600);
    uart_init(UART_ID1, 9600);
    // Set the TX and RX pins by using the function select on the GPIO
    // Set datasheet for more information on function select
    gpio_set_function(UART_TX_PIN0, GPIO_FUNC_UART);
    gpio_set_function(UART_RX_PIN0, GPIO_FUNC_UART);
    gpio_set_function(UART_TX_PIN1, GPIO_FUNC_UART);
    gpio_set_function(UART_RX_PIN1, GPIO_FUNC_UART);
    // Actually, we want a different speed
    // The call will return the actual baud rate selected, which will be as close as
    // possible to that requested
    //int actual = uart_set_baudrate(UART_ID, BAUD_RATE);

    // Set UART flow control CTS/RTS, we don't want these, so turn them off
    uart_set_hw_flow(UART_ID0, false, false);
    uart_set_hw_flow(UART_ID1, false, false);
    // Set our data format
    uart_set_format(UART_ID0, DATA_BITS, STOP_BITS, PARITY);
    uart_set_format(UART_ID1, DATA_BITS, STOP_BITS, PARITY);
    // Turn off FIFO's - we want to do this character by character
    uart_set_fifo_enabled(UART_ID0, false);
    uart_set_fifo_enabled(UART_ID1, false);

    
    // Set up a RX interrupt
    // We need to set up the handler first
    // Select correct interrupt for the UART we are using
    // int UART_IRQ = UART_ID == uart0 ? UART0_IRQ : UART1_IRQ;
    // int UART_IRQ = UART_ID == uart0 ? UART0_IRQ : UART1_IRQ;
    // And set up and enable the interrupt handlers
    irq_set_exclusive_handler(UART0_IRQ, on_uart_rx0);
    irq_set_enabled(UART0_IRQ, true);
    irq_set_exclusive_handler(UART1_IRQ, on_uart_rx1);
    irq_set_enabled(UART1_IRQ, true);
    // Now enable the UART to send interrupts - RX only
    uart_set_irq_enables(UART_ID0, true, false);
    uart_set_irq_enables(UART_ID1, true, false);
    // OK, all set up.
    // Lets send a basic string out, and then run a loop and wait for RX interrupts
    // The handler will count them, but also reflect the incoming data back with a slight change!
    // uart_puts(UART_ID0, "\nHello, uart0 interrupts\n");
    // uart_puts(UART_ID1, "\nHello, uart1 interrupts\n");
    
}
