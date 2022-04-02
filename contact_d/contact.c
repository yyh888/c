#define  _CRT_SECURE_NO_WARNINGS
#include"contact.h"



void Initcontact(struct contact* p)
{
	p->peo = (struct people*)malloc(START*sizeof(struct people));
	if (p->peo == NULL)
	{
		return;
	}
	else
	{
		p->size = 0;
		p->size_a = START;
	}
}

void CheckCapacity(struct contact* p)
{
	if (p->size == p->size_a)
	{
		//增容
		struct contact* ps = (struct contact*)realloc(p->peo, (p->size_a + 2) * sizeof(struct people));
		if (ps != NULL)
		{
			p->peo = ps;
			p->size_a += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}

void Addcontact(struct contact* p)
{
	//如果满了就+2个容量
	//没满就啥也不干
	CheckCapacity(p);
	/*if (p->size_a = p->size)
	{
		struct contact* cp = realloc(p->peo, 2 * sizeof(struct contact));
	}*/
		printf("请输入姓名:>\n");
		scanf("%s", p->peo[p->size].name);
		printf("请输入性别:>\n");
		scanf("%s", p->peo[p->size].sex);
		printf("请输入年龄:>\n");
		scanf("%d", &(p->peo[p->size].age));
		printf("请输入电话:>\n");
		scanf("%s", p->peo[p->size].tel);
		printf("请输入住址:>\n");
		scanf("%s", p->peo[p->size].addr);
		printf("保存成功\n");
		p->size++;
}

void showcontact(const struct contact* p)
{
	if (p->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t %-5s\t %-3s\t %-12s\t %-30s\n", "姓名", "性别", "年龄", "电话", "住址");
		for (i = 0; i < p->size; i++)
		{
			printf("%-20s\t %-5s\t %-3d\t %-12s\t %-30s\n", p->peo[i].name,
				p->peo[i].sex,
				p->peo[i].age,
				p->peo[i].tel,
				p->peo[i].addr);
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


void sortcontact(struct contact* p)
{
	int i = 0;
	for (i = 0; i < p->size; i++)
	{
		int j = 0;
		for (j = 0; j < p->size - i - 1; j++)
		{
			if (strcmp(p->peo[j].name, p->peo[j + 1].name) > 0)
			{
				struct people a = { 0 };
				a = p->peo[j];
				p->peo[j] = p->peo[j + 1];
				p->peo[j + 1] = a;
			}
		}
	}
	printf("排序完成\n");
}