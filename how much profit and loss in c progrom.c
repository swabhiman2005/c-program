#include<stdio.h>
int main()
{
float cp,sp,p,l;
printf("enter cost prise and selling prise");
scanf("%f%f",&cp,&sp);
p=sp-cp;
l=cp-sp;
if(p>0)
printf("the seller has made a profit of Rs.%f\n",p);
if(l>0)
printf("the seller is in loss by %Rs.%f\n",l);
if(p==0)
printf("there is no loss and no profit\n");
return 0;
}
