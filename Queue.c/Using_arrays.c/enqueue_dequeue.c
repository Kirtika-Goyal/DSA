#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int empty(struct queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int full(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(struct queue *q , int val){
    if (full(q))
    {
        printf("Queue overflow\n");
    }
    else{
        q->r = q->r+1;
        q->arr[q->r]=val;
        printf("Enqueuing element %d in queue\n",val);
    }
}
int dequeue(struct queue *q ){
    int a = -1;
    if (empty(q))
    {
        printf("Queue underflow\n");
        return 0;
    }
    else{
        q->f++;
        a = q->arr[q->f];
        printf("Dequeuing element %d from queue\n",q->arr[q->f]);
        return a;
    }
}
int main()
{
    struct queue *q;
    q->size = 3;
    q->f = -1;
    q->r = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));

    printf("\n\n");
    enqueue(q,12);
    enqueue(q,72);
    enqueue(q,83);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    enqueue(q,83);
    printf("\n\n");
    return 0;
}