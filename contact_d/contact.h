#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>



//#define MAX 1000
#define NAME 20
#define SEX 5
#define TEL 12
#define ADDR 30
#define START 3


void Initcontact(struct contact* p);
void Addcontact(struct contact* p);
void showcontact(const struct contact* p);
void delcontact(struct contact* p);
void seacontact(const struct contact* p);
void modcontact(struct contact* p);
void sortcontact(struct contact* p);

struct people
{
	char name[NAME];
	char sex[SEX];
	int age;
	char tel[TEL];
	char addr[ADDR];
};

struct contact
{
	struct people* peo;//存放三个信息
	int size;//当前已有元素个数
	int size_a;//记录容量
};


enum number
{
	Exit,
    add,
	del,
	search,
	modify,
	show,
	sort,
};

