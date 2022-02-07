#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};

int Stack_Top(struct Stack *ptr)
{
    return ptr->arr[ptr->top];
}
int Stack_Bottom(struct Stack *ptr)
{
    return ptr->arr[0];
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

    for (int i = s->top; i >= 0; i--)
    {
        printf("%d\n", s->arr[i]);
    }
    printf("The top most value of the stack is %d\n", Stack_Top(s));
    printf("The bottom most value of the stack is %d\n", Stack_Bottom(s));
    return 0;
}
