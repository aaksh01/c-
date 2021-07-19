#include<bits/stdc++.h>
using namespace std;

int billAppetit(int n,int k,int bill[],int b)
{
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=bill[i];
    int p=(sum-bill[k])/2;
    if(p==b)
        cout<<"Bon Appetit";
    else
        cout<<(sum/2)-p;

}

int main()
{
    int n,k;
    cin>>n>>k;
    int bill[n];
    int b;
    cin>>b;

    for(int i=0;i<n;i++)
        cin>>bill[i];
    cout<<billAppetit(n,k,bill,b);
return 0;
}
