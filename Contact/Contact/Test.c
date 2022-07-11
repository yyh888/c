#include"Contact.h"

void menu()
{
	printf("******************************\n");
	printf("****  1.add      2.del    ****\n");
	printf("****  3.search   4.modify ****\n");
	printf("****  5.show     6.sort   ****\n");
	printf("****  0.exit              ****\n");
	printf("******************************\n");
}


int main()
{
	int input = 0;
	Contact con;
	ContactInit(&con);
	do
	{
		menu();
		printf("请输入数字\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出\n");
			break;
		case 1:
			ContactAdd(&con);
			break;
		case 2:
			ContactDelete(&con);
			break;
		case 3:
			printf("请输入要查找的姓名\n");
			char str[10];
			scanf("%s", str);
			int ret = ContactSearch(&con, str);
			if (ret == -1)
			{
				printf("没找到\n");
			}
			else
			{
				printf("找到了，序号是 %d\n", ret + 1);
			}
			break;
		case 4:
			ContactModify(&con);
			break;
		case 5:
			ContactShow(&con);
			break;
		case 6:
			ContactSort_by_name(&con);
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}