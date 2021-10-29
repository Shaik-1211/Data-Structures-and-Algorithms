#include<stdio.h>
#include<stdlib.h>
 
struct node{
    struct node *left;
    int data;
    struct node *right;
};
struct node *createnode(int data)
{
    struct node *x;
    x=(struct node *)malloc(sizeof(struct node));
    x->data;
    x->left=NULL;
    x->right=NULL;

    return x;
}
int main()
{
    struct node *p;// p is for parent node
    p=(struct node *)malloc(sizeof(struct node));
    p->data=56;
    p->left=NULL;
    p->right=NULL;

    struct node *c1;///c1 is for left child
    c1=(struct node *)malloc(sizeof(struct node));
    c1->data=78;
    c1->left=NULL;
    c1->right=NULL;

    struct node *c2;//c2 is for right child
    c2->data=6;
    c2->left=NULL;
    c2->right=NULL;

    struct node *d1=createnode(78);
     
    //linking parent node and child nodes
     p->left=c1;
     p->right=c2;

    c1->left=d1;//linking the d1 node as leftt child/daughter node of c1
     return 0;
}