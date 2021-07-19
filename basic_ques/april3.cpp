#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        string s;
        cin>>s;
        int cnt=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*')
                cnt++;
            else
                cnt=0;
            ans=max(ans,cnt);
        }

        //out<<ans<<"\n";

        if(ans>=k)
            cout<<"yes"<<"\n";
        else
            cout<<"no"<<"\n";


    }
}
