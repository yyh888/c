#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>




//人的信息
typedef struct PeoInfo
{
	char name[10];//姓名
	int age;//年龄
	char sex[6];//性别
	char tel[13];//电话
	char addr[20];//地址
}PeoInfo;


//通讯录信息
typedef struct Contact
{
	PeoInfo* people;
	//记录人数
	int size;
	//记录容量
	int capacity;
}Contact;


void ContactInit(Contact* p);//初始化
void ContactAdd(Contact* p);//添加
void ContactShow(Contact* p);//展示
int ContactSearch(Contact* p, const char* str);//查找
void ContactDelete(Contact* p);//删除
void ContactModify(Contact* p);//修改
void ContactSort_by_name(Contact* p);//用名字排序