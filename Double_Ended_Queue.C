#include<stdio.h>
#include<stdlib.h>
#define N 10
int dequeue[N];
int f=-1;
int r=-1;
int enqueuefront(int val)
{       if((f==0&&r==N-1)||(f==r+1))
        {
            printf("queue is fulll\n");
        }
        else if(f==-1&&r==-1)
        {
            f=r=0;
            dequeue[f]=val;
        }
        else if(f==0)
        {
            f=(f+1)%N;
            dequeue[f]=val;
        }
        else 
        {
            f=f--;
            dequeue[f]=val;
        }
}
int enqueuerear(int val)
{   if((f==0&&r==N-1)||(f==r+1))
    {
        printf("queue is full\n");
    }
    else if(f==-1 && r==-1)
    {
        f=r=0;
        dequeue[r]=val;
    }
    else if(r==N-1)
    {
        r=0;
        dequeue[r]=val;
    }
    else 
    {
        r++;
        dequeue[r]=val;
    }
}
int dequeuefront()
{   int a;
    if(f==-1)
    {
        printf("Queue is empty\n");
    }
    else if(f==r)
    {   a=dequeue[f];
        f=r=-1;
        return a;
    }
    else if(f==N-1)
    {    a=dequeue[f];
        f=0;
         return a;
    }
    else 
    {    a=dequeue[f];
        f++;
         return a;
    }
}
int dequeuerear()
{   int b;
    if(r==-1)
    {
        printf("queue is empty\n");
    }
    else if(r==0)
    {   b=dequeue[r];
        r=N-1;
        return b;
    }
    else if(f==r)
    {   b=dequeue[r];
        f=r=-1;
         return b;
    }
    else 
    {   b=dequeue[r];
        r--;
         return b;
    }
}
void display()
{   int i;
    for(i=0;i<=N-1;i++)
    {
        printf("The elements in the array are : %d\n",dequeue[i]);
    }
}
int main()
{
    enqueuefront(56);
    enqueuerear(78);
    printf("%d\n",dequeue[f]);
    printf("%d\n",dequeue[r]);
    printf("dequeued element front is %d\n",dequeuefront());
    printf("dequeued element rear is %d\n",dequeuerear());
     enqueuefront(55);
    enqueuerear(98);
    display();
    return 0;
}

