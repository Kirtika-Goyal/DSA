#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void LinkedList(struct Node *ptr)
{
    while (ptr != NULL)
    {

        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
int empty(struct Node *top)
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
int full(struct Node *top)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct Node *Push(struct Node *top, int x)
{
    if (full(top))
    {
        printf("Stack overflow\n");
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}
struct Node *Pop(struct Node *top)
{
    if (empty(top))
    {
        printf("Stack underflow\n");
    }
    else
    {
        struct Node *n = top;
        top = top->next;
        int x = n->data;
        free(n);
        return top;
    }
}
int main()
{
    struct Node *top = NULL;
    printf("After pushing elements\n");
    top = Push(top, 12);
    top = Push(top, 162);
    top = Push(top, 82);
    top = Push(top, 873);
    LinkedList(top);
    printf("After popping elements\n");
    top = Pop(top);
    LinkedList(top);
    return 0;
}