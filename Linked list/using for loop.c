#include<stdio.h>
#include<stdlib.h>
typedef struct st_info
{
    int roll;
    struct st_info *next;
}data;

data *head = NULL;
data *list = NULL;

void display()
{
    list = head;
    while(list != NULL)
    {
        printf("%d\n",list -> roll);
        list = list -> next;
    }
}
int main()
{
    int i;
    for(i=0;i<3;i++)
    {
        data *N = (data*)malloc(sizeof(data));
        scanf("%d",&N->roll);
        N->next=NULL;
        if(head==NULL)
        {
            head=N;
        }
        else
        {
            list=head;
            while(list->next!= NULL)
            {

                list=list->next;

            }
            list->next=N;
        }
    }
    display();
}
