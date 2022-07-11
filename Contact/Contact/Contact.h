#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

#define MAX 1000


//�˵���Ϣ
typedef struct PeoInfo
{
	char name[10];
	int age;
	char sex[6];
	char tel[13];
	char addr[20];
}PeoInfo;


//ͨѶ¼��Ϣ
typedef struct Contact
{
	PeoInfo people[MAX];
	//��¼����
	int size;
}Contact;


void ContactInit(Contact* p);
void ContactAdd(Contact* p);
void ContactShow(Contact* p);
int ContactSearch(Contact* p, const char* str);
void ContactDelete(Contact* p);
void ContactModify(Contact* p);
void ContactSort_by_name(Contact* p);