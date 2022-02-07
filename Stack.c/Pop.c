#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

int empty(struct Stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int full(struct Stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int pop(struct Stack *ptr, int value)
{
    if (full(ptr))
    {
        printf("Stack underflow\n");
        return -1;
    }
    else
    {
        value = ptr->arr[ptr->top];

        printf("Element pop from the stack : %d\n", ptr->arr[ptr->top]);
        ptr->top--;
        return 0;
    }
}

int main()
{

    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    s->arr[0] = 1;
    s->top++;
    s->arr[1] = 2;
    s->top++;
    s->arr[2] = 3;
    s->top++;
    s->arr[3] = 4;
    s->top++;
    s->arr[4] = 5;
    s->top++;

    pop(s, 5);
    for (int i = s->top; i >= 0; i--)
    {
        printf("%d\n", s->arr[i]);
    }
    return 0;
}
