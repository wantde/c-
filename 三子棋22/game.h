#define _CRT_SECURE_NO_WARNINGS 1


# define ROW 3
# define COL 3
#include <stdio.h>

void lnitboard(char board[ROW][COL],int cow,int col);
void displayboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void player2move(char board[ROW][COL], int row, int col);

char iswin(char board[ROW][COL], int row, int col);
int full(char board[ROW][COL], int row, int col);