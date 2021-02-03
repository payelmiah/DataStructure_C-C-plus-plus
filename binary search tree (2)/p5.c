#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int a;
    char ch;
    struct node *next,*prev;
}node;
node *head=NULL;
node *list=NULL;
void insert_at_nth(int an,char chn)
{
    int pos;
    node *n=(node*)malloc(sizeof(node));
    n->a=an;
    n->ch=chn;
    printf("enter your position:");
    scanf("%d",&pos);
    n->next=NULL;
    list=head;
    if(head==NULL)
    {
        n->next=head;
        n->prev=NULL;
        head=n;
        n->next=NULL;
    }
    else{
        pos=pos-2;
        while(pos!=0 && list->next!=NULL)
        {
            list=list->next;
            pos--;
        }
        n->next=list->next;
        n->prev=list;
        n->next->prev=n;
        list->next=n;
       if(n->prev!=NULL)
        {
            n->next->prev=n;
        }
        else
        {
            head=n;
        }
    }
}
int display()
{
    list=head;
    while(list!=NULL)
    {
        printf("value:%d\n",list->a);
        printf("character:%c\n",list->ch);
        list=list->next;
    }
}
int main()
{
    int p;
    char chn;
    printf("enter your value:");
    scanf("%d",&p);
    printf("enter your character:");
    scanf(" %c",&chn);
    insert_at_nth(p,chn);
    display();
}
