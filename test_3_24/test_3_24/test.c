#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//							
//
//						{
//							if (a * b * c * d * e == 120)
//								printf("a = %d ,b = %d ,c = %d ,d = %d ,e = %d", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//void move()
//{
//
//}


//void left_move(char ch[], int k)
//{
//	int len = (int)strlen(ch);
//	int left = 0;
//	int right = len - 1;
//	int i = 0;
//	for (i = k; i > 0; i--)
//	{
//		int j = 0;
//		char tmp = ch[left];
//		for (j = 0; j < right; j++)
//		{
//			ch[left + j] = ch[left + 1 + j];
//		}
//		ch[right] = tmp;
//	}
//	printf("%s\n", ch);
//}

void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}



void left_move(char* ch,int k)
{
	assert(ch != NULL);
	int len = (int)strlen(ch);
	assert(k <= len);
	reverse(ch, ch + k - 1);//左边翻转
	reverse(ch + k, ch + len - 1);//右边翻转
	reverse(ch, ch + len - 1);//整体翻转
   
}

int is_left_move(char* ch1, char* ch2)
{
	int len =(int)strlen(ch1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		left_move(ch1, 1);
		/*if (ch1 == ch2)
		{
			return 1;
			break;
		}*/
		int ret = strcmp(ch1, ch2);
		if (ret == 0)
			return 1;
	}
	return 0;
}


int main()
{
	char ch1[] = "abcdef";
	char ch2[] = "defabc";
	int k = 0;
	int len = is_left_move(ch1, ch2);
	if (len == 1)
	{
		printf("是");
	}
	else
	{
		printf("否");
	}
	return 0;
}




//int main()
//{
//	char ch[] = "abcdef";
//	int k = 6;
//	left_move(ch, k);
//	return 0;
//}


//int main()
//{
//	char* ch = "abcdef";
//	int tmp = strlen(ch);
//	printf("%d\n", tmp);
//	return 0;
//}