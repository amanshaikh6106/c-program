#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s1,s2,s3,s4,s5;
	FILE*p=fopen("array.txt","w");
	printf("enter 5 name:");
	scanf("%c%c%c%c%c",&s1,&s2,&s3,&s4,&s5);
	fprintf(p,"%c%c%c%c%c",s1,s2,s3,s4,s5);
}

