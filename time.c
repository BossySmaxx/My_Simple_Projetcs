#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void loading();
void delay(int sec)
{
	int mil_sec=1000*sec,i;
	clock_t time=clock();
	while(clock()<time+mil_sec);
}

void main()
{
	int i;
	for(i=100;i<=1000;i+150)
	{
	loading(i);}
	printf("\t\t\t\t\tData Processed..\n");
	printf("\t\t\t\t\t\n");
}

void loading(int i)
{
system("clear");
	printf("\n\n\n\n\n\n\t\t\t\t\t    Loading.\n");
	printf("\t\t\t\t\t[|		     ]\n");
	delay(i);

system("clear");
	printf("\n\n\n\n\n\n\n\t\t\t\t\t   Loading..\n");
	printf("\t\t\t\t\t[||		     ]\n");
	delay(i);
system("clear");
	printf("\n\n\n\n\n\n\n\t\t\t\t\t   Loading...\n");
	printf("\t\t\t\t\t[|||                 ]\n");
	delay(i);
system("clear");
	printf("\n\n\n\n\n\n\n\t\t\t\t\t  Loading.....\n");
	printf("\t\t\t\t\t[|||| 		     ]\n");
	delay(i);
system("clear");
	printf("\n\n\n\n\n\n\n\t\t\t\t\t  Loading.\n");
	printf("\t\t\t\t\t[||||| 		     ]\n");
	delay(i);
system("clear");
	printf("\n\n\n\n\n\n\n\t\t\t\t\t  Loading..\n");
	printf("\t\t\t\t\t[||||||		     ]\n");
	delay(i);
system("clear");
	printf("\n\n\n\n\n\n\n\t\t\t\t\t  Loading...\n");
	printf("\t\t\t\t\t[|||||||	     ]\n");
	delay(i);
system("clear");
	printf("\n\n\n\n\n\n\n\t\t\t\t\t  Loading....\n");
	printf("\t\t\t\t\t[|||||||| 	     ]\n");
	delay(i);
system("clear");
	printf("\n\n\n\n\n\n\n\t\t\t\t\t  Loading.....\n");
	printf("\t\t\t\t\t[|||||||||	     ]\n");
	delay(i);
system("clear");
	printf("\n\n\n\n\n\n\n\t\t\t\t\t  Loading......\n");
	printf("\t\t\t\t\t[||||||||||	     ]\n");
	delay(i);
system("clear");
	printf("\n\n\n\n\n\n\n\t\t\t\t\t  Loading.......\n");
	printf("\t\t\t\t\t[|||||||||||	     ]\n");
	delay(i);
system("clear");
	printf("\n\n\n\n\n\n\n\t\t\t\t\t  Loading........\n");
	printf("\t\t\t\t\t[||||||||||||	     ]\n");
	delay(i);
system("clear");
	printf("\n\n\n\n\n\n\n\t\t\t\t\t  Loading.........\n");
	printf("\t\t\t\t\t[|||||||||||||       ]\n");
	delay(i);
system("clear");
	printf("\n\n\n\n\n\n\n\t\t\t\t\t  Loading..........\n");
	printf("\t\t\t\t\t[||||||||||||||      ]\n");
	delay(i);
system("clear");
	printf("\n\n\n\n\n\n\n\t\t\t\t\t  Loading.\n");
	printf("\t\t\t\t\t[|||||||||||||||     ]\n");
	delay(i);
system("clear");
	printf("\n\n\n\n\n\n\n\t\t\t\t\t  Loading..\n");
	printf("\t\t\t\t\t[||||||||||||||||    ]\n");
	delay(i);
system("clear");
	printf("\n\n\n\n\n\n\n\t\t\t\t\t  Loading...\n");
	printf("\t\t\t\t\t[|||||||||||||||||   ]\n");
	delay(i);
system("clear");
	printf("\n\n\n\n\n\n\n\t\t\t\t\t  Loading....\n");
	printf("\t\t\t\t\t[||||||||||||||||||  ]\n");
	delay(i);
system("clear");
	printf("\n\n\n\n\n\n\n\t\t\t\t\t  Loading.....\n");
	printf("\t\t\t\t\t[||||||||||||||||||| ]\n");
	delay(i);
system("clear");
	printf("\n\n\n\n\n\n\n\t\t\t\t\t Gaand mat Marao..\n");
	printf("\t\t\t\t\t[||||||||||||||||||||]\n");
	delay(i);
}
