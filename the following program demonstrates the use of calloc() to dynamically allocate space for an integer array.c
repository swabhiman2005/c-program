#include<stdio.h>
#include<stdlib.h>
main()
{
    int i,n;
    int *arr;
    printf("\n enter the number of element");
    scanf("%d",&n);
    arr = (int*)calloc(n,sizeof (int));
    if(arr == NULL)
    exit(1);
    printf("\n enter the %d values to be stored in the array",n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("\n you have entered:");
    for(i=0; i<n; i++)
        printf("%d",arr[i]);
    free(arr);
    return 0;
}
