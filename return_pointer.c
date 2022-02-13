#include<stdio.h>
#include<stdlib.h>

void func(int *ptr)
{
    
}

int main()
{
    int *ptr;
    *ptr=10;
    func(ptr);
    printf("%d\n", *ptr);
    return 0;
}