#include<graphics.h>
main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int x= getmaxx()/2;
    int y= getmaxy()/2;
    circle(x,y,50);
    circle(x,y,30);
    circle(x,y,70);
    circle(x,y,10);
    circle(x,y,90);
    getch();
    closegraph();
}

