#include<stdio.h>
#include<string.h>
struct book
{
	char title[10];
	char writer[10];
	float price;
}b1,b2;
int main()
{
	printf("\n enter title,writer,price of book 1:");
	scanf("%s",b1.title);
	scanf("%s",b1.writer);
	scanf("%f",&b1.price);
		printf("\n enter title,writer,price of book 2:");
		scanf("%s",b2.title);
		scanf("%s",b2.writer);
		scanf("%f",&b2.price);	
	if(b1.price<b2.price)
	{
		printf("\n title b2:%s",b2.title);
		printf("\n writer b2:%s",b2.writer);
		printf("\n price b2:%f",b2.price);
	}
	else
	{
		printf("\n title of b1:%s",b1.title);
		printf("\n writer of b1:%s",b1.writer);
		printf("\n price of b1:%f",b1.price);
	}
}

