#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int a;
    char ch;
    struct node *next;
}node;
node *head;
void insert_at_first(int an,char chn)
{
    node *n=(node*)malloc(sizeof (node));
    n->a=an;
    n->ch=chn;

    n->next=NULL;
    if(head==NULL){
        head=n;
        return;
    }
    n->next=head;
    head=n;

}
void display()
{
    node *list=head;
    while(list!=NULL){
        printf("A : %d\n",list->a);
        printf("Ch : %c\n\n",list->ch);
        list=list->next;
    }
    return;
}
int main()
{
    head=NULL;
    insert_at_first(5,'x');
    insert_at_first(4,'y');
    insert_at_first(3,'z');
    display();
    return 0;

}
