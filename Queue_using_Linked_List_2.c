#include<stdio.h>
#include<stdlib.h>
 struct node{
     int data;
     struct node*next;
 };
 struct node*f=NULL;
 struct node*r=NULL;
 void enqueue(int val)
 {
     struct node*n=(struct node*)malloc(sizeof(struct node));
     n->data=val;
     n->next=NULL;
     if(f==NULL)
     {
         f=r=n;
         printf("The enqueued element is %d\n",f->data);
     }
     else
     {
         r->next=n;
         r=n;
         printf("The enqueued element is %d\n",r->data);
     }
 }
 int dequeue()
 {      int x;
    struct node*temp=f;
     if(f==NULL)
     {
         printf("Queue is empty\n");
     }
     else
     {
         x=temp->data;
         f=f->next;
         free(temp);
     }
     return x;
 }
 void traversal(struct node*ptr)
 {  if(f=r=NULL)
    {
        printf("Queue is not full\n");
    }
     printf("The elements in the queue are :\n");
     while(ptr!=NULL)
     {
        printf("%d\n",ptr->data);
         ptr=ptr->next;
     }
 }
 int main()
 {
     traversal(f);
     enqueue(12);
     enqueue(56);
     enqueue(89);
    /* traversal(f);
    if we run this function then to print the elements the f has to traversal whole linked list
     until it reaches null when it reaches null it stops  and prints elments in list .next we are going to
     dequeue now the f is at null due to traversal so it is at null and after entering dequeue it prints queue is empty */
     printf("The dequeued element is %d\n",dequeue());
     traversal(f);
     return 0;
 }
