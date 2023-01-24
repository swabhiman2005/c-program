#include<stdio.h>
int main()
{
int digit,rev,n,n1;
printf("enter the number");
scanf("%d",&n);
rev=0;
n1=n;
while(n>0)
{
digit=n%10;
rev=rev*10+digit;
n=n/10;
}
if(rev==n1)
{
printf("the number is plaindrom",rev);
}
else
{
printf("the number is not plaindrom");
}
return 0;
}
