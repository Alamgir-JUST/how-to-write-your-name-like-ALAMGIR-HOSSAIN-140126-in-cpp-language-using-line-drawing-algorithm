#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    int gd = DETECT, gm;

    // initgraph initializes the graphics system
    // by loading a graphics driver from disk
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setlinestyle(SOLID_LINE,0,BOLD_FONT);
    /// line for x1, y1, x2, y2

    ///A Printing
    setcolor(RED);
    line(200,100,150,200);///LEFT
    line(140,200,160,200);///LEFT-BOTTOM
    line(200,100,250,200);///RIGHT
    line(175,150,226,150);///Middle
    line(240,200,260,200);///Right-Bottom

    ///L printing
    setcolor(WHITE);
    setbkcolor(BLACK);
    line(275, 100, 275, 200);///LEFT
    line(265,100,285,100);///TOP
    line(275, 200, 320, 200);///Bottom
    line(320,200,325,195);///Bottom-Right

    ///A Printing
    setcolor(RED);
    line(400,100,350,200);///Left
    line(340,200,360,200);///Left-Bottom
    line(400,100,450,200);///Right
    line(440,200,460,200);///Right-Bottom
    line(375,150,426,150);///Middle

    ///M Printing
    setcolor(LIGHTGREEN);
    line(480, 100, 480, 200);///Left
    line(470, 200, 490, 200);///Left-Bottom
    line(480, 100, 530, 150);///Middle-1
    line(580, 100, 580, 200);///Right
    line(570, 200, 590, 200);///Right-Bottom
    line(580, 100, 530, 150);///Middle-2

    ///G Printing
    setcolor(LIGHTCYAN);
    line(610, 100, 610, 200);///Left
    line(610,100,690,100);///Top
    line(690,90,690,110);///Top-Right
    line(610,200,710,200);///Bottom
    line(710,140,710,200);///Right
    line(710,140,650,140);///Top-Enter
    line(650,160,650,140);///Inner-Enter
    line(650,160,655,160);///Inner-Enter-Bottom

    ///I Printing
    setcolor(LIGHTRED);
    line(770,100,770,200);///Left
    line(740,200,800,200);///Bottom
    line(800,200,800,195);///Bottom-Right
    line(740,200,740,195);///Bottom-Left
    line(740,100,800,100);///Top
    line(800,100,800,105);///Top-Right
    line(740,100,740,105);///Top-Left

    ///R Printing
    setcolor(LIGHTMAGENTA);
    line(830,110,830,200);///LEFT
    line(820,200,840,200);///LEFT-BOTTOM
    line(840,100,870,100);///Top
    line(830,110,840,100);///Top-left
    line(880,110,880,140);///Right
    line(880,110,870,100);///Right-top
    line(830,150,860,150);///Inner
    line(880,140,860,150);///Inner-Right
    line(830,150,880,200);///Center-Right_Bottom
    line(870,200,890,200);///Center-Right_Bottom

    ///H Printing
    setcolor(YELLOW);
    line(150,250,150,350);///Left
    line(140,350,160,350);///Left-Bottom
    line(140,250,160,250);///Left-UP
    line(250,250,250,350);///Right
    line(240,350,260,350);///Right-Bottom
    line(240,250,260,250);///Right-Up
    line(150,300,250,300);///Middle

    ///O Printing
    setcolor(BROWN);
    line(280,250,280,350);///Left
    line(330,250,330,350);///Right
    line(280,250,330,250);///Top
    line(280,350,330,350);///Bottom

    ///S Printing
    setcolor(MAGENTA);
    line(360,250,440,250);///Top
    line(440,250,440,255);///Top-Up
    line(360,250,360,300);///Top-Left
    line(360,300,440,300);///Middle
    line(360,350,440,350);///Bottom
    line(360,345,360,350);///Bottom-Up
    line(440,300,440,350);///Bottom-Right

    ///S Printing
    setcolor(CYAN);
    line(470,250,550,250);///Top
    line(550,255,550,250);///Top-Up
    line(470,250,470,300);///Top-Left
    line(470,300,550,300);///Middle
    line(470,350,550,350);///Bottom
    line(470,345,470,350);///Bottom-Up
    line(550,300,550,350);///Bottom-Right

    ///A Printing
    setcolor(RED);
    line(630,250,580,350);///Left
    line(570,350,590,350);///Left-Bottom
    line(630,250,680,350);///Right
    line(670,350,690,350);///Right-Bottom
    line(605,300,656,300);///Middle

  ///I Printing
    setcolor(LIGHTRED);
    line(740,250,740,350);///Left
    line(710,350,770,350);///Bottom
    line(710,250,770,250);///Top
    line(770,345,770,345);///Bottom-Right
    line(710,350,710,345);///Bottom-Left
    line(770,250,770,255);///Top-Right
    line(710,250,710,255);///Top-Left

    ///N Printing
    setcolor(BLUE);
    line(800,250,800,350);///Left
    line(880,250,880,350);///Right
    line(800,250,880,350);///Middle
    line(790,350,810,350);///Left-Bottom
    line(870,250,890,250);///Right-Bottom

    ///--
    setcolor(WHITE);
    line(150,450,250,450);
    line(150,445,150,455);
    line(230,430,250,450);
    line(230,470,250,450);

    ///1
    setcolor(LIGHTRED);
    line(320,400,320,500);
    line(310,500,330,500);
    line(320,400,300,430);

    ///4
    setcolor(LIGHTBLUE);
    line(360,400,360,450);
    line(440,400,440,500);
    line(360,450,440,450);
    line(350,400,370,400);
    line(430,400,450,400);
    line(430,500,450,500);

    ///0
    setcolor(LIGHTGREEN);
    line(490,400,490,500);
    line(490,400,560,400);
    line(560,400,560,500);
    line(490,500,560,500);

    ///1
    setcolor(LIGHTRED);
    line(640,400,640,500);
    line(630,500,650,500);
    line(640,400,620,430);

    ///2
    setcolor(LIGHTCYAN);
    line(690,500,760,500);
    line(690,500,750,450);
    line(750,450,760,430);
    line(690,420,710,400);
    line(710,400,745,400);
    line(745,400,760,430);
    line(760,500,770,490);

    ///6
    setcolor(LIGHTMAGENTA);
    line(810,410,810,500);
    line(810,410,820,400);
    line(820,400,880,400);
    line(880,410,880,400);

    line(810,500,870,500);
    line(870,500,880,490);
    line(880,490,880,460);
    line(880,460,870,450);
    line(870,450,820,450);
    line(820,450,810,460);


    getch();
    closegraph();
    return 0;
}

