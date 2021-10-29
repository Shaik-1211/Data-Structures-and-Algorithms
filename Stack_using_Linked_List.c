#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
 struct node*top=NULL;
/*void display(struct node*ptr)
{
    // struct node*ptr=top;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next; 
    }
}*/
int push()
{   struct node*newnoode=(struct node*)malloc(sizeof(struct node));
    int x;
    printf("Enter element to push into stack\n");
    scanf("%d",&x);
    newnoode->data=x;
    newnoode->next=top;
    top=newnoode;

}
int pop()
{
    if(top == NULL)
    {
        printf("stack underflow\n");
    }
    else
    {
        struct node*temp;
        temp=top;
        top=temp->next;
        printf("The element popped out is %d\n",temp->data);
        free(temp);
    }
}
int display()
{
    if(top==NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        while(top!=NULL)
        {
            printf("The elwments in the stack are %d\n",top->data);
            top=top->next;
        }
    }
}
int peek()
{
    if(top==NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("The top most element in the stack is %d\n",top->data);
    }
}

int main()
{  
    int ch;
    printf("enter 0 to exit\n");
     do{
    printf("1.push 2.pop 3.display 4.peek\n");
    printf("Enter a choice \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:push();
            break;
        case 2:pop();
            break;
        case 3:display();
            break;
        case 4:peek();
            break;
        default : printf("Entered a wrong choice\n");
    }
    }while(ch!=0);
    
    return 0;

}