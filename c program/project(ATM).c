#include<stdio.h>
int main()
{
	float balance=500,amount;
	int choice;
	do{
		printf("===Welcome to ATM===\n");
		printf("===ATM menu===\n");
    	printf("1.check balance\n");  
		printf("2.deposit money\n");
		printf("3.withdraw money\n");
    	printf("4.exit\n");
    	
    	printf("enter your choice:");
    	scanf("%d",&choice);
    	
    	switch(choice){
    		case 1:printf("your current balance:%f\n",balance);
    		break;
    		case 2:printf("enter amount to deposite:");
    		scanf("%f",&amount);
    		if(amount>0)
    		{
    			balance+=amount;
    			printf("successfully deposited\n");
    			printf("new balance:%f\n",balance);
			}
			else
			{
			printf("invalid deposite amount:\n");
			}
			break;
			case 3:printf("enter amount to withdraw:");
			scanf("%f",&amount);
			if(amount>0&&amount<=balance)
			{
				balance-=amount;
				printf("withdraw successfully\n");
				printf("new balance:%f\n",balance);
			}
			else{
				printf("insufficient balance!");
			
			printf("invalid withdrawal amount\n");
		}
		break;
		case 4:printf("Thank you for using ATM");
		break;
		default:printf("invalid choice,please try again");
	}}
	while(choice!=4);
	return 0;
}

