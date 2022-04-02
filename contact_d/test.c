#define  _CRT_SECURE_NO_WARNINGS
#include"contact.h"

void menu()
{
	printf("****************************\n");
	printf("***1.add        2.del    ***\n");
	printf("***3.search     4.modify ***\n");
	printf("***5.show       6.sort   ***\n");
	printf("***0.exit                ***\n");
	printf("****************************\n");
}


int main()
{
	int input = 0;
	struct contact con;
	Initcontact(&con);
	do
	{
		menu();
		printf("请输入数字\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case add:
			Addcontact(&con);
			break;
		case del:
			delcontact(&con);
			break;
		case search:
			seacontact(&con);
			break;
		case modify:
			modcontact(&con);
			break;
		case show:
			showcontact(&con);
			break;
		case sort:
			sortcontact(&con);
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}