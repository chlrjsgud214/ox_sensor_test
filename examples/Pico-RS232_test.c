
#include "EPD_Test.h"

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


void on_uart_rx0() { //uart0 rx 인터럽트 후 출력
    while (uart_is_readable(UART_ID0)) {
        uint8_t ch0 = uart_getc(UART_ID0);

        if (uart_is_writable(UART_ID0)) {
            
            if(Ox_status && (ch0 != ' ') && (ch0 != 'e')){
                ox.ox_data[ox_data_len] = ch0;
                ox_data_len++;
            }else {

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
                
            }else{
                printf("%c",ch0);
            }
        }
        chars_rxed0++;
    }
}
void show_oxdata(void){
    printf("\r\nox : %s%% [uart string test] \r\n", ox.ox_data);
    ox_data_len=0;
    memset(ox.ox_data,0,sizeof(struct _ox_sensor));
    
}
void on_uart_rx1() {
    char ch1_str[]={0x00,};
    while (uart_is_readable(UART_ID1)) {
        char ch1 = uart_getc(UART_ID1);
        if (uart_is_writable(UART_ID1)) {
            
        }
        chars_rxed1++;
    }
}

int Pico_RS232_test(void)
{
    stdio_init_all();
    DEV_Delay_us(100);
    memset(&ox,0,sizeof(ox_sensor));
    uart_init(UART_ID0, 9600);
    uart_init(UART_ID1, 9600);
    gpio_set_function(UART_TX_PIN0, GPIO_FUNC_UART);
    gpio_set_function(UART_RX_PIN0, GPIO_FUNC_UART);
    gpio_set_function(UART_TX_PIN1, GPIO_FUNC_UART);
    gpio_set_function(UART_RX_PIN1, GPIO_FUNC_UART);
    uart_set_hw_flow(UART_ID0, false, false);
    uart_set_hw_flow(UART_ID1, false, false);
    uart_set_format(UART_ID0, DATA_BITS, STOP_BITS, PARITY);
    uart_set_format(UART_ID1, DATA_BITS, STOP_BITS, PARITY);
    uart_set_fifo_enabled(UART_ID0, false);
    uart_set_fifo_enabled(UART_ID1, false);

    
    irq_set_exclusive_handler(UART0_IRQ, on_uart_rx0);
    irq_set_enabled(UART0_IRQ, true);
    irq_set_exclusive_handler(UART1_IRQ, on_uart_rx1);
    irq_set_enabled(UART1_IRQ, true);
    uart_set_irq_enables(UART_ID0, true, false);
    uart_set_irq_enables(UART_ID1, true, false);
    
}
