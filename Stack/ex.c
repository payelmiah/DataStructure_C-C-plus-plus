#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
    char s[10],s1[10];
    struct node *next;
} node;
node *head=NULL;
node *list=NULL;
void push(node *n)
{
    n->next=NULL;
    node *list=head;
    if(head==NULL)
    {
        head=n;
    }
    else
    {
        while(list->next!=NULL)
        {
            list=list->next;
        }
        list->next=n;
    }
    return;
}
node *pop()
{
    node *list=head;
    if(head==NULL)
    {
        return;
    }
    else
    {
        if(head->next==NULL)
        {
            node *new=(node*)malloc(sizeof(node));
            new->next=NULL;
            strcpy(new->s,head->s);
            strcpy(new->s1,head->s1);
            node *temp=head;
            head=NULL;
            free(temp);
            return new;

        }
        else
        {
            while(list->next->next!=NULL)
            {
                list=list->next;
            }
            node *new=(node*)malloc(sizeof(node));
            new->next=NULL;
            strcpy(new->s,list->s);
            strcpy(new->s1,list->s1);
            node *temp=list->next;
            list->next=NULL;
            free(temp);
            return new;
        }
    }

}
int main()
{
    int t,r,i,j;
    printf("1.PUSH\t2.POP\n");
    scanf("%d",&t);
    switch(t)
    {
    case 1:
    {
        node *n=(node*)malloc(sizeof(node));
        n->next=NULL;
        printf("enter your name:");
        scanf(" %[^\n]",n->s);
        printf("\nenter id:");
        scanf("%s",n->s1);
        push(n);
        main();

    }
    case 2:
    {
        node *n=pop();
        if(n==NULL)
        {
            printf("STACK IS EMPTY\n");
        }
        else
        {
            printf("%s\n%s\n",n->s,n->s1);
            free(n);
        }
        main();

    }
    }

}
