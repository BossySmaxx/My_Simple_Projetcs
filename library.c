//Created By BossySmaxx teh Ruler of the World...
// Allrights are Reserved to DedSec.inc 
//Founded by Aniket_Chauhan & Nitish_Jamwal
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void delay(int sec)
{
        int mil_sec=1000*sec;
        clock_t time=clock();
        while(clock()<time+mil_sec);
}
struct books anim();
struct books{
char author_name[20];
char book_name[20];
long int accss_no;
char status;
};
struct books un_issue();
struct books issue();
struct books by_title();
struct books book_info();
struct books by_author();
//global var >>---
int count=0;   //|
//<<--------------
int main()
{
	struct books book[20];
	int i,ans_stat,input;
	char ans[5];
	start:
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }			| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	scanf("%d",&input);
	if(input==1)
	{
//record entering Process------------------------------------
		for(i=count;i<1000;i++)
		{
		printf("Enter Book Details Here:__\n");
		printf("Book:%d\n",i+1);
		printf("Accession_NO:___");
		scanf("%ld",&book[i].accss_no);
		printf("Book_Name:___");
		scanf("%s",book[i].book_name);
		printf("The Author Name:___");
		scanf("%s",book[i].author_name);
		printf("Book ISSUED or not? 'Y/y' if issued 'N/n' if not issued...\n");
		scanf("%s",&book[i].status);
		count++;
		printf("type 'quit' to stop entering records or Anything to continue\n");
		scanf("%s",ans);
		ans_stat=strcmp(ans,"quit");
			if(ans_stat==0)
			{
			//system("gnome-terminal -e ./studb");
			printf("\n");
			system("clear");
	        	printf("\n\n\n\n\n\n\t\t\t\t\t[10%]Saving.\n");
	        	printf("\t\t\t\t\t[|                   ]\n");
	        	delay(100);

			system("clear");
	        	printf("\n\n\n\n\n\n\n\t\t\t\t\t[17%]Saving..\n");
	        	printf("\t\t\t\t\t[||                  ]\n");
	        	delay(100);
			system("clear");
	        	printf("\n\n\n\n\n\n\n\t\t\t\t\t[28%]Saving...\n");
	        	printf("\t\t\t\t\t[|||                 ]\n");
	        	delay(100);
			system("clear");
	        	printf("\n\n\n\n\n\n\n\t\t\t\t\t[30%]Saving.....\n");
	        	printf("\t\t\t\t\t[||||                      ]\n");
	        	delay(100);
			system("clear");
	        	printf("\n\n\n\n\n\n\n\t\t\t\t\t[41%]Saving.\n");
	        	printf("\t\t\t\t\t[|||||               ]\n");
	       	 	delay(100);
			system("clear");
	        	printf("\n\n\n\n\n\n\n\t\t\t\t\t[52%]Saving..\n");
	        	printf("\t\t\t\t\t[||||||              ]\n");
	        	delay(100);
			system("clear");
	        	printf("\n\n\n\n\n\n\n\t\t\t\t\t[55%]Saving...\n");
	        	printf("\t\t\t\t\t[|||||||             ]\n");
	        	delay(100);
			system("clear");
	        	printf("\n\n\n\n\n\n\n\t\t\t\t\t[61%]Saving....\n");
	        	printf("\t\t\t\t\t[||||||||            ]\n");
	        	delay(100);
			system("clear");
	       	 	printf("\n\n\n\n\n\n\n\t\t\t\t\t[64%]Saving.....\n");
	        	printf("\t\t\t\t\t[|||||||||           ]\n");
	        	delay(100);
			system("clear");
	        	printf("\n\n\n\n\n\n\n\t\t\t\t\t[69%]Saving......\n");
	        	printf("\t\t\t\t\t[||||||||||          ]\n");
	        	delay(100);
			system("clear");
		        printf("\n\n\n\n\n\n\n\t\t\t\t\t[70%]Saving.......\n");
		        printf("\t\t\t\t\t[|||||||||||         ]\n");
		        delay(100);
			system("clear");
		        printf("\n\n\n\n\n\n\n\t\t\t\t\t[72%]Saving........\n");
		        printf("\t\t\t\t\t[||||||||||||        ]\n");
		        delay(100);
			system("clear");
		        printf("\n\n\n\n\n\n\n\t\t\t\t\t[80%]Saving.........\n");
		        printf("\t\t\t\t\t[|||||||||||||       ]\n");
		        delay(100);
			system("clear");
		        printf("\n\n\n\n\n\n\n\t\t\t\t\t[85%]Saving..........\n");
		        printf("\t\t\t\t\t[||||||||||||||      ]\n");
		        delay(100);
			system("clear");
		        printf("\n\n\n\n\n\n\n\t\t\t\t\t[89%]Saving.\n");
		        printf("\t\t\t\t\t[|||||||||||||||     ]\n");
		        delay(100);
			system("clear");
		        printf("\n\n\n\n\n\n\n\t\t\t\t\t[90%]Saving..\n");
		        printf("\t\t\t\t\t[||||||||||||||||    ]\n");
		        delay(100);
			system("clear");
		        printf("\n\n\n\n\n\n\n\t\t\t\t\t[95%]Saving...\n");
		        printf("\t\t\t\t\t[|||||||||||||||||   ]\n");
		        delay(100);
			system("clear");
		        printf("\n\n\n\n\n\n\n\t\t\t\t\t[97%]Saving....\n");
		        printf("\t\t\t\t\t[||||||||||||||||||  ]\n");
		        delay(100);
			system("clear");
		        printf("\n\n\n\n\n\n\n\t\t\t\t\t[99%] Saving.....\n");
		        printf("\t\t\t\t\t[||||||||||||||||||| ]\n");
		        delay(100);
			system("clear");
		        printf("\n\n\n\n\n\n\n\t\t\t\t\t[100%]Data Saved\n");
		        printf("\t\t\t\t\t[||||||||||||||||||||]\n");
		        delay(100);
			break;
			}
		}
	goto start;
	}
	if(input==0)
	{
	system("clear");
	}
	if(input==2)
	{
	book_info(book,count);
	}
	if(input==3)
	{
	by_author(book,count);
	}
	if(input==4)
	{
	by_title(book,count);
	}
	if(input==5)
	{
	anim(book,count);
	}
	if(input==6)
	{
	issue(book,count);
	}
	if(input==7)
	{
	un_issue(book,count);
	}
	if(input==8)
	{
	exit(0);
	}
	if(input>=8)
	{
	printf("invalid option..\n");
	delay(1000);
	system("clear");
	}
	goto start;
}
//display all books-------------------------------------------------
struct books book_info(struct books book[],int count)
{
	int i;
	system("clear");
	printf("	 _____________________ 		_________________Importaint_Terms__________\n");
	printf("	/ Library Management \\		[X]--->Book is ISSUED && [ ]--->Not ISSUED|\n");
	printf("	\\___________________/ 		```````````````````````````````````````````\n");
	for(i=0;i<count;i++)
	{
	printf("________________________________\n");
	printf("|Book_Name	:%s   	|\n",book[i].book_name);
	printf("|Author_Name	:%s   	|\n",book[i].author_name);
	printf("|ACCESION_NO	:%ld   	|	\n",book[i].accss_no);
		if(book[i].status=='y')
		{
	printf("|ISSUED     	:[X]	 	|\n");
		}
		else
		{
	printf("|ISSUED     	:[ ]	 	|\n");
		}
	printf("|===============================|\n");
	}
	return book[count];

}

