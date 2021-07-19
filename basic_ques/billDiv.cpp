#include <bits/stdc++.h>

using namespace std;

void bonAppetit(int n,int k,int bill[],int b)
{
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=bill[i];
    int p;
    p=(sum-bill[k])/2;
    if(p==b)
        cout<<"BonAppetit"<<"\n";
    else {
        int q=b-p;
    cout<<q<<"\n";
    }
}

int main()
{
    int n,k;cin>>n>>k;
    int bill[n];
    for(int i=0;i<n;i++)
        cin>>bill[i];
    int b;cin>>b;

    bonAppetit(n,k,bill,b);
    //cout<<a<<"\n";
    return 0;
}
