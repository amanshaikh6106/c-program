#include<stdio.h>
#include<string.h>
int main()
{
	int i,digit=0,alpabet=0,symbol=0;
	char str[10];
	printf("enter a string:");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
		{
			alpabet++;
		}
		else if (str[i]>='0'&&str[i]<='9')
		{
			digit++;
		}
		else
		{
			symbol++;
		}
	}
		printf("%d\n",alpabet);
			printf("%d\n",digit);
				printf("%d\n",symbol);
}

