#include<stdio.h>
int main()
{
	int i,j;
	char ch='A';
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %c",ch);
			{
				if(ch>='A'&& ch<='Z')
				{
					ch=ch+32;
				}
				else if(ch>='a'&& ch<='z')
				{
					ch=ch-32;
				}
				ch++;
			}
		}
	}
}

