#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
typedef struct node
{
    char s[100],s1[100];
    struct node *next,*prev;
} node;
int p;
node *head=NULL;;
node *tail=NULL;
void push(node *n)
{
    n->next=NULL;
    if(head==NULL)
    {
        head=n;
        tail=n;
    }
    else
    {
        tail->next=n;
        n->prev=tail;
        tail=n;
    }
    return;

}
node *pop()
{
    if(tail==NULL)
    {
        return tail;
    }
    node *temp=tail;
    node *w=(node*)malloc(sizeof(node));
    w->next=NULL;
    w->prev=NULL;
    strcpy(w->s,tail->s);
    strcpy(w->s1,tail->s1);

    tail=tail->prev;
    free(temp);

    return w;

}
int main()
{
    int x;
    cout<<"1.PUSH\t2.POP"<<endl<<endl;
    cin>>p;
    switch(p)
    {
    case 1:
    {
        node *n=(node*)malloc(sizeof(node));
        n->next=NULL;
        n->prev=NULL;
        cout<<"Enter your name:"<<endl;
        cin>>n->s;
        cout<<"Enter your ID:"<<endl;
        cin>>n->s1;
        push(n);
        main();
    }
    case 2:
    {
        node *n=pop();
        if(n==NULL)
        {
            cout<<"stack is empty"<<endl;
        }
        else
        {
            cout<<n->s<<endl<<n->s1<<endl;
            free(n);
        }

        main();
    }

    default:
        cout<<"invalid number"<<endl;
    }

}

