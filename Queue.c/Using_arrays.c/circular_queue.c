#include <stdio.h>
#include <stdlib.h>

struct circularqueue
{
    int size;
    int f;
    int r;
    int *arr;
};

void enqueue(struct circularqueue *q, int val)
{
    if ((q->r + 1) % q->size == q->f)
    {
        printf("queue overflow\n");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
        printf("Enqueuing element %d in queue\n", val);
    }
}
int dequeue(struct circularqueue *q)
{
    int val = -1;
    if (q->r == q->f)
    {
        printf("Queue empty\n");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        val = q->arr[q->f];
        printf("Dequeuing element %d in queue\n", val);

    }
    return val;
}
int main()
{
    struct circularqueue *q;
    q->size = 5;
    q->f = 0;
    q->r = 0;
    q->arr = (int *)malloc(q->size * sizeof(int));
    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);
    enqueue(q, 4);
    
    dequeue(q);
    enqueue(q, 5);

    return 0;
}