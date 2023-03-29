#include<stdio.h>
int main()
{
    int i,n,arr[20],sum=0;
    int *pn=&n,*parr=arr,*psum=&sum;
    float mean=0.0,*pmean=&mean;
    printf("\n enter the number of elements");
    scanf("%d",pn);
    for(i=0;i<*pn;i++)
    {
        printf("\n enter the number");
        scanf("%d",(parr + i));
    }
    for(i=0;i<*pn;i++)
        *psum += *(arr+i);
    *pmean = *psum / *pn;
    printf("\n the numbers you entered are");
    for(i=0;i<*pn;i++)
        printf("%d", *(arr + i));
        printf("\n the sum is : %d", *psum);
    printf("\n the mean is : %f", *pmean);
    return 0;
}
