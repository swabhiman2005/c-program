#include<stdio.h>
int main()
{
float angle1,angle2,angle3;
printf("enter the angle of the triangle");
scanf("%f%f%f",&angle1,&angle2,&angle3);
if((angle1+angle2+angle3)==180)
printf("the triangle is a valid triangle\n");
else
printf("the triangle is an invalid triangle \n");
return 0;
}
