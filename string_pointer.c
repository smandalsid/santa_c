#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *word;
    // int *n;
    // n=(int*)malloc(sizeof(int));
    word=(char *)malloc(sizeof(char));
    printf("Enter word:\n");
    scanf("%s", word);
    printf("Entered word:\n");
    printf("%s\n", word);
    return 0;
}