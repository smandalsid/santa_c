#include<stdio.h>
#include<stdlib.h>

#define macro(x, message) printf("%d is %s", x, message)

int main()
{
    macro(10, "even");
    return 0;
}