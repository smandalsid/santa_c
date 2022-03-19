#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *p;
    char s[100];
    p=fopen("test.txt", "r");
    while(fscanf(p, "%s", s)!=EOF)
    {
        printf("%s", s);
    }
    return 0;
}