#include<stdio.h>
int main()
{
	int j,i,r;
	printf("enter the no. of rows:");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

