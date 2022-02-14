// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
//     char *day;
//     day=(char *)malloc(sizeof(char));
//     scanf("%s", day);
//     char c=*day;
//     // int l=strlen(day);
//     int *l=(int*)malloc(sizeof(int));
//     scanf("%d", l);
//     char **ar;
//     ar=(char **)malloc(*l*sizeof(char *));
//     for(int i=0;i<*l;i++)
//     {
//         *(ar+i)=(char*)malloc(10*sizeof(char));

//     }
    
//     // for(int i=0;i<l;i++)
//     // {
//         // c=*(day+i);
//         // printf("Enter string starting with: %c\n", c);
//         // scanf("%s", *(ar+i));
//         // while(**(ar+i)!=c)
//         // {
//         //     printf("Enter again:\n");
//         //     scanf("%s", *(ar+i));
//         // }
//     // }
//     printf("\nString:\n");
//     for(int i=0;i<*l;i++)
//     {
//         printf("%s\n", *(ar+i));
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// struct sub
// {
//     char *sub;
//     int *cred;
// };

// void func(struct sub s)
// {
//     s.sub=(char*)malloc(10*sizeof(char));
//     s.cred=(int*)malloc(sizeof(int));
// }

// int main()
// {
//     char *name=(char *)malloc(10*sizeof(char));
//     char *ch=(char *)malloc(3*sizeof(char));
//     scanf("%s", name);
//     scanf("%s", ch);
//     int *n;
//     if(strcmp(ch,"yes")==0)
//     {
//         n=(int*)malloc(sizeof(int));
//         scanf("%d", n);
//         struct sub *s;
//         s=(struct sub *)malloc(sizeof(struct sub));
//         for(int i=0;i<*n;i++)
//         {
//             func(*(s+i));
//             scanf("%s", (s+i)->sub);
//             scanf("%d", (s+i)->cred);
//         }
//         int *tot;
//         tot=(int*)calloc(1, sizeof(int));
//         for(int i=0;i<*n;i++)
//         {
//             *tot+=*(s+i)->cred;
//         }
//         printf("%d\n", *tot);
//     }
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>

union u
{
    int *a;
    char *b;
};

void ualloc(union u *ptr)
{
    ptr->a=(int*)malloc(sizeof(int));
    ptr->b=(char*)malloc(sizeof(char));
}

int main()
{
    union u *obj;

    obj=(union u*)malloc(sizeof(union u));
    ualloc(obj);

    *obj->a=65;
    printf("%d\n", *obj->a);
    printf("%c\n", *obj->b);

    return 0;
}