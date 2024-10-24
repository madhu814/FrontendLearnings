#include<stdio.h>
#include<conio.h>
#include<graphics.h>                                                    
void main()
{
int gd=DETECT,gmode;
initgraph(&gd,&gmode,”c:\\tc\\bgi”);
setcolor(YELLOW);
circle(300,300,100);
setcolor(RED);
arc(300,300,225,315,75);
setcolor(WHITE);
circle(246,270,20);
circle(354,270,20);
setcolor(BLUE);
circle(246,285,6);
circle(354,285,6);
getch();
closegraph();
}
