//array of pointer
#include<stdio.h>
int main()
{
	int i;
	int arr[3]={1,2,3};
	int*ptr[3]={&arr[0],&arr[1],&arr[2]};
	
	printf("%p",&arr[0]);
	printf("array values using pointer to array:\n");  
	
	for(i=0;i<3;i++)
	{
		printf("%d\n",(*ptr)[i]);
		printf("%p\n",ptr[i]);
	}
	printf("\n");
return 0;
}

