#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,r,c,a[10][10],sum;
printf("enter the rows and column of matrix");
scanf("%d%d",&r,&c);
if(r!=c)
{
printf("rows and column is not equal");
exit(0);
}
printf("enter the value of matrix A");
for(i=1;i<=r;i++)
{
for(j=1;j<=c;j++)
{
scanf("%d",&a[i][j]);
}
}
sum=0;
for(i=1;i<=r;i++)
{
for(j=1;j<=c;j++)
{
if(i==j)
{
sum=sum+a[i][j];
}
}
printf("sum=%d",sum);
}
return 0;
}
