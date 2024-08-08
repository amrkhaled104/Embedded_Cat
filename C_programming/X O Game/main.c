#include <stdio.h>
#include "Game.h"

int main() {
    printf("Welcome to X O!\n");
    printf("========================\n");

    char user1[100], user2[100];

    printf("Enter Name of Player 1: ");
    gets(user1); 

    printf("Enter Name of Player 2: ");
    gets(user2);

    printf("\nLet's Start the Game!\n\n");

    start_play(user1, user2);

    return 0;
}
