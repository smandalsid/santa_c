#include<stdio.h>
#include<stdlib.h>

struct s
{
    char *name;
    char *empid;
    char *phno;
};

void salloc(struct s *obj)
{
    obj->name=(char*)malloc(sizeof(char));
    obj->empid=(char*)malloc(sizeof(char));
    obj->phno=(char*)malloc(sizeof(char));
}

int main()
{
    struct s *users;
    users=(struct s*)malloc(3*sizeof(struct s));
    for(int i=0;i<3;i++)
    {
        salloc(users+i);
        printf("Name:\n");
        scanf("%s", (users+i)->name);
        printf("Employee id:\n");
        scanf("%s", (users+i)->empid);
        printf("Phone number:\n");
        scanf("%s", (users+i)->phno);
    }

    float count1;
    float count2;
    float count3;
    for(int i=0;i<3;i++)
    {
        count1=0;
        for (int j=0;j<sizeof((users+i)); j++)
        {
            if(*((users+i)->phno+j)!='\0')
            {
                count1++;
            }
        }
        count2=0;
        for (int j=0;j<sizeof((users+i)); j++)
        {
            if(*((users+i)->name+j)!='\0')
            {
                count2++;
            }
        }
        count3=0;
        for (int j=0;j<sizeof((users+i)); j++)
        {
            if(*((users+i)->empid+j)!='\0')
            {
                count3++;
            }
        }
        printf("Memory percentage of phone number: %.2f\n", (count1*100)/(count1+count2+count3));
    }

    return 0;
}