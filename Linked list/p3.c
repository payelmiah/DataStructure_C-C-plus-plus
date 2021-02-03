#include<stdio.h>
#include<stdlib.h>
node create(int a,node *next)
{
    node *N=(node*)malloc(sizeof(node));
    if(N==NULL)
    {
        exit(1);
    }
    N->data=a;
    N->next=next;
    return N;
}
