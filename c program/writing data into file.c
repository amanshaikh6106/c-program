#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	FILE*p=fopen ("abc.txt","w");
	if(p==NULL)
	{
		printf("Error!");
		exit(0);
	}
	fprintf(p,"hello\n");
	fputc('c',p);
	fputs("\nc program",p);
	fprintf(p,"\n%d",56);
}

