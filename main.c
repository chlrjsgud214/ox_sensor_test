#include "EPD_Test.h"

int main() {
    Pico_RS232_test();
    while (1){
        show_oxdata();
    }
        
}

/// \end:uart_advanced[]
