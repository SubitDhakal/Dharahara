#include<stdio.h>
#include<conio.h>
#include <graphics.h>
#include<dos.h>

int j,d,c;
int a=88;
int j=0,y=88,color=15;

int x, y, button;
union REGS i, o;


void cover();
void loading();
void details();
void dha();

void show_mouse();
void get_mouse(int*,int*,int*);


void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:/TURBOC3/BGI");  //initiates graphics

cover();
show_mouse();

while(!kbhit())
{
	get_mouse(&button,&x,&y);

	if(button==1)
	{
	   button=-1;
	   if (x>235 && x<395 && y>325 && y<395)
	   {
	     loading();
	     cleardevice();
	     closegraph();
	     details();

	     dha();

	   }

	}
}
getch();

delay(100);
cleardevice();
}

/*---------------FUNCTION COVER PAGE--------------*/
void cover(int c)
{
setbkcolor(5);
delay(100);
/*-------------BODRE-------------*/
rectangle(1,1,639,479); 	     //1
rectangle(2,2,638,478); 	     //2
delay(200);
rectangle(10,10,630,470);	     //3
rectangle(11,11,629,469);	     //4
delay(300);
setfillstyle(8,14);
floodfill(3,3,15);
/*-----------------END BODER----------*/
delay(400);
/*----------------TEXT BOX------------*/
rectangle(23,16,617,47);
rectangle(25,18,615,45);
delay(500);
setfillstyle(10,1);
floodfill(27,20,15);

setcolor(WHITE);
settextstyle(0, 0, 3);
delay(600);
outtextxy(34, 22, "PROJECT ON C PROGRAMMING");

/*--------------BELOW TEXT BOX--------*/
setcolor(1);
settextstyle(1,0,3);
outtextxy(185,45,"DHAKAL'S BROTHER ASSOCIATON");
setcolor(15);
settextstyle(2,0,5);
outtextxy(235,70, "Mitrapark, Kathmandu");
rectangle(230,87,402,88);
/*----------------END OF TEXT BOX-----------*/

/*----------------DEVELOPERS---------------*/
setcolor(3);
settextstyle(8,1,1);
outtextxy(10,330,"DEVELOPERS");
line(34,335,34,460);
line(36,335,36,460);
setcolor(1);
settextstyle(2,0,5);
outtextxy(45,360,"- SUBIT DHAKAL");
outtextxy(45,400,"- PRAMESH DHAKAL");

/*----------------END OF DEVELOPERS--------*/

/*-----------------WELCOME------------------*/
setcolor(15);
settextstyle(10,0,7);
outtextxy(50,85,"REBUILDING");


setcolor(15);
settextstyle(4,0,8);
outtextxy(80,210,"DhARAhARA");
rectangle(78,300,580,302);
/*-----------------END OF WELCOME-----------*/

/*----------------BEGIN BUTTON--------------*/
rectangle(240,330,390,390);
rectangle(235,325,395,395);

setfillstyle(1,14);
floodfill(238,328,15);

setfillstyle(1,6);
floodfill(251,332,15);

setcolor(1);
settextstyle(1,0,5);
outtextxy(258,330,"START");
}
/*---------------END OF FUNCTION COVER PAGE--------*/

/*----------------FUNCTION LOADDING----------------*/
void loading(int j)
{

setcolor(7);
settextstyle(0,0,2);
outtextxy(190,430,"Loading...Please Wait...");
rectangle(50,450,590,465);
for(j=50;j<590;j++)
{
delay(11);
line(j,450,j,465);
}

}
/*------------------END OF LOADING FUNCTION---------*/

