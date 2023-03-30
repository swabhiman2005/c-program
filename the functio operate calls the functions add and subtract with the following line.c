#include<stdio.h>
int add(int, int);
int sub(int , int);
int operate(int (*operate_fp) (int, int),int, int);
main()
{
    int result;
    result= operate(add, 9, 7);
    printf("\n addition =%d",result);
    result = operate(sub, 9,7);
    printf("\n subtraction =%d",result);
    return 0;
}
int add(int a, int b)
{
    return (a + b);
}
int sub(int a, int b)
{
    return (a - b);
}
int operate(int (*operate_fp) (int, int),int a, int b)
{
    int result;
    result = (*operate_fp) (a,b);
    return result;
}
