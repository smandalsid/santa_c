#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char *name;
    char *vaccine;
    char *number;
    
    name=(char *)malloc(10*sizeof(char));
    vaccine=(char*)malloc(3*sizeof(char));
    printf("Enter you name:\n");
    scanf("%s", name);
    scanf("%s", vaccine);
    printf("are you Vaccinated?\n");
    if(strcmp(vaccine,"yes")==0)
    {
        number=(char *)malloc(6*sizeof(char));
        scanf("%s", number);
    }
    printf("%s\n", name);
    printf("%s\n", vaccine);
    if(strcmp(vaccine,"Yes")==0)
    {
        printf("you are vaccinated\n");
    }
    else
    {
        printf("you are not vaccinated\n");
    }
    free(name);
    free(vaccine);
    free(number);
    return 0;
}