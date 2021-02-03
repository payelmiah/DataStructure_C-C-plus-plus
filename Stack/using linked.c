#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
    char s[20];
    struct node *next,*prev;
} node;
node *head=NULL,*tail=NULL;
void push(node *n)
{
    tail->next=n;
    n->prev=tail;
    tail=n;
}
node *pop()
{
    node *w=(node*)malloc(sizeof(node));
    w->next=NULL;
    w->prev=NULL;
    strcpy(w->s,tail->s);
    node *temp=tail;
    tail=tail->prev;
    free(temp);
    return w;
}
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        node *n=(node*)malloc(sizeof(node));
        n->next=NULL;
        n->prev=NULL;
        scanf(" %[^\n]",n->s);
        if(head==NULL)
        {
            head=n;
            tail=n;
        }
        else
        {
            push(n);
        }
    }
    node *del=pop();
    printf("Delete last node: ");
    printf("%s",del->s);
}
