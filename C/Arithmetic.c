//Amstrong no.
#include<stdio.h>
int main()
{
	int i=153,n1=i,sum=0,rem=0;
	while(i>0)
	{
		rem=i%10;
		sum=sum+rem*rem*rem;
		i=i/10;
	}
	if(n1==sum)
	printf("amstrong number");

		else
		printf("it is not an amstrong no.");
	
}


//Alpa,dig,sym
#include<stdio.h>
int main()
{
	char c;
	printf("enter any character");
	scanf("%c",&c);
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	{
		printf("the character is alphabet");
	}
	else if(c>='0'&&c<='9')
	{
		printf("the character is digit");
	}
	else
	{
		printf("the character is symbol");
	}
}


//count no. of vowels
#include<stdio.h>
int main()
{
	int i,vcount=0,ccount=0;
	char str[10];
	printf("enter a string:");
	gets(str);
	strlwr(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			vcount++;
		}
		else
		{
			ccount++;
		}
	}
		printf("%d\n",vcount);
		printf("%d",ccount);
}


//count no. of alpa,dig,sym
#include<stdio.h>
#include<string.h>
int main()
{
	int i,digit=0,alpabet=0,symbol=0;
	char str[10];
	printf("enter a string:");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
		{
			alpabet++;
		}
		else if (str[i]>='0'&&str[i]<='9')
		{
			digit++;
		}
		else
		{
			symbol++;
		}
	}
		printf("%d\n",alpabet);
			printf("%d\n",digit);
				printf("%d\n",symbol);
}


//All
#include<stdio.h>
int main()
{
	int a,b,c;
	a=1;
	b=6;
	c=a+b;
	printf("add=%d\n",c);
	c=a-b;
	printf("sub=%d\n",c);
	c=a*b;
	printf("mul=%d\n",c);
	c=a/b;
	printf("div=%d\n",c);
}