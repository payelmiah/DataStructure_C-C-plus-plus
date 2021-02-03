#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int a;
    char ch;
    struct node *next;
}node;
node *head;
void delete_nth_pos(int pos)
{
    node *list=head,temp;
    pos=pos-2;
    while(pos!=0)
    {
        list=list->next;
        pos--;
    }
    temp=temp->next;
    list->next=temp->next;
    free(temp);
}