struct books by_author(struct books book[],int count)
{
	int i,found,book_count=0;
	char search_author[20];
	printf("Enter the author name\n");
	scanf("%s",search_author);
	for(i=0;i<count;i++)
	{
	found=strcmp(search_author,book[i].author_name);
	printf("Calculating.\n");
	delay(100);
	system("clear");
	printf("Calculating..\n");
	delay(100);
	system("clear");
	printf("Calculating...\n");
	delay(100);
	system("clear");
		if(found==0)
		{
		book_count++;
		}
	}
	printf(" ____________________________________________________ \n");
	printf("(	You've %d Books of %s Author		     )\n",book_count,search_author);
	printf(" ```````````````````````````````````````````````````` \n");
	return book[count];
}

struct books by_title(struct books book[],int count)
{
	
	int i,found,book_count=0;
	char search_title[20];
	printf("Enter the author name\n");
	scanf("%s",search_title);
	for(i=0;i<count;i++)
	{
	found=strcmp(search_title,book[i].book_name);
	printf("Calculating.\n");
	delay(100);
	system("clear");
	printf("Calculating..\n");
	delay(100);
	system("clear");
	printf("Calculating...\n");
	delay(100);
	system("clear");
		if(found==0)
		{
		book_count++;
		}
	}
	printf(" ____________________________________________________ \n");
	printf("(	You've %d Books of %s Title		     )\n",book_count,search_title);
	printf(" ```````````````````````````````````````````````````` \n");
	return book[count];
}

