#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f;
    f=fopen("test.txt", "w");
    fprintf(f, "This is my second file.\n");
    fclose(f);
    return 0;
}