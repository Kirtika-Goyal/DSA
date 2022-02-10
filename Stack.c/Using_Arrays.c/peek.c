#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *arr;
};
int peek(struct Stack *ptr, int position)
{
    if (ptr->top - position + 1 < 0)
    {
        printf("Not a valid position\n");
        return -1;
    }
    else
    {
        printf("Element at position %d is %d\n", position, ptr->arr[ptr->top - position + 1]);
        return 0;
    }
}
int main()
{
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = 20;
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
    peek(s, 2);

    return 0;
}