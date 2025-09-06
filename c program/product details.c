#include<stdio.h>
struct product
{
	char name[20];
	float price;
}s[3];
int main()
{
	struct product;
	int i, sum=0;
	printf("enter detail of 3 product:");
	for(i=0;i<3;i++)
	{
		printf("\nenter details of product:%d)",i+1);
		scanf("%s",s[i].name);
		scanf("%f",&s[i].price);
			sum+=s[i].price;
	}
printf("total sum is:%d",sum);
}

