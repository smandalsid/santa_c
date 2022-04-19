#include<stdio.h>
#include<stdlib.h>

struct student
{
    char name[100];
    char regno[20];
    float sub1;
    float sub2;
    float sub3;
    float sub4;
    float sub5;
};


int main()
{
    // program to hangdle records of 50 students.

    struct student s[50];
    printf("Enter the number of students:\n");
    int n;
    scanf("%d", &n);
    printf("Enter the records of %d students:\n", n);
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter name of student %d:\n", i);
        scanf("%s", s[i].name);
        printf("Enter registration number of student %d:\n", i);
        scanf("%s", s[i].regno);
        printf("Subject 1:\n");
        scanf("%f", &s[i].sub1);
        printf("Subject 2:\n");
        scanf("%f", &s[i].sub2);
        printf("Subject 3:\n");
        scanf("%f", &s[i].sub3);
        printf("Subject 4:\n");
        scanf("%f", &s[i].sub4);
        printf("Subject 5:\n");
        scanf("%f", &s[i].sub5);
    }
    int max1, max2, max3, max4, max5;
    max1=s[0].sub1;
    max2=s[0].sub2;
    max3=s[0].sub3;
    max4=s[0].sub4;
    max5=s[0].sub5;
    for(i=1;i<n;i++)
    {
        if(max1<s[i].sub1)
        {
            max1=s[i].sub1;
        }
        if(max2<s[i].sub2)
        {
            max2=s[i].sub2;
        }
        if(max3<s[i].sub3)
        {
            max3=s[i].sub3;
        }
        if(max4<s[i].sub4)
        {
            max4=s[i].sub4;
        }
        if(max5<s[i].sub5)
        {
            max5=s[i].sub5;
        }
    }

    int ar1[5], ar2[5], ar3[5], ar4[5], ar5[5];
    int pos1=0, pos2=0, pos3=0, pos4=0, pos5=0;

    for(i=0;i<n;i++)
    {
        if(max1==s[i].sub1)
        {
            ar1[pos1++]=i;
        }
        if(max2==s[i].sub2)
        {
            ar2[pos2++]=i;
        }
        if(max3==s[i].sub3)
        {
            ar3[pos3++]=i;
        }
        if(max4==s[i].sub4)
        {
            ar4[pos4++]=i;
        }
        if(max5==s[i].sub5)
        {
            ar5[pos5++]=i;
        }
    }

    printf("\n\nHighest marks in every subject with student details:\n\n");

    printf("The highest marks in subject 1 is: %d\n", max1);
    printf("Details of students:\n");
    for(i=0;i<pos1;i++)
    {
        printf("Name: %s\n", s[ar1[i]].name);
        printf("Registration number: %s\n", s[ar1[i]].regno);
    }
    printf("\nThe highest marks in subject 2 is: %d\n", max2);
    for(i=0;i<pos2;i++)
    {
        printf("Name: %s\n", s[ar2[i]].name);
        printf("Registration number: %s\n", s[ar2[i]].regno);
    }
    printf("\nThe highest marks in subject 3 is: %d\n", max3);
    for(i=0;i<pos3;i++)
    {
        printf("Name: %s\n", s[ar3[i]].name);
        printf("Registration number: %s\n", s[ar3[i]].regno);
    }
    printf("\nThe highest marks in subject 4 is: %d\n", max4);
    for(i=0;i<pos4;i++)
    {
        printf("Name: %s\n", s[ar4[i]].name);
        printf("Registration number: %s\n", s[ar4[i]].regno);
    }
    printf("\nThe highest marks in subject 5 is: %d\n", max5);
    for(i=0;i<pos5;i++)
    {
        printf("Name: %s\n", s[ar5[i]].name);
        printf("Registration number: %s\n", s[ar5[i]].regno);
    }
        
    
    return 0;
}