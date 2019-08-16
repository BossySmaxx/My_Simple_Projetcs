#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void env();
void assets();
void logic();
void input();
void physics();
char str1[3],str2[3];
int blockX,blockY;
int ballX,ballY,ballXvel,ballYvel;

void main()
{
	int gd=DETECT,gm=0,i;
	initgraph(&gd,&gm,"C://TurboC3//bgi");
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
	 }
	}

}

void logic()
{
	setcolor(15);
	setfillstyle(SOLID_FILL,RED);
	rectangle(blockX,blockY,blockX+100,blockY+20);
	if(blockX+100 >=getmaxx()-30)
	{
	   blockX = getmaxx()-130;
	}
	if(blockX<=30)
	{
	   blockX=30;
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
		}
	}

	if(ballY>=getmaxy()-26)
	{
	    cleardevice();
	    outtextxy(getmaxx()/2,getmaxy()/2,"Game Over");
	    getch();
	    exit(0);
	}
}
