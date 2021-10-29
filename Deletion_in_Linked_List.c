#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void display(struct node*head)
{
    struct node*ptr=head;
    while(ptr!=NULL)
    {
        printf("The element is %d\n",ptr->data);
        ptr=ptr->next;
    }

}
struct node*delatfirstnode(struct node*head)
{       
    struct node*ptr=head;
    head=head->next;
    free(ptr);
    return head;
    
}
struct node*delatend(struct node*head)
{   
    struct node*ptr=head;
    struct node*q=head->next;
   
    while(q->next!=NULL)
    {
        ptr=ptr->next;
          q=q->next;
    }
    ptr->next=NULL;
    free(q);
    return head;
}
struct node*delatindex(struct node*head,int index)
{
    struct node*ptr=head;
    struct node*q=head->next;
    int i;
    for(i=0;i<index-1;i++)
    {
        ptr=ptr->next;
        q=q->next;
    }
    ptr->next=q->next;
    free(q);
    return head;
}
struct node*delatgivenvalue(struct node*head,int value)
{
    struct node*p=head;
    struct node*q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
    else{printf("The value given is not in the linkedlist\n");}
    return head;
}
int main()
{
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*four;

    head=(struct node*)malloc(sizeof(struct node));
   second=(struct node*)malloc(sizeof(struct node));
   third=(struct node*)malloc(sizeof(struct node));
    four=(struct node*)malloc(sizeof(struct node));

    head->data=45;
    head->next=second;

    second->data=78;
    second->next=third;

    third->data=89;
    third->next=four;

    four->data=56;
    four->next=NULL;

    display(head);
    // head=delatfirstnode(head);
    // head=delatend(head);
    // head=delatindex(head,2);
    head=delatgivenvalue(head,80);
    printf("The elements after deletion are \n");
    display(head);
    return 0;
}