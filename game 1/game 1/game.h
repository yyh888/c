#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>


#define COL 9
#define ROW 9

#define COLS COL+2
#define ROWS ROW+2

#define MINE 80


extern void BoardInit(char board[ROWS][COLS], int row, int col, char ret);
extern void DisplayBoard(char board[ROWS][COLS]);
extern void BoardSet(char board[ROWS][COLS]);
extern void BoardFind(char mine[ROWS][COLS], char show[ROWS][COLS]);