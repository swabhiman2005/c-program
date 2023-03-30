#include<stdio.h>
int sum(int a, int b);
int subtract(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int (*fp[4]) (int a, int b);
int main(void)
{
    int result;
    int num1, num2, op;
    fp[0] = sum;
    fp[1] = subtract;
    fp[2] = mul;
    fp[3] = div;
    printf("\n enter the number");
    scanf("%d %d",&num1, &num2);
    do
    {
        printf("\n 0: add\n 1:subtract \n 2:multply \n 3:divide \n 4:exit \n");
        printf("\n \n enter the operation:");
        scanf("%d", &op);
        result = (*fp[op]) (num1, num2);
        printf("\n result = %d", result);
    }while(op!=4);
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    if(b)
        return a/b;
    else
        return 0;
}
