#include<stdio.h>
int main()
{
	int i,k,j;
	for(i=1;i<=3;i++)
	{
		for(k=1;k<=3-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
