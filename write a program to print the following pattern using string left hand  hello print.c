#include<stdio.h>
#include<conio.h>
main ()
{
    int i,w,p;
    char str[] = "hello";
    printf("\n");
    for(i=0;i<=5;i++)
    {
        p = i+1;
        printf("\n %-5.*s",p,str);
    }
    for(i=5;i>=0;i--)
    {
        p = i+1;
        printf("\n %-5.*s",p,str);
    }
    getch ();
    return 0;
}
