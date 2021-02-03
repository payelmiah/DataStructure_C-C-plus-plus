#include<stdio.h>
char s[100];
int top=-1;
void push(char n)
{
    if(top>=100) printf("Stack is overflow\n");
    else s[++top]=n;

}
int pop()
{

    if(top==-1) printf("Stack is empty\n");

    return s[top--];

}
int main()
{
    int i,t;
    char n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf(" %c",&n);
        push(n);
    }
    for(int j=t-1;j>=0;j--)
    {
        printf("%c",s[j]);
        pop();
    }
    return 0;

}
