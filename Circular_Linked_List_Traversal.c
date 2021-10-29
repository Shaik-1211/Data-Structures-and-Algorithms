#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void traversal(struct node*head)
{
    struct node*ptr=head;
   
    do{
        printf("The element is %d\n",ptr->data);
        ptr=ptr->next;
    }
    while(ptr!=head);
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
    third->next=head;

    traversal(head);

    return 0;
}
     