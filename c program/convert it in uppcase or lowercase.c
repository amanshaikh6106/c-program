#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10];
	printf("enter a string:");
	gets(s1);
	int l =strlen (s1);
	if(l<5)
	{
		printf("%s",strupr(s1));
	}
	else
	{
		printf("%s",strlwr(s1));
	}
}

