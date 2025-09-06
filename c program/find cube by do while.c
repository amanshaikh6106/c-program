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

