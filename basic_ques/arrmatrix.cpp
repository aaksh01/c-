#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int a[n];
    int b[n];
    int c[20];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"first matrix:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
    cout<<"enter the element of 2nd matrix:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
   cout<<"second matrix:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<b[j]<<" ";
        }
        cout<<endl;
    }
    cout<<"difference of two matrix:"<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            c[i]=a[j]-b[j];
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
