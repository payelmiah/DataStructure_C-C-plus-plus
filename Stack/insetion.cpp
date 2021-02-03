#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    int a;
    struct node *left,*right;
}node;
node *root=NULL;
node*insertion(node*n,int an)
{
    n->a=an;
    node *parent,*current;
    current=root;
    if(root==NULL)
    {
        root=n;
    }
    while(current!=NULL)
    {
        parent=current;
        if(n->a>current->a)
        {
            current=current->right;
        }else
        {
            current=current->left;
        }
    }
    if(n->a>parent->a)
    {
        parent->right=n;
    }
    else
    {
        parent->left=n;
    }
}
int menu()
{
    int g,an;
    cout<<"                                   1.Insertion\t2.Delete\n\n                                   3.In oder\t4.Pre oder\n\n                                        5.Post oder\n\n"<<endl<<endl;
    cin>>g;
    switch(g)
    {
    case 1:
        {
          node*n=(node*)malloc(sizeof(node));
          n->left=NULL;
          n->right=NULL;
          cin>>an;
          insertion(n,an);
        }
    }
}
int main()
{
    cout<<"                                   BINARY SEARCH TREE(BST)"<<endl;
    cout<<"                                 --------------------------"<<endl<<endl;
    menu();
}

