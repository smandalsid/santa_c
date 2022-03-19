#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f;
    char c;

    printf("Enter a character:\n");
    scanf("%c", &c);

    f=fopen("test.txt", "w");
    fputc(c, f);
    fclose(f);

    f=fopen("test.txt", "r");
    while((c=fgetc(f))!=EOF)
    {
        printf("%c\n", c);
    }
    fclose(f);

    return 0;
}