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
		//����
		struct contact* ps = (struct contact*)realloc(p->peo, (p->size_a + 2) * sizeof(struct people));
		if (ps != NULL)
		{
			p->peo = ps;
			p->size_a += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}

void Addcontact(struct contact* p)
{
	//������˾�+2������
	//û����ɶҲ����
	CheckCapacity(p);
	/*if (p->size_a = p->size)
	{
		struct contact* cp = realloc(p->peo, 2 * sizeof(struct contact));
	}*/
		printf("����������:>\n");
		scanf("%s", p->peo[p->size].name);
		printf("�������Ա�:>\n");
		scanf("%s", p->peo[p->size].sex);
		printf("����������:>\n");
		scanf("%d", &(p->peo[p->size].age));
		printf("������绰:>\n");
		scanf("%s", p->peo[p->size].tel);
		printf("������סַ:>\n");
		scanf("%s", p->peo[p->size].addr);
		printf("����ɹ�\n");
		p->size++;
}

void showcontact(const struct contact* p)
{
	if (p->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t %-5s\t %-3s\t %-12s\t %-30s\n", "����", "�Ա�", "����", "�绰", "סַ");
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
	printf("�������\n");
}