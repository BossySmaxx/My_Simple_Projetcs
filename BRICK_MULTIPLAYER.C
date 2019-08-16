/*-----This Game is Originally Developed by
  DedSec.Inc owned by NItish Jamwal and Bossy Smaxx
  founders of the Company. This game was the first project
  in collaboration with Nintendo and Playstation(SONY).
  project Name :-      ######### Atari Breakout 6051 #########
  Release Date :-      ########### 16-August-1992 ############

*/


#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void env();
void assets();
void logic();
void input();
void physics();
char str1[3],str2[3];
int blockX,blockY,block2X,block2Y,score1=0,score2=0;
int ballX,ballY,ballXvel,ballYvel;

void main()
{
	int gd=DETECT,gm=0,i;
	initgraph(&gd,&gm,"C://TurboC3//bgi");
	 setcolor(RED);
	outtextxy((getmaxx()/2)-150,getmaxy()/2,"####### ATARI BREAKOUT 6051 ##########");
	outtextxy(getmaxx()/2-200,(getmaxy()/2)+20,"Upper Atari is player 1 || Another one is Player 2");
	getch();
	assets();
	while(1)
	{
	cleardevice();
	env();
	input();
	logic();

	 /* if(kbhit())
	  {
		switch(getch())
		{
			case 27:exit(0);
			break;
		}
	  } */
	  delay(10);
	}
       //closegraph();
       //	getch();
}

void env()
{
	setcolor(12);
	rectangle(10,10,getmaxx()-10,getmaxy()-10);
	setcolor(10);
	rectangle(12,12,getmaxx()-12,getmaxy()-12);
}

void assets()
{
	blockX=250,blockY=440;
	block2X=250,block2Y=15;
	ballX=getmaxx()/2;
	ballY=getmaxy()/2;
	ballXvel=2;
	ballYvel=2;
}

void input()
{
      if(kbhit())
      {
	 switch(getch())
	 {
	  case 75:blockX-=20;
	  break;
	  case 77:blockX+=20;
	  break;
	  case 'a': block2X-=20;
	  break;
	  case 'd':block2X+=20;
	 }
	}

}

void logic()
{
	setcolor(15);
	setfillstyle(SOLID_FILL,RED);
	rectangle(blockX,blockY,blockX+100,blockY+20);
	rectangle(block2X,block2Y,block2X+100,block2Y+20);

	gotoxy(getmaxx()/2,0);
	cprintf("Player 1 : %d",score1);

	if(blockX+100 >=getmaxx()-30)
	{
	   blockX = getmaxx()-130;
	}
	if(blockX<=30)
	{
	   blockX=30;
	}
	if(block2X+100>=getmaxx()-30)
	{
	   block2X=getmaxx()-130;
	}
	if(block2X<=30)
	{
	   block2X=30;
	}

	circle(ballX,ballY,10);
	ballX+=ballXvel;
	ballY+=ballYvel;

	switch(ballY>=getmaxy()-24)
	{
	   case 1:ballYvel=-2;
	   break;
	}
	switch(ballX>=getmaxx()-24)
	{
	 case 1:ballXvel=-2;
	   break;
	}
	switch(ballY<=1+24)
	{
	  case 1:ballYvel=2;
	  break;
	}
	switch(ballX<=1+24)
	{
	   case 1:ballXvel=2;
	   break;
	}

	if(ballY+10>=blockY)
	{
		if(ballX>=blockX && ballX<=blockX+100)
		{
		    ballYvel=-2;
		    score1++;
		}
	}

	if(ballY<=block2Y+30)
	{
		if(ballX>=block2X && ballX<=block2X+100)
		{
		    ballYvel=2;
		    score2++;
		}
	}

	if(ballY>=getmaxy()-26)
	{
	    cleardevice();
	    outtextxy(getmaxx()/2-50,getmaxy()/2,"Game Over");

	       outtextxy((getmaxx()/2)-50,(getmaxy()/2)+10,"Player1 won   ||  ESC to EXIT");

	    if(getch()==27)
	    {
	       exit(0);
	    }

	}

	if(ballY<=27)
	{
	     cleardevice();
	    outtextxy(getmaxx()/2-50,getmaxy()/2,"Game Over");

	    {
	       outtextxy((getmaxx()/2)-50,(getmaxy()/2)+10,"Player2 won ||  ESC to EXIT");
	    }
	    if(getch()==27)
	    {
	      exit(0);
	    }
	}
}
