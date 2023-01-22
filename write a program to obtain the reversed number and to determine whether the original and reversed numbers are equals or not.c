#include<stdio.h>
int main()
{
int n,a,b,num;
int revnum=0;
printf("\n enter the five digit number");
scanf("%d",&n);
num=n;
a=n%10;
n=n/10;
revnum=revnum+a*10000L;
a=n%10;
n=n/10;
revnum=revnum+a*1000;
a=n%10;
n=n/10;
revnum=revnum+a*10;
a=n%10;
revnum=revnum+a;
if(revnum==num)
printf("given number & its reversed number are equal\n");
else
printf("given number & its reversed number are not equal\n");
return 0;
}
