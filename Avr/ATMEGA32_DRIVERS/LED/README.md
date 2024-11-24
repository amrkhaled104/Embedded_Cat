# LED Driver for ATMEGA32

This project demonstrates a simple **LED driver** for the **ATMEGA32** microcontroller.

## Features
- Simple on/off control for LEDs.
- Configurable LED connections (Source/Sink).
- Modular design for reusability.

## Preview
Here is a demo of the project in action:

![LED Driver Demo](https://github.com/amrkhaled104/Embedded_Cat/blob/main/Avr/ATMEGA32_DRIVERS/LED/Simulation/LED.gif)

## Files Overview
- `main.c`: Main application logic to control LEDs.
- `LED_config.h` & `LED_config.c`: Configuration files for LED settings (port, pin, state).
- `LED_int.h`: Interface for LED driver functions.
- `LED_prog.c`: Implementation of the LED driver (initialize, turn ON/OFF).
- `DIO_init.h`: Handles GPIO initialization and pin control.

## How It Works
1. The driver initializes the LEDs and sets their initial states.
2. Two LEDs alternate between ON and OFF states every 1 second using `_delay_ms()`.

## Prerequisites
- **Microcontroller**: ATMEGA32
- **Clock Frequency**: 1 MHz

## Usage
1. Configure the LEDs in `LED_config.c`:
   ```c
   LED_t LED_AstrLedConfig[LED_NUM] = {
       {DIO_u8PORTA, DIO_u8PIN0, LED_u8SOURCE, LED_u8OFF},
       {DIO_u8PORTA, DIO_u8PIN1, LED_u8SOURCE, LED_u8OFF}
   };
