#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    char s[100],s1[100];
    struct node *next,*prev;
} node;
node *head=NULL,*tail=NULL;
void enqueue(node *n)
{
    if(head==NULL)
    {
        head=n;
        tail=n;
    }
    else
    {
        tail->next=n;
        n->prev=n;
        tail=n;
    }
    return;
}
node *dequeue()
{
    if(tail==NULL)
    {
       // cout<<"Enqueue is empty"<<endl;
        return tail;
    }
    node *w=(node*)malloc(sizeof(node));
    w->next=NULL;
    w->prev=NULL;
    strcpy(w->s,head->s);
    strcpy(w->s1,head->s1);
    node *temp=head;
    head=head->next;
    free(temp);
    return w;
}
int main()
{
    int p;
    cout<<"1.Enqueue\t2.Dequeue"<<endl<<endl;
    cin>>p;
    switch(p)
    {
    case 1:
    {
        node *n=(node*)malloc(sizeof(node));
        n->next=NULL;
        n->prev=NULL;
        cout<<"Enter your Name:";
        cin>>n->s;
        cout<<"Enter your id:";
        cin>>n->s1;
        enqueue(n);
        main();
    }
    case 2:
    {
        node *n=dequeue();
        if(n==NULL)
        {
            cout<<"Enqueue is empty"<<endl;
        }
        else
        {
            cout<<"Name:"<<n->s<<endl;
            cout<<"ID:"<<n->s1<<endl;
            free(head);
        }
        main();
    }

    }
}


