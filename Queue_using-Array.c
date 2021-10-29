#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};
int enqueue(struct queue *q,int val)
{   
    if(isfull(q))
    {printf("Queue overflow\n");}
    else
    {  q->r++;
       q->arr[q->r]=val;
        printf("element enqueued is %d\n",val);
        // return q->r;
    }
}
int dequeue(struct queue *q)
{   int a;
    if(isempty(q))
    {printf("Queue underflow\n");}
    else
    {   
        q->f++;
        a=q->arr[q->f];/*while i was programming this program element were enqueued but not dequeued
        because i had written q->srr[q->f]=a */
    }
    return a;
}
int isfull(struct queue *q)
{
    if(q->r==q->size-1)
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
    q.size=4;
    q.f=q.r=-1;
    q.arr=(int *)malloc(q.size*sizeof(int));
    enqueue(&q,23);
    enqueue(&q,63);
    enqueue(&q,12);
    enqueue(&q,15);

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
    else if(isfull(&q))
    {
        printf("queue is full\n");
    }
    return 0;
}