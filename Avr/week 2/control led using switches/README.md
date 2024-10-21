# Microcontroller Port Control Project

### Author: Amr Khaled

## Description

This project demonstrates basic I/O pin control using a microcontroller. The code is written in C and utilizes standard libraries along with low-level memory-mapped I/O manipulation. The primary goal is to control the state of Port A pins based on the input read from Port B.

### Hardware Setup

- **Port A** is configured as an output port.
- **Port B** is configured as an input port, with three key pins (`PINB0`, `PINB1`, and `PINB2`) used to control the logic of the program.

### Functional Overview

1. **Pin Configuration**:
   - `DDRA` is set to 0x03, meaning only the first two pins of **Port A** are set as output.
   - `DDRB` is set to 0x00, meaning all pins of **Port B** are configured as input.

2. **Input Logic**:
   - The program continuously checks the state of `PINB0`, `PINB1`, and `PINB2`:
     - If `PINB2` is low or both `PINB0` and `PINB1` are low, both output pins of **Port A** (`PORTA0` and `PORTA1`) are set to high (0x03).
     - If only `PINB0` is low, `PORTA0` is set to high and `PORTA1` is set to low.
     - If only `PINB1` is low, `PORTA1` is set to high and `PORTA0` is set to low.
     - Otherwise, both outputs are set to low.

### Code Explanation

- **Libraries**:
  - `STD_TYPE.h`: Contains custom data types (`u8` for unsigned 8-bit integers).
  - `BIT_MATH.h`: Contains bit manipulation macros (`READ_BIT`, `setBit`, `clrBit`).
  - `<util/delay.h>`: Used for timing delays.

- **Registers**:
  - `DDRA`, `PORTA`, and `PINA` correspond to **Port A** (Data Direction, Output, and Input registers).
  - `DDRB`, `PORTB`, and `PINB` correspond to **Port B**.
  
### How to Use

1. Set up the microcontroller with **Port A** as an output and **Port B** as an input.
2. Load the program onto the microcontroller.
3. Observe how **Port A**'s pins behave based on the state of **Port B**'s input pins.

### Example Usage

- When both `PINB0` and `PINB1` are low, both output pins on **Port A** are set high.
- When `PINB0` is low and `PINB1` is high, only `PORTA0` is set high.
- When `PINB1` is low and `PINB0` is high, only `PORTA1` is set high.
- When neither condition is met, both outputs are low.

### Dependencies

- Microcontroller with **Port A** and **Port B** (e.g., ATmega32).
- `util/delay.h` for optional delays.
