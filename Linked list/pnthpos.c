#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int a;
    char ch;
    struct node *next;
}node;
node *head=NULL;
node *list=NULL;
void insert_at_nth()
{
    int pos;
    node *n=(node*)malloc(sizeof(node));
    printf("enter your data:");
    scanf("%d",&n->a);
    printf("enter character:");
    scanf(" %c",&n->ch);
    printf("enter your position:");
    scanf("%d",&pos);
    n->next=NULL;
    if(head==NULL)
    {
        head=n;
    }
    else
    {
        pos=pos-2;
        while(pos!=0 && list->next!=NULL)
        {

            list=list->next;
            pos--;
        }
        n->next=list->next;
        list->next=n;
        printf("Successful add middle position\n");
    }
}
int display()
{
    list=head;
    while(list!=NULL)
    {
        printf("%d ",list->a);
        printf("%c",list->ch);
        list=list->next;
    }
}
int main()
{

    insert_at_nth();
    display();
}
