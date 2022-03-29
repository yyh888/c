#pragma once
#include<stdio.h>
#include<string.h>




#define MAX 1000
#define NAME 20
#define SEX 5
#define TEL 12
#define ADDR 30



void Initcontact(struct contact* p);
void Addcontact(struct contact* cp);
void showcontact(const struct contact* cp);
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
	struct people peo[MAX];
	int size;
};


enum number
{
	exit,
    add,
	del,
	search,
	modify,
	show,
	sort,
};

