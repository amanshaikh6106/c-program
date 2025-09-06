#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,r,c;
	printf("enter the no.of rows:");
	scanf("%d",&r);
	printf("\n enter the no. of column:");
	scanf("%d",&c);
	int x[r][c],y[r][c],z[r][c];
	printf("\n enter a element of 1 araay:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	printf("\n enter a elements in 2 array:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&y[i][j]);
	}
	printf("\n addition of two array:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",x[i][j]+y[i][j]);
		}
		printf("\n");
	}
}

