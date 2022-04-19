#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    int choice;
    printf("Select option:\n");
    scanf("%d", &choice);
    printf("Enter the string\n");
    scanf("%s", str);
    // printf("Enter you choice:(1 to 4)\n");
    // printf("1. All capitals\n");
    // printf("2. Sentence form (Only first letter uppercase and all the others in lower case)\n");
    // printf("3. All lower case\n");
    // printf("4. Toggle case (If upper, convert it to lower and if lower convert it to upper)\n");

    printf("\nOutput: ");

    if (choice == 1)
    {
        for (int i = 0; i < strlen(str); i++)
        {
            printf("%c", toupper(str[i]));
        }
        printf("\n");
    }
    else if (choice == 2)
    {
        printf("%c", toupper(str[0]));
        for (int i = 1; i < strlen(str); i++)
        {
            printf("%c", tolower(str[i]));
        }
        printf("\n");
    }
    else if (choice == 3)
    {
        for (int i = 0; i < strlen(str); i++)
        {
            printf("%c", tolower(str[i]));
        }
        printf("\n");
    }
    else if (choice == 4)
    {
        for (int i = 0; i < strlen(str); i++)
        {
            if (isupper(str[i]))
            {
                printf("%c", tolower(str[i]));
            }
            else if (islower(str[i]))
            {
                printf("%c", toupper(str[i]));
            }
        }
    }
    return 0;
}