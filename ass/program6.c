#include<stdio.h>

int func(int n)
{
    if(n%6==0 && n%5==0)
    {
        printf("The number is divisible by both 5 and 6\n");
        return n*10;
    }
    else if(n%6==0)
    {
        printf("Thr number is divisible by 6\n");
        return n*5;
    }
    else if(n%5==0)
    {
        printf("The number is divisible by 5\n");
        return n*6;
    }
}

int main()
{
    
    int n;
    scanf("%d", &n);
    
    printf("%d\n", func(n));
    
    return 0;
}