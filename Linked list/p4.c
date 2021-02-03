//Block first added
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int a;
    char ch;
    struct node *next;
} node;
node *head=NULL,*list=NULL;
void insert_at_first(int an,char chn)
{
    int count=0,coun=0;
    node *n=(node*)malloc(sizeof(node));
    n->a=an;
    n->ch=chn;
    n->next=NULL;
    list=head;
    if(head==NULL)
    {
        head=n;
        count++;
        return n;
    }
    coun++;
    head->next=n;
    head=n;
}
int display()
{
    int count,coun;
    list=head;
    while(list!=NULL)
    {
        printf("%d ",list->a);
        printf("%c\n",list->ch);
        printf("%d",count+count);
        list=list->next;
    }
}
int main()
{
    insert_at_first(10,'y');
    insert_at_first(11,'u');
    insert_at_first(12,'k');
    insert_at_first(15,'l');

    display();
}
