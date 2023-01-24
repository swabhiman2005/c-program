#include<stdio.h>
int main()
{
int sum,n,digit;
printf("enter the number");
scanf("%d",&n);
sum=0;
while(n>0)
{
digit=n%10;
sum=sum+digit;
n=n/10;
}
printf("sum of digits %d",sum);
return 0;
}
