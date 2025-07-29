#include<stdio.h>
int main()
{
	int num;
	printf("enter a value of num");
	scanf("%d",&num);
	if(num%3==0&&num%5==0)
	{
		printf("the number is divisible by both 3&5");
	}
	else if(num%3==0)
	{
		printf("the number is divisible by 3");
	}
	else if(num%5==0)
	{
		printf("the number is divisible by 5");
	}
	else
	{
		printf("the given number is not divisible by 3&5");
	}
}

