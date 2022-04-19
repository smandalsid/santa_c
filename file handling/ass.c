#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *ptr;
    char word[50];
    if((ptr=fopen("file1.txt", "w"))==NULL)
    {
        printf("Error opening the file\n");
        return -1;
    }
    fprintf(ptr, "This is a file practice program.\n");
    fclose(ptr);
    ptr=fopen("file1.txt", "a");
    fprintf(ptr, "Further sentences have been appended.\n");
    fclose(ptr);
    printf("Whole output:\n");
    ptr=fopen("file1.txt", "r");
    while((fscanf(ptr, "%s", word))!=EOF)
    {
        printf("%s ", word);
    }
    fseek(ptr, 0, SEEK_SET);
    int counter=0;
    char c;
    printf("\nFirst 10 characters:\n");
    while(counter!=10)
    {
        c=fgetc(ptr);
        printf("%c", c);
        counter++;
    }
    fseek(ptr, 0, SEEK_SET);
    fscanf(ptr, "%s", word);
    printf("\nSingle word: %s\n", word);
    fclose(ptr);
    return 0;
}

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     FILE *ptr;
//     if((ptr=fopen("file1.dat", "wb+"))==NULL)
//     {
//         printf("Error opening the file\n");
//         return -1;
//     }
//     fprintf(ptr, "This is the second file program\n");
//     char line[100];
//     fseek(ptr, 0, SEEK_SET);
//     fgets(line, 100, ptr);
//     printf("%s", line);
//     fclose(ptr);
//     return 0;
// }