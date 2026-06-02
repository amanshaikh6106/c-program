#include<stdio.h>
int main()
{
	char s1[10],s2[10];
	printf("enter a string 1:");
	gets(s1);
	printf("enter a string 2:");
	gets(s2);
	printf("length of string 1:%d\n",strlen(s1));
	printf("length of string 2:%d\n",strlen(s2));
	int l1=strlen(s1);
	if(l1<10)
	{
		printf("%s",strrev(s1));
	}
	else
	{
		printf("%s",strrev(s2));
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
