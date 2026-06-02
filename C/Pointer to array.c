#include<stdio.h>
int main()
{
	int arr[]={10,20,30,40,50};
	int*ptr=arr;
	printf("initial value pointed by ptr:%d\n",*ptr);
	
	ptr++;
	printf("value afer ptr+1:%d\n",*ptr);
	
	ptr=ptr+2;
	printf("value after ptr+2:%d\n",*ptr);
	
	ptr--;
	printf("value after ptr-1:%d\n",*ptr);
	
	int*ptr1=arr;
	int*ptr2=ptr;
	printf("diff between ptr1 and ptr2:%d\n",ptr2-ptr1);
}

