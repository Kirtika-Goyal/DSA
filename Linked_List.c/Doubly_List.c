#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
void LinkedList(struct Node *ptr1, struct Node *ptr2)
{
    printf("FORWARD\n");
    while (ptr1 != NULL)
    {

        printf("%d\n", ptr1->data);
        ptr1 = ptr1->next;
    }
    printf("BACKWARD\n");

     while (ptr2 != NULL)
    {

        printf("%d\n", ptr2->data);
        ptr2 = ptr2->prev;
    }
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // ALLOCATES MEMORY IN HEAP
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 5;
    head->next = second;
    head->prev = NULL;

    second->data = 10;
    second->next = third;
    second->prev = head;


    third->data = 15;
    third->next = fourth;
    third->prev = second;


    fourth->data = 20;
    fourth->next = NULL;
    fourth->prev = third;

    LinkedList(head, fourth);
    return 0;
}