#include<stdio.h>
int main()
{
	int i,n1,sum=0,avg;
	for(i=1;i<=5;i++)
	{
		printf("enter number:\n");
	scanf("%d",&n1);
		sum+=n1;
		}
		avg=sum/5;
	printf("The sum of 5 no. is=%d\n The average of 5 no. is=%d\n",sum,avg);
}

