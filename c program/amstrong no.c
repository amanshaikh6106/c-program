#include<stdio.h>
int main()
{
	int i=153,n1=i,sum=0,rem=0;
	while(i>0)
	{
		rem=i%10;
		sum=sum+rem*rem*rem;
		i=i/10;
	}
	if(n1==sum)
	printf("amstrong number");

		else
		printf("it is not an amstrong no.");
	
}

