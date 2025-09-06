#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,size,n=5;
	int*array;
	array=(int*)calloc(n,sizeof(int));
	if(array==NULL)
	{
		printf("allocation failed");
		exit(0);
	}
	//display array value
	printf("array element before calloc:");
	for(i=0;i<n;i++)
	{
		scanf("%d",array+i);
	}
	printf("array element after calloc:");
	for(i=0;i<n;i++)
	{
		printf("%d",array[i]);
	
	}
		free(array);
		return 0;
}

