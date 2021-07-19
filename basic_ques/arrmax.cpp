#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int a[n],key;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"enter the value to be search:";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==a[i])

    }
     cout<<i;
    return 0;
}
