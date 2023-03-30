#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
    int i,n;
    int *arr;
    printf("\n enter the number of elements");
    scanf("%d",&n);
    arr=(int*)malloc(n * sizeof (int));
    if(arr == NULL)
    {
        printf("\n Memory Allocation Failed");
        exit(0);
    }
    for(i=0; i<n; i++)
    {
        printf("\n enter the value %d of the array:",i);
        scanf("%d",&arr[i]);
    }
    printf("\n the array contain\n");
    for(i=0; i<n; i++)
    printf("%d",arr[i]);
    return 0;
}
