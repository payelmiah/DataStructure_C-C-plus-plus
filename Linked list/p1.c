#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int a;
    char ch;
    struct node *next;
} node;
int main()
{
    node *N=(node*)malloc(sizeof(node));
    N->a=5;
    N->ch='x';
    N->next=NULL;
    node *M=(node*)malloc(sizeof(node));
    M->a=6;
    M->ch='y';
    M->next=NULL;
    N->next=M;
    printf("N:a:%d\n",N->a);
    printf("N:ch:%c\n",N->ch);
    printf("M:a:%d\n",N->next->a);
    printf("M:ch:%c\n",N->next->ch);
    return 0;

}
