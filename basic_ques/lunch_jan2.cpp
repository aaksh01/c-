#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
            int cnt1=0;
            int cnt2=0;
        for(int i=0;i<n;i++)
        {
            if((ar[i]%2)==0)
                cnt1++;
            else
                cnt2++;
        }
        if(cnt1>cnt2)
            cout<<cnt2<<"\n";
        else
            cout<<cnt1<<"\n";
    }
    return 0;
}
