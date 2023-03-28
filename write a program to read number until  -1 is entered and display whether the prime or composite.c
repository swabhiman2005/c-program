#include<stdio.h>
int main()
{
    int num,*pnum = &num;
    int i,flag=0;
    printf("\n enter -1 to exit ");
    scanf("%d",pnum);
    while(*pnum != -1)
    {
        if(*pnum == 1)
            printf("\n %d is neiter prime nor composite",*pnum);
        else
            if(*pnum == 2)
            printf("\n %d is prime",*pnum);
        else
        {
            for(i=2;i<*pnum/2;i++)
            {
                if(*pnum/i==0)
                    flag=1;
            }
            if(flag == 0)
                printf("\n %d is prime",*pnum);
            else
                printf("\n %d is composite",*pnum);
        }
        printf("\n enter any number");
        scanf("%d",&pnum);
    }
    return 0;
}

