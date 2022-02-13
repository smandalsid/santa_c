#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *str;
    str=(char*)malloc(10*sizeof(char));
    scanf("%s", str);
    printf("%s", *str);
    return 0;
}