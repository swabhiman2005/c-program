#include<stdio.h>
int main()
{
int r,c,i,j,a[10][10],b[10][10],d[10][10];
printf("enter the row and column of matrix \n");
scanf("%d%d",&r,&c);
printf("enter the value of A \n");
for(i=1;i<=r;i++)
{
for(j=1;j<=c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the value of B");
for(i=1;i<=r;i++)
{
for(j=1;j<=c;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=1;i<=r;i++)
{
for(j=1;j<=c;j++)
{
d[i][j]=a[i][j]+b[i][j];
}
}
for(i=1;i<=r;i++)
{
for(j=1;j<=c;j++)
{
printf("\t%d",d[i][j]);
}
printf("\n");
}
return 0;
}
