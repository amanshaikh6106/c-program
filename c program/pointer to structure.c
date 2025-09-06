#include<stdio.h>
struct A
{
	int var;
};
int main()
{
	struct A a={30};
	struct A*ptr;
	ptr=&a;
	printf("%d\n",(*ptr).var);
	printf("%d\n",ptr->var);
	printf("%d\n",(&a)->var);
}

