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
		printf("����������\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳�\n");
			break;
		case 1:
			ContactAdd(&con);
			break;
		case 2:
			ContactDelete(&con);
			break;
		case 3:
			printf("������Ҫ���ҵ�����\n");
			char str[10];
			scanf("%s", str);
			int ret = ContactSearch(&con, str);
			if (ret == -1)
			{
				printf("û�ҵ�\n");
			}
			else
			{
				printf("�ҵ��ˣ������ %d\n", ret + 1);
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
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}