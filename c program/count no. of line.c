#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	FILE*f1=fopen("abc.txt","r");
	int count=0;
	while(!feof(f1))
	{
		ch=fgetc(f1);
		if(ch=='\n')
		{
			count++;
		}
		printf("%c",ch);
	}
	printf("\ncount variable:%d",count);
}

