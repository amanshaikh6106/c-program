#include<stdio.h>
int main()
{
	int a,b,result;
	char c;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	printf("enter an operator(+,-,*,/,>,<):");
	scanf(" %c",&c);
	switch(c)
	{
		case '+':result=a+b;
		printf("the add is:%d",result);
		break;
		case'-':result=a-b;
		printf("the sub is:%d",result);
		break;
		case'*':result=a*b;
		printf("the mul is:%d",result);
		break;
		case'/':result=a/b;
		printf("the div is:%d",result);
		break;
		case'>':result=a>b;
		printf("greater than:%d",result);
		break;
		case'<':result=a<b;
		printf("less than:%d",result);
		break;
		default:printf("invalid number");
		break;
	}
}

