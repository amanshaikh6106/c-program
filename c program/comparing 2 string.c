#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[10];
	printf("enter a string 1:");
	gets(s1);
	printf("enter a string 2:");
	gets(s2);
	int l=strcmp(s1,s2);
	if(l==0)
	{
		printf("equal");
	}
	else
	{
		printf("not equal");
	}
}

