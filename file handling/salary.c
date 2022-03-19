#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f;
    // char name[100];
    // float salary;
    // char id[10];
    // f=fopen("emp.txt", "w+");
    // printf("Enter name:\n");
    // scanf("%s", name);
    // printf("Enter salary:\n");
    // scanf("%f", &salary);
    // printf("Enter id:\n");
    // scanf("%s", id);

    // fprintf(f, "%s\n", name);
    // fprintf(f, "%f\n", salary);
    // fprintf(f, "%s\n", id);

    // READING THE FILE

    f=fopen("emp.txt", "r");
    char var[100];

    while(fscanf(f, "%s", var)!=EOF)
    {
        printf("%s\n", var);
    }
    fclose(f);
    return 0;
}