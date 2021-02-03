#include<bits/stdc++.h>
using namespace std;
char tree[100],k;
int p;
int root(char k)
{
    if(tree[0]!='\0')
    {
        cout<<"Already had a root"<<endl;
    }
    else
    {
        tree[0]=k;
    }

}
int set_right(char k,int p)
{
    if(tree[p]=='\0')
    {
        cout<<"There is no parent node that you can't set child"<<endl;
    }
    else{
        tree[2*p+2]=k;
    }

}
int set_left(char k,int p)
{
    if(tree[p]=='\0')
    {
        cout<<"There is no parent node that you can't set child"<<endl;
    }
    else
    {
        tree[2*p+1]=k;
    }

}
int main()
{
    int h;
    cout<<"Enter the root character"<<endl;
    cin>>k;
    root(k);
    cout<<"1.Insert for Right\t2.Insert for Left"<<endl;
    cin>>h;
    switch(h)
    {
    case 1:
    {
        cout<<"Enter your parent position and right child data"<<endl;
        cin>>p>>k;
        set_right(k,p);

    }
    case 2:
        {
            cout<<"Enter your parent position and left child data"<<endl;
            cin>>p>>k;
            set_left(k,p);

        }
    }

}

