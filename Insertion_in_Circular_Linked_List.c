#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void traversal(struct node*head){
    struct node*ptr=head;
    do{
        printf("the element is %d\n",ptr->data);
        ptr=ptr->next;
    }  while(ptr!=head);
}
struct node*insertatfirst(struct node*head,int data)
{   
    struct node*ptr=(struct node*)malloc(sizeof(struct node*));
    ptr->data=data;
    struct node*p=head->next;
  
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}
struct node*insertatend(struct node*head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node*p=head->next;
    while(p->next!=head)
    {   p=p->next; }
    
   
    ptr->next=p->next;
     p->next=ptr;
    ptr->next=head;
    return head;
}
struct node*insertatindex(struct node*head,int data,int index)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node*p=head->next;
    int i;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct node*insertatgivennode(struct node*head,struct node* prev,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    
    ptr->next=prev->next;
    prev->next=ptr;
    return head;
}
int main()
{   struct node*head;
    struct node*second;
    struct node*third;
    struct node*four;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    four=(struct node*)malloc(sizeof(struct node));


    head->data=34;
    head->next=second;

    second->data=23;
    second->next=third;

    third->data=56;
    third->next=four;

    four->data=89;
    four->next=head;

    printf("Elements before traversal are \n");
    traversal(head);
    // head=insertatfirst(head,78);
    // head=insertatend(head,65);
    // head=insertatindex(head,65,2);
     head=insertatgivennode(head,second,26);
    printf("Elements after traversal are \n");
    traversal(head);
    
    return 0;
    

}