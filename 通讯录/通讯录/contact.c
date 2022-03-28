#define  _CRT_SECURE_NO_WARNINGS
#include"contact.h"



void Initcontact(struct contact* p)
{
	memset(p, 0, sizeof(p -> peo));
	p->size = 0;
}


void Addcontact(struct contact* cp)
{
	if (cp->size == MAX)
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入姓名:>\n");
		scanf("%s", cp->peo[cp->size].name);
		printf("请输入性别:>\n");
		scanf("%s", cp->peo[cp->size].sex);
		printf("请输入年龄:>\n");
		scanf("%d", &(cp->peo[cp->size].age));
		printf("请输入电话:>\n");
		scanf("%s", cp->peo[cp->size].tel);
		printf("请输入住址:>\n");
		scanf("%s", cp->peo[cp->size].addr);
		printf("保存成功\n");
		cp->size++;
	}
}

void showcontact(const struct contact* cp)
{
	if (cp->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t %-5s\t %-3s\t %-12s\t %-30s\n", "姓名", "性别", "年龄", "电话", "住址");
		for (i = 0; i < cp->size; i++)
		{
			printf("%-20s\t %-5s\t %-3d\t %-12s\t %-30s\n", cp->peo[i].name,
				cp->peo[i].sex,
				cp->peo[i].age,
				cp->peo[i].tel,
				cp->peo[i].addr);
		}
	}
}

static int findcontact(const struct contact* p, char name[NAME])
{
	int i = 0;
	for (i = 0; i < p->size; i++)
	{
		if (0 == strcmp(p->peo[i].name, name))
		{
			return i;
		}
	
	}
	return -1;
}


void delcontact(struct contact* p)
{
	char name[NAME];
	printf("请输入要删除人的名字\n");
	scanf("%s", name);
	int pos = findcontact(p, name);
	if (-1 == pos)
	{
		printf("输入错误\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < p->size - 1; j++)
		{
			p->peo[j] = p->peo[j + 1];
		}
		p->size--;
		printf("删除成功\n");
	}
}


void seacontact(const struct contact* p)
{
	char name[NAME];
	printf("请输入要查找的名字:>\n");
	scanf("%s", name);
	int pos = findcontact(p, name);
	if (-1 == pos)
	{
		printf("输入的名字不存在\n");
	}
	else
	{
		printf("%-20s\t %-5s\t %-3s\t %-12s\t %-30s\n", "姓名", "性别", "年龄", "电话", "住址");
		printf("%-20s\t %-5s\t %-3d\t %-12s\t %-30s\n", 
			p->peo[pos].name,
			p->peo[pos].sex,
			p->peo[pos].age,
			p->peo[pos].tel,
			p->peo[pos].addr);
	}
}



void modcontact(struct contact* p)
{
	char name[NAME];
	printf("请输入要修改人的名字\n");
	scanf("%s", name);
	int pos = findcontact(p, name);
	if (-1 == pos)
	{
		printf("输入的名字不存在\n");
	}
	else
	{
		printf("请输入姓名:>\n");
		scanf("%s", p->peo[pos].name);
		printf("请输入性别:>\n");
		scanf("%s", p->peo[pos].sex);
		printf("请输入年龄:>\n");
		scanf("%d", &(p->peo[pos].age));
		printf("请输入电话:>\n");
		scanf("%s", p->peo[pos].tel);
		printf("请输入住址:>\n");
		scanf("%s", p->peo[pos].addr);
		printf("保存成功\n");
	}
}