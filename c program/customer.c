#include<stdio.h>
#include<string.h>
struct customer
{
	int ID;
	char name[10];
	long long int mobileno;
	char address[10];
}cus;
int main()
{
	printf("\n enter ID,name,mob.no.,address:");
	scanf("%d",&cus.ID);
	scanf("%s",cus.name);
	scanf("%lld",&cus.mobileno);
	scanf("%s",cus.address);
	printf("\n ID is:%d",cus.ID);
	printf("\n name is:%s",cus.name);
	printf("\n mob_no is:%lld",cus.mobileno);
	printf("\n address is:%s",cus.address);
		printf("\n\t%s",strupr(cus.name));
	
}

