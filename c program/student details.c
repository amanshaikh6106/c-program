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

