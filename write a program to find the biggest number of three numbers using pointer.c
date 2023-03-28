#include<stdio.h>
int main()
{
    int num1,num2,num3;
    int *pnum1=&num1,*pnum2=&num1,*pnum3=&num3;
    printf("\n enter the first number");
    scanf("%d",pnum1);
    printf("\n enter the second number");
    scanf("%d",pnum2);
    printf("\n enter the third number");
    scanf("%d",pnum3);
    if(*pnum1 > *pnum2 && *pnum1 > *pnum3)
        printf("\n %d is the largest number",*pnum1);
    if (*pnum2 > *pnum1 && *pnum2 > *pnum3)
        printf("\n %d is the largest number",*pnum2);
    else
        printf("\n %d is the largest number",*pnum3);
    return 0;
}
