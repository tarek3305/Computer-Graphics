#include <iostream>
#include<graphics.h>
using namespace std;
void project1();
void project2();
void flag();
void doremon();
void fish();
void eifel();
void footballfield();
void village();
void boat();

int main()
{
    project1();
    int project;

    while(project!=0)
    {
        cout<<"\nEnter your choice: ";
        cin>>project;
        if(project!=0&&project!=1&&project!=2&&project!=3&&project!=4&&project!=5&&project!=6&&project!=7)
            cout<<"You have entered Wrong."<<endl;
        else
            switch (project)
            {
            case 0:
                project2();
                break;
            case 1:
                eifel();
                break;
            case 2:
                flag();
                break;
            case 3:
                doremon();
                break;
            case 4:
                fish();
                break;
            case 5:
                footballfield();
                break;
            case 6:
                village();
                break;
            case 7:
                boat();
                break;
            }
    }
    return 0;
}

void project1()
{
    cout << "Choose a Option For View: "<<endl;
    cout << "\n0. Home Page"<<endl;
    cout << "\n1. Eifel Tower"<<endl;
    cout << "\n2. National Flag Of Bangladesh"<<endl;
    cout << "\n3. Doremon"<<endl;
    cout << "\n4. Fish"<<endl;
    cout << "\n5. All Time World Best Football XI"<<endl;
    cout << "\n6. village"<<endl;
    cout << "\n7. Boat"<<endl;
}

void project2()
{
    int i;
    initwindow(600,400,"Home");

    outtextxy(50,100,"Project Showing By-");
    outtextxy(50,120,"MD. ASHRAFUL ISLAM TAREK");
    outtextxy(50,140,"CSE2001019081");

    outtextxy(350,100,"Supervisor-");
    outtextxy(350,120,"NABILA ANWAR");
    outtextxy(350,140,"Designation: Lecturer(SU)");

    while(1)
    {
        for (i = 0; i < 600; i++)
        {
            outtextxy(0+i,40,"COMPUTER GRAPHICS PROJECT SHOWCASING");
            delay(15);
        }
    }

    getch();
    closegraph();
}
void eifel()
{
    int i;
    initwindow(600,700,"eifel tower");

    rectangle(50,600,550,620);
    rectangle(60,595,540,600);

    line(100,595,150,480);
    line(500,595,450,480);

    line(140,595,190,480);
    line(460,595,410,480);

    rectangle(150,470,450,480);
    line(142,500,458,500);

    line(131,525,171,525);
    line(431,525,470,525);

    line(120,550,160,550);
    line(440,550,480,550);

    line(150,480,182,500);
    line(182,500,131,525);
    line(131,525,160,550);
    line(160,550,100,595);

    line(450,480,418,500);
    line(418,500,470,525);
    line(470,525,440,550);
    line(440,550,500,595);

    ellipse(300,550,0,180,139,50);

    rectangle(150,440,450,470);
    rectangle(150,430,450,440);

    line(180,440,180,470);
    line(210,440,210,470);
    line(240,440,240,470);
    line(270,440,270,470);
    line(300,440,300,470);
    line(330,440,330,470);
    line(360,440,360,470);
    line(390,440,390,470);
    line(420,440,420,470);

    line(180,430,220,330);
    line(420,430,380,330);
    line(210,430,250,330);
    line(390,430,350,330);

    line(213,350,387,350);
    line(209,360,391,360);

    rectangle(220,320,380,330);
    rectangle(220,280,380,320);

    line(197,390,226,390);
    line(374,390,403,390);

    line(220,330,243,350);
    line(243,350,209,360);
    line(209,360,226,390);
    line(226,390,180,430);

    line(380,330,357,350);
    line(357,350,391,360);
    line(391,360,373,390);
    line(391,360,373,390);
    line(373,390,420,430);

    line(300,280,220,320);
    line(300,280,380,320);

    line(270,280,280,120);
    line(330,280,320,120);

    line(300,120,290,280);
    line(300,120,310,280);

    rectangle(270,110,330,120);
    ellipse(300,110,0,180,17,30);

    line(300,80,300,60);

    while(1)
    {
        for (i = 0; i < 600; i++)
        {
            outtextxy(0+i,40,"Eiffel Tower, Paris, France");
            delay(15);
        }
    }


    getch();
    closegraph();
}

