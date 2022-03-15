#include"game.h"
void initboard(char board[ROWS][COLS], int rows, int cols, char ret)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ret;
		}
	}
}

void displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}



int get_mine(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';

}

//char digui(char show[ROWS][COLS], int x, int y,int ret)
//{
//	int i = 0;
//	int j = 0;
//	if (ret == 0)
//	{
//		for (i = x - 1; i <= x + 1; i++)
//		{
//			for (j = y - 1; j <= y + 1; j++)
//			{
//				show[i][j] = ' ';
//				digui(show, i, j, ret);
//			}
//		}
//		
//	}
//
//	return show[i][j] = ' ';
//}
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int i = 0;
	while (i <=row * col - EASY_COUNT )
	{
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x < row && y >= 1 && y < col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				displayboard(mine, row, col);
				break;
			}
			else
			{
				int count = get_mine(mine, x, y);
				show[x][y] = count + '0';
				/*digui(show, row, col, count + '0');*/
				displayboard(show, row, col);
				i++;
				if (i == row * col - EASY_COUNT)
				{
					printf("玩家赢\n");
					displayboard(show,row, col);
					break;
				}
			}
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
}