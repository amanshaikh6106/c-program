#include<stdio.h>
int main()
{
	int i,vcount=0,ccount=0;
	char str[10];
	printf("enter a string:");
	gets(str);
	strlwr(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			vcount++;
		}
		else
		{
			ccount++;
		}
	}
		printf("%d\n",vcount);
		printf("%d",ccount);
}

