#include"Contact.h"

void ContactInit(Contact* p)
{
	assert(p);
	PeoInfo* tmp = (PeoInfo*)malloc(sizeof(PeoInfo) * 4);
	if (tmp == NULL)
	{
		printf("%s", strerror(errno));
		exit(-1);
	}
	p->people = tmp;
	p->capacity = 4;
	p->size = 0;
}


int ContactSearch(Contact* p, const char* str)
{
	assert(p && str);
	for (int i = 0; i < p->size; i++)
	{
		int ret = strcmp(p->people[i].name, str);
		if (ret == 0)
		{
			return i;
		}
	}
	return -1;
}



void ContactAdd(Contact* p)
{
	assert(p);
	//满就扩容
	if (p->size == p->capacity)
	{
		PeoInfo* tmp = (PeoInfo*)realloc(p->people, sizeof(PeoInfo) * 4);
		if (tmp == NULL)
		{
			printf("%s", strerror(errno));
			exit(-1);
		}
		p->people = tmp;
		p->capacity += 4;
		printf("扩容成功\n");
	}
	printf("请输入姓名\n");
	scanf("%s", p->people[p->size].name);
	printf("请输入年龄\n");
	scanf("%d", &(p->people[p->size].age));//整形要取地址
	printf("请输入性别\n");
	scanf("%s", p->people[p->size].sex);
	printf("请输入电话\n");
	scanf("%s", p->people[p->size].tel);
	printf("请输入住址\n");
	scanf("%s", p->people[p->size].addr);
	p->size++;
	printf("增加成功\n");
}

void ContactShow(Contact* p)
{
	assert(p);
	if (p->size == 0)
	{
		printf("通讯录为空\n");
	}
	printf("%s\t%5s\t%3s\t%2s\t%13s\t%10s\n", "序号", "姓名", "年龄", "性别", "电话", "地址");
	for (int i = 0; i < p->size; i++)
	{
		printf("%d\t", i + 1);
		printf("%5s\t%3d\t%2s\t%13s\t%10s\n", p->people[i].name, 
			p->people[i].age, 
			p->people[i].sex, 
			p->people[i].tel, 
			p->people[i].addr);
	}
}



void ContactDelete(Contact* p)
{
	assert(p);
	if (p->size == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	printf("请输入要删除的姓名:\n");
	char str[10];
	scanf("%s", str);
	int ret = ContactSearch(p, str);
	if (ret == -1)
	{
		printf("没找到\n");
	}
	else
	{
		//注意不能越界
		for (int i = ret; i < p->size - 1; i++)
		{
			p->people[i] = p->people[i + 1];
		}
		p->size--;
		printf("删除成功\n");
	}
}


void ContactModify(Contact* p)
{
	assert(p);
	printf("请输入要要修改的序号:\n");
	int pos = 0;
	scanf("%d", &pos);
	if (pos > p->size)
	{
		printf("没找到\n");
	}
	else
	{
		printf("请输入姓名\n");
		scanf("%s", p->people[pos - 1].name);
		printf("请输入年龄\n");
		scanf("%d", &(p->people[pos - 1].age));//整形要取地址
		printf("请输入性别\n");
		scanf("%s", p->people[pos - 1].sex);
		printf("请输入电话\n");
		scanf("%s", p->people[pos - 1].tel);
		printf("请输入住址\n");
		scanf("%s", p->people[pos - 1].addr);
		printf("修改成功\n");
	}
}





void _ContactSort_by_name(Contact* p, int begin, int end)
{
	if (begin >= end)
	{
		return;
	}
	PeoInfo tmp = p->people[begin];
	int left = begin;
	int right = end;
	while (left < right)
	{
		//右找小
		while (left < right && strcmp(p->people[right].name, tmp.name) >= 0)
		{
			right--;
		}
		p->people[left] = p->people[right];
		//左找大
		while (left < right && strcmp(p->people[left].name, tmp.name) <= 0)
		{
			left++;
		}
		p->people[right] = p->people[left];
	}
	p->people[left] = tmp;
	_ContactSort_by_name(p, begin, left - 1);
	_ContactSort_by_name(p, left, end);
}


void ContactSort_by_name(Contact* p)
{
	assert(p);
	_ContactSort_by_name(p, 0, p->size - 1);
	printf("排序完成\n");
}