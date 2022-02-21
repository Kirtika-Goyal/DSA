#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct stack *infix)
{
    if (infix->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *infix)
{
    if (infix->top == infix->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *infix, char val)
{
    if (isFull(infix))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        infix->top++;
        infix->arr[infix->top] = val;
    }
}

char pop(struct stack *infix)
{
    if (isEmpty(infix))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else
    {
        char val = infix->arr[infix->top];
        infix->top--;
        return val;
    }
}
char stacktop(struct stack *infix)
{
    return infix->arr[infix->top];
}
int precedence(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isoperator(char ch)
{
    if (ch == '*' || ch == '/' || ch == '+' || ch == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char *infixtopostfix(char *infix)
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 100;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));

    int i = 0; // track infix traversal
    int j = 0; // track postfix addition

    while (infix[i] != '\0')
    {
        if (!isoperator(infix[i]))
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if (precedence(infix[i]) > precedence(stacktop(s)))
            {
                push(s, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(s);
                j++;
            }
        }
    }

    while (!isEmpty(s))
    {
        postfix[j] = pop(s);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    // int a =2,b=3,c=4,d=5;
    char *infix = "a/b+c-d";
    printf("\n\t\tInfix = %s \n\t\tpostfix = %s\n\n", infix, infixtopostfix(infix));
    infix = "a-b*d+c/a";
    printf("\n\t\tInfix = %s \n\t\tpostfix = %s\n\n", infix, infixtopostfix(infix));

    return 0;
}
