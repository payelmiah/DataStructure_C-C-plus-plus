#include<stdio.h>
char stack[5],s;
int top=-1;
void push(int ch)
{
    stack[++top]=ch;

}
void pop()
{
    if(top==-1)
    {
        printf("Stack is blank\n");
    }
    stack[top--];
    return;
}
int main()
{
    int i,j;
    int ch;


    printf("Enter The String:");
    for(j=0; j<6; j++)
    {
        scanf(" %s",&ch);
        push(ch);
    }
    int n,sum=0;
    scanf("%d",&n);
    for(j=5; j>=n-2; j--)
    {
        sum+=stack[top];
        printf("%d ",stack[top]);
        pop();

    }printf("\n");
    //printf("%d ",sum/n);

    top=-1;



    return 0;
}
