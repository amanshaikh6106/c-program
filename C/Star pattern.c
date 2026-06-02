//diamond
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


//left side
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


//pyramid
#include<stdio.h>
int main()
{
	int i,j,k;
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
}


//right side
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


