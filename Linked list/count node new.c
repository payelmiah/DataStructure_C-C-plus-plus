#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int a;
    struct node *next;
}node;
node *head=NULL;
node *list=NULL;
void countsert()
{
    node *n=(node*)malloc(sizeof(node));
    scanf("%d",&n->a);
    n->next=NULL;

    if(head==NULL)
    {
        head=n;
        return;
    }
    else
    {
           list=head;
        while(list->next!=NULL)
        {
            list=list->next;
        }
        list->next=n;
    }
}
int display()
{
    int count=0;
    while(list!=NULL)
    {
        count++;
        printf("%d",count);
        printf("%d",list->a);
        list=list->next;
    }
}
int main()
{
    countsert();
    display();

}
