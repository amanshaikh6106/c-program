#include<stdio.h>
int main()
{
	int i=1,sum=0;
	while(i<=20)
	{
		sum+=i;
		i++;
	}
	printf("sum=%d",sum);
}


//even no. upto 100
#include<stdio.h>
int main()
{
	int i=2;
	while(i<=100)
	{
		printf("\n%d",i);
		i=i+2;
	}
}


//find cube by do while
#include<stdio.h>
int main()
{
	int n;
	char ch;
	do
	{
		printf("enter a no.");
		scanf("%d",&n);
		printf("cube of%d=%d\n",n,n*n*n);
		printf("do you want to continue");
		scanf(" %c",&ch);
	}
	while(ch=='Y'||ch=='y');
}


