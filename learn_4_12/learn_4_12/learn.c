#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define SETBIT(x, n) (x|=(1 << (n - 1)))

void ShowBits(int x)
{
	int num = sizeof(x) * 8 - 1;
	while (num--)
	{
		if (x & (1 << num))
		{
			printf("1 ");
		}

		else
		{
			printf("0 ");
		}
	}
}

int main()
{
	int x = 0;
	SETBIT(x, 5);
	SETBIT(x, 7);
	SETBIT(x, 30);
	SETBIT(x, 28);
	SETBIT(x, 12);
	SETBIT(x, 5);
	ShowBits(x);
	return 0;
}