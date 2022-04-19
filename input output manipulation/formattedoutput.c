#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b;
    float c,d;
    a=15;
    b=a/2;
    printf("%d\n", b);
    printf("%3d\n",b);
    printf("%03d\n",b);
    c=1556.3;
    d=c/2;
    fprintf(stdout, "%6.3f\n", d);
    return 0;
}