#include<stdio.h>
int main()
{
	char name[10];
	printf("enter first & last name:");
	gets(name);
	int salary;
	printf("enter a salary:");
	scanf("%d",&salary);
	long long int number;
	printf("enter a mobile number:");
	scanf("%lld",&number);
	printf("name:%s\n",name);
	printf("salary:%d\n",salary);
	printf("number:%lld\n",number);
}

