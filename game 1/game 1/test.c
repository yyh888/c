#include"game.h"



void menu()
{
	printf("——————————————————————————\n");
	printf("————————    1.开始扫雷    —————————\n");
	printf("————————    0.结束游戏    —————————\n");
	printf("——————————————————————————\n");
}



void game()
{
	//实际
	char mine[ROWS][COLS] = {0};
	//展示
	char show[ROWS][COLS] = {0};
	//初始化mine数组
	BoardInit(mine, ROWS, COLS, '0');
	//初始化show
	BoardInit(show, ROWS, COLS, '*');
	//设置雷
	BoardSet(mine);
	DisplayBoard(show);
	//扫雷
	BoardFind(mine, show);
}




int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入数字:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default :
			printf("输入错误请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}