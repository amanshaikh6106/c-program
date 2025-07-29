#include<stdio.h>
int main()
{
	char c;
	printf("enter any character");
	scanf("%c",&c);
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	{
		printf("the character is alphabet");
	}
	else if(c>='0'&&c<='9')
	{
		printf("the character is digit");
	}
	else
	{
		printf("the character is symbol");
	}
}

