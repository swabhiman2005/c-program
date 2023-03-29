#include<stdio.h>
int main()
{
    int i,n,arr[20],large=-1111,pos=0;
    int *pn=&n, *parr = arr, *plarge = &large, *ppos=&pos;
    printf("\n enter the number of elements in the arrray");
    scanf("%d",pn);
    for(i=0; i<*pn; i++)
    {
        printf("\n enter the number");
        scanf("%d",parr+i);
    }
    for(i=0;i<*pn;i++)
    {
        if(*(parr+i) > *plarge)
        {
            *plarge = *(parr+i);
            *ppos=i;
        }
    }
    printf("\n the numbers you entered are");
    for(i=0; i<*pn; i++)
        printf("%d",*(parr+i));
    printf("\n the largest of these numbers is : %d",*plarge);
    printf("\n the position of the largest number in the array is: %d",*ppos);
    return 0;
}
