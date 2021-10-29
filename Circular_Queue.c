#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};
void enqueue(struct queue *q,int val)
{   if((q->r+1)%q->size==q->f)
    {printf("Queue overflow\n");}
    else
    {  q->r=(q->r+1)%q->size;
       q->arr[q->r]=val;
        printf("element enqueued is %d\n",val);
       
    }
}
int dequeue(struct queue *q)
{   int a;
    if(q->r==q->f)
    {printf("Queue underflow\n");}
    else
    {   
        q->f=(q->f+1)%q->size;
        a=q->arr[q->f];
    }
    return a;
}
int isfull(struct queue *q)
{
    if((q->r+1)%q->size==q->f)
    {return 1;}
    
    return 0;
}
int isempty(struct queue *q)
{
    if(q->r==q->f)
    {
        return 1;
    }
    
        return 0;
}

int main()
{   struct queue q;
    q.size=5;//now we have only 4 memory blocks
    q.f=q.r=0;//here one memory location of array is allocated to this zero
    q.arr=(int *)malloc(q.size*sizeof(int));

    enqueue(&q,23);
    enqueue(&q,63);
    enqueue(&q,12);
    enqueue(&q,55);
    if(isempty(&q))
    {
        printf("queue is empty\n");
    }
    if(isfull(&q))
    {
        printf("queue is full\n");
    }
    printf("dequeued element is %d\n",dequeue(&q));
    printf("dequeued element is %d\n",dequeue(&q));
    printf("dequeued element is %d\n",dequeue(&q));
    printf("dequeued element is %d\n",dequeue(&q));
    
    if(isempty(&q))
    {
        printf("queue is empty\n");
    }
    if(isfull(&q))
    {
        printf("queue is full\n");
    }
    return 0;
}