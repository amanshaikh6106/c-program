#include<stdio.h>
#include<string.h>
void multi(int a,int b)
{
		printf("the product of %d and %d is %d\n",a,b,a*b);
}
int main()
{
	int num1,num2,product;
	printf("enter two no.:");
	scanf("%d%d",&num1,&num2);
	multi(num1,num2);
	return 0;
}
