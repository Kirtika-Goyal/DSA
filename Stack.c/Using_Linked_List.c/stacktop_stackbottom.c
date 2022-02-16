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
int stacktop(struct Node *top)
{
    printf("\n\t\ttop most element of stack is %d\n", top->data);
    return top->data;
}
int stackbottom(struct Node *top)
{
    struct Node *ptr = top;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    printf("\n\t\tbottom most element of stack is %d\n\n", ptr->data);

    return ptr->data;
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
    stacktop(top);
    stackbottom(top);
    return 0;
}