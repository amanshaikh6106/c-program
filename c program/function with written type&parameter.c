#include<stdio.h>
void f1(int num,int num1)
{
	int i;
	for(i=num;i<=num1;i++)
	{
		printf("%d\t",i);
	}
}
int main()
{
	int x,y;
	printf("enter the starting&ending no.:");
	scanf("%d %d",&x,&y);
	f1(x,y);
}

