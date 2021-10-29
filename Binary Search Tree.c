#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};
void inorder(struct node *root)//binarytree traversal
{   if(root!=NULL)
    {   inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
struct node *createnode(int data)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=data;
    p->right=NULL;
    p->left=NULL;
    
    return p;
}
int isBST(struct node *root)
{   static struct node *prev=NULL;
    if(root!=NULL)
    {
       if(!isBST(root->left))
       {
           return 0;
       }
       else if(prev != NULL && root->data <= prev->data)
       {
           return 0;
       }
       prev=root;
       return(isBST(root->right));
    }
    else 
    {
        return 1;
    }
}

int main()
{
    struct node *p=createnode(45);
    struct node *c1=createnode(40);
    struct node *c2=createnode(48);
    struct node *d1=createnode(35);
    struct node *d2=createnode(41);
    struct node *d3=createnode(46);
    struct node *d4=createnode(50);

    p->left=c1;
    p->right=c2;
    c1->left=d1;
    c1->right=d2;
    c2->left=d3;
    c2->right=d4;

    inorder(p);
    printf("\n");
    printf("%d ",isBST(p));
    return 0;
}
