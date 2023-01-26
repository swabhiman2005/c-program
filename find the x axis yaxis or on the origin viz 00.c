#include<stdio.h>
int main()
{
int x,y;
printf("enter the x and y coordinates of a point");
scanf("%d%d",&x,&y);
if(x==0&&y==0)
printf("point lies on origin\n");
else if(x==0&&y!=0)
printf("point lies on Y axis\n");
else
if(x!=0&&y==0)
printf("point lies on X axis\n");
else
printf("point neither lies on any axis ,nor origin\n");
return 0;
}
