#include<bits/stdc++.h>
using namespace std;
int a[100];
int h=-1,t=-1;
void enqueue(int n)
{
    if(t==-1)
    {
        h=0;
    }
    if(t>=100)
    {
        cout<<"Queue is overflow"<<endl;
        return;
    }
    else
    {
        a[++t]=n;

    }
}
int dequeue()
{
    if(h==-1){
        cout<<"Queue is empty"<<endl;
        return 0;
    }
    if(h>t)
    {
        h=-1;
        t=-1;
    }
    int temp=a[h++];
    return temp;
}
int main()
{
    int n,t,i,j,k;
    cout<<"1.Enqueue\t2.Dequeue"<<endl;
    cin>>k;
    switch(k)
    {
    case 1:
    {
        cout<<"case:";
        cin>>t;
        for(i=0; i<t; i++)
        {
            cin>>n;
            enqueue(n);
        }
        main();
    }
    case 2:
    {
        cout<<"delete case:";
        cin>>j;
        for(i=0; i<j; i++)
        {
            cout<<a[h];
            dequeue();

        }
        cout<<endl;
        main();
    }
    }
}


