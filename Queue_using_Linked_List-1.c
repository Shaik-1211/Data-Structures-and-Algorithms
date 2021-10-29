#include<stdio.h>
#include<stdlib.h>
struct node*f;
struct node*r;
struct node{
    int data;
    struct node *next;
};
void traversal(struct node *ptr)
{   //struct node * ptr=f;
    while(ptr->next!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int enqueue()
{   struct node*n=(struct node*)malloc(sizeof(struct node));
    int x;
    printf("enter the data you want to insert \n");
    scanf("%d",&x);
   
    if(n=NULL)
    {
        printf("Queue is empty\n");
    }
    else 
    {
         n->data=x;
        n->next=NULL;
        if(f=r=NULL)
      {
        f=r=n;
      }
      else 
      {
        r->next=n;
        r=n;
      }
    }
    
    
}
int dequeue(struct node*ptr)
{   int a;
    struct node*ptr=f;
    if(f=NULL)
    {
        printf("Queue is full\n");
    }
    else
    {   int a;
        f=f->next;
        f->data=a;
        free(ptr);
    }
    return a;
}
int main()
{
    traversal(f);
    enqueue();
    enqueue();
    traversal(f);
    printf("The dequeued element is %d\n",dequeue());
    traversal(f);
    return 0;
}