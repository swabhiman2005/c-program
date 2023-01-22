#include<stdio.h>
#include<string.h>
main()
{
int i,n,j;
char str[20],strev[20];
printf("enter the string \n");
gets(str);
n=strlen(str);
n=n-1;
j=0;
while(n>=0)
{
strev[j]=str[n];
n--;
j++;
}
str[j]='\0';
if(strcmp(str,strev)==0)
{printf("string is plaindrom\n");
}
else
{printf("not");
}
return 0;}
