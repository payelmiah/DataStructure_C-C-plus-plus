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

    n->next=NULL;
    if(head==NULL)
    {
        head=n;
        return;
    }
    head->next=n;
    head=n;

}
int display()
{
    node *list=head;
    while(list!=NULL)
    {
        printf("data:%d",list->a);
        list=list->next;
    }
}
int main()
{
    int i,x,a;
    scanf("%d",&a);
    insert_at_first(a);
    display();

}
