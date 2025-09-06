#include<stdio.h>
int main()
{
	int a=10;
	char b='X';
	
	void*ptr=&a;
	printf("address of 'a':%p",&a);
	printf("\n void pointer points to:%p",ptr);
	
	ptr=&b;
	printf("\n address of 'b':%p",&b);
	printf("\n void pointer points to:%p",ptr);
	
	ptr=&a;
	printf("\n value of a=%d",*( int *)ptr);
	ptr=&b;
	printf("\n value of b=%c",*(char*)ptr);
}

