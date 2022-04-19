#include<stdio.h>
#include<stdlib.h>
#include<errno.h>


int main()
{
    FILE *f;
    f=fopen("kuchbhi.txt", "w");
    printf("Error: %d\n", errno);
    fclose(f);
    return 0;
}