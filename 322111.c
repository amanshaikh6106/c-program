#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=3;i>=1;i--)
	{
		for(k=3;k>=5-i;k--)
		{
			printf(" ");
		}
		for(j=3;j>=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}

