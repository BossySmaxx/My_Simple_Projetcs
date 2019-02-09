#include<time.h>
#include<stdio.h>
#include<stdlib.h>
void delay(int sec)
{
        int mil_sec=1000*sec,i;
        clock_t time=clock();
        while(clock()<time+mil_sec);
}

struct student all_stu();
struct student age14();
struct student even_rollno();
struct student search_rollno();
struct student all_stu();
struct student fill_rec();

struct student
{
int rollno;
char name[10];
int age;
char address[20];
};

void main()
{
	struct student stu[5];
	int i,count,input;
	char ans;

	system("clear");
        printf("    Loading.\n");
        printf("[|                   ]\n");
        delay(100);

system("clear");
        printf("    Loading..\n");
        printf("[||                  ]\n");
        delay(100);
system("clear");
        printf("    Loading...\n");
        printf("[|||                 ]\n");
        delay(100);
system("clear");
        printf("    Loading.....\n");
        printf("[||||                ]\n");
        delay(200);
system("clear");
        printf("    Loading.\n");
        printf("[|||||               ]\n");
        delay(100);
system("clear");
        printf("    Loading..\n");
        printf("[||||||              ]\n");
        delay(100);
system("clear");
        printf("    Loading...\n");
        printf("[|||||||             ]\n");
        delay(100);
system("clear");
        printf("    Loading....\n");
        printf("[||||||||            ]\n");
        delay(100);
system("clear");
        printf("    Loading.....\n");
        printf("[|||||||||           ]\n");
        delay(100);
system("clear");
        printf("    Loading......\n");
        printf("[||||||||||          ]\n");
        delay(100);
system("clear");
        printf("    Loading.......\n");
        printf("[|||||||||||         ]\n");
        delay(150);
system("clear");
        printf("    Loading........\n");
        printf("[||||||||||||        ]\n");
        delay(100);
system("clear");
        printf("    Loading.........\n");
        printf("[|||||||||||||       ]\n");
        delay(100);
system("clear");
        printf("    Loading..........\n");
        printf("[||||||||||||||      ]\n");
        delay(100);
system("clear");
        printf("    Loading.\n");
        printf("[|||||||||||||||     ]\n");
        delay(100);
system("clear");
        printf("    Loading..\n");
        printf("[||||||||||||||||    ]\n");
        delay(200);
system("clear");
        printf("    Loading...\n");
        printf("[|||||||||||||||||   ]\n");
        delay(300);
system("clear");
        printf("    Loading....\n");
        printf("[||||||||||||||||||  ]\n");
        delay(1000);
system("clear");
        printf("    Loading.....\n");
        printf("[||||||||||||||||||| ]\n");
        delay(100);
system("clear");
	printf("    Loading Complete...\n");
        printf("[||||||||||||||||||||]\n");
        delay(300);
	system("clear");



		menu:
		system("clear");
		system("figlet StuDB");
		printf("__________________________________\n");
		printf("|+ + + + + + + + + + + + + + + + |	      _______________	\n");
		printf("|+(1).Enter new Records	       + |	      | Records:%d  |	\n",count);
		printf("|+(2).Students of AGE '14'     + |	      ===============	\n");
		printf("|+(3).Students with Even Rollno+ |\n");
		printf("|+(4).Search students by Rollno+ |\n");
		printf("|+(5).Exit	   	       + |\n");
		printf("|+(0).Display all record       + |\n");
		printf("|+ + + + + + + + + + + + + + + + |\n");
		printf("|================================|\n");
		printf("root@BossySmaxx:~/");
		scanf("%d",&input);
	if(input==1)
	{
		for(i=0;i<=5;i++)
		{
		printf("Enter the details for Student-%d\n",i+1);
		printf("Roll-no:__");
		scanf("%d",&stu[i].rollno);
		printf("Name:____");
		scanf("%s",stu[i].name);
		printf("Age:__");
		scanf("%d",&stu[i].age);
		printf("Address:_____");
		scanf("%s",stu[i].address);
		printf("Display Result press 'y/Y' or any key to continue___");
		scanf("%s",&ans);
		count++;
			if(ans=='y')
			{
			break;
			}
		}
		goto menu;
	}

	if(input>5)
	{
	//delay(200);
	printf("Invalid input..Please Enter the option above....\n");
	delay(3000);
	goto menu;
	}

	if(input==2)
	{
	age14(stu,count);
	}

	if(input==3)
	{
	even_rollno(stu,count);
	}

	if(input==4)
	{
	search_rollno(stu,count);
	}

	if(input==0)
	{
	all_stu(stu,count);
	}

	if(input==5)
	{
	printf("zoo!zoo! see ya' soon\n");
	exit(0);
	}
}
//srudents with the AGE 14
struct student age14(struct student stu[],int count)
{
	int i;
	printf("Students with AGE 14\n");
	for(i=0;i<count;i++)
	{
		if(stu[i].age==14)
		{
		printf("|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|\n");
		printf("|student_no  :  %d    	        |\n",i+1);
		printf("|Rollno      :  %d	        |\n",stu[i].rollno);
		printf("|Name        :  %s	        |\n",stu[i].name);
		printf("|Age         :  %d        	|\n",stu[i].age);
		printf("|Address     :  %s	|\n",stu[i].address);
		printf("|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|\n\n");
		}
	}
}

//Students with EVEN roll no
struct student even_rollno(struct student stu[],int count)
{
	int i;
		printf("Students with Even Rollno\n");
	for(i=0;i<count;i++)
	{
		if(stu[i].rollno%2==0)
		{
		printf("|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|\n");
		printf("|student_no  :  %d    	        |\n",i+1);
		printf("|Rollno      :  %d	        |\n",stu[i].rollno);
		printf("|Name        :  %s	        |\n",stu[i].name);
		printf("|Age         :  %d        	|\n",stu[i].age);
		printf("|Address     :  %s	|\n",stu[i].address);
		printf("|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|\n\n");
		}
	}
}

//Search sttudents by Roll No
struct student search_rollno(struct student stu[],int count)
{
	int i,input_rollno,j;
	char ans;
	printf("Search Students by Roll-no\n");
	
	for(i=0;i<100;i++)
	{
	printf("Enter Rollno here\n");
	scanf("%d",&input_rollno);
		for(j=0;j<10;j++)
		{
			if(input_rollno==stu[i].rollno)
			{
			printf("|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|\n");
			printf("|student_no  :  %d    	        |\n",j+1);
			printf("|Rollno      :  %d	        |\n",stu[j].rollno);
			printf("|Name        :  %s	        |\n",stu[j].name);
			printf("|Age         :  %d        	|\n",stu[j].age);
			printf("|Address     :  %s	|\n",stu[j].address);
			printf("|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|\n\n");
				break;
			}
		}
	printf("Do you want to stop searching type 'y/Y' or anykey to continue\n");
	scanf("%s",&ans);
			if(ans=='y')
			{
			break;
			}

	}
}

struct student all_stu(struct student stu[],int count)
{
	int j;
	printf("	All Students\n");
	for(j=0;j<count;j++)
	{
	printf("|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|\n");
	printf("|student_no  :  %d    	        |\n",j+1);
	printf("|Rollno      :  %d	        |\n",stu[j].rollno);
	printf("|Name        :  %s	        |\n",stu[j].name);
	printf("|Age         :  %d        	|\n",stu[j].age);
	printf("|Address     :  %s	|\n",stu[j].address);
	printf("|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|=|\n\n");
	}
}
