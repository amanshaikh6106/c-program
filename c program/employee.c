#include<stdio.h>
#include<string.h>
struct employee
{
	char position[10];
	char name[10];
	float salary;
}emp;
int main()
{
	printf("\n Enter position:");
	scanf("%s",emp.position);
	printf("\n Enter name:");
	scanf("%s",emp.name);
	printf("\n Enter salary:");
	scanf("%f",&emp.salary);
	printf("\n position is:%s",emp.position);
	printf("\n name is:%s",emp.name);
	printf("\n salary is:%f",emp.salary);
}

