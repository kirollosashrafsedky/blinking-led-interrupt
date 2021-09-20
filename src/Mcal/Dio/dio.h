#ifndef __DIO_H__
#define __DIO_H__

#include "../../Infrastructure/types.h"

// init DIO port
void DIO_port_init(uint8_t port, uint8_t direction);

// init DIO pin
void DIO_pin_init(uint8_t pin, uint8_t direction);

// enable port pull up
void DIO_enable_port_pullup(uint8_t port);

// enable pin pull up
void DIO_enable_pin_pullup(uint8_t pin);

// disable port pull up
void DIO_disable_port_pullup(uint8_t port);

// disable pin pull up
void DIO_disable_pin_pullup(uint8_t pin);

// enable global pull up
void DIO_enable_global_pullup(void);

// disable global pull up
void DIO_disable_global_pullup(void);

// Write value to DIO port
void DIO_write_port(uint8_t port, uint8_t data);

// Write value to DIO pin
void DIO_write_pin(uint8_t pin, uint8_t data);

// Read value from DIO port
void DIO_read_port(uint8_t port, uint8_t* data);

// Read value from DIO pin
void DIO_read_pin(uint8_t pin, uint8_t* data);

// Toggle DIO port
void DIO_toggle_port(uint8_t port);

// Toggle DIO pin
void DIO_toggle_pin(uint8_t pin);

#endif /* __DIO_H__ */
