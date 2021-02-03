#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int a;
struct node *left,*right;
}node;
node *root=NULL;
void newnode(int v)
{
    node *n=(node*)malloc(sizeof(node));
    n->a=v;
    n->left=n->right=NULL;
    return;
}
node *insertion(node *temp,int value)
{
    if(root==NULL)
    {
        return newnode(value);
    }
    if(value>temp->a)
    {
        insertion(temp->right,value);
    }
    else if(value<temp->a)
    {
        insertion(temp->left,value);
    }
    return temp;
}

int main()
{
    root=insertion(root,50);
}
