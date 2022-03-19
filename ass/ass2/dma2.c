#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *first;
    char *middle;
    char *last;
    char *ch;

    ch=(char *)malloc(3*sizeof(char));
    printf("Do you have a middle name?\n");
    scanf("%s", ch);
    
    printf("Enter your name\n");
    first=(char *)malloc(8*sizeof(char));
    last=(char *)malloc(8*sizeof(char));
    scanf("%s", first);
    if(strcmp(ch,"Yes")==0)
    {
        middle=(char*)malloc(8*sizeof(char));
        scanf("%s", middle);
    }
    scanf("%s", last);
    printf("%s\n", first);
    if(strcmp(ch,"Yes")==0)
    {
        printf("%s\n", middle);
    }
    printf("%s\n", last);
    // free(first);
    // free(middle);
    // free(last);
    return 0;
}