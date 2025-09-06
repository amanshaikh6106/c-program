#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr,*ptr1;
	printf("enter no. of element:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	//if memory cannot be allocated
	if(ptr==NULL)
	{
		printf("Error! memory not allocated:");
		exit(0);
	}
	printf("\n address of previously allocated memory:%p",ptr);
	printf("\n enter element:");
	for(i=0;i<n;++i)
	{
		scanf("%d",&ptr[i]);
	}
	printf("\n element are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",ptr[i]);
	}
	printf("\n enter a updated value of n:");
	scanf("%d",&n);
	ptr1=(int*)realloc(ptr,n*sizeof(int));
	if(ptr1==NULL)
	{
		printf("memory allocation failed\n");
		exit(0);
	}
	printf("\n address of newly allocated memory:%p",ptr1);
	printf("\n enter a new element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ptr1[i]);
	}
	printf("\n new element are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",ptr1[i]);
		*(ptr1+i);
	}
	free(ptr1);
	free(ptr);
	return 0;
}

