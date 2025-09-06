#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s1[10];
	FILE*p=fopen("abc.txt","w");
	printf("enter a name:");
	scanf("%s",s1);
	fprintf(p,"%d",s1);
}

