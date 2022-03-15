#pragma once
#include"game.h"

void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');
	//displayboard(mine, ROW, COL);
	displayboard(show, ROW, COL);
	setmine(mine, ROW, COL);
	//displayboard(mine, ROW, COL);
	findmine(mine,show,ROW, COL);
}
void menu()
{
	printf("****************************\n");
	printf("*********  1. play   *******\n");
	printf("*********  0. exit   *******\n");
	printf("****************************\n");
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("������:>");
	    scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("�����������������\n");
				break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}