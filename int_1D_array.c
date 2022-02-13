
// 1D int array

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *n;
    n=(int*)malloc(sizeof(int));
    printf("Enter number of integers:\n");
    scanf("%d", n);
    int *ar;
    ar=(int*)malloc(sizeof(int));
    int i;
    for (i=0;i<*n;i++)
    {
        scanf("%d", (ar+i));
    }

    printf("ARRAY:\n");
    for(i=0;i<*n;i++)
    {
        printf("%d ", *(ar+i));
    }
    return 0;
}