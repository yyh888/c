#define  _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("*****************************\n");
	printf("****  1. play  0. exit   ****\n");
	printf("*****************************\n");
}
void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW,COL);
	DisplayBoard(board, ROW,COL);
	while (1)
	{
		playerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		computerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '#')
	{
		printf("电脑赢\n");
	}
    else if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("结束游戏\n");
			break;
		case 3:
			printf("输入错误，请重新输入\n");
				break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
