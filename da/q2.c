#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_SIZE 100
char stack[MAX_SIZE]; // stack to store the paranthesis
int top=-1;

void push(char val) // push paranthesis in the stack
{
    stack[++top]=val;
}

void pop() // pop paranthesis from the stack
{
    top--;
}

void display() // display elements of the stack
{
    printf("Stack is:\n");
    for(int i=0;i<=top;i++)
    {
        printf("%c  ", stack[i]);
    }
    printf("\n");
}

int main()
{
    char code[200];
    printf("Enter you code:\n"); // get code from the user
    fgets(code, 200, stdin);
    int len;
    len=strlen(code); // length of the code
    for(int i=0;i<len;i++)
    {
        if(code[i]=='{')
        {
            push('{'); // push and display
            display();
        }
        if(code[i]=='[')
        {
            push('['); // push and display
            display();
        }
        if(code[i]=='(')
        {
            push('('); // push and display
            display();
        }
        if(code[i]=='}' && stack[top]=='{')
        {
            pop(); // pop and display
            display();
        }
        else if(code[i]=='}' && stack[top]!='{')
        {
            printf("Paranthesis is not balanced\n"); // when closing paranthesis is missing
            return -1;
        }
        if(code[i]==']' && stack[top]=='[')
        {
            pop(); // pop and display
            display();
        }
        else if(code[i]==']' && stack[top]!='[')
        {
            printf("Paranthesis is not balanced\n"); // when closing paranthesis is missing
            return -1;
        }
        if(code[i]==')' && stack[top]=='(')
        {
            pop(); // pop and display
            display();
        }
        else if(code[i]==')' && stack[top]!='(')
        {
            printf("Paranthesis is not balanced\n"); // when closing paranthesis is missing
            return -1;
        }
    }
    if(top==-1) // when paranthesis are still left in the stack
    printf("Paranthesis is balanced.\n");
    else
    printf("Paranthesis is not balanced\n");
    return 0;
}