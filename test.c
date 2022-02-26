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

// #include<stdio.h>
// #include<stdlib.h>

// union u
// {
//     int *a;
//     char *b;
// };

// void ualloc(union u *ptr)
// {
//     ptr->a=(int*)malloc(sizeof(int));
//     ptr->b=(char*)malloc(sizeof(char));
// }

// int main()
// {
//     union u *obj;

//     obj=(union u*)malloc(sizeof(union u));
//     ualloc(obj);

//     *obj->a=65;
//     printf("%d\n", *obj->a);
//     printf("%c\n", *obj->b);

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// struct s
// {
//     char *name;
//     char *empid;
//     char *phno;
// };

// void salloc(struct s *obj)
// {
//     obj->name=(char*)malloc(sizeof(char));
//     obj->empid=(char*)malloc(sizeof(char));
//     obj->phno=(char*)malloc(sizeof(char));
// }

// int main()
// {
//     struct s *users;
//     users=(struct s*)malloc(3*sizeof(struct s));
//     for(int i=0;i<3;i++)
//     {
//         salloc(users+i);
//         printf("Name:\n");
//         scanf("%s", (users+i)->name);
//         printf("Employee id:\n");
//         scanf("%s", (users+i)->empid);
//         printf("Phone number:\n");
//         scanf("%s", (users+i)->phno);
//     }

//     float count1;
//     float count2;
//     float count3;
//     for(int i=0;i<3;i++)
//     {
//         count1=0;
//         for (int j=0;j<sizeof((users+i)); j++)
//         {
//             if(*((users+i)->phno+j)!='\0')
//             {
//                 count1++;
//             }
//         }
//         count2=0;
//         for (int j=0;j<sizeof((users+i)); j++)
//         {
//             if(*((users+i)->name+j)!='\0')
//             {
//                 count2++;
//             }
//         }
//         count3=0;
//         for (int j=0;j<sizeof((users+i)); j++)
//         {
//             if(*((users+i)->empid+j)!='\0')
//             {
//                 count3++;
//             }
//         }
//         printf("Memory percentage of phone number: %.2f\n", (count1*100)/(count1+count2+count3));
//     }

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int n;
//     printf("Enter n:\n");
//     scanf("%d", &n);
//     int ar[n+1];
//     int i;
//     printf("Enter the numbers:\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     int val;
//     printf("Enter number to insert:\n");
//     scanf("%d", &val);
//     int mid=n/2, shifts;
//     printf("Shifting the values");
//     for(i=n+1;i>=mid;i--)
//     {
//         ar[i]=ar[i-1];
//         if(i!=mid)
//         ar[i-1]=-1;
//         for(int j=0;j<n+1;j++)
//         {
//             printf("%d ", ar[j]);
//         }
//         printf("\n");
//     }
//     ar[mid]=val;
//     printf("After inserting:\n");
//     for(i=0;i<n+1;i++)
//     {
//         printf("%d ", ar[i]);
//     }
//     printf("\n");
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *newnode(int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int main()
{
    struct node *head;
    struct node *tail;
    struct node *ptr;

    int n, temp, i;
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        if (head == NULL)
        {
            head = newnode(temp);
            tail = head;
        }
        else
        {
            ptr = newnode(temp);
            tail->next = ptr;
            tail = ptr;
        }
    }
    printf("Entered values in linked list:\n");
    for (ptr = head; ptr != NULL; ptr = ptr->next)
    {
        if (ptr->next != NULL)
            printf("%d->", ptr->data);
        else
            printf("%d\n", ptr->data);
    }
    int val;
    printf("Enter value to insert:\n");
    scanf("%d", &val);
    tail->next = newnode(-1);
    tail = tail->next;

    int mid = n / 2;
    int count = 0;
    ptr = head;
    while (count != mid)
    {
        ptr = ptr->next;
        count++;
    }
    temp = ptr->data;
    ptr->data = val;
    // middlenode=ptr;

    printf("The value inserted in the middle:\n");
    ptr = head;
    while (ptr->next != NULL)
    {
        if (ptr->next->data != -1)
            printf("%d->", ptr->data);
        else
            printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("Previously stored element is stored in temp: %d\n", temp);
    ptr = head;
    count = 0;
    while (count != mid)
    {
        ptr = ptr->next;
        count++;
    }
    ptr = ptr->next;
    // printf("%d\n", ptr->data);

    while (ptr != NULL)
    {
        int temp2 = ptr->data;
        ptr->data = temp;
        temp = temp2;
        ptr = ptr->next;
        tail = head;
        while (tail != NULL)
        {
            if (tail->next != NULL)
                printf("%d->", tail->data);
            else
                printf("%d\n", tail->data);
            tail = tail->next;
        }
    }
    printf("New linked list:\n");
    ptr = head;
    while (ptr != NULL)
    {
        if (ptr->next != NULL)
            printf("%d->", ptr->data);
        else
            printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}