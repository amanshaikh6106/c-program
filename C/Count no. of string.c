#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int i=0,word=1;
	printf("enter a string:");
	gets(str);
	while(str[i]!='\0')
	{
		if (str[i]==' ')
		{
			word++;
		}
		i++;
	}
	printf("no of word count=%d",word);
}


//count length of string without using build in function
#include<stdio.h>
#include<string.h>
int main()
{
	char s[10]="hello";
	int i=0;
	while(s[i]!='\0')
	{
		i++;
	}
	printf("%d",i);
}
