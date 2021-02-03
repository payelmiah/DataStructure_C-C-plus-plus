#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int a;
    char ch;
    struct node *next;
} node;
void manu()
{
    int n;
    printf("1.add...2.delete..3.display..4.search\n");
    scanf("%d",&n);
    if(n==1)
    {
        add();
    }
    else if(n==2)
    {
        delete();
    }
    else if(n==3)
    {
        display();
    }
    else if(n==4)
    {
        search();
    }
    else
    {
        printf("Invalid number plz enter again\n");
        manu();
    }
}
void add()
{
   int p;
   printf("")
}
node *head;
void insert_at_first(int an,char chn)
{
    node *n=(node*)malloc(sizeof(node));
    n->next=NULL;
    if(head==NULL)
    {
        head=n;
        return;
    }
    n->next=head;
    head=n;

}
void insert_at_last(int an,char chn)
{
    node *p=(node*)malloc(sizeof(node));
    node *list=head;
    if(list==NULL)
    {
        list=n;
        return;
    }
    while(list->next!=NULL)
    {
        list=list->next;
    }
    list->next=p
    return;
}
void delete()
{

}
