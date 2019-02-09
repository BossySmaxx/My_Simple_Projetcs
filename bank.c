#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void loading();
void delay(int num)
{
	int mil_sec=1000*num;
	clock_t time=clock();
	while(clock()<time+mil_sec);
}

struct account{
long acc_no;
char name[20];
float bal;
};

struct account al200();
struct account add_bal();
void main()
{
	struct account acc[10];
	char ans;
	int i,input,count=0;
	printf("Enter the account details below\n");
	printf("_______________________\n");
	printf(" ACCOUNT_CREATION_FORM \n");
	printf("```````````````````````\n");
	for(i=0;i<10;i++)
	{
	printf("S.NO:	%d\n",i+1);
	printf("Name:___");
	scanf("%s",acc[i].name);
	printf("ACC_NO:___");
	scanf("%ld",&acc[i].acc_no);
	printf("Enter_Balance:____");
	scanf("%f",&acc[i].bal);
	count++;
	printf("Do you want to Create more ACCOUNTS or Stop entering press 'Y/y'");
	scanf("%s",&ans);
		if(ans=='y' || ans=='Y')
		{
		break;
		}
	}
	loading(1);
	al200(acc,count);
	loading(3);
	add_bal(acc,count);
}
//Balance_Less Than $1000--------------------------------
struct account al200(struct account acc[],int count)
{
	int i;
	printf("customers less than balnce $1000\n");
	printf("_________________________________________________\n");
	printf("|ACCOUNT_NAME|ACCOUNT_NO	  |BALANCE  	|\n");
	for(i=0;i<count;i++)
	{
		if(acc[i].bal<200.0)
		printf("|%s	     |%ld	  |$%.3f	|\n",acc[i].name,acc[i].acc_no,acc[i].bal);
	}
	printf("`````````````````````````````````````````````````\n");
}
//balance_Increment_Section-------------------------
struct account add_bal(struct account acc[],int count)
{
	al200(acc,count);
	int i;
	printf("	ACCOUNT_Details\n");
	for(i=0;i<count;i++)
	{
		if(acc[i].bal>1000.0)
		{
		acc[i].bal+=100.0;
		}
	}
	printf("_________________________________________________\n");
	printf("|ACCOUNT_NAME|ACCOUNT_NO	  |BALANCE  	|\n");
	for(i=0;i<count;i++)
	{
	printf("|%s	     |%ld	  |$%.3f	|\n",acc[i].name,acc[i].acc_no,acc[i].bal);
	}
	printf("`````````````````````````````````````````````````\n");
}
//Loading animation---------------------------
void loading(int time)
{
	int i;
	for(i=0;i<=time;i++)
		{
		printf("Transaction Processing.\n");
		printf("[#     ]\n");
		delay(100);
		system("clear");
		printf("Transaction Processing..\n");
		printf("[##    ]\n");
		delay(100);
		printf("Initializing Accounts...\n");
		system("clear");
		printf("Transaction Processing...\n");
		printf("[###   ]\n");
		delay(100);
		system("clear");
		printf("Transaction Processing.\n");
		printf("[####  ]\n");
		delay(500);
		system("clear");
		printf("Initializing Accounts....\n");
		system("clear");
		printf("Transaction Processing..\n");
		printf("[##### ]\n");
		delay(150);
		system("clear");
		printf("Transaction Processing...\n");
		printf("[######]\n");
		delay(100);
		system("clear");
		}
}
