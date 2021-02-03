#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int a;
    char ch;
    struct node*prev,*next;
}node;
node *head=NULL;
node *list=NULL;
node *prev=NULL;
void insert_at_first(int an,char chn)
{
    node *n=(node*)malloc(sizeof(node));
    n->a=an;
    n->ch=chn;
    n->next=NULL;
    //n->prev=NULL;
    n->next=head;
    if(head!=NULL)
    {
        n->next=head;
        head->prev=n;
        head=n;
        printf("success\n");

    }
    head=n;

}
int display()
{
    list=head;
    while(list!=NULL)
    {
        printf("value:%d\n",list->a);
        printf("char:%c\n",list->ch);
        list=list->next;
    }
}
int main()
{
    int an;
    char chn;
    printf("enter your value:");
    scanf("%d",&an);
    printf("enter your char:");
    scanf(" %c",&chn);
    insert_at_first(an,chn);
    display();
}
