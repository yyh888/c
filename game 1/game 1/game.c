#include"game.h"


void BoardInit(char board[ROWS][COLS], int row, int col, char ret)
{
	int i, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ret;
		}
	}
}




void DisplayBoard(char board[ROWS][COLS])
{
	int i, j = 0;
	for (j = 0; j <= COL; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= ROW; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= COL; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}


void BoardSet(char board[ROWS][COLS])
{
	//1~9
	int ret = MINE;
	while (ret--)
	{
		int x = rand() % ROW + 1;
		int y = rand() % COL + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
		}
		else
		{
			ret++;
		}
	}

}


int int_count(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]
		+ mine[x][y - 1] + mine[x][y + 1]
		+ mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1]
		- 8 * '0');
}



void spread(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	//�жϱ߽�
	if (x <= ROW && y <= COL && x > 0 && y > 0)
	{
		//��Χû�׵�չ��
		int i = 0;
		int j = 0;
		show[x][y] = int_count(mine, x, y)+'0';
		if (show[x][y] == '0')
		{
			show[x][y] = ' ';

			for (i = -1; i <= 1; i++)
			{
				for (j = -1; j <= 1; j++)
				{
					if (show[x + i][y + j] == '*')
					{
						spread(mine, show, x + i, y + j);
					}
				}
			}
		}
	}
}



int Count(char show[ROWS][COLS])
{
	int count = 0;
	int i = 1;
	int j = 1;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (show[i][j] != '*')
				count++;
		}
	}
	return count;
}



void BoardFind(char mine[ROWS][COLS], char show[ROWS][COLS])
{
	//DisplayBoard(mine);
	int win = 0;
	while (ROW * COL - MINE - win)
	{
		int x, y = 0;
		printf("����������:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			//�����ظ���һ��λ��
			if (show[x][y] != '*')
			{
				printf("��λ���Ѿ��Ų�����������Ų�\n");
			}
			//�������
			else
			{
				if (mine[x][y] == '1')
				{
					printf("���ź�����ȵ�����\n");
					DisplayBoard(mine);
					break;
				}
				//������
				else
				{
					int ret = int_count(mine, x, y);
					if (ret == 0)
					{
						spread(mine, show, x, y);
						DisplayBoard(show);
					}
					else
					{
						show[x][y] = int_count(mine, x, y)+'0';
						DisplayBoard(show);
					}
				}
			}
		}
		else
		{
			printf("���벻�Ϸ�������������\n");
		}
		win = Count(show);
	}
	if (ROW * COL - MINE - win == 0)
	{
		printf("Ӯ��\n");
		DisplayBoard(mine);
	}
	
	
}

