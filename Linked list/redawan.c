#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int a;
    struct node *next;
} node;
node *head=NULL;
node *list=NULL;
void insert_at_first(int an)
{
    node *n=(node*)malloc(sizeof(node));
    n->a=an;
    n->next=NULL;
    node *list=head;
    if(head==NULL)
    {
        head=n;
        return;

    }
    list->next = n;
    return;
}
void display()
{
    while(list!=NULL)
    {
        printf("%d",list->a);
    }
    list=list->next;

}
int main()
{
    insert_at_first(5);
    insert_at_first(6);
    insert_at_first(7);

    display();
}
