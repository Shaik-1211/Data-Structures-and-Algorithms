#include<stdio.h>
#define N  10
int stack[N];
int top=-1;
void push()
{
    if(top == N-1)
    {
        printf(" Over flow\n");
    }
    else
    {
        top++;
        // stack[top]=25;
        int x;
        printf("Enter the element to be entered in stack\n");
        scanf("%d",&x);
        printf("The element entered is %d\n",x);
        stack[top]=x;
    }
}
void pop()
{   int item;
    if(top==-1)
    {
        printf("Under flow\n");
    }
    else{
        item=stack[top];
        top=top--;
        printf("Element deleted is %d\n",item);
    }
}
void display()
 {
     int i;
     if(top==-1)
     {
         printf("underflow\n");
     }
     else
     {
         for(i=top;i>=0;i--){
        printf("The elenent at stack[%d] is %d\n",i,stack[i]);
     }
     
    }
 }
 void peek()
 {
     if(top==-1)
     {
         printf("underflow\n");
     }
     else{
         printf("The element on the top is %d\n",stack[top]);
     }
 }
int main()
{   int choice;
    do{ 
        printf("1.Push 2.Pop 3.display 4.peek 5.Exit\n");
        printf("Enter your choice \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:push();
                break;
        case 2:pop();
               break;
        case 3:display();
                break;
        case 4:peek();
                break;
        default:printf("Entered a wrong choice \n");
                // break;
        }

    }
    while(choice!=0);
    
    return 0;   
}