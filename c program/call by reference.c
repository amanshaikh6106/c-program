#include<stdio.h>
void swap(int*,int*);
int main()
{
	int x,y;
	printf("enter a two number:");
	scanf("%d%d",&x,&y);
	printf("value of x&y before swaping:%d %d",x,y);
	printf("\n address of x,y:%p %p",&x,&y);
	swap(&x,&y);
	printf("\n value of x&y after swaping:%d %d",x,y);
	return 0;
}
void swap (int*num,int*num1)
{
	int tmp;
	tmp=*num;
    *num=*num1;
    *num1=tmp;
}

