#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fptr;
	char str[10],ch;
	fptr=fopen("abc.txt","r");
	if(fptr==NULL)
	{
		printf("Error can not find file");
		exit(1);
	}
	FILE*fptr2=fopen("example.txt","w");
	if(fptr2==NULL)
	{
		printf("Error");
		exit(0);
	}
	while(!feof(fptr2))
	{
		ch=fgetc(fptr);
		printf("%c",ch);
	}
	fclose(fptr);
	fclose(fptr2);
}

