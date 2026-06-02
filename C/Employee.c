//employee name, salary, mob. number
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


//about employee
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


//student details
#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[20];
	float marks;
}stu[3];
int main()
{
	int i;
	printf("enter a details for 3 students");
	for(i=0;i<3;i++)
	{
		printf("\n enter a details of students:%d)",i+1);
		scanf("%d",&stu[i].rollno);
		scanf("%s",stu[i].name);
		scanf("%f",&stu[i].marks);
	}
	for(i=0;i<3;i++)
	{
		printf("roll no.%d\t name:%s\t marks:%f\n",stu[i].rollno,stu[i].name,stu[i].marks);
	}
}
