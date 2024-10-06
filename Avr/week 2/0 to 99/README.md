
# 7-Segment Display Control Project

## Overview

This project demonstrates how to control a 7-segment display using an ATmega microcontroller. The code controls two 7-segment displays, displaying numbers from 0 to 9 in sequence on each display. The microcontroller writes to **PORTA** and **PORTB** to set the appropriate segments for each digit.

## Project Details

- **Microcontroller:** ATmega
- **Programming Language:** C
- **Registers Used:**
  - **DDRA and PORTA**: Control the first 7-segment display.
  - **DDRB and PORTB**: Control the second 7-segment display.
- **Libraries Included:**
  - `util/delay.h` for creating delays between digit transitions.
  
## Code Description

1. **Array Initialization:**
   Two arrays `arr1` and `arr2` store the 7-segment patterns for digits 0 to 9. Each byte in the array corresponds to a combination of segments that need to be turned on to display a particular digit.
   
2. **Main Loop:**
   - The main loop continuously updates the two 7-segment displays.
   - For each digit `i` in `arr1`, the corresponding pattern is sent to **PORTA** to display the digit on the first 7-segment display.
   - For each `j` in `arr2`, the second display is updated via **PORTB**.
   - A delay of 1000 milliseconds is applied between each digit update.

3. **Registers:**
   - **DDRA** and **DDRB** are set to `0xFF` to configure the respective ports as output.
   - **PORTA** and **PORTB** are initialized to `0x00` to clear the displays initially.

## Requirements

- AVR Toolchain (GCC compiler for AVR)
- ATmega microcontroller
- 7-segment displays

## Demonstration Video

To get a better understanding of how the project works, check out this [https://github.com/amrkhaled104/Embedded_Cat/blob/main/Avr/week%202/0%20to%2099/simulation/Segmant.mkv](#). 
