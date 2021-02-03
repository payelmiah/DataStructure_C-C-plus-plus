#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int a;
    char ch;
    struct node *next,*prev;
} node;
node *head=NULL;
node *list=NULL;
node *prev=NULL;
void insert_at_last(int an,char chn)
{
    node *n=(node*)malloc(sizeof(node));
    n->a=an;
    n->ch=chn;
    n->next=NULL;
    list=head;
    if(head==NULL)
    {
        n->next=head;
        n->prev=NULL;
        head=n;
        n->next=NULL;
        printf("success\n");
    }
    else
    {
        while(list->next!=NULL)
        {
            list=list->next;
        }
        list->next=n;
        n->prev=list;
        n->next=NULL;
        printf("successful\n");
    }

}
int display()
{
     list=head;
    while(list!=NULL)
    {
        printf("%d\n",list->a);
        printf("%c\n",list->ch);
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
    insert_at_last(p,chn);
    display();
}
