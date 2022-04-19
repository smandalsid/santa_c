#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[], char *envp[])
{
    int i;

    printf("File name: %s\n", argv[0]);
    for (int i=0;envp[i]!=NULL;i++)    
    {
        printf("%s\n", envp[i]);
    }
    return 0;
}