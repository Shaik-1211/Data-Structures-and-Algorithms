#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int data)
{
    struct node *x;
    x=(struct node *)malloc(sizeof(struct node));
    x->data=data;
    x->left=NULL;
    x->right=NULL;
    return x;
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
struct node * searchBST(struct node *root,int element)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==element)
    {
        return root;
    }
    else if(root->data>=element)
    {
        searchBST(root->left,element);
    }
    else if(root->data<=element)
    {
        searchBST(root->right,element);
    }
}
int main()
{
    struct node*p=createnode(80);
    struct node *c1=createnode(75);
    struct node *c2=createnode(82);
    struct node *d1=createnode(72);
    struct node *d2=createnode(76);
    struct node *d3=createnode(81);
    struct node *d4=createnode(90);

    p->left=c1;
    p->right=c2;
    c1->left=d1;
    c1->right=d2;
    c2->left=d3;
    c2->right=d4;

    inorder(p);
    printf("\n");
    struct node *n=searchBST(p,96);
    if(n!=NULL)
    {
        printf("found : %d ",n->data);
    }
    else
    {
        printf("element not found ");
    }
    return 0;
}
