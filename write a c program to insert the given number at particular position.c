#include<stdio.h>
int main()
{
int i,n,a[20],pos,value;
printf("enter the total number\n");
scanf("%d",&n);
//printf("enter the position and number");
//scanf("%d%d",&pos,&value);
printf("enter the value");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the position and number");
scanf("%d%d",&pos,&value);
for(i=n;i>(pos-1);i--)
{
a[i]=a[i-1];
}
a[pos-1]=value;
for(i=0;i<=n;i++)
printf("\n a[%d]=%d",i,a[i]);
return 0;
}
