#include "uart.h"
#include "adc.h"
#include <avr/io.h>
#include <stdio.h>

int main() {
  adc_init();
  uart_init(9600); // Initialize UART with 9600 baud rate
  uint16_t value;
  char buffer[10];
  char info_string[50] = "";
  
  while (1) {
    value = adc_read(0); // Read from ADC channel 0 (e.g., PC0)
    // Convert ADC value to string and send via UART
    float voltage = adc_to_voltage(value);
    float_to_string(voltage, buffer, sizeof(buffer), 2);

    // Prepare the info string
    snprintf(info_string, sizeof(info_string), "ADC Value: %s V", buffer);
    uart_transmit_string(info_string);
    uart_new_line(); // auto scroll in terminal

    _delay_ms(500); // Delay for readability
  }
  return 0;
}