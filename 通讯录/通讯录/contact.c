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
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("����������:>\n");
		scanf("%s", cp->peo[cp->size].name);
		printf("�������Ա�:>\n");
		scanf("%s", cp->peo[cp->size].sex);
		printf("����������:>\n");
		scanf("%d", &(cp->peo[cp->size].age));
		printf("������绰:>\n");
		scanf("%s", cp->peo[cp->size].tel);
		printf("������סַ:>\n");
		scanf("%s", cp->peo[cp->size].addr);
		printf("����ɹ�\n");
		cp->size++;
	}
}

void showcontact(const struct contact* cp)
{
	if (cp->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t %-5s\t %-3s\t %-12s\t %-30s\n", "����", "�Ա�", "����", "�绰", "סַ");
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
	printf("������Ҫɾ���˵�����\n");
	scanf("%s", name);
	int pos = findcontact(p, name);
	if (-1 == pos)
	{
		printf("�������\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < p->size - 1; j++)
		{
			p->peo[j] = p->peo[j + 1];
		}
		p->size--;
		printf("ɾ���ɹ�\n");
	}
}


void seacontact(const struct contact* p)
{
	char name[NAME];
	printf("������Ҫ���ҵ�����:>\n");
	scanf("%s", name);
	int pos = findcontact(p, name);
	if (-1 == pos)
	{
		printf("��������ֲ�����\n");
	}
	else
	{
		printf("%-20s\t %-5s\t %-3s\t %-12s\t %-30s\n", "����", "�Ա�", "����", "�绰", "סַ");
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
	printf("������Ҫ�޸��˵�����\n");
	scanf("%s", name);
	int pos = findcontact(p, name);
	if (-1 == pos)
	{
		printf("��������ֲ�����\n");
	}
	else
	{
		printf("����������:>\n");
		scanf("%s", p->peo[pos].name);
		printf("�������Ա�:>\n");
		scanf("%s", p->peo[pos].sex);
		printf("����������:>\n");
		scanf("%d", &(p->peo[pos].age));
		printf("������绰:>\n");
		scanf("%s", p->peo[pos].tel);
		printf("������סַ:>\n");
		scanf("%s", p->peo[pos].addr);
		printf("����ɹ�\n");
	}
}