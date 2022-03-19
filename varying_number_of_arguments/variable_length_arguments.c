#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

int min(int arg_count, ...)
{
    int min, a;
    va_list ap;
    va_start(ap, arg_count);
    min=va_arg(ap, int);

    for(int i=2;i<=arg_count;i++)
    {
        if((a=va_arg(ap, int))<min)
        {
            min=a;
        }
    }

    va_end(ap);

    return min;
}

int main()
{
    printf("Minimum from the values: %d", min(5, 1, 2, 3, 4,5));
    return 0;
}