void flag()
{
    int i;
    initwindow(600,600,"National Flag");

    rectangle(50,500,120,510);

    line(60,500,110,500);
    line(110,500,110,480);
    line(110,480,60,480);
    line(60,480,60,500);


    line(75,200,75,480);
    line(95,200,95,480);

    ellipse(85,195,0,360,15,5);

    line(95,230,320,230);
    line(320,230,320,370);
    line(320,370,95,370);
    setcolor(WHITE);
    setfillstyle(1, GREEN);
    line(95,370,95,230);
    floodfill(96,369,WHITE);

    setcolor(WHITE);
    setfillstyle(1,RED);
    circle(207,300,50);
    floodfill(208,301,WHITE);

    while(1)
    {
        for (i = 0; i < 600; i++)
        {
            outtextxy(0+i,550,"National Flag of Bangladesh        ");
            delay(10);
        }
    }

    getch();
    closegraph();
}


void doremon()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"");

    //body

    setcolor(BLUE);
    setfillstyle(1,BLUE);
    ellipse(200,180,0,360,180,160);
    floodfill(200,180,BLUE);


    setcolor(WHITE);
    setfillstyle(1,WHITE);
    ellipse(200,230,0,360,135,110);
    floodfill(200,230,WHITE);



    //belt
    setcolor(RED);
    setfillstyle(1,RED);
    ellipse(200,355,0,360,190,14);
    floodfill(200,355,RED);
    setcolor(YELLOW);
    setfillstyle(1,YELLOW);
    ellipse(200,385,0,360,15,15);
    floodfill(200,385,YELLOW);

    //eyes
    setcolor(BLACK);
    setfillstyle(1,BLACK);
    circle(229,120,30);
    floodfill(229,120,BLACK);
    setcolor(BLACK);
    setfillstyle(1,BLACK);
    circle(171,120,30);
    floodfill(171,120,BLACK);
    //eye shape
    setcolor(WHITE);
    setfillstyle(1,WHITE);
    ellipse(228,118,0,360,10,15);//eye shape
    floodfill(225,117,WHITE);
    setcolor(WHITE);
    setfillstyle(1,WHITE);
    ellipse(171,120,0,360,10,15);//eye shape
    floodfill(171,120,WHITE);

    //smile
    setcolor(RED);
    ellipse(200,240,180,360,60,40);
    //nose
    setcolor(RED);
    setfillstyle(1,RED);
    ellipse(200,180,0,360,17,17);
    line(220,200,280,200);
    line(180,200,120,200);
    line(220,195,280,160);
    line(220,205,280,240);

    line(180,205,120,240);
    line(180,195,120,160);
    floodfill(200,180,RED);
    setcolor(RED);
    line(200,190,200,280);

    getch();
    closegraph();
}
void fish()
{

    int i;
    initwindow(600,400,"fish");



setcolor(15);
setfillstyle(1,1);
ellipse(300,200,0,360,150,80);
floodfill(301,201,15);


setfillstyle(1,RED);
line(154,180,110,165);
line(110,165,120,200);
line(120,200,110,235);
line(110,235,154,220);
floodfill(121,199,15);


setcolor(15);
setfillstyle(1, RED);
line(320,278,280,350);
line(345,276,280,352);
floodfill(321,279,15);


setcolor(15);
setfillstyle(1,RED);
line(320,120,280,48);
line(280,48,345,124);
floodfill(321,119,15);

setcolor(15);
setfillstyle(1,YELLOW);
line(360,128,340,200);
line(340,200, 360, 271);
floodfill(365,133,15);


setcolor(15);
setfillstyle(1,RED);
circle(400,200,20);
floodfill(401,201,15);

circle(480,200,20);
circle(520,200,8);
circle(515,220,8);
circle(510,180,10);





getch();
closegraph();
}

