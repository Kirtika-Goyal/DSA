#include<stdio.h>
#include<stdlib.h>

struct Stack {
    int size;
    int top;
    int *arr;

};

int empty(struct Stack *ptr){
    if (ptr->top == -1)
    {
        printf("The stack is empty\n");
        return 1;
    }
    else{
        printf("The stack is not empty\n");

        return 0;
    }
}
int full(struct Stack *ptr){
    if (ptr->top == ptr->size-1 )
    {
        printf("The stack is full\n");

        return 1;
    }
    else{
        printf("The stack is not full\n");
        return 0;
    }
}
int main()
 {
    // struct Stack s;
    // s.size=50;
    // s.top=-1;
    // s.arr=(int *)malloc(s.size*sizeof(int));

    struct Stack *s;
    s->size=5;
    s->top=-1;
    s->arr =(int *)malloc(s->size*sizeof(int));

    s->arr[0] = 1;
    s->top++;
    s->arr[1] = 2;
    s->top++;
    s->arr[2] = 3;
    s->top++;
    s->arr[3] = 4;
    s->top++;
    s->arr[4] = 5;
    s->top++;
   
    (empty(s));
    (full(s));
    
    return 0;
}