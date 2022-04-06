#define  _CRT_SECURE_NO_WARNINGS
#include"test.h"
static int g_val = 100;


static void show(int x)
{
	printf("hello show()! %d\n", x);
	printf("hello g_val! %d\n", g_val);

}

void show_p()
{
	show(20);
}