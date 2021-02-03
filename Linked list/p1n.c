#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int a;
struct node *next;

}node;
node *head=NULL,*list=NULL;
void insert_at_first(int an)
{
    node *n=(node*)malloc(sizeof(node));
    n->a=an;
    n->next=NULL;
    if(head==NULL)
    {
        head=n;
        printf("success\n");
    }
    else
    {
        n->next=head;
        head=n;
    }
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
    int an,i;
    scanf("%d",&an);
    insert_at_first(an);
    display();
}