struct books issue(struct books book[],int count)
{
	int i,issuance=0;
	long int user_accss;
	printf("Enter accession number of Book you wnat to issue___");
	scanf("%ld",&user_accss);
	for(i=0;i<count;i++)
	{
		if(user_accss==book[i].accss_no)
		{
			if(book[i].status!='y')
			{
			printf("|===============================|\n");
			printf("|    Issuing Book  Done....	|\n");
			printf("|===============================|\n");
			book[i].status='y';
			issuance++;
			}
			else
			{
			issuance++;
			printf("|===============================|\n");
			printf("|Book Already ISSUED to someone |\n");
			printf("|===============================|\n");
			}
		}
	}
	if(issuance==0)
	{
	printf("_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_\n");
	printf("| Hmm..looks like Book not available in Library...|\n");
	printf("|_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_|\n");
	}
	return book[count];
}

struct books un_issue(struct books book[],int count)
{
	int i,issuance=0;
	long int user_accss;
	printf("Enter accession number of Book you wnat to issue___");
	scanf("%ld",&user_accss);
	for(i=0;i<count;i++)
	{
		if(user_accss==book[i].accss_no)
		{
			if(book[i].status=='y')
			{
			printf("|===============================|\n");
			printf("|    Un-Issuing Book  Done....	|\n");
			printf("|===============================|\n");
			book[i].status=NULL;
			issuance++;
			}
			else
			{
			issuance++;
			printf("|===============================|\n");
			printf("|	Book is Not ISSUED	|\n");
			printf("|===============================|\n");
			}
		}
	}
	if(issuance==0)
	{
	printf("_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_\n");
	printf("| Hmm..looks like Book not available in Library...|\n");
	printf("|_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_|\n");
	}
	return book[count];
}

struct books anim(struct books book[],int count)
{
	int i;
	for(i=0;i<2;i++)
	{
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }->			| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }-->		| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }--->		| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }---->		| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }------>		| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }------->		| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }-------->		| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }--------->		| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }---------->	| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }----------->	| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }------------>	| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }------------>	| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }------------>	| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }------------>	| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }------------->	| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }------------->	| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }------------->	| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }-------------->	| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }-------------->	| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }-------------->	| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(10);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }-------------->	| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }-------------->	| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }-------------->	| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }-------------->	| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(10);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }--------------->	| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }---------------->	| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }----------------->	| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(50);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }----------------->	| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	printf("library@admin:~/");
	delay(10);
	system("clear");
	system("figlet -f small Library_Mgmnt");
	printf(" ___________________________________ \n");
	printf("{ 1.Add New Books		    }			___________________\n");
	printf("{ 2.Display Books Information	    }------------------>| Total books:%d  |\n",count);
	printf("{ 3.Books of Particular Author      }			```````````````````\n");
	printf("{ 4.Count books of Particular title }\n");
	printf("{ 5.Count Total Books in Library    }\n");
	printf("{ 6.Issue the Books to Students	    }\n");
	printf("{ 0.to clear the screen   	    }\n");
	printf("{ 7.Un-ISSUE the Book		    }\n");
	printf("{ 8.to EXIT the program Immediately }\n");
	printf("`````````````````````````````````````\n");
	delay(50);
	system("clear");
	}
	return book[count];
}
