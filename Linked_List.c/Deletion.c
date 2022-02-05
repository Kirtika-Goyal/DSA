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
// DELETE ELEMENT AT FIRST
struct Node * deletefirst(struct Node * head ){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
   ptr = head;
    head = head->next;
    free (ptr);
    return head;
}

// DELETE AT GIVEN INDEX
struct Node * deleteatindex(struct Node * head, int index)
{
     struct Node *p = head;
     int i =0;
     while (i!=index-1)
     {
         p=p->next;
         i++;
     }
     struct Node *q = p->next;
    p->next=q->next;
    free(q);
     
    return head;
}

// DELETE ELEMENT AT LAST
struct Node * deletelast(struct Node * head)
{
        struct Node * p = head;
    struct Node *q = head->next;
    
while (q->next!=NULL)
{
    p=p->next;
    q=q->next;
}
    p->next=NULL;
    free(q);
    
    return head;
}

// DELETE AFTER A NODE
struct Node * deletebygivenvalue(struct Node * head, int value)
{
    struct Node * p = head;
    struct Node * q = head->next;
    while (q->data!=value && q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    if (q->data==value)
    {
        p->next= q->next;
        free(q);
    }
    
    return p;
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;

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

    LinkedList(head);

    // printf("\n\n");
    // head = deletefirst(head);
    // LinkedList(head);

    // printf("\n\n");
    // head = deleteatindex(head,1);
    // LinkedList(head);

    // printf("\n\n");
    // head = deletelast(head);
    // LinkedList(head);

    printf("\n\n");
    head = deletebygivenvalue(head,25);
    LinkedList(head);
    return 0;
}