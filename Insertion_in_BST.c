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
struct node *insert(struct node *root,int element)
{   struct node *prev=NULL;
    while(root!=NULL)
    {   prev=root;
        if(element==root->data)
        {  printf("can't insert element");
            return 0 ;
        }
        if(element>root->data)
        {
            root=root->right;
        }
        if(element<=root->data)
        {
            root=root->left;
        }
    }
    struct node *p=createnode(element);
    if(element<prev->data)
    {
        prev->left=p;
    }
    else
    {
        prev->right=p;
    }

}
void inorder(struct node *root)//binarytree traversal
{   if(root!=NULL)
    {   inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
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

    
    insert(p,20);
    inorder(p);
    printf("\n");

    return 0;
}
