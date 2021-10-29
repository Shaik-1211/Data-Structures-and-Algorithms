// doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data; 
    struct node*prev;
    struct node*next;
};
void traversal(struct node*n1)
{
    struct node*p=n1->data;
    // p=p->next;
    // int i;
    do{ 
        printf("%d\n",p->data);
        p=p->next;
    }
    while (p->next!=NULL);
    return n1;
}
int main()
{
    struct node*n1;
    struct node*n2;
    struct node*n3;
    struct node*n4;

     n1=(struct node*)malloc(sizeof(struct node));
     n2=(struct node*)malloc(sizeof(struct node));
     n3=(struct node*)malloc(sizeof(struct node));
     n4=(struct node*)malloc(sizeof(struct node));

    n1->prev=NULL;
    n1->data=11;
    n1->next=n2;

    n2->prev=n1->next;
    n2->data=22;
    n2->next=n3;

    n3->prev=n2->next;
    n3->data=33;
    n3->next=n4;

    n4->prev=n3->next;
    n4->data=44;
    n4->next=NULL;

    printf("elemennts in doubly linked list are \n");
    traversal(n1);
    // printf("elements after traversal are \n");
    return 0;
}