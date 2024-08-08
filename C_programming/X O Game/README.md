# Tic-Tac-Toe Game

## Introduction
Tic-Tac-Toe (also known as "X and O") is a classic two-player game where players take turns placing their marks (`X` or `O`) on a 3x3 grid. The objective is to be the first player to align three of your marks horizontally, vertically, or diagonally.

## Main Files
- **main.c**: Contains the main function of the program, which manages the game flow and handles user input.
- **Game.c**: Contains the core game logic, including printing the board, checking for a winner, and updating the game state.
- **Game.h**: Contains the function prototypes and variable definitions used throughout the project.

## How to Run
1. Compile the code using a compiler like `gcc`:
    ```bash
    gcc main.c Game.c -o TicTacToe
    ```

2. Run the game:
    ```bash
    ./TicTacToe
    ```

3. Follow the on-screen instructions to enter player names and choose squares during the game.

## How to Play
- When the game starts, you will be prompted to enter the players' names.
- The first player will be `X`, and the second player will be `O`.
- After entering the names, the game board will be displayed on the screen.
- Players take turns choosing a number from 1 to 9 to place their mark in the corresponding square.
- The player who first places 3 of their marks in a row (horizontally, vertically, or diagonally) wins the game.
- If the board fills up and no player has won, the game ends in a draw.

## Game Example

Welcome to Tic-Tac-Toe!
========================

Enter Name of Player 1 (X): Ahmed
Enter Name of Player 2 (O): Sara

Let's Start the Game!

 1 | 2 | 3 
-----------
 4 | 5 | 6 
-----------
 7 | 8 | 9 

It's Ahmed's turn (X)
Choose a number (1-9): 5


## Notes
- This game is played in the command line (CMD/terminal).
- Make sure to follow the instructions carefully during the game to avoid any errors.


