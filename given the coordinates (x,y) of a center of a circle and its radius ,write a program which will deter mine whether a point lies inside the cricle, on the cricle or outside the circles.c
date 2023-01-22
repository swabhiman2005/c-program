#include<stdio.h>
int main()
{
int x,y,r;
int dis,d;
printf("enter the radius of circle and coordinates of point (x,y)");
scanf("%d%d%d",&r,&x,&y);
dis=x*x+y*y;
d=r*r;
if(dis==d)
printf("point is on the circle \n");
else
{
if(dis>d)
printf("point is outside the circle\n");
else
printf("point is inside the circle\n");
}
return 0;
}
