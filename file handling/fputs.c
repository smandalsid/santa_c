#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f;
    f=fopen("test.txt", "a");
    fputs("Shobhit is a gandu\n", f);

    fclose(f);

    char line[100];
    f=fopen("test.txt", "r");
    printf("%s", fgets(line, 100, f));
    fclose(f);
    return 0;
}