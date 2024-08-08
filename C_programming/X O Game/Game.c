#include <stdio.h>
#include <string.h>
#include "Game.h"

char who[100];
int count = 1;
char BOX[3][3] = {'1','2','3','4','5','6','7','8','9'};

void print() {
    printf("\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", N1, N2, N3);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", N4, N5, N6);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", N7, N8, N9);
    printf("     |     |     \n");
    printf("\n");
}

void update(int num) {
    if (count % 2 != 0) { 
        switch(num) {
            case 1: N1 = 'X'; break;
            case 2: N2 = 'X'; break;
            case 3: N3 = 'X'; break;
            case 4: N4 = 'X'; break;
            case 5: N5 = 'X'; break;
            case 6: N6 = 'X'; break;
            case 7: N7 = 'X'; break;
            case 8: N8 = 'X'; break;
            case 9: N9 = 'X'; break;
            default: printf("Invalid choice!\n");
        }
    } else {
        switch(num) {
            case 1: N1 = 'O'; break;
            case 2: N2 = 'O'; break;
            case 3: N3 = 'O'; break;
            case 4: N4 = 'O'; break;
            case 5: N5 = 'O'; break;
            case 6: N6 = 'O'; break;
            case 7: N7 = 'O'; break;
            case 8: N8 = 'O'; break;
            case 9: N9 = 'O'; break;
            default: printf("Invalid choice!\n");
        }
    }
}

int win() {
    if ((N1 == 'X' && N2 == 'X' && N3 == 'X') ||
        (N4 == 'X' && N5 == 'X' && N6 == 'X') ||
        (N7 == 'X' && N8 == 'X' && N9 == 'X') ||
        (N1 == 'X' && N4 == 'X' && N7 == 'X') ||
        (N2 == 'X' && N5 == 'X' && N8 == 'X') ||
        (N3 == 'X' && N6 == 'X' && N9 == 'X') ||
        (N1 == 'X' && N5 == 'X' && N9 == 'X') ||
        (N3 == 'X' && N5 == 'X' && N7 == 'X'))
        return 1;

    if ((N1 == 'O' && N2 == 'O' && N3 == 'O') ||
        (N4 == 'O' && N5 == 'O' && N6 == 'O') ||
        (N7 == 'O' && N8 == 'O' && N9 == 'O') ||
        (N1 == 'O' && N4 == 'O' && N7 == 'O') ||
        (N2 == 'O' && N5 == 'O' && N8 == 'O') ||
        (N3 == 'O' && N6 == 'O' && N9 == 'O') ||
        (N1 == 'O' && N5 == 'O' && N9 == 'O') ||
        (N3 == 'O' && N5 == 'O' && N7 == 'O'))
        return 2;

    return 0;
}

void play(char user1[100], char user2[100]) {
    int num;
    while (!win() && count <= 9) {
        print();
        if (count % 2 != 0&&strcmp(who,user1)==0) {
            printf("It's %s's turn (X)\n", user1);
        } else {
            printf("It's %s's turn (O)\n", user2);
        }
        printf("Choose a number (1-9): ");
        scanf("%d", &num);
        update(num);
        count++;
    }

    print(); // Show the final state of the board
    if (win() == 1) 
        printf("X wins!\n");
    else if (win() == 2) 
        printf("O wins!\n");
    else
        printf("It's a draw!\n");
}

void start_play(char user1[100], char user2[100]) {
    printf("Who is the X player? ");
    fgets(who, 100, stdin);
    who[strcspn(who, "\n")] = 0;

    play(user1, user2);
}
