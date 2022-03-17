#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void playerMove(char board[ROW][COL], int row, int col);
void computerMove(char board[ROW][COL], int row, int col);
char iswin(char board[ROW][COL], int row, int col);
//玩家赢-- '*'
//电脑赢-- '#'
//平局-- 'Q'
//继续-- 'C'