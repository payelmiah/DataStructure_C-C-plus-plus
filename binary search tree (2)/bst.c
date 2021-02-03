#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *right,*left;
}node;
node *creatnewnode(int key)
{
    node *n=(node*)malloc(sizeof(node));
    n->left=NULL;
    n->right=NULL;
    n->data=key;
    return n;

}
node *insert(node *root, int key)
{
    if(root==NULL) root=creatnewnode(key);

    else if(key<=root->data) root->left=insert(root->left,key);
    else root->right=insert(root->right,key);


return root;

}
void preorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
void inorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
int main()
{  node *root=NULL;
    int i,x,p;
    printf("Enter your add case:\n");
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    {
        scanf("%d",&x);
        root=insert(root,x);
    }
        printf("Preorder: ");
        preorder(root);
   printf("\n");
   printf("Postorder: ");
        postorder(root);
    printf("\n");
    printf("Inorder: ");
        inorder(root);
    }


