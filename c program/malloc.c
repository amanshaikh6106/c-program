#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr,size;
	printf("enter number of element:");
	scanf("%d",&n);
	ptr=(int*)malloc(n* sizeof(int));
	
	//if memory cannot be allocated
	if(ptr==NULL)
	{
		printf("error! memory not allocated");
		exit(0);
	}
	printf("enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++)
	printf("%d",*(ptr+i));
}

