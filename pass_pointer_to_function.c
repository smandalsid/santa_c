#include<stdio.h>
#include<stdlib.h>

void func(int *ar)
{
    for(int i=0;i<10;i++)
    {
        printf("%d ", *(ar+i));
    }
}

int main()
{
    int *ar;
    ar=(int*)malloc(10*sizeof(int));

    for(int i=0;i<10;i++)
    {
        *(ar+i)=i;
    }
    func(ar);
    return 0;
}