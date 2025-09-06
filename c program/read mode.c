#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch,str[30];
	FILE *fptr;
	fptr=fopen("abc.txt","r");
	if(fptr==NULL)
	{
		printf("file does not exists");
		//exit(0);
	}
	else
	{
		while(!feof(fptr))
		{
			ch=fgetc(fptr);
			printf("%c\n",ch);
		}
		rewind(fptr);
		while(fgets(str,30,fptr)!=NULL)
		printf("%s",str);
		
		rewind(fptr);
		while(!feof(fptr))
		{
			fscanf(fptr,"%s",str);
			printf("\n%s",str);
		}
	}
	fclose(fptr);
	return 0;
}

