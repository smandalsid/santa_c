#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *n;
    n=(int*)malloc(sizeof(int));
    // printf("Enter number of names:");
    scanf("%d", n);
    // printf("size of each frame:");
    int *ar;
    ar=(int*)malloc(*n*sizeof(int));
    for(int i=0;i<*n;i++)
    {
        scanf("%d", (ar+i));
    }
    char **ptr;
    ptr=(char**)malloc(*n*sizeof(char*));
    // printf("Enter the names:\n");
    for(int i=0;i<*n;i++)
    {
        *(ptr+i)=(char*)malloc(*(ar+i)*sizeof(char));
        scanf("%s", *(ptr+i));
    }
    printf("The strings stored:\n");
    for(int i=0;i<*n;i++)
    {
        printf("%s\n", *(ptr+i));
    }
    return 0;
}