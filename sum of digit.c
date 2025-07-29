#include<stdio.h>
int main()
{
	int i=257,sum=0,rem=0;
	while(i>0)
	{
		rem=i%10;
		sum=sum+rem;
		i=i/10;
	}
	printf("sum of digit will be=%d",sum);
}

