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

        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// INSERT ELEMENT AT FIRST
struct Node * insertfirst(struct Node * head, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

// INSERT AT GIVEN INDEX
struct Node * insertatindex(struct Node * head, int data, int index)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return ptr;
}

// INSERT ELEMENT AT LAST
struct Node * insertlast(struct Node * head, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = NULL;
    p->next = ptr;

    return ptr;
}

// INSERT AFTER A NODE
struct Node * insertafternode(struct Node *head, struct Node *prev, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->data = data;
    ptr->next = prev->next;
    prev->next = ptr;

    return ptr;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // ALLOCATES MEMORY IN HEAP
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 25;
    head->next = second;

    second->data = 83;
    second->next = third;

    third->data = 55;
    third->next = NULL;

    // LinkedList(head);

    // printf("\n\nInsertion at first\n");
    // head = insertfirst(head, 10);
    // LinkedList(head);

    // printf("\n\nInsertion at given index\n");
    // insertatindex(head, 20, 1);
    // LinkedList(head);

    // printf("\n\nInsertion at last\n");
    // insertlast(head, 30);
    // LinkedList(head);
    // LinkedList(head);

    printf("\n\nInsertion after a node\n");
    insertafternode(head, second, 40);
    LinkedList(head);
    return 0;
}