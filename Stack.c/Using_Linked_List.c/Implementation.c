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
        printf("Stack is empty\n");
        return 1;
    }
    else
    {
        printf("Stack is not empty\n");
        return 0;
    }
}
int full(struct Stack *top)
{
    struct Stack *n = (struct Stack *)malloc(sizeof(struct Stack));
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
    struct Stack *top = NULL;
    
    LinkedList(top);
    empty(top);
    full(top);
  
    return 0;
}