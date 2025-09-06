#include<stdio.h>
int main()
{
	int a=4;
	int *p=&a;
	printf("%d\n",a);
	printf("%p\n",p);
	printf("%d\n",*p);
	printf("%p\n",&p);
}

