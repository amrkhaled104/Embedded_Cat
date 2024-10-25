# Digital Input/Output (DIO) for ATMEGA32

## Author: Amr Khaled  
**Date:** 10/6/2023  
**Board:** ATMEGA32

---

### Project Overview

This project provides a comprehensive library for controlling the **Digital Input/Output (DIO)** operations on the **ATMEGA32** microcontroller. The DIO module allows you to control the state of the microcontroller's pins, including setting them as inputs or outputs, toggling their values, and reading or writing to ports.

---

### Features

- **Port Configuration**: Define the direction (input/output) and state (high/low) of each port.
- **Pin Control**: Set individual pin directions and states for more precise control.
- **Port Operations**: Easily manipulate the entire port in a single operation, including setting, toggling, and reading port values.
- **Pin Operations**: Handle individual pins for fine-grained control, including setting, toggling, and reading specific pins.
- **Input Handling**: Configurable input states, supporting both floating and pull-up resistor modes.
- **Error Handling**: Functions return specific error states to ensure robust and safe DIO operations.

---

### Key Definitions

- **DIO Ports**: ATMEGA32 microcontroller has 4 ports (PORTA, PORTB, PORTC, PORTD). Each port contains 8 pins.
- **Data Direction**: Configure pins as either input or output.
- **Pin States**: Configure pin state as high (logic 1) or low (logic 0).
- **Input Modes**: Pins can be configured to have a floating state or pull-up resistor enabled.

---

### Files Included

1. **DIO_int.h**  
   Interface file containing the definitions and prototypes for DIO operations.

2. **DIO_priv.h**  
   Private header file containing internal macros and register definitions for DIO operations.

3. **DIO_prog.c**  
   Implementation of the DIO module functions, including pin and port control, as well as initialization.

4. **STD_TYPE.h**  
   Standard type definitions for the project, including common data types such as `u8`, `u16`, `u32`, `s8`, `f32`, and more.

---

### Error Handling

The project implements a custom error state system (`ES_T`), which provides feedback on the status of the DIO functions. Error states include:

- **ES_OK**: Operation completed successfully.
- **ES_NOK**: Operation failed.
- **ES_OUT_OF_RANGE**: Invalid port or pin ID was passed.
- **ES_NULL_POINTER**: A null pointer was passed to a function requiring a valid memory address.

---

### How to Use

1. **Initialization**:  
   Call `DIO_enuInit()` to configure the initial states of all ports and pins. This function sets the direction and initial value for each pin.

2. **Set Port Direction**:  
   Use `DIO_enuSetPortDirection()` to configure the direction (input/output) of an entire port.

3. **Set Port Value**:  
   Use `DIO_enuSetPortValue()` to write a specific value (high/low) to all pins of a port.

4. **Set Pin Direction**:  
   Use `DIO_enuSetPinDirection()` to configure the direction of a specific pin.

5. **Set Pin Value**:  
   Use `DIO_enuSetPinValue()` to write a high or low value to a specific pin.

6. **Get Port/Pin Values**:  
   Use `DIO_enuGetPort()` or `DIO_enuGetPin()` to read the current value of a port or pin.

7. **Toggle Port/Pin**:  
   Use `DIO_enuTogPort()` or `DIO_enuTogPin()` to toggle the state of a port or pin (switch between high and low).

---

### Future Enhancements

- Add support for interrupt-based DIO control.
- Implement debounce logic for handling noisy inputs.
- Extend library compatibility to other AVR microcontroller families.

---

This project serves as a robust foundation for working with digital inputs and outputs on the ATMEGA32 platform, allowing for flexible and efficient control of pins and ports.