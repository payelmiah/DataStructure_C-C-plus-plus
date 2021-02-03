#include<stdio.h>
#include<string.h>
int t=-1,h=-1,a[100];
void enqueue(int n)
{
    if(t==-1)
    {
        h=0;
    }
    if(t>=100)
    {
        printf("Queue overflow\n");
    }
    if(h>t)
    {
        h=-1;
        t=-1;
    }
    a[++t]=n;
    return;
}
int deque()
{

    if(t==-1) printf("Queue is empty\n");
    return a[h++];
}

int main()
{
    int t,i,n;
    printf("Enter your case: ");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        enqueue(n);
    }
    int sum=0;
    t=0;
    printf("delete case with sum: ");
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        sum+=a[j];
        deque();
    }
    printf("sum :%d\n",sum);

}
