#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f;
    f=fopen("test.txt", "r");
    printf("%ld\n", ftell(f));
    fseek(f, 10, SEEK_SET);
    printf("%ld\n", ftell(f));

    char c;
    while((c=fgetc(f))!=EOF)
    {
        printf("%c", c);
    }

    fclose(f);
    return 0;
}