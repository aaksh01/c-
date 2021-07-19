#include<iostream>

using namespace std;

int array_sum(int ar[],int n)
{
     int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=ar[i];
    }

    return sum;
}
int main()
{

    int n;cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
int p;
    p=array_sum(ar,n);
    cout<<p;

    return 0;
}
