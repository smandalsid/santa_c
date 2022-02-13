#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *n;
    n=(int*)malloc(sizeof(int));
    printf("Enter number n:\n");
    scanf("%d", n);
    int i, j;
    int **ar;
    ar=(int**)malloc(sizeof(int*));
    for(i=0;i<*n;i++)
    {
        *(ar+i)=(int *)malloc(sizeof(int));
        for(j=0;j<*n;j++)
        {
            // *(*(ar+i)+j)
            scanf("%d", (*(ar+i)+j));
        }
    }

    printf("Array:\n");
    for(i=0;i<*n;i++)
    {
        for(j=0;j<*n;j++)
        {
            printf("%d ", *(*(ar+i)+j));
        }
        printf("\n");
    }
    return 0;
}