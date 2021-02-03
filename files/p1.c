#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int a;
    struct node *next,*prev;
} node;
node *head=NULL;
node *list=NULL;
void insert_at_first(int an)
{
    node *n=(node*)malloc(sizeof(node));
    n->a=an;
    n->next=NULL;
    n->prev=NULL;
    n->next=head;
    if(head!=NULL)
    {
        head->prev=n;
        head=n;
    }
    printf("success\n");
}
int display()
{
    list=head;
    while(list!=NULL)
    {
        printf("%d",list->a);
        list=list->next;
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    insert_at_first(a);
    display();

}
