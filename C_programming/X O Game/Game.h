#ifndef GAME
#define GAME

#define N1 BOX[0][0]
#define N2 BOX[0][1]
#define N3 BOX[0][2]
#define N4 BOX[1][0]
#define N5 BOX[1][1]
#define N6 BOX[1][2]
#define N7 BOX[2][0]
#define N8 BOX[2][1]
#define N9 BOX[2][2]

void start_play(char user1[100], char user2[100]);
void play();
int win();
void update(int num);
void print();

#endif
