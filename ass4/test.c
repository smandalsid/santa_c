#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
void func1(int a)
{
    sleep(a);
}

void func2(int b)
{
    sleep(b);
}

int main()
{
    int a, b;
    printf("Enter First function time in seconds:\n");
    scanf("%d", &a);
    printf("Enter Second function time in seconds:\n");
    scanf("%d", &b);
    printf("Calling function 1\n");
    time_t begin=time(NULL);
    func1(a);
    time_t end=time(NULL);
    int exectime;
    exectime=end-begin;
    printf("Calling function 2\n");
    begin=time(NULL);
    func2(b);
    end=time(NULL);
    exectime+=(end-begin);
    printf("Total execution time of two functions: %d\n", exectime);
    return 0;
}

