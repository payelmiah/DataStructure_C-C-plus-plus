#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int a;
    char ch;
    struct node *next;
}node;
node *head;
void insert_at_nth(int an,char chn)
{
    node *n=(node*)malloc(sizeof(node));
    n->a=an;
    n->ch=chn;
    n->next=NULL;
    node *list=head;
    n=n-2;
    while(n!=0)
    {
        list=list->next;
        n--;
    }
    n->next=list->next;
    list->next=n;
}
