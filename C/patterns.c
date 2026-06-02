//10 no. from user
#include<stdio.h>
int main()
{
	int i;
	printf("enter 10 no.");
	scanf("%d%d%d%d%d%d%d%d%d%d",&i,&i,&i,&i,&i,&i,&i,&i,&i,&i);
	for(i=0;i<=10;i++)
	{
		if(i<0)
		{
			break;
		}
	}
}


//1 to 100
#include<stdio.h>
int main()
{
	int i=1;
	while(i<=100)
	{
		printf("\n%d",i);
		i++;
	}
}


//1111222334 pattern
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=4;i++)
	{
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=4;j>=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}


//111223 pattern
#include<stdio.h>
int main()
{
	int j,i;
	for(i=1;i<=3;i++)
	{
		for(j=3;j>=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}


//12345678910 pattern
#include<stdio.h>
int main()
{
	int i,j,n=0;
	for (i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			n++;
			printf("%d",n);
		}
		printf("\n");
	}
}


//1 to 10
#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(i==5)
		{
			continue;
		}
		printf("%d\n",i);
	}
}


//322111 pattern
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


//333221
#include<stdio.h>
int main()
{
	int j,i;
	for(i=3;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}


//ABBCCC pattern
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
			
		}
		ch++;
		printf("\n");
	}
}


//AbCdEf pattern
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
