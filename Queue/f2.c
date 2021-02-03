#include<stdio.h>
#include<string.h>
int t=-1,h=-1;
char s[100];
void enqueue(char ch)
{
    if(t>=100) printf("Enqueue is overflow\n");
    if(t==-1) h=0;
    s[++t]=ch;
    return;
}
int deueue()
{
    if(t==-1) printf("Queue is empty\n");
    return s[h++];
}
int main()
{
    int i,y,n;
    char ch;
    scanf("%d",&y);
    for(i=0;i<y;i++)
    {
        scanf(" %c",&ch);
        enqueue(ch);
    }
    char s1[100];
    for(int j=y-1;j>=0;j--)
    {
        printf("%c",s[j]);
        deueue();
    }

}
