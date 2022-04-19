// #include<stdio.h>
// #include<stdlib.h>

// #ifndef a
//     #define a 10
// #endif

// #define message(a, b) \
//     printf("First pass: " #a "\nSecond pass: " #b "\n")

// #define testvar(n) \
//     printf("%d", token##n)

// int main()
// {
//     int token69=100;
//     testvar(69);
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>

#define x 3

#if !x
    printf("oh");
#else
    printf("lol");
#endif

int main()
{
    
    return 0;
}