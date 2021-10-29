#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};
/*  there are 3 kinds of traversal for a binary tree .They are preorder , inorder and post order */
struct node*createnode(int data)
{
    struct node *q;
    q=(struct node *)malloc(sizeof(struct node));
    q->data=data;
    q->left=NULL;
    q->right=NULL;

    return q;
}
void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->right);
        postorder(root->left);
        printf("%d ",root->data);
    }
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
int main()
{
    struct node *p=createnode(45);
    struct node *c1=createnode(66);
    struct node *c2=createnode(15);
    struct node *d1=createnode(30);
    struct node *d2=createnode(78);
    struct node *d3=createnode(12);

    /*  this is the representation  of tree 
              45
             /  \
            66   15
           / \   / 
         30  78  12


             */
    p->left=c1;
    p->right=c2;
    c1->left=d1;
    c1->right=d2;
    c2->left=d3;
    preorder(p);
    printf("\n");
    postorder(p);
    printf("\n");
    inorder(p);
    return 0;
}