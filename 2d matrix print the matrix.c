#include<stdio.h>
int main ()
{
int i,j,r,c,a[10][21];

printf ("enter the row and column\n");
scanf ("%d%d",&r,&c);
printf ("enter the matrix\n");

for (i=0;i<r;i++)
  {
  for(j=0;j<c;j++)
   {
   scanf("%d",&a[r][c]);
   }
  }
 printf ("output\n");
   for (i=0;i<r;i++);
   {
   for (j=0;j<c;j++)
   {
   printf("\t%d",a[r][c]);
   }
   printf("\n");
   }
   }


