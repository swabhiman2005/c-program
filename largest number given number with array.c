#include<stdio.h>
int main()
{
int i,n,large,a[50];
printf("enter the total number");
scanf("%d",&n);
printf("enter the number\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
large=a[0];
for(i=0;i<n;i++)
{
if(large<a[i])
{
large=a[i];
}
}
printf("largest no is %d",large);
return 0;
}
