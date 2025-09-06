#include<stdio.h>
int main()
{
	int i,j,k,n=4;
	for(i=1;i<=4;i++)
	{
		for(k=1;k<=4-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=n-1;i>0;i--)
	{
		for(k=1;k<=n-i;k++)
		printf(" ");
		for(j=1;j<=2*i-1;j++)
		printf("*");
			printf("\n");
	}

	
}

