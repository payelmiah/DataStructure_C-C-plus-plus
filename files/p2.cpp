#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct node
{
    int v;
    struct node *next;
} node;
node *head=NULL;
node *listt=NULL;
int main()
{
    int i,j,t;
    cin>>t;
    for(i=0; i<t; i++)
    {
        node *n=(node*)malloc(sizeof(node));
        n->next=NULL;
        cin>>n->v;
        if(head==NULL)
        {
            head=n;
        }
        else
        {
             listt=head;
            while(listt->next!=NULL)
            {
                listt=listt->next;
            }
            listt->next=n;
        }

    }
    while(listt!=NULL)
    {
        cout<<listt->v<<endl;
        listt=listt->next;
    }
    return 0;
}
