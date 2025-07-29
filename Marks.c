#include<stdio.h>
int main()
{
	int marks;
	printf("Enter a marks");
	scanf("%d",&marks);
	if(marks>=90)
	{
		printf("Grade A");
	}
	else if (marks>=80&&marks<90)
	{
		printf("Grade B");
	}
	else if(marks>=75&&marks<80)
	{
		printf("Grade C");
	}
	else if(marks>=50&&marks<75)
	{
		printf("Grade D");
	}
	else if ("marks>=35")
	{
		printf("Grade E");
	}
	else
	{
		printf("fail");
	}
}
