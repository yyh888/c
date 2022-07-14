#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>




//�˵���Ϣ
typedef struct PeoInfo
{
	char name[10];//����
	int age;//����
	char sex[6];//�Ա�
	char tel[13];//�绰
	char addr[20];//��ַ
}PeoInfo;


//ͨѶ¼��Ϣ
typedef struct Contact
{
	PeoInfo* people;
	//��¼����
	int size;
	//��¼����
	int capacity;
}Contact;


void ContactInit(Contact* p);//��ʼ��
void ContactAdd(Contact* p);//���
void ContactShow(Contact* p);//չʾ
int ContactSearch(Contact* p, const char* str);//����
void ContactDelete(Contact* p);//ɾ��
void ContactModify(Contact* p);//�޸�
void ContactSort_by_name(Contact* p);//����������