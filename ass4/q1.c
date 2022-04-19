#include <stdio.h>
#define MAX 90
int main()
{
#ifdef MAX // user of #ifdef
    printf("%d", MAX);
#else
    printf("MAX not defined");
#endif
    printf("\n");
#if MAX>100 // use of #if
    printf("Min not defined");
#else // use of #else
    printf("%d is lesser than 100\n", MAX);
#endif
    return 0;
}