void footballfield()
{
    int i;
    initwindow(600,700,"football field");

    setcolor(WHITE);
    setfillstyle(1,GREEN);
    rectangle(100,80,500,580);
    floodfill(101,81,WHITE);
    //midd line
    line(100,330,500,330);

    //circle
    circle(300,330,70);

    //goal post
    rectangle(265,60,335,80);
    rectangle(265,580,335,600);

    //D box
    rectangle(245,580,355,540);
    rectangle(245,80,355,120);

    //p box
    rectangle(205,580,395,500);
    line(205,500,395,500);
    rectangle(205,80,395,160);

    //corner
    ellipse(100,80,270,360,25,25);
    ellipse(100,580,360,90,25,25);
    ellipse(500,580,90,180,25,25);
    ellipse(500,80,180,270,25,25);


    //player
    outtextxy(150,150,"C RONALDO");
    outtextxy(400,150,"L MESSI");
    outtextxy(250,120,"FERENC PUSKAS");
    outtextxy(150,320,"PELE");
    outtextxy(230,320,"DIEGO MARADONA");
    outtextxy(380,320,"JOHAN CRUYFF");
    outtextxy(450,450,"CAFU");
    outtextxy(120,450,"MALDINI");
    outtextxy(230,450,"S RAMOS");
    outtextxy(320,450,"FRANCO BARESI");
    outtextxy(280,550,"O KAHN");


    while(1)
    {
        for (i = 0; i < 600; i++)
        {
            outtextxy(0+i,40,"ALL TIME WORLD BEST FOOTBALL XI");
            delay(15);
        }
    }


    getch();
    closegraph();

}
void village()
{
    int i;
    initwindow(800,600,"village");


    setcolor(WHITE);
    setfillstyle(1, BLUE);
    rectangle(1,1,800,300);
    floodfill(2,3, WHITE);

    rectangle(300,200,500,300);

    setcolor(WHITE);
    setfillstyle(1,YELLOW);
    circle(540,80,40);
    floodfill(541,81,WHITE);


    setcolor(WHITE);
    setfillstyle(1,YELLOW);
    line(300,200,280,200);
    floodfill(310,205,WHITE);
    line(280,200,300,185);
    line(300,185,500,185);
    line(500,185,520,200);
    line(520,200,500,200);


    setcolor(WHITE);
    setfillstyle(4,RED);
    line(330,300,330,240);
    floodfill(331,299,WHITE);
    line(330,240,370,240);
    line(370,240,370,300);

    line(430,300,430,240);
    line(430,240,470,240);
    line(470,240,470,300);

    line(380,300,380,240);
    line(380,240,420,240);
    line(420,240,420,300);


    rectangle(330,100,470,185);

    line(330,100,310,100);
    line(310,100,330,85);
    line(330,85,470,85);;
    line(470,85,490,100);
    line(490,100,470,100);

    setcolor(WHITE);
    setfillstyle(4,RED);
    line(350,135,350,165);
    floodfill(351,136,WHITE);
    line(350,165,380,165);
    line(380,165,380,135);
    line(380,135,350,135);

    setcolor(WHITE);
    setfillstyle(4,RED);
    line(420,135,420,165);
    floodfill(421,136,WHITE);
    line(420,165,450,165);
    line(450,165,450,135);
    line(450,135,420,135);

    setcolor(WHITE);
    setfillstyle(1,RED);
    line(100,300,100,150);
    floodfill(101,299,WHITE);
    line(100,150,130,150);
    line(130,150,130,300);
    line(130,300,100,300);

    setcolor(WHITE);
    setfillstyle(1,GREEN);
    ellipse(100,150,90,280,25,30);
    floodfill(101,149,WHITE);
    ellipse(105,120,40,200,25,30);
    ellipse(140,120,20,170,29,30);
    ellipse(155,130,310,80,29,30);
    ellipse(150,160,280,50,35,25);
    ellipse(130,170,260,22,35,25);

    getch();
    closegraph();

}
void boat()
{
    int i;
    initwindow(600,400,"Boat");

    line(200,300,400,300);
    line(150,245,450,245);
    line(150,245,200,300);
    line(450,245,400,300);

    setcolor(WHITE);
    setfillstyle(1,BLUE);
    circle(230,277,15);
    floodfill(231,278,WHITE);

    setcolor(WHITE);
    setfillstyle(1,BLUE);
    circle(380,277,15);
    floodfill(381,278,WHITE);

    setcolor(WHITE);
    setfillstyle(1,BLUE);
    circle(305,277,15);
    floodfill(306,278,WHITE);


    line(300,245,300,220);
    setcolor(WHITE);
    setfillstyle(1,BLUE);
    line(200,220,400,220);
    floodfill(300,215,WHITE);
    line(400,220,300,110);
    line(300,110,200,220);

    getch();
    closegraph();
}
