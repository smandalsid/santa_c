#include<stdio.h>
#include<stdlib.h>

struct 
{
    unsigned int age : 3;
} Age;


int main()
{
    printf("Enter age:\n");
    scanf("%d", Age.age);
    printf("%d", Age.age);
    return 0;
}