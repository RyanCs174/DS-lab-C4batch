#include <stdio.h>
#include <string.h>
#include <ctype.h>
char stack[100];
int top = -1;
char push(char x)
{
    stack[++top] = x;
}
char pop()
{
    if (top == -1)
    {
        return -1;
    }
    else
        return stack[top--];
}
int priority(char x)
{
    if (x == '(')
    {
        return 0;
    }
    if (x == '+' || x == '-')
    {
        return 1;
    }
    if (x == '*' || x == '|')
    {
        return 2;
    }
    return 0;
}
void main()
{
    int len, i;
    char infix[50], x;
    char postfix[50];
    printf("Enter the expression:");
    gets(infix);
    len = strlen(infix);

    for (i = 0; i < len; i++)
    {
        if (isalnum(infix[i]))
        {
            printf("%c", infix[i]);
        }
        else if ('(' == infix[i])
        {
            push(infix[i]);
        }
        else if (')' == infix[i])
        {
            while ((x = pop()) != '(')
            {
                printf("%c", x);
            }
        }
        else
        {
            while (priority(stack[top]) >= priority(infix[i]))
                printf("%c ", pop());
            push(infix[i]);
        }
    }

    while (top != -1)
    {
        printf("%c ", pop());
    }
    return 0;
}