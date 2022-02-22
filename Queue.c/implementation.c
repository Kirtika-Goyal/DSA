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
        printf("Queue is empty\n");
        return 1;
    }
    else
    {
        printf("Queue is not empty\n");
        return 0;
    }
}
int full(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        printf("Queue is full\n");
        return 1;
    }
    else
    {
        printf("Queue is not full\n");
        return 0;
    }
}
int main()
{
    struct queue *q;
    q->size = 50;
    q->f = -1;
    q->r = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));

    empty(q);
    full(q);
    return 0;
}