#include<stdio.h>
int main()
{
    int a[10],i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        if(a[i]<a[i+1])
        {

            printf("%d ",a[i]);
        }
    }
}
