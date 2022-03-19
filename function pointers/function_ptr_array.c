#include<stdio.h>
#include<stdlib.h>

int add(int a,int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

int mul(int a, int b)
{
    return a*b;
}

int division(int a, int b)
{
    return a/b;
}

int main()
{
    int (*ptr[4])(int, int);
    ptr[0]=add;
    ptr[1]=sub;
    ptr[2]=mul;
    ptr[3]=division;

    printf("%d\n", (*ptr[0])(20,10));
    printf("%d\n", (*ptr[1])(20,10));
    printf("%d\n", (*ptr[2])(20,10));
    printf("%d\n", (*ptr[3])(20,10));

    return 0;
}