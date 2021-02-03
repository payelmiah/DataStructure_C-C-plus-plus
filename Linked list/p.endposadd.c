#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int a;
    struct node *next;
} node;
node *head=NULL;
node *list=NULL;
void insert_at_last(int an)
{
    node *n=(node*)malloc(sizeof(node));
    n->a=an;
    n->next=NULL;
    if(head==NULL)
    {
        head=n;
        printf("first node add success\n");
    }
    else
    {

        list=head;
        while(list->next!=NULL)
        {
            list=list->next;
        }
        printf("last add success\n");
        list->next=n;
    }
}
int display()
{
    int count=0;
    list=head;
    while(list!=NULL)
    {
        printf("%d ",list->a);
        count++;
        list=list->next;
    }
    printf("\n");
    printf("It has create node or length=%d\n",count);
}
int main()
{
    int a,m;
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        printf("number %d:",i);
        scanf("%d",&a);
        insert_at_last(a);
    }


    display();
}
