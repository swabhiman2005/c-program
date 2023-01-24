#include<stdio.h>
#include<math.h>
int main()
{
int n,sum,digit,n1;
printf("enter the number");
scanf("%d",&n);
n1=n;
sum=0;
while(n>0)
{
digit=n%10;
sum=sum+pow(digit,3);
n=n/10;
}
if(n1==sum)
{
printf("the number of armstrong",n1);
}
else
{
printf("the number is not armstrong");
}
return 0;
}
