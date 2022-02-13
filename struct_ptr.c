#include <stdio.h>
#include <stdlib.h>

struct s
{
    char *name;
    int *roll;
    char *ch;
};

void salloc(struct s *obj)
{
    obj->name=(char*)malloc(12*sizeof(char));
    obj->roll=(int*)malloc(sizeof(int));
    obj->ch=(char*)malloc(sizeof(char));
}

union u
{
    char *fruit;
    int *num;
};

void ualloc(union u *obj)
{
    obj->fruit=(char*)malloc(sizeof(char));
    obj->num=(int*)malloc(sizeof(int));
}

int main()
{
    struct s *ptr;
    union u *ptr1;
    ptr = (struct s *)malloc(3*sizeof(struct s));
    ptr1 = (union u *)malloc(3*sizeof(union u));
    int i;

    for(i=0;i<3;i++)
    {
        salloc(ptr+i);
        ualloc(ptr1+i);
        printf("Enter:\n");
        scanf("%s", (ptr+i)->name);
        scanf("%d", (ptr+i)->roll);
        scanf(" %c", (ptr+i)->ch);
        if(*((ptr+i)->ch)=='f')
        {
            scanf("%s", (ptr1+i)->fruit);
        }
        else
        {
            scanf("%d", (ptr1+i)->num);
        }
        printf("value:\n");
        printf("%s\n", (ptr+i)->name);
        printf("%d\n", *((ptr+i)->roll));
        if(*((ptr+i)->ch)=='f')
            printf("%s\n", (ptr1+i)->fruit);
        else
            printf("%d\n", *((ptr1+i)->num));
    }



    return 0;
}