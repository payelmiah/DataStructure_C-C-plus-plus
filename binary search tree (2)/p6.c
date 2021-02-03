#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *left,*right;
} node;
node *root=NULL;
node *creatnewnode(node *root1,node *temp)
{

    if(temp->data<=root1->data)
    {
        if(root1->left==NULL)
        {
            root1->left=temp;
        }
        else
        {
            creatnewnode(root1->left,temp);
        }
    }
    else if(temp->data>=root1->data)
    {
        if(root1->right==NULL)
        {
            root1->right=temp;

        }
        else
        {
            creatnewnode(root1->right,temp);
        }
    }
    return;
}
void preorder(node *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }

}
void inorder(node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }

}
void postorder(node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }

}
node *search(node *root,int v)
{if(root==NULL)
{
    return NULL;
}

    if(root->data==v)
    {
        return root;
    }
    else if(v<=root->data)
    {
        if(root->left==NULL)
        {
            return NULL;
        }
        else{
            search(root->left,v);
        }
    }
    else if(v>=root->data)
    {
        if(root->right==NULL)
        {
            return NULL;
        }
        else
        {
            search(root->right,v);
        }
    }
}

node *maximum(node *root)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(root->right==NULL)
    {
        return root;
    }
    else
    {
        maximum(root->right);
    }

}
node *minimum(node *root)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(root->left==NULL)
    {
        return root;
    }
    else{
        minimum(root->left);
    }
}

int menu()
{
    int t,i,p;
    printf("                            1.Insertion\t   2.Search\t3.Delete\n\n                           4.Find the Maximum value\t5.Find the Minimum value\n\n                           6.Preorder\t7.Postorder\t8.Inorder\n\n");
    printf("Press your options ");
    scanf("%d",&t);
printf("\n");
    switch(t)
    {
    case 1:
    {
        printf("Enter your add case: ");
        scanf("%d",&p);
        for(i=1; i<=p; i++)
        {
            node *n=(node*)malloc(sizeof(node));
            n->left=NULL;
            n->right=NULL;
            scanf("%d",&n->data);
            if(root==NULL)
            {
                root=n;
            }
            else
            {
                creatnewnode(root,n);
            }

        }
        menu();
    }
    case 2:
    {
        int val;
        printf("Enter your value: ");
        scanf("%d",&val);
       node *z=search(root,val);
        if(z==NULL)
        {
            printf("No value available in tree\n\n");
        }
        else
        {
            printf("The tree value is:%d\n",z->data);

        }
        menu();
    }
    /*case 3:
        {
        printf("Enter your value: ");
        deleteNode();
        }*/
    case 4:
        {
            node *x=maximum(root);
            if(x==NULL)
            {
                printf("No value available in tree\n\n");
            }
            else
            {
                printf("The maximum value:%d\n",x->data);
            }
            menu();
        }
    case 5:
        {
            node *y=minimum(root);
            if(y==NULL)
            {
                printf("NO value available in tree\n\n");

            }
            else
            {
                printf("The minimum value:%d",y->data);
            }
            menu();

        }
    case 6:
        {
            printf("Preorder value: ");
            preorder(root);
            if(root==NULL)
            {
                printf("There in no value in tree\n\n");
            }
            printf("\n\n");
            menu();
        }
    case 7:
        {
            printf("Postorder value: ");

            postorder(root);
            if(root==NULL)
            {
                printf("There in no value in tree\n\n");
            }
            printf("\n\n");
            menu();
        }
    case 8:
        {
            printf("Inorder value: ");
            inorder(root);
            if(root==NULL)
            {
                printf("There in no value in tree\n\n");
            }
            printf("\n\n");
            menu();
        }
    default:
        {
            printf("It's Invalid number\n\n");
        }
    }
}


int main()
{

  printf("                          WELCOME TO THE BINARY SEARCH TREE CODE(BST)\n\n");
  menu();
  return 0;

}



