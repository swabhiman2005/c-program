#include<stdio.h>
float (*func) (float, float);
float add(float,float);
float sub(float,float);
main()
{
    func = add;
    printf("\n addition = %f", func(9.5,3.1));
    func = sub;
    printf("\n subtracion = %f",func(9.5,3.1));
}
float add(float x,float y)
{
    return (x+y);
}
float sub(float x,float y)
{
    return (x-y);
}
