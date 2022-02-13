#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *n;
    n=(int*)malloc(sizeof(int));
    printf("Enter length of name:\n");
    scanf("%d", n);

    char *word;
    word=(char *)malloc(sizeof(char));
    for (int i=0;i<*n;i++)
    {
        printf("Please enter next letter:\n");
        scanf(" %c", (word+i));
    }

    printf("%s\n", word);
    return 0;
}