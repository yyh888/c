#include"game.h"



void menu()
{
	printf("����������������������������������������������������\n");
	printf("����������������    1.��ʼɨ��    ������������������\n");
	printf("����������������    0.������Ϸ    ������������������\n");
	printf("����������������������������������������������������\n");
}



void game()
{
	//ʵ��
	char mine[ROWS][COLS] = {0};
	//չʾ
	char show[ROWS][COLS] = {0};
	//��ʼ��mine����
	BoardInit(mine, ROWS, COLS, '0');
	//��ʼ��show
	BoardInit(show, ROWS, COLS, '*');
	//������
	BoardSet(mine);
	DisplayBoard(show);
	//ɨ��
	BoardFind(mine, show);
}




int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("����������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default :
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}