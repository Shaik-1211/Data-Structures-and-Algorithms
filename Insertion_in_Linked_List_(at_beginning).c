
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void linkedlistTraversal(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("Element %d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node*Insertatfirst(struct node*head,int data)
{   struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
int main()
{
    struct node*head;
    struct node*second;
    struct node*third;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=34;
    head->next=second;

    second->data=23;
    second->next=third;

    third->data=56;
    third->next=NULL;
     
    linkedlistTraversal(head);
    head=Insertatfirst(head,98);
    printf("Elements after insertion are :\n");
    linkedlistTraversal(head);
    return 0;
}