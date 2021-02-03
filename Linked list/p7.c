#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int a;
    char ch;
    struct node *next;
} node;
node *head;
void search__list(int n)
{
    node *list=head;
    while(list!=NULL)
    {
        if(n->a==n)
            return 1;
        else
            list=list->next;
    }
    return 0;

}
