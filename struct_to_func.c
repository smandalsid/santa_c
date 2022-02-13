#include<stdio.h>
#include<stdlib.h>

struct s
{
    int num;
    char str[10];
};

void print(struct s obj)
{
    printf("%d\n", obj.num);
    printf("%s\n", obj.str);
}

int main()
{
    struct s obj[2];
    printf("Enter:\n");
    for(int i=0;i<2;i++)
    {
        scanf("%d", &obj[i].num);
        scanf("%s", obj[i].str);
    }
    for(int i=0;i<2;i++)
    {
        print(obj[i]);
    }
    return 0;
}