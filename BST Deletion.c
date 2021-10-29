#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int data)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=data;
    p->right=NULL;
    p->left=NULL;
    
    return p;
}
void inorder(struct node *root)//binarytree traversal
{   if(root!=NULL)
    {   inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
struct node *inorderpredecessor(struct node *root)
{
    root = root->left;
    while(root!=NULL)
    {
        root = root->left;
    }
    return root;
}
struct node *deletenode(struct node *root,int element)
{   struct node *inpre;
    if(root == NULL)
    {
        return NULL;
    }
    if(root->left == NULL && root->right ==  NULL)
    {
        free(root);
        return NULL;
    }
    //search the element 
    if(element<root->data)
    {
        root->left =deletenode(root->left,element);
    }
    else if(element>root->data)
    {
        root->right=deletenode(root->right,element);
    }
    else 
    {
        inpre=inorderpredecessor(root);
        root->data=inpre->data;
        root->left=deletenode(root->left,inpre->data);
    }
    return root;
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
    deletenode(p,46);
    inorder(p);
    return 0;
}
