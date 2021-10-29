#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
// display elements in linkedlist
void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL) 
    {
        printf("element is %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node*insertatindex(struct node*head,int data,int index)
{
    struct node*ptr = (struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    int i=0;

    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *four;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    four = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;

    second->data = 13;
    second->next = third;

    third->data = 14;
    third->next = four;

    four->data = 15;
    four->next = NULL;

    
    linkedlisttraversal(head);
    head = insertatindex(head,35,1);
    printf("The elements after insertion are \n");
    linkedlisttraversal(head);
    return 0;
}
