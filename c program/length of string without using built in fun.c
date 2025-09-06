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

