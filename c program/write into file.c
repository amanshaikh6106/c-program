
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch,s1[10];
	FILE*p=fopen("abc.txt","w");
	if(p==NULL)
	{
		printf("Error!");
		exit(0);
	}
	fprintf(p,"hi");

FILE*fp=fopen("abc.txt","r");
if(fp=NULL)
{
	printf("file does not exists");
	exit(0);
}
else
{
	while(!feof(fp));
	ch=fgetc(fp);
	printf("%c\n",ch);
}
}

