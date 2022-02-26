// As we know that we can create a pointer of any data type such as int, char, float, we can also create a pointer pointing to a function. The code of a function always resides in memory, which means that the function has some address. We can get the address of memory by using the function pointer.

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     printf("Address of main function: %p", main);
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>

int add(int a, int b)
{
    return a+b;
}

int main()
{
    int a=10, b=20;
    int c, d, e;
    int (*ptr)(int, int);
    ptr=add;
    printf("%d  %d  %d\n", add(a,b), (*ptr)(a,b), ptr(a,b));
    return 0;
}