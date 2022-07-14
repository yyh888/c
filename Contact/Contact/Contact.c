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
	//��������
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
		printf("���ݳɹ�\n");
	}
	printf("����������\n");
	scanf("%s", p->people[p->size].name);
	printf("����������\n");
	scanf("%d", &(p->people[p->size].age));//����Ҫȡ��ַ
	printf("�������Ա�\n");
	scanf("%s", p->people[p->size].sex);
	printf("������绰\n");
	scanf("%s", p->people[p->size].tel);
	printf("������סַ\n");
	scanf("%s", p->people[p->size].addr);
	p->size++;
	printf("���ӳɹ�\n");
}

void ContactShow(Contact* p)
{
	assert(p);
	if (p->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	printf("%s\t%5s\t%3s\t%2s\t%13s\t%10s\n", "���", "����", "����", "�Ա�", "�绰", "��ַ");
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
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	printf("������Ҫɾ��������:\n");
	char str[10];
	scanf("%s", str);
	int ret = ContactSearch(p, str);
	if (ret == -1)
	{
		printf("û�ҵ�\n");
	}
	else
	{
		//ע�ⲻ��Խ��
		for (int i = ret; i < p->size - 1; i++)
		{
			p->people[i] = p->people[i + 1];
		}
		p->size--;
		printf("ɾ���ɹ�\n");
	}
}


void ContactModify(Contact* p)
{
	assert(p);
	printf("������ҪҪ�޸ĵ����:\n");
	int pos = 0;
	scanf("%d", &pos);
	if (pos > p->size)
	{
		printf("û�ҵ�\n");
	}
	else
	{
		printf("����������\n");
		scanf("%s", p->people[pos - 1].name);
		printf("����������\n");
		scanf("%d", &(p->people[pos - 1].age));//����Ҫȡ��ַ
		printf("�������Ա�\n");
		scanf("%s", p->people[pos - 1].sex);
		printf("������绰\n");
		scanf("%s", p->people[pos - 1].tel);
		printf("������סַ\n");
		scanf("%s", p->people[pos - 1].addr);
		printf("�޸ĳɹ�\n");
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
		//����С
		while (left < right && strcmp(p->people[right].name, tmp.name) >= 0)
		{
			right--;
		}
		p->people[left] = p->people[right];
		//���Ҵ�
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
	printf("�������\n");
}