/*-----------------FUNCTION DHARAHARA--------------*/
void dha()
{
//int gd=DETECT,gm;
//initgraph(&gd,&gm,"C:/TC/BGI");  //initiates graphics

//show_mouse();

setbkcolor(0);

setcolor(15);
line(0,477,639,477);
delay(400);
line(499,477,500,440);	  //0th line left
line(571,477,570,440);	  //0th line right
delay(400);
line(500,440,503,337);   //1st line left
line(570,440,567,337);   //1st line  right
delay(400);
line(503,337,505,237);  //2ndline       left
line(567,337,565,237); //2nd line   right
delay(400);
line(505,237,506,137);    // 3rd left
line(565,237,564,137);    // 3rd right
delay(400);
line(506,137,507,65);  //4t left
line(564,137,563,65);   //4 th right
//delay(400);
ellipse(535,64,0,180,30,4);   //dome base
ellipse(535,65,0,180,30,3); // dome base
ellipse(535,64,0,180,30,28);  //DOME TOP
//delay(400);
ellipse(535,35,0,180,2,5);    //Gajur
circle(535,28,2);             //
line(535,26,535,23);          //
circle(535,22,1);             //GAJUR

delay(400);
/*---------------CODE FOR THE FLOORS---------------*/
ellipse(535,392,0,180,34,7); //1st floor
ellipse(535,390,0,180,34,7); //1st floor
delay(400);
ellipse(535,345,0,180,32,5); //2nd floor
ellipse(535,347,0,180,32,5);  //2nd floor
delay(400);
ellipse(535,300,0,180,31,5);  //3rd
ellipse(535,302,0,180,31,5);  //3rd
delay(400);
ellipse(535,257,0,180,30,5);   //4th
ellipse(535,259,0,180,30,5);    //4th
delay(400);
ellipse(535,215,0,180,29,5);   //5 th
ellipse(535,217,0,180,29,5);   //5th
delay(400);
ellipse(535,173,0,180,29,5);    //6th
ellipse(535,175,0,180,29,5);    //6th
delay(400);
ellipse(535,134,0,180,28,5);	//7th
ellipse(535,136,0,180,28,5);	//7th
delay(400);
ellipse(535,96,0,180,28,4);	//8th
ellipse(535,94,0,180,28,4);	//8th
delay(400);
/*---------------END OF CODE FOR THE FLOOR---------------*/
/*---------------CODE FOR THE DOOR---------------*/
delay(400);
rectangle(517,477,553,406);
rectangle(520,477,550,422);
delay(400);
ellipse(535,424,90,180,15,18);
ellipse(535,424,0,90,15,18);
delay(400);
line(525,477,525,436);
line(546,477,546,436);
delay(400);
ellipse(520,422,291,360,15,14);
ellipse(550,422,180,255,15,14);
delay(400);
/*--------------END OF CODE FOR THE DOOR---------------*/

/*--------------CODE FOR WINDOWS-----------------------*/
delay(400);
circle(520,71,4);		//9th
delay(400);
circle(550,105,4);		//8th
delay(400);
circle(520,145,4);		//7th
delay(400);
circle(550,190,4);		//6th
delay(400);
circle(520,240,4);		//5th
delay(400);
circle(550,280,4);		//4th
delay(400);
circle(520,320,4);		//3rd
delay(400);
circle(550,360,4);		//2nd
delay(400);
circle(535,395,5);		//1st
delay(400);
/*--------------END OF CODE FOR WINDOW-------------------*/

/*--------------CODE FOR THE PATTERNS AND FILLS----------*/

for(j=0;j<=9;j++)
{
delay(40);
setfillstyle(1,15);
floodfill(532,a,15);
a=a+35;
}
setfillstyle(9,15);
floodfill(548,450,15);
floodfill(522,450,15);

setfillstyle(6,15);
floodfill(536,55,15);

setcolor(15);
settextstyle(4,0,4);
outtextxy(50,430,"Press Any Key To Exit");
}
/*--------------END OF CODE FOR PATTERNS AND FILLS--------*/


void details()
{
/*---------------DETAILS--------------------------------*/
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:/TURBOC3/BGI");  //initiates graphics
setbkcolor(0);
delay(400);
settextstyle(0,0,2);
outtextxy(50,20,"DHARAHARA (BHIMSEN TOWER)");
rectangle(48,36,445,37);
delay(400);

setcolor(7);
settextstyle(6,1,2);
outtextxy(5,50,"General Information");
delay(400);
setcolor(15);
rectangle(31,45,474,233);
rectangle(33,47,472,231);
delay(400);
setcolor(7);
setfillstyle(1,7);
floodfill(35,49,15);
delay(400);
setcolor(0);
settextstyle(2,0,5);
delay(400);
outtextxy(50,50,"Status:          Destroyed");
delay(400);
outtextxy(50,70,"Location:        Sundhara, Kathmandu, Nepal");
delay(400);
outtextxy(50,90,"Completed:       1832 or later");
delay(400);
outtextxy(50,110,"Destroyed:       15 January 1934");
delay(400);
outtextxy(50,125,"                (1934 earthquake)");
delay(400);
outtextxy(50,140,"                25 April 2015");
delay(400);
outtextxy(50,155,"                (2015, 7.3 ritcher earthquake)");
delay(400);
outtextxy(50,170,"                a 10 meter tall stumps of base remains");
delay(400);
outtextxy(50,190,"Height:          61.88 meters (203.0 ft)");
delay(400);
outtextxy(50,210,"Architect:       Bhimshen Thapa");
delay(400);
setfillstyle(1,4);
floodfill(32,46,15);
delay(400);
}
/*--------------END OF FUNCTION DHARAHARA------------------*/


void show_mouse()
{
  i.x.ax = 0;
  int86(0X33,&i,&o);
}
void get_mouse(int *button, int *x, int *y)
{
   i.x.ax = 1;
   int86(0X33,&i,&o);
   i.x.ax = 3;
   int86(0X33,&i,&o);
   *button = o.x.bx;
   *x = o.x.cx;
   *y = o.x.dx;
}

