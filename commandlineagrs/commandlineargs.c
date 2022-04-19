#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    // for(int i=0;i<argc;i++)
    // {
    //     printf("%s\n", argv[i]);
    // }

    printf("%d\n", atoi(argv[1])+atoi(argv[2]));
    return 0;
}