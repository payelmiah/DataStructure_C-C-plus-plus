#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    struct node *left,*right;
} node;
node *root=NULL;
node *newnode(int val)
{
    node *n=(node*)malloc(sizeof(node));
    n->data=val;
    n->left=n->right=NULL;
    return n;
}
node *insertt(node *temp,int data)
{
    if(temp==NULL)
    {
        return newnode(data);
    }
    if(data<temp->data)
    {
        temp->left=insertt(temp->left,data);
    }
    else if(data>temp->data)
    {
        temp->right=insertt(temp->right,data);
    }
    return temp;
}
void inorder(node *root1)
{
    if(root1==NULL)
    {
        inorder(root1->left);
        cout<<root1->data<<endl;
        inorder(root1->right);
    }
}
void preorder(node *root2)
{
    if(root2==NULL)
    {
        cout<<root2->data<<endl;
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node *root3)
{
    if(root3==NULL)
    {
        return;
    }
    postorder(root3->left);
    postorder(root3->right);
    cout<<root3->data<<endl;
}
int menu()
{
    int t;
    cout<<"\n                               1.Insertion tree\t\t2.Inorder\n\n                              3.preoder\t4.postorder"<<endl;
    cin>>t;
    switch(t)
    {
    case 1:
    {
        node *root=insertt(root,50);
        insertt(root,60);
        insertt(root,80);

    }
    case 2:
        {
             inorder(root);
        }
    case 3:
        {
            preorder(root);
        }
    case 4:
        {
            postorder(root);
        }
    }
}
int main()
{
    cout<<"                                  Binary Search Tree (BST)"<<endl<<endl;
    menu();
    return 0;

}
