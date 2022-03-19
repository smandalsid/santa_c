#include<stdio.h>
#include<string.h>

int main()
{
    char *day;
    printf("enter the day:\n");
    day=(char *)malloc(9*sizeof(char));
    scanf("%s", day);
    int l;
    l=strlen(day);
    float *ar;
    ar=(float *)malloc(l*sizeof(float));
    for(int i=0;i<l;i++)
    {
        scanf("%f", ar+i);
    }
    for(int i=0;i<l;i++)
    {
        printf("%f", *(ar+i));
    }
    return 0;
}