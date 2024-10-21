# 7-Segment Display Control

### Author: Amr Khaled

## Description

This project demonstrates the control of a 7-segment display using a microcontroller. The display shows digits from 0 to 9, with increment and decrement functionality using two input buttons. The microcontroller reads button presses and updates the 7-segment display accordingly.

### Hardware Setup

- **Port A** is connected to the 7-segment display and is used to send the binary representation of each digit.
- **Port D** is used to read the input from two buttons:
  - Button 1 (`PIND0`): Increments the displayed number.
  - Button 2 (`PIND1`): Decrements the displayed number.

### Functional Overview

1. **Pin Configuration**:
   - **Port A**: Configured as output to control the 7-segment display.
   - **Port D**: Configured as input to read button presses.

2. **Operation**:
   - The program continuously monitors the state of two buttons connected to **PIND0** and **PIND1**.
   - If the increment button (`PIND0`) is pressed:
     - The number on the display increases by 1, up to a maximum of 9.
   - If the decrement button (`PIND1`) is pressed:
     - The number on the display decreases by 1, down to a minimum of 0.
   - The display is updated accordingly, and there is a 1-second delay after each button press to avoid bouncing.

### Code Explanation

- **Arrays**:
  - `arr1[]`: Stores the binary values for each digit (0-9) to be displayed on the 7-segment display. Each element corresponds to the segments that should be turned on or off.

- **Button Handling**:
  - The code checks the state of **PIND0** for increment and **PIND1** for decrement.
  - Debouncing is handled by using a delay and waiting until the button is released before accepting a new input.

### Example Usage

- When the increment button is pressed, the number displayed on the 7-segment increases by 1.
- When the decrement button is pressed, the number displayed decreases by 1.
- The display is updated in real-time and will not exceed 9 or go below 0.

### How to Use

1. Connect the 7-segment display to **Port A** of the microcontroller.
2. Connect two buttons to **PIND0** and **PIND1**.
3. Load the program onto the microcontroller.
4. Press the buttons to increment or decrement the displayed number.

### Dependencies

- Microcontroller with **Port A** and **Port D** (e.g., ATmega32).
- `util/delay.h` library for handling delays.

