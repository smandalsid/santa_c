#include<stdio.h>
#include<stdlib.h>

enum day {monday, tuesday, wednesday, thursday, friday, saturday, sunday};
enum day1 {monday1=10, tuesday1, wednesday1, thursday1=20, friday1, saturday1, sunday1};

int main()
{
    printf("%d\n%d\n", wednesday, thursday);
    printf("%d\n%d\n", wednesday1, thursday1);
    return 0;
}