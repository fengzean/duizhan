#include<stdio.h>

int test(int *p)
{
	int ret = 0;
	*p = 10;
	return ret;
}


int main()
{
	int a = 10;
	test(&a);
	printf("a=%d\n",a);
}