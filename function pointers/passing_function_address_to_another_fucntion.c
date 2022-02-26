// #include<stdio.h>
// #include<stdlib.h>

// void display(int a, int b, void (*ptr)())
// {
//     (*ptr)(a, b);
// }

// void add(int a, int b)
// {
//     printf("%d", a+b);
// }

// int main()
// {
//     void (*ptr1)(int ,int, void (*)());
//     void (*ptr2)(int, int);
//     ptr1=display;
//     ptr2=add;
//     (*ptr1)(10,20, ptr2);
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void func1(char *str, void (*ptr)())
{
    (*ptr)(str);
    
}

void func2(char *str, void (*ptr)())
{
    (*ptr)(str);
}

void display(char *str)
{
    printf("Passed string: %s\n", str);
}

int main()
{
    char *str1, *str2;

    str1=(char *)malloc(sizeof(char));
    str2=(char *)malloc(sizeof(char));

    strcpy(str1, "String1");
    strcpy(str2, "String2");

    void (*ptr1)(char *, void (*)());
    void (*ptr2)(char *, void (*)());
    void (*ptr3)(char *);
    ptr1=func1;
    ptr2=func2;
    ptr3=display;
    (*ptr1)(str1, ptr3);
    (*ptr2)(str2, ptr3);

    return 0;
}