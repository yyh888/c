#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct S
{
	int n;
	float source;
	char ch[10];
};



int main()
{
	struct S s = {10, 3.14f, "bit"};
	struct S tmp = { 0 };
	//把格式化的数据转成字符串放入buf；
	char buf[1024] = { 0 };
	sprintf(buf, "%d %f %s", s.n, s.source, s.ch);
	//printf("%s\n", buf);
	sscanf(buf, "%d %f %s", &(s.n), &(s.source), &(s.ch));
	printf("%d %f %s", s.n, s.source, s.ch);
	return 0;
}