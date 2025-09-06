#include<stdio.h>
void maximum(int,int);
void maximum(int x,int y)
{
	(x>y)?printf(" x is greater:%d",x):printf("y is greater:%d",y);
}
int main()
{
	int a,b;
	printf("enter two no.:");
	scanf("%d%d",&a,&b);
	maximum(a,b);
}

