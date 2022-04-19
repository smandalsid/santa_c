// #include<stdio.h>
// #include<stdlib.h>
// #include<error.h>

// int main(int argc, char *argv[])
// {
//     FILE *ptr1;
//     FILE *ptr2;
//     if((ptr1=fopen(argv[1], "r"))==NULL)
//     {
//         printf("File 1 not found\n");
//         exit(EXIT_FAILURE);
//     }
//     if((ptr2=fopen(argv[2], "a"))==NULL)
//     {
//         printf("Failed to create file 2\n");
//         exit(EXIT_FAILURE);
//     }
//     char c;
//     while((c=fgetc(ptr1))!=EOF)
//     {
//         fputc(c, ptr2);
//     }
//     fclose(ptr1);
//     fclose(ptr2);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<error.h>

// int main(int argc, char *argv[])
// {
//     FILE *ptr;
//     ptr=fopen(argv[1], "r");
//     char c;
//     while((c=fgetc(ptr))!=EOF)
//     {
//         printf("%c", c);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// struct s
// {
//     int a;
// };

// int main()
// {
//     FILE *ptr;
//     ptr=fopen("test1.txt", "r");
//     struct s *obj;
//     obj=(struct s*)malloc(sizeof(struct s));
//     // for(int i=0;i<2;i++)
//     // {
//     //     obj[i].a=(i+1)*10;
//     // }
//     for(int i=0;i<2;i++)
//     {
//         // fwrite(obj+i, sizeof(struct s), 1, ptr);
//         fread(obj, sizeof(struct s), 1, ptr);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     printf("HOMEPATH : %s\n", getenv("HOMEPATH"));
//     printf("HOMEDRIVE : %s\n", getenv("HOMEDRIVE"));
//     printf("OS : %s\n", getenv("OS"));

//     return (0);
// }

// #include<stdio.h>
// #include<stdlib.h>

// // #define check(x) {\
    

// // }

// int main()
// {
//     char c;
//     printf("Enter character:\n");
//     scanf("%c", &c);
//     #if isdigit(c)
//         printf("Digit\n");
//     #else
//         printf("Not a digit\n");
//     #endif
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// struct emp
// {
//     char name[100];
//     int age;
//     // char id[10];
//     // char department[100];
//     // char city[20];
// };

// int main()
// {
//     FILE *ptr;
//     if((ptr=fopen("test1.txt", "r"))==NULL)
//     {
//         printf("ERROR");
//     }

//     int i;
//     struct emp *e;
//     e=(struct emp*)malloc(sizeof(struct emp));
//     // for(i=0;i<2;i++)
//     // {
//     //     printf("Enter name:\n");
//     //     scanf("%s", e[i].name);
//     //     printf("Enter age:\n");
//     //     scanf("%d", &e[i].age);
//     //     fwrite(e+i, sizeof(struct emp), 1, ptr);
//     // }

//     while(fread(e, sizeof(struct emp), 1, ptr))
//     {
//         printf("%s %d\n", e->name, e->age);
//     }

//     fclose(ptr);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     char name[100];
//     char regno[10];
//     char gender;
//     // char programme[20];
//     // char special[100];
//     // char city[20];
//     FILE *ptr;
//     if((ptr=fopen("test1.txt", "a"))==NULL)
//     {
//         printf("Error");
//     }
//     printf("Enter:\n");
//     scanf("%s", name);
//     printf("Enter:\n");
//     scanf("%s", regno);
//     printf("Enter:\n");
//     scanf(" %c", &gender);

//     fprintf(ptr, "Name: %s\n", name);
//     fprintf(ptr, "Registration number: %s\n", regno);
//     fprintf(ptr, "Gender: %c\n", gender);

//     fclose(ptr);
    
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// struct acc
// {
//     int bal;
// };

// struct acc deposit(struct acc obj, int x)
// {
//     obj.bal+=x;
//     return obj;
// }

// struct acc withdraw(struct acc obj, int x)
// {
//     if (obj.bal-x>0)
//     {
//         obj.bal-=x;

//     }
//     else
//     {
//         printf("Not enough money\n");
//     }
//     return obj;
// }

// int main()
// {
//     struct acc a;
//     a.bal=0;
//     printf("Enter amount to deposit:\n");
//     int x;
//     scanf("%d", &x);
//     a=deposit(a, x);
//     printf("New balance: %d\n", a.bal);
//     printf("Enter amount to withdraw:\n");
//     scanf("%d", &x);
//     a=withdraw(a, x);
//     printf("New balance: %d\n", a.bal);

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// struct 

// int main()
// {
    
//     return 0;
// }

#include<stdio.h>

int main()

{

    float i=10, *j;

    void *k;

    k=&i;

    j=k;

    printf("%f\n", *j);

    return 0;

}