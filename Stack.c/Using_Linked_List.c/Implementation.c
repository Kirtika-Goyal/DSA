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
        printf("Stack is empty\n");
        return 1;
    }
    else
    {
        printf("Stack is not empty\n");
        return 0;
    }
}
int full(struct Node *top)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Stack is full\n");
        return 1;
    }
    else
    {
        printf("Stack is not full\n");
        return 0;
    }
}

int main()
{
    struct Node *top = NULL;
    
    LinkedList(top);
    empty(top);
    full(top);
  
    return 0;
}