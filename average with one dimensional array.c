#include<stdio.h>
int main()
{
int i,n,a[200],sum=0;
float avg;
printf("enter the total number");
scanf("%d",&n);
printf("enter the number\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
sum=sum+a[i];
}
avg=sum/n;
printf("value of average=%f",avg);
return 0;
}
