#include<stdio.h>
#include<stdlib.h>

int main()
{
    int val;
    fprintf(stdout, "HEHE\n");
    fscanf(stdin, "%d", &val);
    fprintf(stderr, "Error message");
    return 0;
}