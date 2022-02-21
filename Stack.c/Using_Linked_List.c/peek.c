#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int data;
    struct Stack *next;
};
void LinkedList(struct Stack *ptr)
{
    while (ptr != NULL)
    {

        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
int empty(struct Stack *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int full(struct Stack *top)
{
    struct Stack *n = (struct Stack *)malloc(sizeof(struct Stack));
    if (n == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct Stack *Push(struct Stack *top, int x)
{
    if (full(top))
    {
        printf("Stack overflow\n");
    }
    else
    {
        struct Stack *n = (struct Stack *)malloc(sizeof(struct Stack));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}
int peek(struct Stack *top, int position)
{
    struct Stack *ptr = top;
    for (int i = 0; (i < position - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        printf("\n\nElement at %d position is %d\n", position,ptr->data);
        return ptr->data;
    }
    else
    {
        return -1;
    }
}
int main()
{
    struct Stack *top = NULL;
    printf("After pushing elements\n");
    top = Push(top, 12);
    top = Push(top, 162);
    top = Push(top, 82);
    top = Push(top, 873);
    LinkedList(top);
    peek(top, 2);
    return 0;
}