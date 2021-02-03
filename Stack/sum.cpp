#include<bits/stdc++.h>
using namespace std;
int a[100];
int top=-1;
void push(int n)
{

    if(top>=100) cout<<"stack is overflow"<<endl;
    else{
        a[++top]=n;
    }
    return;

}
int pop()
{
    if(top==-1)
    {cout<<"stack is empty"<<endl;
    }
    else
    {
        a[top--];
    }
}
int main()
{
    int i,j,n,t,l,x;
    cout<<"Enter your case:";
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        push(n);
    }
    //cin>>l;
    int sum=0;
    for(j=0;j<t;j++)
    {
        if(a[j]%2!=0){
        sum+=a[j];
        }
         pop();
    }
    cout<<sum;

}
